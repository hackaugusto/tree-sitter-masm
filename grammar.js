module.exports = grammar({
  name: 'masm',

  extras: $ => [$.comment, /[\s]/],
  rules: {
    source_file: $ => seq(repeat($.use), repeat(choice($.proc, $.export)), optional($.main)),

    comment: $ => token(seq('#', /.*/)),
    use: $ => seq('use', field('module', $._path)),
    export: $ => seq($._export, repeat($._block), $._end),
    proc: $ => seq($._proc, repeat($._block), $._end),
    main: $ => seq($._begin, repeat($._block), $._end),

    if: $ => seq($._if, repeat($._block), $._end),
    if_else: $ => seq($._if, repeat($._block), $._else, repeat($._block), $._end),
    while: $ => seq($._while, repeat($._block), $._end),
    repeat: $ => seq($._repeat, repeat($._block), $._end),

    exec: $ => seq('exec', '.', $._label, optional(seq('::', $._label))),
    call: $ => seq('call', '.', $._label, optional(seq('::', $._label))),
    syscall: $ => seq('syscall', '.', $._label, optional(seq('::', $._label))),

    _block: $ => seq(choice(
        $.opcode, $.if, $.if_else, $.while, $.repeat, $.call, $.exec, $.syscall
    )),

    opcode: $ => choice(
        $._simple_inst, $._adv_inst, $._adv_mem, $._exp, $._assert,
        $._felt_inst, $._u32_inst, $._u16_inst, $._stack_inst
    ),

    // simple instructions
    _simple_inst: $ => choice(
      'assert', 'assertz', 'assert_eq', 'neg', 'inv', 'pow2', 'not', 'and', 'or',
      'xor', 'lt', 'lte', 'gt', 'gte', 'eqw', 'ext2add', 'ext2sub',
      'ext2mul', 'ext2div', 'ext2neg', 'ext2inv', 'u32test', 'u32testw',
      'u32assertw', 'u32cast', 'u32split', 'u32overflowing_add3',
      'u32wrapping_add3', 'u32overflowing_madd', 'u32wrapping_madd',
      'u32checked_and', 'u32checked_or', 'u32checked_xor', 'u32checked_not',
      'u32checked_popcnt', 'u32unchecked_popcnt', 'u32checked_lt',
      'u32unchecked_lt', 'u32checked_lte', 'u32unchecked_lte',
      'u32checked_gt', 'u32unchecked_gt', 'u32checked_gte',
      'u32unchecked_gte', 'u32checked_min', 'u32unchecked_min',
      'u32checked_max', 'u32unchecked_max', 'drop', 'dropw', 'padw',
      'swapdw', 'cswap', 'cswapw', 'cdrop', 'cdropw', 'sdepth', 'mem_stream',
      'adv_pipe', 'adv_loadw', 'rphash', 'rpperm', 'mtree_get', 'mtree_set',
      'mtree_cwm', 'caller',
    ),

    // advice instructions
    _adv_inst: $ => seq('adv', '.', choice('u64div', 'keyval', 'ext2inv', 'ext2intt')),
    _adv_mem: $ => seq('adv', '.', 'mem', '.', $.u32, '.', $.u32),

    // special cases
    _exp: $ => seq('exp', optional(seq('.', 'u', $.u8,))),
    _assert: $ => seq('u32assert', '.', choice('1', '2')),

    // field element instructions
    _felt_inst: $ => seq(choice('add', 'sub', 'mul', 'eq', 'neq'), optional(seq('.', $.felt))),

    // u32 instructions
    _u32_inst: $ => seq(choice(
      'u32checked_add', 'u32wrapping_add', 'u32overflowing_add',
      'u32checked_sub', 'u32wrapping_sub', 'u32overflowing_sub',
      'u32checked_mul' , 'u32wrapping_mul' , 'u32overflowing_mul' ,
      'u32checked_div', 'u32unchecked_div', 'u32checked_mod',
      'u32unchecked_mod', 'u32checked_divmod', 'u32unchecked_divmod',
      'u32checked_shr' , 'u32unchecked_shr', 'u32checked_shl' ,
      'u32unchecked_shl', 'u32checked_rotr', 'u32unchecked_rotr' ,
      'u32checked_rotl', 'u32unchecked_rotl', 'u32checked_eq' ,
      'u32checked_neq', 'mem_load', 'mem_loadw', 'mem_store', 'mem_storew'
    ), optional(seq('.', $.u32))),

    // u16 instructions
    _u16_inst: $ => seq(choice(
        'locaddr', 'loc_load', 'loc_loadw', 'loc_store', 'loc_storew',
    ), optional(seq('.', $.u16))),

    // stack instructions
    _stack_inst: $ => choice($._dup, $._swap, $._movup, $._movdn, $._adv_push, $._dupw, $._swapw, $._movupw, $._movdnw, $._push),

    _dup: $ => seq('dup', optional(seq('.', choice('0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15')))),
    _swap: $ => seq('swap', optional(seq('.', choice('0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15')))),
    _movup: $ => seq('movup', optional(seq('.', choice('0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15')))),
    _movdn: $ => seq('movdn', optional(seq('.', choice('0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15')))),
    _adv_push: $ => seq('adv_push', optional(seq('.', choice('1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15', '16')))),
    _dupw: $ => seq('dupw', optional(seq('.', choice('0', '1', '2', '3')))),
    _swapw: $ => seq('swapw', optional(seq('.', choice('0', '1', '2', '3')))),
    _movupw: $ => seq('movupw', optional(seq('.', choice('2', '3')))),
    _movdnw: $ => seq('movdnw', optional(seq('.', choice('2', '3')))),
    _push: $ => seq('push', repeat1(seq('.', choice($.felt, $.felt_hex)))), 

    // structural "headers"
    _proc: $ => seq('proc', '.', field('name', $._proc_name), optional(seq('.', $.u16))),
    _export: $ => seq('export', '.', field('name', $._proc_name), optional(seq('.', $.u16))),
    _if: $ => seq('if', '.', 'true'),
    _else: $ => 'else',
    _while: $ => seq('while', '.', 'true'),
    _repeat: $ => seq('repeat', '.', $.u16),
    _begin: $ => 'begin',
    _end: $ => 'end',

    // auxilliary definitions
    _path: $ => seq($._label, repeat1(seq('::', $._label))),
    _label: $ => /[a-zA-Z][a-zA-Z0-9_]*/,
    _proc_name: $ => /[a-zA-Z][a-zA-Z0-9_]{0,99}/,  // procedure names are limited to 100 chars
    felt_hex: $ => seq("0x", /[a-fA-F0-9]{1,16}/),
    felt: $ => /[0-9]{1,20}/,
    u32: $ => /[0-9]{1,10}/,
    u16: $ => /[0-9]{1,6}/,
    u8: $ => /[0-9]{1,3}/,
  }
});
