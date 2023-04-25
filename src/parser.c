#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 157
#define LARGE_STATE_COUNT 77
#define SYMBOL_COUNT 222
#define ALIAS_COUNT 0
#define TOKEN_COUNT 174
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_const = 1,
  anon_sym_DOT = 2,
  anon_sym_EQ = 3,
  sym_comment = 4,
  anon_sym_use = 5,
  anon_sym_exec = 6,
  anon_sym_COLON_COLON = 7,
  anon_sym_call = 8,
  anon_sym_syscall = 9,
  anon_sym_assert = 10,
  anon_sym_assertz = 11,
  anon_sym_assert_eq = 12,
  anon_sym_neg = 13,
  anon_sym_inv = 14,
  anon_sym_pow2 = 15,
  anon_sym_not = 16,
  anon_sym_and = 17,
  anon_sym_or = 18,
  anon_sym_xor = 19,
  anon_sym_lt = 20,
  anon_sym_lte = 21,
  anon_sym_gt = 22,
  anon_sym_gte = 23,
  anon_sym_eqw = 24,
  anon_sym_ext2add = 25,
  anon_sym_ext2sub = 26,
  anon_sym_ext2mul = 27,
  anon_sym_ext2div = 28,
  anon_sym_ext2neg = 29,
  anon_sym_ext2inv = 30,
  anon_sym_u32test = 31,
  anon_sym_u32testw = 32,
  anon_sym_u32assertw = 33,
  anon_sym_u32cast = 34,
  anon_sym_u32split = 35,
  anon_sym_u32overflowing_add3 = 36,
  anon_sym_u32wrapping_add3 = 37,
  anon_sym_u32overflowing_madd = 38,
  anon_sym_u32wrapping_madd = 39,
  anon_sym_u32checked_and = 40,
  anon_sym_u32checked_or = 41,
  anon_sym_u32checked_xor = 42,
  anon_sym_u32checked_not = 43,
  anon_sym_u32checked_popcnt = 44,
  anon_sym_u32unchecked_popcnt = 45,
  anon_sym_u32checked_lt = 46,
  anon_sym_u32unchecked_lt = 47,
  anon_sym_u32checked_lte = 48,
  anon_sym_u32unchecked_lte = 49,
  anon_sym_u32checked_gt = 50,
  anon_sym_u32unchecked_gt = 51,
  anon_sym_u32checked_gte = 52,
  anon_sym_u32unchecked_gte = 53,
  anon_sym_u32checked_min = 54,
  anon_sym_u32unchecked_min = 55,
  anon_sym_u32checked_max = 56,
  anon_sym_u32unchecked_max = 57,
  anon_sym_drop = 58,
  anon_sym_dropw = 59,
  anon_sym_padw = 60,
  anon_sym_swapdw = 61,
  anon_sym_cswap = 62,
  anon_sym_cswapw = 63,
  anon_sym_cdrop = 64,
  anon_sym_cdropw = 65,
  anon_sym_sdepth = 66,
  anon_sym_mem_stream = 67,
  anon_sym_adv_pipe = 68,
  anon_sym_adv_loadw = 69,
  anon_sym_hmerge = 70,
  anon_sym_hperm = 71,
  anon_sym_mtree_get = 72,
  anon_sym_mtree_set = 73,
  anon_sym_mtree_cwm = 74,
  anon_sym_caller = 75,
  anon_sym_is_odd = 76,
  anon_sym_assert_eqw = 77,
  anon_sym_clk = 78,
  anon_sym_fri_ext2fold4 = 79,
  anon_sym_hash = 80,
  anon_sym_adv = 81,
  anon_sym_u64div = 82,
  anon_sym_keyval = 83,
  anon_sym_ext2intt = 84,
  anon_sym_mem = 85,
  anon_sym_exp = 86,
  anon_sym_u = 87,
  anon_sym_u32assert = 88,
  anon_sym_1 = 89,
  anon_sym_2 = 90,
  anon_sym_add = 91,
  anon_sym_sub = 92,
  anon_sym_mul = 93,
  anon_sym_eq = 94,
  anon_sym_neq = 95,
  anon_sym_div = 96,
  anon_sym_mem_load = 97,
  anon_sym_mem_loadw = 98,
  anon_sym_mem_store = 99,
  anon_sym_mem_storew = 100,
  anon_sym_u32checked_add = 101,
  anon_sym_u32wrapping_add = 102,
  anon_sym_u32overflowing_add = 103,
  anon_sym_u32checked_sub = 104,
  anon_sym_u32wrapping_sub = 105,
  anon_sym_u32overflowing_sub = 106,
  anon_sym_u32checked_mul = 107,
  anon_sym_u32wrapping_mul = 108,
  anon_sym_u32overflowing_mul = 109,
  anon_sym_u32checked_div = 110,
  anon_sym_u32unchecked_div = 111,
  anon_sym_u32checked_mod = 112,
  anon_sym_u32unchecked_mod = 113,
  anon_sym_u32checked_divmod = 114,
  anon_sym_u32unchecked_divmod = 115,
  anon_sym_u32checked_shr = 116,
  anon_sym_u32unchecked_shr = 117,
  anon_sym_u32checked_shl = 118,
  anon_sym_u32unchecked_shl = 119,
  anon_sym_u32checked_rotr = 120,
  anon_sym_u32unchecked_rotr = 121,
  anon_sym_u32checked_rotl = 122,
  anon_sym_u32unchecked_rotl = 123,
  anon_sym_u32checked_eq = 124,
  anon_sym_u32checked_neq = 125,
  anon_sym_locaddr = 126,
  anon_sym_loc_load = 127,
  anon_sym_loc_loadw = 128,
  anon_sym_loc_store = 129,
  anon_sym_loc_storew = 130,
  anon_sym_dup = 131,
  anon_sym_0 = 132,
  anon_sym_3 = 133,
  anon_sym_4 = 134,
  anon_sym_5 = 135,
  anon_sym_6 = 136,
  anon_sym_7 = 137,
  anon_sym_8 = 138,
  anon_sym_9 = 139,
  anon_sym_10 = 140,
  anon_sym_11 = 141,
  anon_sym_12 = 142,
  anon_sym_13 = 143,
  anon_sym_14 = 144,
  anon_sym_15 = 145,
  anon_sym_swap = 146,
  anon_sym_movup = 147,
  anon_sym_movdn = 148,
  anon_sym_adv_push = 149,
  anon_sym_16 = 150,
  anon_sym_dupw = 151,
  anon_sym_swapw = 152,
  anon_sym_movupw = 153,
  anon_sym_movdnw = 154,
  anon_sym_push = 155,
  anon_sym_proc = 156,
  anon_sym_export = 157,
  anon_sym_if = 158,
  anon_sym_true = 159,
  sym__else = 160,
  anon_sym_while = 161,
  anon_sym_repeat = 162,
  sym__begin = 163,
  sym__end = 164,
  sym__label = 165,
  sym__proc_name = 166,
  sym_uppercase = 167,
  anon_sym_0x = 168,
  aux_sym_felt_hex_token1 = 169,
  sym_felt = 170,
  sym_u32 = 171,
  sym_u16 = 172,
  sym_u8 = 173,
  sym_source_file = 174,
  sym_const = 175,
  sym_use = 176,
  sym_export = 177,
  sym_proc = 178,
  sym_main = 179,
  sym_if = 180,
  sym_if_else = 181,
  sym_while = 182,
  sym_repeat = 183,
  sym_exec = 184,
  sym_call = 185,
  sym_syscall = 186,
  sym__block = 187,
  sym_opcode = 188,
  sym__simple_inst = 189,
  sym__adv_inst = 190,
  sym__adv_mem = 191,
  sym__exp = 192,
  sym__assert = 193,
  sym__felt_inst = 194,
  sym__mem_inst = 195,
  sym__u32_inst = 196,
  sym__u16_inst = 197,
  sym__stack_inst = 198,
  sym__dup = 199,
  sym__swap = 200,
  sym__movup = 201,
  sym__movdn = 202,
  sym__adv_push = 203,
  sym__dupw = 204,
  sym__swapw = 205,
  sym__movupw = 206,
  sym__movdnw = 207,
  sym__push = 208,
  sym__proc = 209,
  sym__export = 210,
  sym__if = 211,
  sym__while = 212,
  sym__repeat = 213,
  sym__path = 214,
  sym_felt_hex = 215,
  aux_sym_source_file_repeat1 = 216,
  aux_sym_source_file_repeat2 = 217,
  aux_sym_source_file_repeat3 = 218,
  aux_sym_export_repeat1 = 219,
  aux_sym__push_repeat1 = 220,
  aux_sym__path_repeat1 = 221,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_const] = "const",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [sym_comment] = "comment",
  [anon_sym_use] = "use",
  [anon_sym_exec] = "exec",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_call] = "call",
  [anon_sym_syscall] = "syscall",
  [anon_sym_assert] = "assert",
  [anon_sym_assertz] = "assertz",
  [anon_sym_assert_eq] = "assert_eq",
  [anon_sym_neg] = "neg",
  [anon_sym_inv] = "inv",
  [anon_sym_pow2] = "pow2",
  [anon_sym_not] = "not",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_lt] = "lt",
  [anon_sym_lte] = "lte",
  [anon_sym_gt] = "gt",
  [anon_sym_gte] = "gte",
  [anon_sym_eqw] = "eqw",
  [anon_sym_ext2add] = "ext2add",
  [anon_sym_ext2sub] = "ext2sub",
  [anon_sym_ext2mul] = "ext2mul",
  [anon_sym_ext2div] = "ext2div",
  [anon_sym_ext2neg] = "ext2neg",
  [anon_sym_ext2inv] = "ext2inv",
  [anon_sym_u32test] = "u32test",
  [anon_sym_u32testw] = "u32testw",
  [anon_sym_u32assertw] = "u32assertw",
  [anon_sym_u32cast] = "u32cast",
  [anon_sym_u32split] = "u32split",
  [anon_sym_u32overflowing_add3] = "u32overflowing_add3",
  [anon_sym_u32wrapping_add3] = "u32wrapping_add3",
  [anon_sym_u32overflowing_madd] = "u32overflowing_madd",
  [anon_sym_u32wrapping_madd] = "u32wrapping_madd",
  [anon_sym_u32checked_and] = "u32checked_and",
  [anon_sym_u32checked_or] = "u32checked_or",
  [anon_sym_u32checked_xor] = "u32checked_xor",
  [anon_sym_u32checked_not] = "u32checked_not",
  [anon_sym_u32checked_popcnt] = "u32checked_popcnt",
  [anon_sym_u32unchecked_popcnt] = "u32unchecked_popcnt",
  [anon_sym_u32checked_lt] = "u32checked_lt",
  [anon_sym_u32unchecked_lt] = "u32unchecked_lt",
  [anon_sym_u32checked_lte] = "u32checked_lte",
  [anon_sym_u32unchecked_lte] = "u32unchecked_lte",
  [anon_sym_u32checked_gt] = "u32checked_gt",
  [anon_sym_u32unchecked_gt] = "u32unchecked_gt",
  [anon_sym_u32checked_gte] = "u32checked_gte",
  [anon_sym_u32unchecked_gte] = "u32unchecked_gte",
  [anon_sym_u32checked_min] = "u32checked_min",
  [anon_sym_u32unchecked_min] = "u32unchecked_min",
  [anon_sym_u32checked_max] = "u32checked_max",
  [anon_sym_u32unchecked_max] = "u32unchecked_max",
  [anon_sym_drop] = "drop",
  [anon_sym_dropw] = "dropw",
  [anon_sym_padw] = "padw",
  [anon_sym_swapdw] = "swapdw",
  [anon_sym_cswap] = "cswap",
  [anon_sym_cswapw] = "cswapw",
  [anon_sym_cdrop] = "cdrop",
  [anon_sym_cdropw] = "cdropw",
  [anon_sym_sdepth] = "sdepth",
  [anon_sym_mem_stream] = "mem_stream",
  [anon_sym_adv_pipe] = "adv_pipe",
  [anon_sym_adv_loadw] = "adv_loadw",
  [anon_sym_hmerge] = "hmerge",
  [anon_sym_hperm] = "hperm",
  [anon_sym_mtree_get] = "mtree_get",
  [anon_sym_mtree_set] = "mtree_set",
  [anon_sym_mtree_cwm] = "mtree_cwm",
  [anon_sym_caller] = "caller",
  [anon_sym_is_odd] = "is_odd",
  [anon_sym_assert_eqw] = "assert_eqw",
  [anon_sym_clk] = "clk",
  [anon_sym_fri_ext2fold4] = "fri_ext2fold4",
  [anon_sym_hash] = "hash",
  [anon_sym_adv] = "adv",
  [anon_sym_u64div] = "u64div",
  [anon_sym_keyval] = "keyval",
  [anon_sym_ext2intt] = "ext2intt",
  [anon_sym_mem] = "mem",
  [anon_sym_exp] = "exp",
  [anon_sym_u] = "u",
  [anon_sym_u32assert] = "u32assert",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_add] = "add",
  [anon_sym_sub] = "sub",
  [anon_sym_mul] = "mul",
  [anon_sym_eq] = "eq",
  [anon_sym_neq] = "neq",
  [anon_sym_div] = "div",
  [anon_sym_mem_load] = "mem_load",
  [anon_sym_mem_loadw] = "mem_loadw",
  [anon_sym_mem_store] = "mem_store",
  [anon_sym_mem_storew] = "mem_storew",
  [anon_sym_u32checked_add] = "u32checked_add",
  [anon_sym_u32wrapping_add] = "u32wrapping_add",
  [anon_sym_u32overflowing_add] = "u32overflowing_add",
  [anon_sym_u32checked_sub] = "u32checked_sub",
  [anon_sym_u32wrapping_sub] = "u32wrapping_sub",
  [anon_sym_u32overflowing_sub] = "u32overflowing_sub",
  [anon_sym_u32checked_mul] = "u32checked_mul",
  [anon_sym_u32wrapping_mul] = "u32wrapping_mul",
  [anon_sym_u32overflowing_mul] = "u32overflowing_mul",
  [anon_sym_u32checked_div] = "u32checked_div",
  [anon_sym_u32unchecked_div] = "u32unchecked_div",
  [anon_sym_u32checked_mod] = "u32checked_mod",
  [anon_sym_u32unchecked_mod] = "u32unchecked_mod",
  [anon_sym_u32checked_divmod] = "u32checked_divmod",
  [anon_sym_u32unchecked_divmod] = "u32unchecked_divmod",
  [anon_sym_u32checked_shr] = "u32checked_shr",
  [anon_sym_u32unchecked_shr] = "u32unchecked_shr",
  [anon_sym_u32checked_shl] = "u32checked_shl",
  [anon_sym_u32unchecked_shl] = "u32unchecked_shl",
  [anon_sym_u32checked_rotr] = "u32checked_rotr",
  [anon_sym_u32unchecked_rotr] = "u32unchecked_rotr",
  [anon_sym_u32checked_rotl] = "u32checked_rotl",
  [anon_sym_u32unchecked_rotl] = "u32unchecked_rotl",
  [anon_sym_u32checked_eq] = "u32checked_eq",
  [anon_sym_u32checked_neq] = "u32checked_neq",
  [anon_sym_locaddr] = "locaddr",
  [anon_sym_loc_load] = "loc_load",
  [anon_sym_loc_loadw] = "loc_loadw",
  [anon_sym_loc_store] = "loc_store",
  [anon_sym_loc_storew] = "loc_storew",
  [anon_sym_dup] = "dup",
  [anon_sym_0] = "0",
  [anon_sym_3] = "3",
  [anon_sym_4] = "4",
  [anon_sym_5] = "5",
  [anon_sym_6] = "6",
  [anon_sym_7] = "7",
  [anon_sym_8] = "8",
  [anon_sym_9] = "9",
  [anon_sym_10] = "10",
  [anon_sym_11] = "11",
  [anon_sym_12] = "12",
  [anon_sym_13] = "13",
  [anon_sym_14] = "14",
  [anon_sym_15] = "15",
  [anon_sym_swap] = "swap",
  [anon_sym_movup] = "movup",
  [anon_sym_movdn] = "movdn",
  [anon_sym_adv_push] = "adv_push",
  [anon_sym_16] = "16",
  [anon_sym_dupw] = "dupw",
  [anon_sym_swapw] = "swapw",
  [anon_sym_movupw] = "movupw",
  [anon_sym_movdnw] = "movdnw",
  [anon_sym_push] = "push",
  [anon_sym_proc] = "proc",
  [anon_sym_export] = "export",
  [anon_sym_if] = "if",
  [anon_sym_true] = "true",
  [sym__else] = "_else",
  [anon_sym_while] = "while",
  [anon_sym_repeat] = "repeat",
  [sym__begin] = "_begin",
  [sym__end] = "_end",
  [sym__label] = "_label",
  [sym__proc_name] = "_proc_name",
  [sym_uppercase] = "uppercase",
  [anon_sym_0x] = "0x",
  [aux_sym_felt_hex_token1] = "felt_hex_token1",
  [sym_felt] = "felt",
  [sym_u32] = "u32",
  [sym_u16] = "u16",
  [sym_u8] = "u8",
  [sym_source_file] = "source_file",
  [sym_const] = "const",
  [sym_use] = "use",
  [sym_export] = "export",
  [sym_proc] = "proc",
  [sym_main] = "main",
  [sym_if] = "if",
  [sym_if_else] = "if_else",
  [sym_while] = "while",
  [sym_repeat] = "repeat",
  [sym_exec] = "exec",
  [sym_call] = "call",
  [sym_syscall] = "syscall",
  [sym__block] = "_block",
  [sym_opcode] = "opcode",
  [sym__simple_inst] = "_simple_inst",
  [sym__adv_inst] = "_adv_inst",
  [sym__adv_mem] = "_adv_mem",
  [sym__exp] = "_exp",
  [sym__assert] = "_assert",
  [sym__felt_inst] = "_felt_inst",
  [sym__mem_inst] = "_mem_inst",
  [sym__u32_inst] = "_u32_inst",
  [sym__u16_inst] = "_u16_inst",
  [sym__stack_inst] = "_stack_inst",
  [sym__dup] = "_dup",
  [sym__swap] = "_swap",
  [sym__movup] = "_movup",
  [sym__movdn] = "_movdn",
  [sym__adv_push] = "_adv_push",
  [sym__dupw] = "_dupw",
  [sym__swapw] = "_swapw",
  [sym__movupw] = "_movupw",
  [sym__movdnw] = "_movdnw",
  [sym__push] = "_push",
  [sym__proc] = "_proc",
  [sym__export] = "_export",
  [sym__if] = "_if",
  [sym__while] = "_while",
  [sym__repeat] = "_repeat",
  [sym__path] = "_path",
  [sym_felt_hex] = "felt_hex",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_export_repeat1] = "export_repeat1",
  [aux_sym__push_repeat1] = "_push_repeat1",
  [aux_sym__path_repeat1] = "_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_comment] = sym_comment,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_syscall] = anon_sym_syscall,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_assertz] = anon_sym_assertz,
  [anon_sym_assert_eq] = anon_sym_assert_eq,
  [anon_sym_neg] = anon_sym_neg,
  [anon_sym_inv] = anon_sym_inv,
  [anon_sym_pow2] = anon_sym_pow2,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_lt] = anon_sym_lt,
  [anon_sym_lte] = anon_sym_lte,
  [anon_sym_gt] = anon_sym_gt,
  [anon_sym_gte] = anon_sym_gte,
  [anon_sym_eqw] = anon_sym_eqw,
  [anon_sym_ext2add] = anon_sym_ext2add,
  [anon_sym_ext2sub] = anon_sym_ext2sub,
  [anon_sym_ext2mul] = anon_sym_ext2mul,
  [anon_sym_ext2div] = anon_sym_ext2div,
  [anon_sym_ext2neg] = anon_sym_ext2neg,
  [anon_sym_ext2inv] = anon_sym_ext2inv,
  [anon_sym_u32test] = anon_sym_u32test,
  [anon_sym_u32testw] = anon_sym_u32testw,
  [anon_sym_u32assertw] = anon_sym_u32assertw,
  [anon_sym_u32cast] = anon_sym_u32cast,
  [anon_sym_u32split] = anon_sym_u32split,
  [anon_sym_u32overflowing_add3] = anon_sym_u32overflowing_add3,
  [anon_sym_u32wrapping_add3] = anon_sym_u32wrapping_add3,
  [anon_sym_u32overflowing_madd] = anon_sym_u32overflowing_madd,
  [anon_sym_u32wrapping_madd] = anon_sym_u32wrapping_madd,
  [anon_sym_u32checked_and] = anon_sym_u32checked_and,
  [anon_sym_u32checked_or] = anon_sym_u32checked_or,
  [anon_sym_u32checked_xor] = anon_sym_u32checked_xor,
  [anon_sym_u32checked_not] = anon_sym_u32checked_not,
  [anon_sym_u32checked_popcnt] = anon_sym_u32checked_popcnt,
  [anon_sym_u32unchecked_popcnt] = anon_sym_u32unchecked_popcnt,
  [anon_sym_u32checked_lt] = anon_sym_u32checked_lt,
  [anon_sym_u32unchecked_lt] = anon_sym_u32unchecked_lt,
  [anon_sym_u32checked_lte] = anon_sym_u32checked_lte,
  [anon_sym_u32unchecked_lte] = anon_sym_u32unchecked_lte,
  [anon_sym_u32checked_gt] = anon_sym_u32checked_gt,
  [anon_sym_u32unchecked_gt] = anon_sym_u32unchecked_gt,
  [anon_sym_u32checked_gte] = anon_sym_u32checked_gte,
  [anon_sym_u32unchecked_gte] = anon_sym_u32unchecked_gte,
  [anon_sym_u32checked_min] = anon_sym_u32checked_min,
  [anon_sym_u32unchecked_min] = anon_sym_u32unchecked_min,
  [anon_sym_u32checked_max] = anon_sym_u32checked_max,
  [anon_sym_u32unchecked_max] = anon_sym_u32unchecked_max,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_dropw] = anon_sym_dropw,
  [anon_sym_padw] = anon_sym_padw,
  [anon_sym_swapdw] = anon_sym_swapdw,
  [anon_sym_cswap] = anon_sym_cswap,
  [anon_sym_cswapw] = anon_sym_cswapw,
  [anon_sym_cdrop] = anon_sym_cdrop,
  [anon_sym_cdropw] = anon_sym_cdropw,
  [anon_sym_sdepth] = anon_sym_sdepth,
  [anon_sym_mem_stream] = anon_sym_mem_stream,
  [anon_sym_adv_pipe] = anon_sym_adv_pipe,
  [anon_sym_adv_loadw] = anon_sym_adv_loadw,
  [anon_sym_hmerge] = anon_sym_hmerge,
  [anon_sym_hperm] = anon_sym_hperm,
  [anon_sym_mtree_get] = anon_sym_mtree_get,
  [anon_sym_mtree_set] = anon_sym_mtree_set,
  [anon_sym_mtree_cwm] = anon_sym_mtree_cwm,
  [anon_sym_caller] = anon_sym_caller,
  [anon_sym_is_odd] = anon_sym_is_odd,
  [anon_sym_assert_eqw] = anon_sym_assert_eqw,
  [anon_sym_clk] = anon_sym_clk,
  [anon_sym_fri_ext2fold4] = anon_sym_fri_ext2fold4,
  [anon_sym_hash] = anon_sym_hash,
  [anon_sym_adv] = anon_sym_adv,
  [anon_sym_u64div] = anon_sym_u64div,
  [anon_sym_keyval] = anon_sym_keyval,
  [anon_sym_ext2intt] = anon_sym_ext2intt,
  [anon_sym_mem] = anon_sym_mem,
  [anon_sym_exp] = anon_sym_exp,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_u32assert] = anon_sym_u32assert,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_neq] = anon_sym_neq,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_mem_load] = anon_sym_mem_load,
  [anon_sym_mem_loadw] = anon_sym_mem_loadw,
  [anon_sym_mem_store] = anon_sym_mem_store,
  [anon_sym_mem_storew] = anon_sym_mem_storew,
  [anon_sym_u32checked_add] = anon_sym_u32checked_add,
  [anon_sym_u32wrapping_add] = anon_sym_u32wrapping_add,
  [anon_sym_u32overflowing_add] = anon_sym_u32overflowing_add,
  [anon_sym_u32checked_sub] = anon_sym_u32checked_sub,
  [anon_sym_u32wrapping_sub] = anon_sym_u32wrapping_sub,
  [anon_sym_u32overflowing_sub] = anon_sym_u32overflowing_sub,
  [anon_sym_u32checked_mul] = anon_sym_u32checked_mul,
  [anon_sym_u32wrapping_mul] = anon_sym_u32wrapping_mul,
  [anon_sym_u32overflowing_mul] = anon_sym_u32overflowing_mul,
  [anon_sym_u32checked_div] = anon_sym_u32checked_div,
  [anon_sym_u32unchecked_div] = anon_sym_u32unchecked_div,
  [anon_sym_u32checked_mod] = anon_sym_u32checked_mod,
  [anon_sym_u32unchecked_mod] = anon_sym_u32unchecked_mod,
  [anon_sym_u32checked_divmod] = anon_sym_u32checked_divmod,
  [anon_sym_u32unchecked_divmod] = anon_sym_u32unchecked_divmod,
  [anon_sym_u32checked_shr] = anon_sym_u32checked_shr,
  [anon_sym_u32unchecked_shr] = anon_sym_u32unchecked_shr,
  [anon_sym_u32checked_shl] = anon_sym_u32checked_shl,
  [anon_sym_u32unchecked_shl] = anon_sym_u32unchecked_shl,
  [anon_sym_u32checked_rotr] = anon_sym_u32checked_rotr,
  [anon_sym_u32unchecked_rotr] = anon_sym_u32unchecked_rotr,
  [anon_sym_u32checked_rotl] = anon_sym_u32checked_rotl,
  [anon_sym_u32unchecked_rotl] = anon_sym_u32unchecked_rotl,
  [anon_sym_u32checked_eq] = anon_sym_u32checked_eq,
  [anon_sym_u32checked_neq] = anon_sym_u32checked_neq,
  [anon_sym_locaddr] = anon_sym_locaddr,
  [anon_sym_loc_load] = anon_sym_loc_load,
  [anon_sym_loc_loadw] = anon_sym_loc_loadw,
  [anon_sym_loc_store] = anon_sym_loc_store,
  [anon_sym_loc_storew] = anon_sym_loc_storew,
  [anon_sym_dup] = anon_sym_dup,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_swap] = anon_sym_swap,
  [anon_sym_movup] = anon_sym_movup,
  [anon_sym_movdn] = anon_sym_movdn,
  [anon_sym_adv_push] = anon_sym_adv_push,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_dupw] = anon_sym_dupw,
  [anon_sym_swapw] = anon_sym_swapw,
  [anon_sym_movupw] = anon_sym_movupw,
  [anon_sym_movdnw] = anon_sym_movdnw,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_proc] = anon_sym_proc,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_true] = anon_sym_true,
  [sym__else] = sym__else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_repeat] = anon_sym_repeat,
  [sym__begin] = sym__begin,
  [sym__end] = sym__end,
  [sym__label] = sym__label,
  [sym__proc_name] = sym__proc_name,
  [sym_uppercase] = sym_uppercase,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym_felt_hex_token1] = aux_sym_felt_hex_token1,
  [sym_felt] = sym_felt,
  [sym_u32] = sym_u32,
  [sym_u16] = sym_u16,
  [sym_u8] = sym_u8,
  [sym_source_file] = sym_source_file,
  [sym_const] = sym_const,
  [sym_use] = sym_use,
  [sym_export] = sym_export,
  [sym_proc] = sym_proc,
  [sym_main] = sym_main,
  [sym_if] = sym_if,
  [sym_if_else] = sym_if_else,
  [sym_while] = sym_while,
  [sym_repeat] = sym_repeat,
  [sym_exec] = sym_exec,
  [sym_call] = sym_call,
  [sym_syscall] = sym_syscall,
  [sym__block] = sym__block,
  [sym_opcode] = sym_opcode,
  [sym__simple_inst] = sym__simple_inst,
  [sym__adv_inst] = sym__adv_inst,
  [sym__adv_mem] = sym__adv_mem,
  [sym__exp] = sym__exp,
  [sym__assert] = sym__assert,
  [sym__felt_inst] = sym__felt_inst,
  [sym__mem_inst] = sym__mem_inst,
  [sym__u32_inst] = sym__u32_inst,
  [sym__u16_inst] = sym__u16_inst,
  [sym__stack_inst] = sym__stack_inst,
  [sym__dup] = sym__dup,
  [sym__swap] = sym__swap,
  [sym__movup] = sym__movup,
  [sym__movdn] = sym__movdn,
  [sym__adv_push] = sym__adv_push,
  [sym__dupw] = sym__dupw,
  [sym__swapw] = sym__swapw,
  [sym__movupw] = sym__movupw,
  [sym__movdnw] = sym__movdnw,
  [sym__push] = sym__push,
  [sym__proc] = sym__proc,
  [sym__export] = sym__export,
  [sym__if] = sym__if,
  [sym__while] = sym__while,
  [sym__repeat] = sym__repeat,
  [sym__path] = sym__path,
  [sym_felt_hex] = sym_felt_hex,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_export_repeat1] = aux_sym_export_repeat1,
  [aux_sym__push_repeat1] = aux_sym__push_repeat1,
  [aux_sym__path_repeat1] = aux_sym__path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syscall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assertz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pow2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eqw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext2add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext2sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext2mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext2div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext2neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext2inv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32testw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32assertw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32split] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32overflowing_add3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32wrapping_add3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32overflowing_madd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32wrapping_madd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_popcnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_popcnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_lte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_lte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_gt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_gt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_gte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_gte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dropw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_padw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swapdw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cswap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cswapw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cdrop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cdropw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdepth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mem_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adv_pipe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adv_loadw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hmerge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hperm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mtree_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mtree_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mtree_cwm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_caller] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_odd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert_eqw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fri_ext2fold4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keyval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext2intt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mem_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mem_loadw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mem_store] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mem_storew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32wrapping_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32overflowing_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32wrapping_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32overflowing_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32wrapping_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32overflowing_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_divmod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_divmod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_shr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_shr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_rotr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_rotr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_rotl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32unchecked_rotl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32checked_neq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_locaddr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loc_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loc_loadw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loc_store] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loc_storew] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movdn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adv_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dupw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swapw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movupw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movdnw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [sym__else] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [sym__proc_name] = {
    .visible = false,
    .named = true,
  },
  [sym_uppercase] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_felt_hex_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_felt] = {
    .visible = true,
    .named = true,
  },
  [sym_u32] = {
    .visible = true,
    .named = true,
  },
  [sym_u16] = {
    .visible = true,
    .named = true,
  },
  [sym_u8] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_proc] = {
    .visible = true,
    .named = true,
  },
  [sym_main] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_if_else] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_exec] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_syscall] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_inst] = {
    .visible = false,
    .named = true,
  },
  [sym__adv_inst] = {
    .visible = false,
    .named = true,
  },
  [sym__adv_mem] = {
    .visible = false,
    .named = true,
  },
  [sym__exp] = {
    .visible = false,
    .named = true,
  },
  [sym__assert] = {
    .visible = false,
    .named = true,
  },
  [sym__felt_inst] = {
    .visible = false,
    .named = true,
  },
  [sym__mem_inst] = {
    .visible = false,
    .named = true,
  },
  [sym__u32_inst] = {
    .visible = false,
    .named = true,
  },
  [sym__u16_inst] = {
    .visible = false,
    .named = true,
  },
  [sym__stack_inst] = {
    .visible = false,
    .named = true,
  },
  [sym__dup] = {
    .visible = false,
    .named = true,
  },
  [sym__swap] = {
    .visible = false,
    .named = true,
  },
  [sym__movup] = {
    .visible = false,
    .named = true,
  },
  [sym__movdn] = {
    .visible = false,
    .named = true,
  },
  [sym__adv_push] = {
    .visible = false,
    .named = true,
  },
  [sym__dupw] = {
    .visible = false,
    .named = true,
  },
  [sym__swapw] = {
    .visible = false,
    .named = true,
  },
  [sym__movupw] = {
    .visible = false,
    .named = true,
  },
  [sym__movdnw] = {
    .visible = false,
    .named = true,
  },
  [sym__push] = {
    .visible = false,
    .named = true,
  },
  [sym__proc] = {
    .visible = false,
    .named = true,
  },
  [sym__export] = {
    .visible = false,
    .named = true,
  },
  [sym__if] = {
    .visible = false,
    .named = true,
  },
  [sym__while] = {
    .visible = false,
    .named = true,
  },
  [sym__repeat] = {
    .visible = false,
    .named = true,
  },
  [sym__path] = {
    .visible = false,
    .named = true,
  },
  [sym_felt_hex] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__push_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_module = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_module] = "module",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_module, 2},
  [1] =
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(343);
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '0') ADVANCE(481);
      if (lookahead == '1') ADVANCE(435);
      if (lookahead == '2') ADVANCE(438);
      if (lookahead == '3') ADVANCE(483);
      if (lookahead == '4') ADVANCE(485);
      if (lookahead == '5') ADVANCE(487);
      if (lookahead == '6') ADVANCE(489);
      if (lookahead == '7') ADVANCE(491);
      if (lookahead == '8') ADVANCE(493);
      if (lookahead == '9') ADVANCE(495);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'g') ADVANCE(288);
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'k') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == 'w') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(728);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '0') ADVANCE(747);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'g') ADVANCE(288);
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(748);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(728);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == 'u') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(728);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(728);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(748);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(745);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(358);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(164);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == '3') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(422);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(103);
      END_STATE();
    case 17:
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(350);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(104);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(221);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(198);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'g') ADVANCE(302);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(276);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'm') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(440);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(369);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(452);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(453);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(454);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(519);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == 'g') ADVANCE(135);
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead == 'v') ADVANCE(424);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(527);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(419);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(445);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(382);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(521);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 144:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(192);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(356);
      if (lookahead == 'q') ADVANCE(443);
      END_STATE();
    case 147:
      if (lookahead == 'g') ADVANCE(372);
      END_STATE();
    case 148:
      if (lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 151:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(423);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(518);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(409);
      END_STATE();
    case 155:
      if (lookahead == 'h') ADVANCE(511);
      END_STATE();
    case 156:
      if (lookahead == 'h') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 158:
      if (lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 159:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 173:
      if (lookahead == 'k') ADVANCE(421);
      END_STATE();
    case 174:
      if (lookahead == 'k') ADVANCE(136);
      END_STATE();
    case 175:
      if (lookahead == 'k') ADVANCE(138);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(467);
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'q') ADVANCE(442);
      if (lookahead == 'x') ADVANCE(120);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'q') ADVANCE(442);
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 199:
      if (lookahead == 'm') ADVANCE(429);
      END_STATE();
    case 200:
      if (lookahead == 'm') ADVANCE(414);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(417);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(410);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 204:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(479);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(508);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(407);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(405);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(509);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 252:
      if (lookahead == 'p') ADVANCE(228);
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 253:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 254:
      if (lookahead == 'q') ADVANCE(355);
      END_STATE();
    case 255:
      if (lookahead == 'q') ADVANCE(472);
      END_STATE();
    case 256:
      if (lookahead == 'q') ADVANCE(473);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(373);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 315:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 318:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 319:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 320:
      if (lookahead == 'v') ADVANCE(444);
      END_STATE();
    case 321:
      if (lookahead == 'v') ADVANCE(357);
      END_STATE();
    case 322:
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 323:
      if (lookahead == 'v') ADVANCE(371);
      END_STATE();
    case 324:
      if (lookahead == 'v') ADVANCE(373);
      END_STATE();
    case 325:
      if (lookahead == 'v') ADVANCE(425);
      END_STATE();
    case 326:
      if (lookahead == 'v') ADVANCE(458);
      END_STATE();
    case 327:
      if (lookahead == 'v') ADVANCE(459);
      END_STATE();
    case 328:
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 329:
      if (lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 330:
      if (lookahead == 'w') ADVANCE(403);
      END_STATE();
    case 331:
      if (lookahead == 'w') ADVANCE(404);
      END_STATE();
    case 332:
      if (lookahead == 'w') ADVANCE(412);
      END_STATE();
    case 333:
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 334:
      if (lookahead == 'w') ADVANCE(201);
      END_STATE();
    case 335:
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 336:
      if (lookahead == 'w') ADVANCE(172);
      END_STATE();
    case 337:
      if (lookahead == 'x') ADVANCE(252);
      END_STATE();
    case 338:
      if (lookahead == 'x') ADVANCE(399);
      END_STATE();
    case 339:
      if (lookahead == 'x') ADVANCE(400);
      END_STATE();
    case 340:
      if (lookahead == 'x') ADVANCE(310);
      END_STATE();
    case 341:
      if (lookahead == 'y') ADVANCE(328);
      END_STATE();
    case 342:
      if (eof) ADVANCE(343);
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '0') ADVANCE(480);
      if (lookahead == '1') ADVANCE(436);
      if (lookahead == '2') ADVANCE(437);
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == '4') ADVANCE(484);
      if (lookahead == '5') ADVANCE(486);
      if (lookahead == '6') ADVANCE(488);
      if (lookahead == '7') ADVANCE(490);
      if (lookahead == '8') ADVANCE(492);
      if (lookahead == '9') ADVANCE(494);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(342)
      END_STATE();
    case 343:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_syscall);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == 'z') ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_assertz);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_assert_eq);
      if (lookahead == 'w') ADVANCE(420);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_inv);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_pow2);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_lte);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_gte);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_eqw);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_ext2add);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_ext2sub);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_ext2mul);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_ext2div);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_ext2neg);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_ext2inv);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_u32test);
      if (lookahead == 'w') ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_u32testw);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_u32assertw);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_u32cast);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_u32split);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_u32overflowing_add3);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_u32wrapping_add3);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_u32overflowing_madd);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_u32wrapping_madd);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_u32checked_and);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_u32checked_or);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_u32checked_xor);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_u32checked_not);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_u32checked_popcnt);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_u32unchecked_popcnt);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_u32checked_lt);
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_u32unchecked_lt);
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_u32checked_lte);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_u32unchecked_lte);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_u32checked_gt);
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_u32unchecked_gt);
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_u32checked_gte);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_u32unchecked_gte);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_u32checked_min);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_u32unchecked_min);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_u32checked_max);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_u32unchecked_max);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_drop);
      if (lookahead == 'w') ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_dropw);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_padw);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_swapdw);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_cswap);
      if (lookahead == 'w') ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_cswapw);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_cdrop);
      if (lookahead == 'w') ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_cdropw);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_sdepth);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_mem_stream);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_adv_pipe);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_adv_loadw);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_hmerge);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_hperm);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_mtree_get);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_mtree_set);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_mtree_cwm);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_caller);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_is_odd);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_assert_eqw);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_clk);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_fri_ext2fold4);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_hash);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_adv);
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_u64div);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_keyval);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_ext2intt);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_mem);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_mem);
      if (lookahead == '_') ADVANCE(198);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_exp);
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_u32assert);
      if (lookahead == 'w') ADVANCE(376);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '0') ADVANCE(497);
      if (lookahead == '1') ADVANCE(499);
      if (lookahead == '2') ADVANCE(501);
      if (lookahead == '3') ADVANCE(503);
      if (lookahead == '4') ADVANCE(505);
      if (lookahead == '5') ADVANCE(507);
      if (lookahead == '6') ADVANCE(513);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '0') ADVANCE(496);
      if (lookahead == '1') ADVANCE(498);
      if (lookahead == '2') ADVANCE(500);
      if (lookahead == '3') ADVANCE(502);
      if (lookahead == '4') ADVANCE(504);
      if (lookahead == '5') ADVANCE(506);
      if (lookahead == '6') ADVANCE(512);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_eq);
      if (lookahead == 'w') ADVANCE(367);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_neq);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_mem_load);
      if (lookahead == 'w') ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_mem_loadw);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_mem_store);
      if (lookahead == 'w') ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_mem_storew);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_u32checked_add);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_u32wrapping_add);
      if (lookahead == '3') ADVANCE(380);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_u32overflowing_add);
      if (lookahead == '3') ADVANCE(379);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_u32checked_sub);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_u32wrapping_sub);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_u32overflowing_sub);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_u32checked_mul);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_u32wrapping_mul);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_u32overflowing_mul);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_u32checked_div);
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_u32unchecked_div);
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_u32checked_mod);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_u32unchecked_mod);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_u32checked_divmod);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_u32unchecked_divmod);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_u32checked_shr);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_u32unchecked_shr);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_u32checked_shl);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_u32unchecked_shl);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_u32checked_rotr);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_u32unchecked_rotr);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_u32checked_rotl);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_u32unchecked_rotl);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_u32checked_eq);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_u32checked_neq);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_locaddr);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_loc_load);
      if (lookahead == 'w') ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_loc_loadw);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_loc_store);
      if (lookahead == 'w') ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_loc_storew);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_dup);
      if (lookahead == 'w') ADVANCE(514);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_swap);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead == 'w') ADVANCE(515);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_movup);
      if (lookahead == 'w') ADVANCE(516);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_movdn);
      if (lookahead == 'w') ADVANCE(517);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_adv_push);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_dupw);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_swapw);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_movupw);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_movdnw);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__else);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__begin);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__proc_name);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(530);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(534);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(539);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(571);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(573);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(576);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(578);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(582);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(594);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(595);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(601);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(605);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_uppercase);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(629);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(630);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(631);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(632);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(633);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(634);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(635);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(636);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(637);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(638);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(639);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(640);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(641);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(642);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(643);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(644);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(645);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(646);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(647);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(648);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(649);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(650);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(651);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(652);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(653);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(654);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(655);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(656);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(657);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(658);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(659);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(660);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(661);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(662);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(663);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(664);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(665);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(666);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(667);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(668);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(669);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(670);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(671);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(672);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(673);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(674);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(675);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(676);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(677);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(678);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(679);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(680);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(681);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(682);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(683);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(684);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(685);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(686);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(687);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(688);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(689);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(690);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(691);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(692);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(693);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(694);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(695);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(696);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(697);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(698);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(699);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(700);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(701);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(702);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(703);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(704);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(705);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(706);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(707);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(708);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(709);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(710);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(711);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(712);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(713);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(714);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(715);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(716);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(717);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(718);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(719);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(720);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(721);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(722);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(723);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(724);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(725);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(726);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_uppercase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(727);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(730);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(731);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(732);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(733);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(734);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(735);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(736);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(737);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(738);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(739);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(740);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(742);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(743);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_felt_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(744);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_felt);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_felt);
      if (lookahead == 'x') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(749);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(750);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(752);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(753);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(755);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(756);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(757);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(758);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(759);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(760);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(761);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(763);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(764);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_u32);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(768);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(769);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(770);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(771);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(772);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(774);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_u16);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_u8);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_u8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_u8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 342},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 342},
  [78] = {.lex_state = 342},
  [79] = {.lex_state = 342},
  [80] = {.lex_state = 342},
  [81] = {.lex_state = 342},
  [82] = {.lex_state = 342},
  [83] = {.lex_state = 342},
  [84] = {.lex_state = 342},
  [85] = {.lex_state = 342},
  [86] = {.lex_state = 342},
  [87] = {.lex_state = 342},
  [88] = {.lex_state = 342},
  [89] = {.lex_state = 342},
  [90] = {.lex_state = 342},
  [91] = {.lex_state = 342},
  [92] = {.lex_state = 342},
  [93] = {.lex_state = 342},
  [94] = {.lex_state = 342},
  [95] = {.lex_state = 342},
  [96] = {.lex_state = 342},
  [97] = {.lex_state = 342},
  [98] = {.lex_state = 342},
  [99] = {.lex_state = 342},
  [100] = {.lex_state = 342},
  [101] = {.lex_state = 342},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 342},
  [104] = {.lex_state = 342},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 342},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 342},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_syscall] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_assertz] = ACTIONS(1),
    [anon_sym_assert_eq] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [anon_sym_inv] = ACTIONS(1),
    [anon_sym_pow2] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_lt] = ACTIONS(1),
    [anon_sym_lte] = ACTIONS(1),
    [anon_sym_gt] = ACTIONS(1),
    [anon_sym_gte] = ACTIONS(1),
    [anon_sym_eqw] = ACTIONS(1),
    [anon_sym_ext2add] = ACTIONS(1),
    [anon_sym_ext2sub] = ACTIONS(1),
    [anon_sym_ext2mul] = ACTIONS(1),
    [anon_sym_ext2div] = ACTIONS(1),
    [anon_sym_ext2neg] = ACTIONS(1),
    [anon_sym_ext2inv] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_dropw] = ACTIONS(1),
    [anon_sym_padw] = ACTIONS(1),
    [anon_sym_swapdw] = ACTIONS(1),
    [anon_sym_cswap] = ACTIONS(1),
    [anon_sym_cswapw] = ACTIONS(1),
    [anon_sym_cdrop] = ACTIONS(1),
    [anon_sym_cdropw] = ACTIONS(1),
    [anon_sym_sdepth] = ACTIONS(1),
    [anon_sym_mem_stream] = ACTIONS(1),
    [anon_sym_adv_pipe] = ACTIONS(1),
    [anon_sym_adv_loadw] = ACTIONS(1),
    [anon_sym_hmerge] = ACTIONS(1),
    [anon_sym_hperm] = ACTIONS(1),
    [anon_sym_mtree_get] = ACTIONS(1),
    [anon_sym_mtree_set] = ACTIONS(1),
    [anon_sym_mtree_cwm] = ACTIONS(1),
    [anon_sym_caller] = ACTIONS(1),
    [anon_sym_is_odd] = ACTIONS(1),
    [anon_sym_assert_eqw] = ACTIONS(1),
    [anon_sym_clk] = ACTIONS(1),
    [anon_sym_fri_ext2fold4] = ACTIONS(1),
    [anon_sym_hash] = ACTIONS(1),
    [anon_sym_adv] = ACTIONS(1),
    [anon_sym_keyval] = ACTIONS(1),
    [anon_sym_ext2intt] = ACTIONS(1),
    [anon_sym_mem] = ACTIONS(1),
    [anon_sym_exp] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_neq] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_mem_load] = ACTIONS(1),
    [anon_sym_mem_loadw] = ACTIONS(1),
    [anon_sym_mem_store] = ACTIONS(1),
    [anon_sym_mem_storew] = ACTIONS(1),
    [anon_sym_locaddr] = ACTIONS(1),
    [anon_sym_loc_load] = ACTIONS(1),
    [anon_sym_loc_loadw] = ACTIONS(1),
    [anon_sym_loc_store] = ACTIONS(1),
    [anon_sym_loc_storew] = ACTIONS(1),
    [anon_sym_dup] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_swap] = ACTIONS(1),
    [anon_sym_movup] = ACTIONS(1),
    [anon_sym_movdn] = ACTIONS(1),
    [anon_sym_adv_push] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_dupw] = ACTIONS(1),
    [anon_sym_swapw] = ACTIONS(1),
    [anon_sym_movupw] = ACTIONS(1),
    [anon_sym_movdnw] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym__else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
    [sym_uppercase] = ACTIONS(1),
    [sym_felt] = ACTIONS(1),
    [sym_u32] = ACTIONS(1),
    [sym_u16] = ACTIONS(1),
    [sym_u8] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(151),
    [sym_const] = STATE(83),
    [sym_use] = STATE(77),
    [sym_export] = STATE(85),
    [sym_proc] = STATE(85),
    [sym_main] = STATE(150),
    [sym__proc] = STATE(9),
    [sym__export] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(77),
    [aux_sym_source_file_repeat2] = STATE(83),
    [aux_sym_source_file_repeat3] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(13),
    [sym__begin] = ACTIONS(15),
  },
  [2] = {
    [sym_if] = STATE(2),
    [sym_if_else] = STATE(2),
    [sym_while] = STATE(2),
    [sym_repeat] = STATE(2),
    [sym_exec] = STATE(2),
    [sym_call] = STATE(2),
    [sym_syscall] = STATE(2),
    [sym__block] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(17),
    [anon_sym_call] = ACTIONS(20),
    [anon_sym_syscall] = ACTIONS(23),
    [anon_sym_assert] = ACTIONS(26),
    [anon_sym_assertz] = ACTIONS(29),
    [anon_sym_assert_eq] = ACTIONS(26),
    [anon_sym_neg] = ACTIONS(29),
    [anon_sym_inv] = ACTIONS(29),
    [anon_sym_pow2] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_xor] = ACTIONS(29),
    [anon_sym_lt] = ACTIONS(26),
    [anon_sym_lte] = ACTIONS(29),
    [anon_sym_gt] = ACTIONS(26),
    [anon_sym_gte] = ACTIONS(29),
    [anon_sym_eqw] = ACTIONS(29),
    [anon_sym_ext2add] = ACTIONS(29),
    [anon_sym_ext2sub] = ACTIONS(29),
    [anon_sym_ext2mul] = ACTIONS(29),
    [anon_sym_ext2div] = ACTIONS(29),
    [anon_sym_ext2neg] = ACTIONS(29),
    [anon_sym_ext2inv] = ACTIONS(29),
    [anon_sym_u32test] = ACTIONS(26),
    [anon_sym_u32testw] = ACTIONS(29),
    [anon_sym_u32assertw] = ACTIONS(29),
    [anon_sym_u32cast] = ACTIONS(29),
    [anon_sym_u32split] = ACTIONS(29),
    [anon_sym_u32overflowing_add3] = ACTIONS(29),
    [anon_sym_u32wrapping_add3] = ACTIONS(29),
    [anon_sym_u32overflowing_madd] = ACTIONS(29),
    [anon_sym_u32wrapping_madd] = ACTIONS(29),
    [anon_sym_u32checked_and] = ACTIONS(29),
    [anon_sym_u32checked_or] = ACTIONS(29),
    [anon_sym_u32checked_xor] = ACTIONS(29),
    [anon_sym_u32checked_not] = ACTIONS(29),
    [anon_sym_u32checked_popcnt] = ACTIONS(29),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(29),
    [anon_sym_u32checked_lt] = ACTIONS(26),
    [anon_sym_u32unchecked_lt] = ACTIONS(26),
    [anon_sym_u32checked_lte] = ACTIONS(29),
    [anon_sym_u32unchecked_lte] = ACTIONS(29),
    [anon_sym_u32checked_gt] = ACTIONS(26),
    [anon_sym_u32unchecked_gt] = ACTIONS(26),
    [anon_sym_u32checked_gte] = ACTIONS(29),
    [anon_sym_u32unchecked_gte] = ACTIONS(29),
    [anon_sym_u32checked_min] = ACTIONS(29),
    [anon_sym_u32unchecked_min] = ACTIONS(29),
    [anon_sym_u32checked_max] = ACTIONS(29),
    [anon_sym_u32unchecked_max] = ACTIONS(29),
    [anon_sym_drop] = ACTIONS(26),
    [anon_sym_dropw] = ACTIONS(29),
    [anon_sym_padw] = ACTIONS(29),
    [anon_sym_swapdw] = ACTIONS(29),
    [anon_sym_cswap] = ACTIONS(26),
    [anon_sym_cswapw] = ACTIONS(29),
    [anon_sym_cdrop] = ACTIONS(26),
    [anon_sym_cdropw] = ACTIONS(29),
    [anon_sym_sdepth] = ACTIONS(29),
    [anon_sym_mem_stream] = ACTIONS(29),
    [anon_sym_adv_pipe] = ACTIONS(29),
    [anon_sym_adv_loadw] = ACTIONS(29),
    [anon_sym_hmerge] = ACTIONS(29),
    [anon_sym_hperm] = ACTIONS(29),
    [anon_sym_mtree_get] = ACTIONS(29),
    [anon_sym_mtree_set] = ACTIONS(29),
    [anon_sym_mtree_cwm] = ACTIONS(29),
    [anon_sym_caller] = ACTIONS(29),
    [anon_sym_is_odd] = ACTIONS(29),
    [anon_sym_assert_eqw] = ACTIONS(29),
    [anon_sym_clk] = ACTIONS(29),
    [anon_sym_fri_ext2fold4] = ACTIONS(29),
    [anon_sym_hash] = ACTIONS(29),
    [anon_sym_adv] = ACTIONS(32),
    [anon_sym_exp] = ACTIONS(35),
    [anon_sym_u32assert] = ACTIONS(38),
    [anon_sym_add] = ACTIONS(41),
    [anon_sym_sub] = ACTIONS(41),
    [anon_sym_mul] = ACTIONS(41),
    [anon_sym_eq] = ACTIONS(44),
    [anon_sym_neq] = ACTIONS(41),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mem_load] = ACTIONS(47),
    [anon_sym_mem_loadw] = ACTIONS(50),
    [anon_sym_mem_store] = ACTIONS(47),
    [anon_sym_mem_storew] = ACTIONS(50),
    [anon_sym_u32checked_add] = ACTIONS(53),
    [anon_sym_u32wrapping_add] = ACTIONS(56),
    [anon_sym_u32overflowing_add] = ACTIONS(56),
    [anon_sym_u32checked_sub] = ACTIONS(53),
    [anon_sym_u32wrapping_sub] = ACTIONS(53),
    [anon_sym_u32overflowing_sub] = ACTIONS(53),
    [anon_sym_u32checked_mul] = ACTIONS(53),
    [anon_sym_u32wrapping_mul] = ACTIONS(53),
    [anon_sym_u32overflowing_mul] = ACTIONS(53),
    [anon_sym_u32checked_div] = ACTIONS(56),
    [anon_sym_u32unchecked_div] = ACTIONS(56),
    [anon_sym_u32checked_mod] = ACTIONS(53),
    [anon_sym_u32unchecked_mod] = ACTIONS(53),
    [anon_sym_u32checked_divmod] = ACTIONS(53),
    [anon_sym_u32unchecked_divmod] = ACTIONS(53),
    [anon_sym_u32checked_shr] = ACTIONS(53),
    [anon_sym_u32unchecked_shr] = ACTIONS(53),
    [anon_sym_u32checked_shl] = ACTIONS(53),
    [anon_sym_u32unchecked_shl] = ACTIONS(53),
    [anon_sym_u32checked_rotr] = ACTIONS(53),
    [anon_sym_u32unchecked_rotr] = ACTIONS(53),
    [anon_sym_u32checked_rotl] = ACTIONS(53),
    [anon_sym_u32unchecked_rotl] = ACTIONS(53),
    [anon_sym_u32checked_eq] = ACTIONS(53),
    [anon_sym_u32checked_neq] = ACTIONS(53),
    [anon_sym_locaddr] = ACTIONS(59),
    [anon_sym_loc_load] = ACTIONS(62),
    [anon_sym_loc_loadw] = ACTIONS(59),
    [anon_sym_loc_store] = ACTIONS(62),
    [anon_sym_loc_storew] = ACTIONS(59),
    [anon_sym_dup] = ACTIONS(65),
    [anon_sym_swap] = ACTIONS(68),
    [anon_sym_movup] = ACTIONS(71),
    [anon_sym_movdn] = ACTIONS(74),
    [anon_sym_adv_push] = ACTIONS(77),
    [anon_sym_dupw] = ACTIONS(80),
    [anon_sym_swapw] = ACTIONS(83),
    [anon_sym_movupw] = ACTIONS(86),
    [anon_sym_movdnw] = ACTIONS(89),
    [anon_sym_push] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(95),
    [sym__else] = ACTIONS(98),
    [anon_sym_while] = ACTIONS(100),
    [anon_sym_repeat] = ACTIONS(103),
    [sym__end] = ACTIONS(98),
  },
  [3] = {
    [sym_if] = STATE(4),
    [sym_if_else] = STATE(4),
    [sym_while] = STATE(4),
    [sym_repeat] = STATE(4),
    [sym_exec] = STATE(4),
    [sym_call] = STATE(4),
    [sym_syscall] = STATE(4),
    [sym__block] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [sym__else] = ACTIONS(160),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(166),
  },
  [4] = {
    [sym_if] = STATE(2),
    [sym_if_else] = STATE(2),
    [sym_while] = STATE(2),
    [sym_repeat] = STATE(2),
    [sym_exec] = STATE(2),
    [sym_call] = STATE(2),
    [sym_syscall] = STATE(2),
    [sym__block] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [sym__else] = ACTIONS(168),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(170),
  },
  [5] = {
    [sym_if] = STATE(2),
    [sym_if_else] = STATE(2),
    [sym_while] = STATE(2),
    [sym_repeat] = STATE(2),
    [sym_exec] = STATE(2),
    [sym_call] = STATE(2),
    [sym_syscall] = STATE(2),
    [sym__block] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(172),
  },
  [6] = {
    [sym_if] = STATE(5),
    [sym_if_else] = STATE(5),
    [sym_while] = STATE(5),
    [sym_repeat] = STATE(5),
    [sym_exec] = STATE(5),
    [sym_call] = STATE(5),
    [sym_syscall] = STATE(5),
    [sym__block] = STATE(5),
    [sym_opcode] = STATE(5),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(174),
  },
  [7] = {
    [sym_if] = STATE(2),
    [sym_if_else] = STATE(2),
    [sym_while] = STATE(2),
    [sym_repeat] = STATE(2),
    [sym_exec] = STATE(2),
    [sym_call] = STATE(2),
    [sym_syscall] = STATE(2),
    [sym__block] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(176),
  },
  [8] = {
    [sym_if] = STATE(2),
    [sym_if_else] = STATE(2),
    [sym_while] = STATE(2),
    [sym_repeat] = STATE(2),
    [sym_exec] = STATE(2),
    [sym_call] = STATE(2),
    [sym_syscall] = STATE(2),
    [sym__block] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(178),
  },
  [9] = {
    [sym_if] = STATE(14),
    [sym_if_else] = STATE(14),
    [sym_while] = STATE(14),
    [sym_repeat] = STATE(14),
    [sym_exec] = STATE(14),
    [sym_call] = STATE(14),
    [sym_syscall] = STATE(14),
    [sym__block] = STATE(14),
    [sym_opcode] = STATE(14),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(14),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(180),
  },
  [10] = {
    [sym_if] = STATE(13),
    [sym_if_else] = STATE(13),
    [sym_while] = STATE(13),
    [sym_repeat] = STATE(13),
    [sym_exec] = STATE(13),
    [sym_call] = STATE(13),
    [sym_syscall] = STATE(13),
    [sym__block] = STATE(13),
    [sym_opcode] = STATE(13),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(182),
  },
  [11] = {
    [sym_if] = STATE(2),
    [sym_if_else] = STATE(2),
    [sym_while] = STATE(2),
    [sym_repeat] = STATE(2),
    [sym_exec] = STATE(2),
    [sym_call] = STATE(2),
    [sym_syscall] = STATE(2),
    [sym__block] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(184),
  },
  [12] = {
    [sym_if] = STATE(17),
    [sym_if_else] = STATE(17),
    [sym_while] = STATE(17),
    [sym_repeat] = STATE(17),
    [sym_exec] = STATE(17),
    [sym_call] = STATE(17),
    [sym_syscall] = STATE(17),
    [sym__block] = STATE(17),
    [sym_opcode] = STATE(17),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(186),
  },
  [13] = {
    [sym_if] = STATE(2),
    [sym_if_else] = STATE(2),
    [sym_while] = STATE(2),
    [sym_repeat] = STATE(2),
    [sym_exec] = STATE(2),
    [sym_call] = STATE(2),
    [sym_syscall] = STATE(2),
    [sym__block] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(188),
  },
  [14] = {
    [sym_if] = STATE(2),
    [sym_if_else] = STATE(2),
    [sym_while] = STATE(2),
    [sym_repeat] = STATE(2),
    [sym_exec] = STATE(2),
    [sym_call] = STATE(2),
    [sym_syscall] = STATE(2),
    [sym__block] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(190),
  },
  [15] = {
    [sym_if] = STATE(11),
    [sym_if_else] = STATE(11),
    [sym_while] = STATE(11),
    [sym_repeat] = STATE(11),
    [sym_exec] = STATE(11),
    [sym_call] = STATE(11),
    [sym_syscall] = STATE(11),
    [sym__block] = STATE(11),
    [sym_opcode] = STATE(11),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(192),
  },
  [16] = {
    [sym_if] = STATE(7),
    [sym_if_else] = STATE(7),
    [sym_while] = STATE(7),
    [sym_repeat] = STATE(7),
    [sym_exec] = STATE(7),
    [sym_call] = STATE(7),
    [sym_syscall] = STATE(7),
    [sym__block] = STATE(7),
    [sym_opcode] = STATE(7),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(194),
  },
  [17] = {
    [sym_if] = STATE(2),
    [sym_if_else] = STATE(2),
    [sym_while] = STATE(2),
    [sym_repeat] = STATE(2),
    [sym_exec] = STATE(2),
    [sym_call] = STATE(2),
    [sym_syscall] = STATE(2),
    [sym__block] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(196),
  },
  [18] = {
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(8),
    [sym_while] = STATE(8),
    [sym_repeat] = STATE(8),
    [sym_exec] = STATE(8),
    [sym_call] = STATE(8),
    [sym_syscall] = STATE(8),
    [sym__block] = STATE(8),
    [sym_opcode] = STATE(8),
    [sym__simple_inst] = STATE(42),
    [sym__adv_inst] = STATE(42),
    [sym__adv_mem] = STATE(42),
    [sym__exp] = STATE(42),
    [sym__assert] = STATE(42),
    [sym__felt_inst] = STATE(42),
    [sym__mem_inst] = STATE(42),
    [sym__u32_inst] = STATE(42),
    [sym__u16_inst] = STATE(42),
    [sym__stack_inst] = STATE(42),
    [sym__dup] = STATE(42),
    [sym__swap] = STATE(42),
    [sym__movup] = STATE(42),
    [sym__movdn] = STATE(42),
    [sym__adv_push] = STATE(42),
    [sym__dupw] = STATE(42),
    [sym__swapw] = STATE(42),
    [sym__movupw] = STATE(42),
    [sym__movdnw] = STATE(42),
    [sym__push] = STATE(42),
    [sym__if] = STATE(3),
    [sym__while] = STATE(16),
    [sym__repeat] = STATE(15),
    [aux_sym_export_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(106),
    [anon_sym_call] = ACTIONS(108),
    [anon_sym_syscall] = ACTIONS(110),
    [anon_sym_assert] = ACTIONS(112),
    [anon_sym_assertz] = ACTIONS(114),
    [anon_sym_assert_eq] = ACTIONS(112),
    [anon_sym_neg] = ACTIONS(114),
    [anon_sym_inv] = ACTIONS(114),
    [anon_sym_pow2] = ACTIONS(114),
    [anon_sym_not] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_or] = ACTIONS(114),
    [anon_sym_xor] = ACTIONS(114),
    [anon_sym_lt] = ACTIONS(112),
    [anon_sym_lte] = ACTIONS(114),
    [anon_sym_gt] = ACTIONS(112),
    [anon_sym_gte] = ACTIONS(114),
    [anon_sym_eqw] = ACTIONS(114),
    [anon_sym_ext2add] = ACTIONS(114),
    [anon_sym_ext2sub] = ACTIONS(114),
    [anon_sym_ext2mul] = ACTIONS(114),
    [anon_sym_ext2div] = ACTIONS(114),
    [anon_sym_ext2neg] = ACTIONS(114),
    [anon_sym_ext2inv] = ACTIONS(114),
    [anon_sym_u32test] = ACTIONS(112),
    [anon_sym_u32testw] = ACTIONS(114),
    [anon_sym_u32assertw] = ACTIONS(114),
    [anon_sym_u32cast] = ACTIONS(114),
    [anon_sym_u32split] = ACTIONS(114),
    [anon_sym_u32overflowing_add3] = ACTIONS(114),
    [anon_sym_u32wrapping_add3] = ACTIONS(114),
    [anon_sym_u32overflowing_madd] = ACTIONS(114),
    [anon_sym_u32wrapping_madd] = ACTIONS(114),
    [anon_sym_u32checked_and] = ACTIONS(114),
    [anon_sym_u32checked_or] = ACTIONS(114),
    [anon_sym_u32checked_xor] = ACTIONS(114),
    [anon_sym_u32checked_not] = ACTIONS(114),
    [anon_sym_u32checked_popcnt] = ACTIONS(114),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(114),
    [anon_sym_u32checked_lt] = ACTIONS(112),
    [anon_sym_u32unchecked_lt] = ACTIONS(112),
    [anon_sym_u32checked_lte] = ACTIONS(114),
    [anon_sym_u32unchecked_lte] = ACTIONS(114),
    [anon_sym_u32checked_gt] = ACTIONS(112),
    [anon_sym_u32unchecked_gt] = ACTIONS(112),
    [anon_sym_u32checked_gte] = ACTIONS(114),
    [anon_sym_u32unchecked_gte] = ACTIONS(114),
    [anon_sym_u32checked_min] = ACTIONS(114),
    [anon_sym_u32unchecked_min] = ACTIONS(114),
    [anon_sym_u32checked_max] = ACTIONS(114),
    [anon_sym_u32unchecked_max] = ACTIONS(114),
    [anon_sym_drop] = ACTIONS(112),
    [anon_sym_dropw] = ACTIONS(114),
    [anon_sym_padw] = ACTIONS(114),
    [anon_sym_swapdw] = ACTIONS(114),
    [anon_sym_cswap] = ACTIONS(112),
    [anon_sym_cswapw] = ACTIONS(114),
    [anon_sym_cdrop] = ACTIONS(112),
    [anon_sym_cdropw] = ACTIONS(114),
    [anon_sym_sdepth] = ACTIONS(114),
    [anon_sym_mem_stream] = ACTIONS(114),
    [anon_sym_adv_pipe] = ACTIONS(114),
    [anon_sym_adv_loadw] = ACTIONS(114),
    [anon_sym_hmerge] = ACTIONS(114),
    [anon_sym_hperm] = ACTIONS(114),
    [anon_sym_mtree_get] = ACTIONS(114),
    [anon_sym_mtree_set] = ACTIONS(114),
    [anon_sym_mtree_cwm] = ACTIONS(114),
    [anon_sym_caller] = ACTIONS(114),
    [anon_sym_is_odd] = ACTIONS(114),
    [anon_sym_assert_eqw] = ACTIONS(114),
    [anon_sym_clk] = ACTIONS(114),
    [anon_sym_fri_ext2fold4] = ACTIONS(114),
    [anon_sym_hash] = ACTIONS(114),
    [anon_sym_adv] = ACTIONS(116),
    [anon_sym_exp] = ACTIONS(118),
    [anon_sym_u32assert] = ACTIONS(120),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(124),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_div] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(130),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(130),
    [anon_sym_u32wrapping_sub] = ACTIONS(130),
    [anon_sym_u32overflowing_sub] = ACTIONS(130),
    [anon_sym_u32checked_mul] = ACTIONS(130),
    [anon_sym_u32wrapping_mul] = ACTIONS(130),
    [anon_sym_u32overflowing_mul] = ACTIONS(130),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(130),
    [anon_sym_u32unchecked_mod] = ACTIONS(130),
    [anon_sym_u32checked_divmod] = ACTIONS(130),
    [anon_sym_u32unchecked_divmod] = ACTIONS(130),
    [anon_sym_u32checked_shr] = ACTIONS(130),
    [anon_sym_u32unchecked_shr] = ACTIONS(130),
    [anon_sym_u32checked_shl] = ACTIONS(130),
    [anon_sym_u32unchecked_shl] = ACTIONS(130),
    [anon_sym_u32checked_rotr] = ACTIONS(130),
    [anon_sym_u32unchecked_rotr] = ACTIONS(130),
    [anon_sym_u32checked_rotl] = ACTIONS(130),
    [anon_sym_u32unchecked_rotl] = ACTIONS(130),
    [anon_sym_u32checked_eq] = ACTIONS(130),
    [anon_sym_u32checked_neq] = ACTIONS(130),
    [anon_sym_locaddr] = ACTIONS(134),
    [anon_sym_loc_load] = ACTIONS(136),
    [anon_sym_loc_loadw] = ACTIONS(134),
    [anon_sym_loc_store] = ACTIONS(136),
    [anon_sym_loc_storew] = ACTIONS(134),
    [anon_sym_dup] = ACTIONS(138),
    [anon_sym_swap] = ACTIONS(140),
    [anon_sym_movup] = ACTIONS(142),
    [anon_sym_movdn] = ACTIONS(144),
    [anon_sym_adv_push] = ACTIONS(146),
    [anon_sym_dupw] = ACTIONS(148),
    [anon_sym_swapw] = ACTIONS(150),
    [anon_sym_movupw] = ACTIONS(152),
    [anon_sym_movdnw] = ACTIONS(154),
    [anon_sym_push] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(164),
    [sym__end] = ACTIONS(196),
  },
  [19] = {
    [aux_sym__push_repeat1] = STATE(19),
    [anon_sym_DOT] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(201),
    [anon_sym_call] = ACTIONS(203),
    [anon_sym_syscall] = ACTIONS(201),
    [anon_sym_assert] = ACTIONS(203),
    [anon_sym_assertz] = ACTIONS(201),
    [anon_sym_assert_eq] = ACTIONS(203),
    [anon_sym_neg] = ACTIONS(201),
    [anon_sym_inv] = ACTIONS(201),
    [anon_sym_pow2] = ACTIONS(201),
    [anon_sym_not] = ACTIONS(201),
    [anon_sym_and] = ACTIONS(201),
    [anon_sym_or] = ACTIONS(201),
    [anon_sym_xor] = ACTIONS(201),
    [anon_sym_lt] = ACTIONS(203),
    [anon_sym_lte] = ACTIONS(201),
    [anon_sym_gt] = ACTIONS(203),
    [anon_sym_gte] = ACTIONS(201),
    [anon_sym_eqw] = ACTIONS(201),
    [anon_sym_ext2add] = ACTIONS(201),
    [anon_sym_ext2sub] = ACTIONS(201),
    [anon_sym_ext2mul] = ACTIONS(201),
    [anon_sym_ext2div] = ACTIONS(201),
    [anon_sym_ext2neg] = ACTIONS(201),
    [anon_sym_ext2inv] = ACTIONS(201),
    [anon_sym_u32test] = ACTIONS(203),
    [anon_sym_u32testw] = ACTIONS(201),
    [anon_sym_u32assertw] = ACTIONS(201),
    [anon_sym_u32cast] = ACTIONS(201),
    [anon_sym_u32split] = ACTIONS(201),
    [anon_sym_u32overflowing_add3] = ACTIONS(201),
    [anon_sym_u32wrapping_add3] = ACTIONS(201),
    [anon_sym_u32overflowing_madd] = ACTIONS(201),
    [anon_sym_u32wrapping_madd] = ACTIONS(201),
    [anon_sym_u32checked_and] = ACTIONS(201),
    [anon_sym_u32checked_or] = ACTIONS(201),
    [anon_sym_u32checked_xor] = ACTIONS(201),
    [anon_sym_u32checked_not] = ACTIONS(201),
    [anon_sym_u32checked_popcnt] = ACTIONS(201),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(201),
    [anon_sym_u32checked_lt] = ACTIONS(203),
    [anon_sym_u32unchecked_lt] = ACTIONS(203),
    [anon_sym_u32checked_lte] = ACTIONS(201),
    [anon_sym_u32unchecked_lte] = ACTIONS(201),
    [anon_sym_u32checked_gt] = ACTIONS(203),
    [anon_sym_u32unchecked_gt] = ACTIONS(203),
    [anon_sym_u32checked_gte] = ACTIONS(201),
    [anon_sym_u32unchecked_gte] = ACTIONS(201),
    [anon_sym_u32checked_min] = ACTIONS(201),
    [anon_sym_u32unchecked_min] = ACTIONS(201),
    [anon_sym_u32checked_max] = ACTIONS(201),
    [anon_sym_u32unchecked_max] = ACTIONS(201),
    [anon_sym_drop] = ACTIONS(203),
    [anon_sym_dropw] = ACTIONS(201),
    [anon_sym_padw] = ACTIONS(201),
    [anon_sym_swapdw] = ACTIONS(201),
    [anon_sym_cswap] = ACTIONS(203),
    [anon_sym_cswapw] = ACTIONS(201),
    [anon_sym_cdrop] = ACTIONS(203),
    [anon_sym_cdropw] = ACTIONS(201),
    [anon_sym_sdepth] = ACTIONS(201),
    [anon_sym_mem_stream] = ACTIONS(201),
    [anon_sym_adv_pipe] = ACTIONS(201),
    [anon_sym_adv_loadw] = ACTIONS(201),
    [anon_sym_hmerge] = ACTIONS(201),
    [anon_sym_hperm] = ACTIONS(201),
    [anon_sym_mtree_get] = ACTIONS(201),
    [anon_sym_mtree_set] = ACTIONS(201),
    [anon_sym_mtree_cwm] = ACTIONS(201),
    [anon_sym_caller] = ACTIONS(201),
    [anon_sym_is_odd] = ACTIONS(201),
    [anon_sym_assert_eqw] = ACTIONS(201),
    [anon_sym_clk] = ACTIONS(201),
    [anon_sym_fri_ext2fold4] = ACTIONS(201),
    [anon_sym_hash] = ACTIONS(201),
    [anon_sym_adv] = ACTIONS(203),
    [anon_sym_exp] = ACTIONS(201),
    [anon_sym_u32assert] = ACTIONS(203),
    [anon_sym_add] = ACTIONS(201),
    [anon_sym_sub] = ACTIONS(201),
    [anon_sym_mul] = ACTIONS(201),
    [anon_sym_eq] = ACTIONS(203),
    [anon_sym_neq] = ACTIONS(201),
    [anon_sym_div] = ACTIONS(201),
    [anon_sym_mem_load] = ACTIONS(203),
    [anon_sym_mem_loadw] = ACTIONS(201),
    [anon_sym_mem_store] = ACTIONS(203),
    [anon_sym_mem_storew] = ACTIONS(201),
    [anon_sym_u32checked_add] = ACTIONS(201),
    [anon_sym_u32wrapping_add] = ACTIONS(203),
    [anon_sym_u32overflowing_add] = ACTIONS(203),
    [anon_sym_u32checked_sub] = ACTIONS(201),
    [anon_sym_u32wrapping_sub] = ACTIONS(201),
    [anon_sym_u32overflowing_sub] = ACTIONS(201),
    [anon_sym_u32checked_mul] = ACTIONS(201),
    [anon_sym_u32wrapping_mul] = ACTIONS(201),
    [anon_sym_u32overflowing_mul] = ACTIONS(201),
    [anon_sym_u32checked_div] = ACTIONS(203),
    [anon_sym_u32unchecked_div] = ACTIONS(203),
    [anon_sym_u32checked_mod] = ACTIONS(201),
    [anon_sym_u32unchecked_mod] = ACTIONS(201),
    [anon_sym_u32checked_divmod] = ACTIONS(201),
    [anon_sym_u32unchecked_divmod] = ACTIONS(201),
    [anon_sym_u32checked_shr] = ACTIONS(201),
    [anon_sym_u32unchecked_shr] = ACTIONS(201),
    [anon_sym_u32checked_shl] = ACTIONS(201),
    [anon_sym_u32unchecked_shl] = ACTIONS(201),
    [anon_sym_u32checked_rotr] = ACTIONS(201),
    [anon_sym_u32unchecked_rotr] = ACTIONS(201),
    [anon_sym_u32checked_rotl] = ACTIONS(201),
    [anon_sym_u32unchecked_rotl] = ACTIONS(201),
    [anon_sym_u32checked_eq] = ACTIONS(201),
    [anon_sym_u32checked_neq] = ACTIONS(201),
    [anon_sym_locaddr] = ACTIONS(201),
    [anon_sym_loc_load] = ACTIONS(203),
    [anon_sym_loc_loadw] = ACTIONS(201),
    [anon_sym_loc_store] = ACTIONS(203),
    [anon_sym_loc_storew] = ACTIONS(201),
    [anon_sym_dup] = ACTIONS(203),
    [anon_sym_swap] = ACTIONS(203),
    [anon_sym_movup] = ACTIONS(203),
    [anon_sym_movdn] = ACTIONS(203),
    [anon_sym_adv_push] = ACTIONS(201),
    [anon_sym_dupw] = ACTIONS(201),
    [anon_sym_swapw] = ACTIONS(201),
    [anon_sym_movupw] = ACTIONS(201),
    [anon_sym_movdnw] = ACTIONS(201),
    [anon_sym_push] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(201),
    [sym__else] = ACTIONS(201),
    [anon_sym_while] = ACTIONS(201),
    [anon_sym_repeat] = ACTIONS(201),
    [sym__end] = ACTIONS(201),
  },
  [20] = {
    [aux_sym__push_repeat1] = STATE(19),
    [anon_sym_DOT] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(207),
    [anon_sym_call] = ACTIONS(209),
    [anon_sym_syscall] = ACTIONS(207),
    [anon_sym_assert] = ACTIONS(209),
    [anon_sym_assertz] = ACTIONS(207),
    [anon_sym_assert_eq] = ACTIONS(209),
    [anon_sym_neg] = ACTIONS(207),
    [anon_sym_inv] = ACTIONS(207),
    [anon_sym_pow2] = ACTIONS(207),
    [anon_sym_not] = ACTIONS(207),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(207),
    [anon_sym_xor] = ACTIONS(207),
    [anon_sym_lt] = ACTIONS(209),
    [anon_sym_lte] = ACTIONS(207),
    [anon_sym_gt] = ACTIONS(209),
    [anon_sym_gte] = ACTIONS(207),
    [anon_sym_eqw] = ACTIONS(207),
    [anon_sym_ext2add] = ACTIONS(207),
    [anon_sym_ext2sub] = ACTIONS(207),
    [anon_sym_ext2mul] = ACTIONS(207),
    [anon_sym_ext2div] = ACTIONS(207),
    [anon_sym_ext2neg] = ACTIONS(207),
    [anon_sym_ext2inv] = ACTIONS(207),
    [anon_sym_u32test] = ACTIONS(209),
    [anon_sym_u32testw] = ACTIONS(207),
    [anon_sym_u32assertw] = ACTIONS(207),
    [anon_sym_u32cast] = ACTIONS(207),
    [anon_sym_u32split] = ACTIONS(207),
    [anon_sym_u32overflowing_add3] = ACTIONS(207),
    [anon_sym_u32wrapping_add3] = ACTIONS(207),
    [anon_sym_u32overflowing_madd] = ACTIONS(207),
    [anon_sym_u32wrapping_madd] = ACTIONS(207),
    [anon_sym_u32checked_and] = ACTIONS(207),
    [anon_sym_u32checked_or] = ACTIONS(207),
    [anon_sym_u32checked_xor] = ACTIONS(207),
    [anon_sym_u32checked_not] = ACTIONS(207),
    [anon_sym_u32checked_popcnt] = ACTIONS(207),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(207),
    [anon_sym_u32checked_lt] = ACTIONS(209),
    [anon_sym_u32unchecked_lt] = ACTIONS(209),
    [anon_sym_u32checked_lte] = ACTIONS(207),
    [anon_sym_u32unchecked_lte] = ACTIONS(207),
    [anon_sym_u32checked_gt] = ACTIONS(209),
    [anon_sym_u32unchecked_gt] = ACTIONS(209),
    [anon_sym_u32checked_gte] = ACTIONS(207),
    [anon_sym_u32unchecked_gte] = ACTIONS(207),
    [anon_sym_u32checked_min] = ACTIONS(207),
    [anon_sym_u32unchecked_min] = ACTIONS(207),
    [anon_sym_u32checked_max] = ACTIONS(207),
    [anon_sym_u32unchecked_max] = ACTIONS(207),
    [anon_sym_drop] = ACTIONS(209),
    [anon_sym_dropw] = ACTIONS(207),
    [anon_sym_padw] = ACTIONS(207),
    [anon_sym_swapdw] = ACTIONS(207),
    [anon_sym_cswap] = ACTIONS(209),
    [anon_sym_cswapw] = ACTIONS(207),
    [anon_sym_cdrop] = ACTIONS(209),
    [anon_sym_cdropw] = ACTIONS(207),
    [anon_sym_sdepth] = ACTIONS(207),
    [anon_sym_mem_stream] = ACTIONS(207),
    [anon_sym_adv_pipe] = ACTIONS(207),
    [anon_sym_adv_loadw] = ACTIONS(207),
    [anon_sym_hmerge] = ACTIONS(207),
    [anon_sym_hperm] = ACTIONS(207),
    [anon_sym_mtree_get] = ACTIONS(207),
    [anon_sym_mtree_set] = ACTIONS(207),
    [anon_sym_mtree_cwm] = ACTIONS(207),
    [anon_sym_caller] = ACTIONS(207),
    [anon_sym_is_odd] = ACTIONS(207),
    [anon_sym_assert_eqw] = ACTIONS(207),
    [anon_sym_clk] = ACTIONS(207),
    [anon_sym_fri_ext2fold4] = ACTIONS(207),
    [anon_sym_hash] = ACTIONS(207),
    [anon_sym_adv] = ACTIONS(209),
    [anon_sym_exp] = ACTIONS(207),
    [anon_sym_u32assert] = ACTIONS(209),
    [anon_sym_add] = ACTIONS(207),
    [anon_sym_sub] = ACTIONS(207),
    [anon_sym_mul] = ACTIONS(207),
    [anon_sym_eq] = ACTIONS(209),
    [anon_sym_neq] = ACTIONS(207),
    [anon_sym_div] = ACTIONS(207),
    [anon_sym_mem_load] = ACTIONS(209),
    [anon_sym_mem_loadw] = ACTIONS(207),
    [anon_sym_mem_store] = ACTIONS(209),
    [anon_sym_mem_storew] = ACTIONS(207),
    [anon_sym_u32checked_add] = ACTIONS(207),
    [anon_sym_u32wrapping_add] = ACTIONS(209),
    [anon_sym_u32overflowing_add] = ACTIONS(209),
    [anon_sym_u32checked_sub] = ACTIONS(207),
    [anon_sym_u32wrapping_sub] = ACTIONS(207),
    [anon_sym_u32overflowing_sub] = ACTIONS(207),
    [anon_sym_u32checked_mul] = ACTIONS(207),
    [anon_sym_u32wrapping_mul] = ACTIONS(207),
    [anon_sym_u32overflowing_mul] = ACTIONS(207),
    [anon_sym_u32checked_div] = ACTIONS(209),
    [anon_sym_u32unchecked_div] = ACTIONS(209),
    [anon_sym_u32checked_mod] = ACTIONS(207),
    [anon_sym_u32unchecked_mod] = ACTIONS(207),
    [anon_sym_u32checked_divmod] = ACTIONS(207),
    [anon_sym_u32unchecked_divmod] = ACTIONS(207),
    [anon_sym_u32checked_shr] = ACTIONS(207),
    [anon_sym_u32unchecked_shr] = ACTIONS(207),
    [anon_sym_u32checked_shl] = ACTIONS(207),
    [anon_sym_u32unchecked_shl] = ACTIONS(207),
    [anon_sym_u32checked_rotr] = ACTIONS(207),
    [anon_sym_u32unchecked_rotr] = ACTIONS(207),
    [anon_sym_u32checked_rotl] = ACTIONS(207),
    [anon_sym_u32unchecked_rotl] = ACTIONS(207),
    [anon_sym_u32checked_eq] = ACTIONS(207),
    [anon_sym_u32checked_neq] = ACTIONS(207),
    [anon_sym_locaddr] = ACTIONS(207),
    [anon_sym_loc_load] = ACTIONS(209),
    [anon_sym_loc_loadw] = ACTIONS(207),
    [anon_sym_loc_store] = ACTIONS(209),
    [anon_sym_loc_storew] = ACTIONS(207),
    [anon_sym_dup] = ACTIONS(209),
    [anon_sym_swap] = ACTIONS(209),
    [anon_sym_movup] = ACTIONS(209),
    [anon_sym_movdn] = ACTIONS(209),
    [anon_sym_adv_push] = ACTIONS(207),
    [anon_sym_dupw] = ACTIONS(207),
    [anon_sym_swapw] = ACTIONS(207),
    [anon_sym_movupw] = ACTIONS(207),
    [anon_sym_movdnw] = ACTIONS(207),
    [anon_sym_push] = ACTIONS(207),
    [anon_sym_if] = ACTIONS(207),
    [sym__else] = ACTIONS(207),
    [anon_sym_while] = ACTIONS(207),
    [anon_sym_repeat] = ACTIONS(207),
    [sym__end] = ACTIONS(207),
  },
  [21] = {
    [anon_sym_DOT] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(213),
    [anon_sym_call] = ACTIONS(215),
    [anon_sym_syscall] = ACTIONS(213),
    [anon_sym_assert] = ACTIONS(215),
    [anon_sym_assertz] = ACTIONS(213),
    [anon_sym_assert_eq] = ACTIONS(215),
    [anon_sym_neg] = ACTIONS(213),
    [anon_sym_inv] = ACTIONS(213),
    [anon_sym_pow2] = ACTIONS(213),
    [anon_sym_not] = ACTIONS(213),
    [anon_sym_and] = ACTIONS(213),
    [anon_sym_or] = ACTIONS(213),
    [anon_sym_xor] = ACTIONS(213),
    [anon_sym_lt] = ACTIONS(215),
    [anon_sym_lte] = ACTIONS(213),
    [anon_sym_gt] = ACTIONS(215),
    [anon_sym_gte] = ACTIONS(213),
    [anon_sym_eqw] = ACTIONS(213),
    [anon_sym_ext2add] = ACTIONS(213),
    [anon_sym_ext2sub] = ACTIONS(213),
    [anon_sym_ext2mul] = ACTIONS(213),
    [anon_sym_ext2div] = ACTIONS(213),
    [anon_sym_ext2neg] = ACTIONS(213),
    [anon_sym_ext2inv] = ACTIONS(213),
    [anon_sym_u32test] = ACTIONS(215),
    [anon_sym_u32testw] = ACTIONS(213),
    [anon_sym_u32assertw] = ACTIONS(213),
    [anon_sym_u32cast] = ACTIONS(213),
    [anon_sym_u32split] = ACTIONS(213),
    [anon_sym_u32overflowing_add3] = ACTIONS(213),
    [anon_sym_u32wrapping_add3] = ACTIONS(213),
    [anon_sym_u32overflowing_madd] = ACTIONS(213),
    [anon_sym_u32wrapping_madd] = ACTIONS(213),
    [anon_sym_u32checked_and] = ACTIONS(213),
    [anon_sym_u32checked_or] = ACTIONS(213),
    [anon_sym_u32checked_xor] = ACTIONS(213),
    [anon_sym_u32checked_not] = ACTIONS(213),
    [anon_sym_u32checked_popcnt] = ACTIONS(213),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(213),
    [anon_sym_u32checked_lt] = ACTIONS(215),
    [anon_sym_u32unchecked_lt] = ACTIONS(215),
    [anon_sym_u32checked_lte] = ACTIONS(213),
    [anon_sym_u32unchecked_lte] = ACTIONS(213),
    [anon_sym_u32checked_gt] = ACTIONS(215),
    [anon_sym_u32unchecked_gt] = ACTIONS(215),
    [anon_sym_u32checked_gte] = ACTIONS(213),
    [anon_sym_u32unchecked_gte] = ACTIONS(213),
    [anon_sym_u32checked_min] = ACTIONS(213),
    [anon_sym_u32unchecked_min] = ACTIONS(213),
    [anon_sym_u32checked_max] = ACTIONS(213),
    [anon_sym_u32unchecked_max] = ACTIONS(213),
    [anon_sym_drop] = ACTIONS(215),
    [anon_sym_dropw] = ACTIONS(213),
    [anon_sym_padw] = ACTIONS(213),
    [anon_sym_swapdw] = ACTIONS(213),
    [anon_sym_cswap] = ACTIONS(215),
    [anon_sym_cswapw] = ACTIONS(213),
    [anon_sym_cdrop] = ACTIONS(215),
    [anon_sym_cdropw] = ACTIONS(213),
    [anon_sym_sdepth] = ACTIONS(213),
    [anon_sym_mem_stream] = ACTIONS(213),
    [anon_sym_adv_pipe] = ACTIONS(213),
    [anon_sym_adv_loadw] = ACTIONS(213),
    [anon_sym_hmerge] = ACTIONS(213),
    [anon_sym_hperm] = ACTIONS(213),
    [anon_sym_mtree_get] = ACTIONS(213),
    [anon_sym_mtree_set] = ACTIONS(213),
    [anon_sym_mtree_cwm] = ACTIONS(213),
    [anon_sym_caller] = ACTIONS(213),
    [anon_sym_is_odd] = ACTIONS(213),
    [anon_sym_assert_eqw] = ACTIONS(213),
    [anon_sym_clk] = ACTIONS(213),
    [anon_sym_fri_ext2fold4] = ACTIONS(213),
    [anon_sym_hash] = ACTIONS(213),
    [anon_sym_adv] = ACTIONS(215),
    [anon_sym_exp] = ACTIONS(213),
    [anon_sym_u32assert] = ACTIONS(215),
    [anon_sym_add] = ACTIONS(213),
    [anon_sym_sub] = ACTIONS(213),
    [anon_sym_mul] = ACTIONS(213),
    [anon_sym_eq] = ACTIONS(215),
    [anon_sym_neq] = ACTIONS(213),
    [anon_sym_div] = ACTIONS(213),
    [anon_sym_mem_load] = ACTIONS(215),
    [anon_sym_mem_loadw] = ACTIONS(213),
    [anon_sym_mem_store] = ACTIONS(215),
    [anon_sym_mem_storew] = ACTIONS(213),
    [anon_sym_u32checked_add] = ACTIONS(213),
    [anon_sym_u32wrapping_add] = ACTIONS(215),
    [anon_sym_u32overflowing_add] = ACTIONS(215),
    [anon_sym_u32checked_sub] = ACTIONS(213),
    [anon_sym_u32wrapping_sub] = ACTIONS(213),
    [anon_sym_u32overflowing_sub] = ACTIONS(213),
    [anon_sym_u32checked_mul] = ACTIONS(213),
    [anon_sym_u32wrapping_mul] = ACTIONS(213),
    [anon_sym_u32overflowing_mul] = ACTIONS(213),
    [anon_sym_u32checked_div] = ACTIONS(215),
    [anon_sym_u32unchecked_div] = ACTIONS(215),
    [anon_sym_u32checked_mod] = ACTIONS(213),
    [anon_sym_u32unchecked_mod] = ACTIONS(213),
    [anon_sym_u32checked_divmod] = ACTIONS(213),
    [anon_sym_u32unchecked_divmod] = ACTIONS(213),
    [anon_sym_u32checked_shr] = ACTIONS(213),
    [anon_sym_u32unchecked_shr] = ACTIONS(213),
    [anon_sym_u32checked_shl] = ACTIONS(213),
    [anon_sym_u32unchecked_shl] = ACTIONS(213),
    [anon_sym_u32checked_rotr] = ACTIONS(213),
    [anon_sym_u32unchecked_rotr] = ACTIONS(213),
    [anon_sym_u32checked_rotl] = ACTIONS(213),
    [anon_sym_u32unchecked_rotl] = ACTIONS(213),
    [anon_sym_u32checked_eq] = ACTIONS(213),
    [anon_sym_u32checked_neq] = ACTIONS(213),
    [anon_sym_locaddr] = ACTIONS(213),
    [anon_sym_loc_load] = ACTIONS(215),
    [anon_sym_loc_loadw] = ACTIONS(213),
    [anon_sym_loc_store] = ACTIONS(215),
    [anon_sym_loc_storew] = ACTIONS(213),
    [anon_sym_dup] = ACTIONS(215),
    [anon_sym_swap] = ACTIONS(215),
    [anon_sym_movup] = ACTIONS(215),
    [anon_sym_movdn] = ACTIONS(215),
    [anon_sym_adv_push] = ACTIONS(213),
    [anon_sym_dupw] = ACTIONS(213),
    [anon_sym_swapw] = ACTIONS(213),
    [anon_sym_movupw] = ACTIONS(213),
    [anon_sym_movdnw] = ACTIONS(213),
    [anon_sym_push] = ACTIONS(213),
    [anon_sym_if] = ACTIONS(213),
    [sym__else] = ACTIONS(213),
    [anon_sym_while] = ACTIONS(213),
    [anon_sym_repeat] = ACTIONS(213),
    [sym__end] = ACTIONS(213),
  },
  [22] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(217),
    [anon_sym_COLON_COLON] = ACTIONS(219),
    [anon_sym_call] = ACTIONS(221),
    [anon_sym_syscall] = ACTIONS(217),
    [anon_sym_assert] = ACTIONS(221),
    [anon_sym_assertz] = ACTIONS(217),
    [anon_sym_assert_eq] = ACTIONS(221),
    [anon_sym_neg] = ACTIONS(217),
    [anon_sym_inv] = ACTIONS(217),
    [anon_sym_pow2] = ACTIONS(217),
    [anon_sym_not] = ACTIONS(217),
    [anon_sym_and] = ACTIONS(217),
    [anon_sym_or] = ACTIONS(217),
    [anon_sym_xor] = ACTIONS(217),
    [anon_sym_lt] = ACTIONS(221),
    [anon_sym_lte] = ACTIONS(217),
    [anon_sym_gt] = ACTIONS(221),
    [anon_sym_gte] = ACTIONS(217),
    [anon_sym_eqw] = ACTIONS(217),
    [anon_sym_ext2add] = ACTIONS(217),
    [anon_sym_ext2sub] = ACTIONS(217),
    [anon_sym_ext2mul] = ACTIONS(217),
    [anon_sym_ext2div] = ACTIONS(217),
    [anon_sym_ext2neg] = ACTIONS(217),
    [anon_sym_ext2inv] = ACTIONS(217),
    [anon_sym_u32test] = ACTIONS(221),
    [anon_sym_u32testw] = ACTIONS(217),
    [anon_sym_u32assertw] = ACTIONS(217),
    [anon_sym_u32cast] = ACTIONS(217),
    [anon_sym_u32split] = ACTIONS(217),
    [anon_sym_u32overflowing_add3] = ACTIONS(217),
    [anon_sym_u32wrapping_add3] = ACTIONS(217),
    [anon_sym_u32overflowing_madd] = ACTIONS(217),
    [anon_sym_u32wrapping_madd] = ACTIONS(217),
    [anon_sym_u32checked_and] = ACTIONS(217),
    [anon_sym_u32checked_or] = ACTIONS(217),
    [anon_sym_u32checked_xor] = ACTIONS(217),
    [anon_sym_u32checked_not] = ACTIONS(217),
    [anon_sym_u32checked_popcnt] = ACTIONS(217),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(217),
    [anon_sym_u32checked_lt] = ACTIONS(221),
    [anon_sym_u32unchecked_lt] = ACTIONS(221),
    [anon_sym_u32checked_lte] = ACTIONS(217),
    [anon_sym_u32unchecked_lte] = ACTIONS(217),
    [anon_sym_u32checked_gt] = ACTIONS(221),
    [anon_sym_u32unchecked_gt] = ACTIONS(221),
    [anon_sym_u32checked_gte] = ACTIONS(217),
    [anon_sym_u32unchecked_gte] = ACTIONS(217),
    [anon_sym_u32checked_min] = ACTIONS(217),
    [anon_sym_u32unchecked_min] = ACTIONS(217),
    [anon_sym_u32checked_max] = ACTIONS(217),
    [anon_sym_u32unchecked_max] = ACTIONS(217),
    [anon_sym_drop] = ACTIONS(221),
    [anon_sym_dropw] = ACTIONS(217),
    [anon_sym_padw] = ACTIONS(217),
    [anon_sym_swapdw] = ACTIONS(217),
    [anon_sym_cswap] = ACTIONS(221),
    [anon_sym_cswapw] = ACTIONS(217),
    [anon_sym_cdrop] = ACTIONS(221),
    [anon_sym_cdropw] = ACTIONS(217),
    [anon_sym_sdepth] = ACTIONS(217),
    [anon_sym_mem_stream] = ACTIONS(217),
    [anon_sym_adv_pipe] = ACTIONS(217),
    [anon_sym_adv_loadw] = ACTIONS(217),
    [anon_sym_hmerge] = ACTIONS(217),
    [anon_sym_hperm] = ACTIONS(217),
    [anon_sym_mtree_get] = ACTIONS(217),
    [anon_sym_mtree_set] = ACTIONS(217),
    [anon_sym_mtree_cwm] = ACTIONS(217),
    [anon_sym_caller] = ACTIONS(217),
    [anon_sym_is_odd] = ACTIONS(217),
    [anon_sym_assert_eqw] = ACTIONS(217),
    [anon_sym_clk] = ACTIONS(217),
    [anon_sym_fri_ext2fold4] = ACTIONS(217),
    [anon_sym_hash] = ACTIONS(217),
    [anon_sym_adv] = ACTIONS(221),
    [anon_sym_exp] = ACTIONS(217),
    [anon_sym_u32assert] = ACTIONS(221),
    [anon_sym_add] = ACTIONS(217),
    [anon_sym_sub] = ACTIONS(217),
    [anon_sym_mul] = ACTIONS(217),
    [anon_sym_eq] = ACTIONS(221),
    [anon_sym_neq] = ACTIONS(217),
    [anon_sym_div] = ACTIONS(217),
    [anon_sym_mem_load] = ACTIONS(221),
    [anon_sym_mem_loadw] = ACTIONS(217),
    [anon_sym_mem_store] = ACTIONS(221),
    [anon_sym_mem_storew] = ACTIONS(217),
    [anon_sym_u32checked_add] = ACTIONS(217),
    [anon_sym_u32wrapping_add] = ACTIONS(221),
    [anon_sym_u32overflowing_add] = ACTIONS(221),
    [anon_sym_u32checked_sub] = ACTIONS(217),
    [anon_sym_u32wrapping_sub] = ACTIONS(217),
    [anon_sym_u32overflowing_sub] = ACTIONS(217),
    [anon_sym_u32checked_mul] = ACTIONS(217),
    [anon_sym_u32wrapping_mul] = ACTIONS(217),
    [anon_sym_u32overflowing_mul] = ACTIONS(217),
    [anon_sym_u32checked_div] = ACTIONS(221),
    [anon_sym_u32unchecked_div] = ACTIONS(221),
    [anon_sym_u32checked_mod] = ACTIONS(217),
    [anon_sym_u32unchecked_mod] = ACTIONS(217),
    [anon_sym_u32checked_divmod] = ACTIONS(217),
    [anon_sym_u32unchecked_divmod] = ACTIONS(217),
    [anon_sym_u32checked_shr] = ACTIONS(217),
    [anon_sym_u32unchecked_shr] = ACTIONS(217),
    [anon_sym_u32checked_shl] = ACTIONS(217),
    [anon_sym_u32unchecked_shl] = ACTIONS(217),
    [anon_sym_u32checked_rotr] = ACTIONS(217),
    [anon_sym_u32unchecked_rotr] = ACTIONS(217),
    [anon_sym_u32checked_rotl] = ACTIONS(217),
    [anon_sym_u32unchecked_rotl] = ACTIONS(217),
    [anon_sym_u32checked_eq] = ACTIONS(217),
    [anon_sym_u32checked_neq] = ACTIONS(217),
    [anon_sym_locaddr] = ACTIONS(217),
    [anon_sym_loc_load] = ACTIONS(221),
    [anon_sym_loc_loadw] = ACTIONS(217),
    [anon_sym_loc_store] = ACTIONS(221),
    [anon_sym_loc_storew] = ACTIONS(217),
    [anon_sym_dup] = ACTIONS(221),
    [anon_sym_swap] = ACTIONS(221),
    [anon_sym_movup] = ACTIONS(221),
    [anon_sym_movdn] = ACTIONS(221),
    [anon_sym_adv_push] = ACTIONS(217),
    [anon_sym_dupw] = ACTIONS(217),
    [anon_sym_swapw] = ACTIONS(217),
    [anon_sym_movupw] = ACTIONS(217),
    [anon_sym_movdnw] = ACTIONS(217),
    [anon_sym_push] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(217),
    [sym__else] = ACTIONS(217),
    [anon_sym_while] = ACTIONS(217),
    [anon_sym_repeat] = ACTIONS(217),
    [sym__end] = ACTIONS(217),
  },
  [23] = {
    [anon_sym_DOT] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(225),
    [anon_sym_call] = ACTIONS(227),
    [anon_sym_syscall] = ACTIONS(225),
    [anon_sym_assert] = ACTIONS(227),
    [anon_sym_assertz] = ACTIONS(225),
    [anon_sym_assert_eq] = ACTIONS(227),
    [anon_sym_neg] = ACTIONS(225),
    [anon_sym_inv] = ACTIONS(225),
    [anon_sym_pow2] = ACTIONS(225),
    [anon_sym_not] = ACTIONS(225),
    [anon_sym_and] = ACTIONS(225),
    [anon_sym_or] = ACTIONS(225),
    [anon_sym_xor] = ACTIONS(225),
    [anon_sym_lt] = ACTIONS(227),
    [anon_sym_lte] = ACTIONS(225),
    [anon_sym_gt] = ACTIONS(227),
    [anon_sym_gte] = ACTIONS(225),
    [anon_sym_eqw] = ACTIONS(225),
    [anon_sym_ext2add] = ACTIONS(225),
    [anon_sym_ext2sub] = ACTIONS(225),
    [anon_sym_ext2mul] = ACTIONS(225),
    [anon_sym_ext2div] = ACTIONS(225),
    [anon_sym_ext2neg] = ACTIONS(225),
    [anon_sym_ext2inv] = ACTIONS(225),
    [anon_sym_u32test] = ACTIONS(227),
    [anon_sym_u32testw] = ACTIONS(225),
    [anon_sym_u32assertw] = ACTIONS(225),
    [anon_sym_u32cast] = ACTIONS(225),
    [anon_sym_u32split] = ACTIONS(225),
    [anon_sym_u32overflowing_add3] = ACTIONS(225),
    [anon_sym_u32wrapping_add3] = ACTIONS(225),
    [anon_sym_u32overflowing_madd] = ACTIONS(225),
    [anon_sym_u32wrapping_madd] = ACTIONS(225),
    [anon_sym_u32checked_and] = ACTIONS(225),
    [anon_sym_u32checked_or] = ACTIONS(225),
    [anon_sym_u32checked_xor] = ACTIONS(225),
    [anon_sym_u32checked_not] = ACTIONS(225),
    [anon_sym_u32checked_popcnt] = ACTIONS(225),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(225),
    [anon_sym_u32checked_lt] = ACTIONS(227),
    [anon_sym_u32unchecked_lt] = ACTIONS(227),
    [anon_sym_u32checked_lte] = ACTIONS(225),
    [anon_sym_u32unchecked_lte] = ACTIONS(225),
    [anon_sym_u32checked_gt] = ACTIONS(227),
    [anon_sym_u32unchecked_gt] = ACTIONS(227),
    [anon_sym_u32checked_gte] = ACTIONS(225),
    [anon_sym_u32unchecked_gte] = ACTIONS(225),
    [anon_sym_u32checked_min] = ACTIONS(225),
    [anon_sym_u32unchecked_min] = ACTIONS(225),
    [anon_sym_u32checked_max] = ACTIONS(225),
    [anon_sym_u32unchecked_max] = ACTIONS(225),
    [anon_sym_drop] = ACTIONS(227),
    [anon_sym_dropw] = ACTIONS(225),
    [anon_sym_padw] = ACTIONS(225),
    [anon_sym_swapdw] = ACTIONS(225),
    [anon_sym_cswap] = ACTIONS(227),
    [anon_sym_cswapw] = ACTIONS(225),
    [anon_sym_cdrop] = ACTIONS(227),
    [anon_sym_cdropw] = ACTIONS(225),
    [anon_sym_sdepth] = ACTIONS(225),
    [anon_sym_mem_stream] = ACTIONS(225),
    [anon_sym_adv_pipe] = ACTIONS(225),
    [anon_sym_adv_loadw] = ACTIONS(225),
    [anon_sym_hmerge] = ACTIONS(225),
    [anon_sym_hperm] = ACTIONS(225),
    [anon_sym_mtree_get] = ACTIONS(225),
    [anon_sym_mtree_set] = ACTIONS(225),
    [anon_sym_mtree_cwm] = ACTIONS(225),
    [anon_sym_caller] = ACTIONS(225),
    [anon_sym_is_odd] = ACTIONS(225),
    [anon_sym_assert_eqw] = ACTIONS(225),
    [anon_sym_clk] = ACTIONS(225),
    [anon_sym_fri_ext2fold4] = ACTIONS(225),
    [anon_sym_hash] = ACTIONS(225),
    [anon_sym_adv] = ACTIONS(227),
    [anon_sym_exp] = ACTIONS(225),
    [anon_sym_u32assert] = ACTIONS(227),
    [anon_sym_add] = ACTIONS(225),
    [anon_sym_sub] = ACTIONS(225),
    [anon_sym_mul] = ACTIONS(225),
    [anon_sym_eq] = ACTIONS(227),
    [anon_sym_neq] = ACTIONS(225),
    [anon_sym_div] = ACTIONS(225),
    [anon_sym_mem_load] = ACTIONS(227),
    [anon_sym_mem_loadw] = ACTIONS(225),
    [anon_sym_mem_store] = ACTIONS(227),
    [anon_sym_mem_storew] = ACTIONS(225),
    [anon_sym_u32checked_add] = ACTIONS(225),
    [anon_sym_u32wrapping_add] = ACTIONS(227),
    [anon_sym_u32overflowing_add] = ACTIONS(227),
    [anon_sym_u32checked_sub] = ACTIONS(225),
    [anon_sym_u32wrapping_sub] = ACTIONS(225),
    [anon_sym_u32overflowing_sub] = ACTIONS(225),
    [anon_sym_u32checked_mul] = ACTIONS(225),
    [anon_sym_u32wrapping_mul] = ACTIONS(225),
    [anon_sym_u32overflowing_mul] = ACTIONS(225),
    [anon_sym_u32checked_div] = ACTIONS(227),
    [anon_sym_u32unchecked_div] = ACTIONS(227),
    [anon_sym_u32checked_mod] = ACTIONS(225),
    [anon_sym_u32unchecked_mod] = ACTIONS(225),
    [anon_sym_u32checked_divmod] = ACTIONS(225),
    [anon_sym_u32unchecked_divmod] = ACTIONS(225),
    [anon_sym_u32checked_shr] = ACTIONS(225),
    [anon_sym_u32unchecked_shr] = ACTIONS(225),
    [anon_sym_u32checked_shl] = ACTIONS(225),
    [anon_sym_u32unchecked_shl] = ACTIONS(225),
    [anon_sym_u32checked_rotr] = ACTIONS(225),
    [anon_sym_u32unchecked_rotr] = ACTIONS(225),
    [anon_sym_u32checked_rotl] = ACTIONS(225),
    [anon_sym_u32unchecked_rotl] = ACTIONS(225),
    [anon_sym_u32checked_eq] = ACTIONS(225),
    [anon_sym_u32checked_neq] = ACTIONS(225),
    [anon_sym_locaddr] = ACTIONS(225),
    [anon_sym_loc_load] = ACTIONS(227),
    [anon_sym_loc_loadw] = ACTIONS(225),
    [anon_sym_loc_store] = ACTIONS(227),
    [anon_sym_loc_storew] = ACTIONS(225),
    [anon_sym_dup] = ACTIONS(227),
    [anon_sym_swap] = ACTIONS(227),
    [anon_sym_movup] = ACTIONS(227),
    [anon_sym_movdn] = ACTIONS(227),
    [anon_sym_adv_push] = ACTIONS(225),
    [anon_sym_dupw] = ACTIONS(225),
    [anon_sym_swapw] = ACTIONS(225),
    [anon_sym_movupw] = ACTIONS(225),
    [anon_sym_movdnw] = ACTIONS(225),
    [anon_sym_push] = ACTIONS(225),
    [anon_sym_if] = ACTIONS(225),
    [sym__else] = ACTIONS(225),
    [anon_sym_while] = ACTIONS(225),
    [anon_sym_repeat] = ACTIONS(225),
    [sym__end] = ACTIONS(225),
  },
  [24] = {
    [anon_sym_DOT] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(201),
    [anon_sym_call] = ACTIONS(203),
    [anon_sym_syscall] = ACTIONS(201),
    [anon_sym_assert] = ACTIONS(203),
    [anon_sym_assertz] = ACTIONS(201),
    [anon_sym_assert_eq] = ACTIONS(203),
    [anon_sym_neg] = ACTIONS(201),
    [anon_sym_inv] = ACTIONS(201),
    [anon_sym_pow2] = ACTIONS(201),
    [anon_sym_not] = ACTIONS(201),
    [anon_sym_and] = ACTIONS(201),
    [anon_sym_or] = ACTIONS(201),
    [anon_sym_xor] = ACTIONS(201),
    [anon_sym_lt] = ACTIONS(203),
    [anon_sym_lte] = ACTIONS(201),
    [anon_sym_gt] = ACTIONS(203),
    [anon_sym_gte] = ACTIONS(201),
    [anon_sym_eqw] = ACTIONS(201),
    [anon_sym_ext2add] = ACTIONS(201),
    [anon_sym_ext2sub] = ACTIONS(201),
    [anon_sym_ext2mul] = ACTIONS(201),
    [anon_sym_ext2div] = ACTIONS(201),
    [anon_sym_ext2neg] = ACTIONS(201),
    [anon_sym_ext2inv] = ACTIONS(201),
    [anon_sym_u32test] = ACTIONS(203),
    [anon_sym_u32testw] = ACTIONS(201),
    [anon_sym_u32assertw] = ACTIONS(201),
    [anon_sym_u32cast] = ACTIONS(201),
    [anon_sym_u32split] = ACTIONS(201),
    [anon_sym_u32overflowing_add3] = ACTIONS(201),
    [anon_sym_u32wrapping_add3] = ACTIONS(201),
    [anon_sym_u32overflowing_madd] = ACTIONS(201),
    [anon_sym_u32wrapping_madd] = ACTIONS(201),
    [anon_sym_u32checked_and] = ACTIONS(201),
    [anon_sym_u32checked_or] = ACTIONS(201),
    [anon_sym_u32checked_xor] = ACTIONS(201),
    [anon_sym_u32checked_not] = ACTIONS(201),
    [anon_sym_u32checked_popcnt] = ACTIONS(201),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(201),
    [anon_sym_u32checked_lt] = ACTIONS(203),
    [anon_sym_u32unchecked_lt] = ACTIONS(203),
    [anon_sym_u32checked_lte] = ACTIONS(201),
    [anon_sym_u32unchecked_lte] = ACTIONS(201),
    [anon_sym_u32checked_gt] = ACTIONS(203),
    [anon_sym_u32unchecked_gt] = ACTIONS(203),
    [anon_sym_u32checked_gte] = ACTIONS(201),
    [anon_sym_u32unchecked_gte] = ACTIONS(201),
    [anon_sym_u32checked_min] = ACTIONS(201),
    [anon_sym_u32unchecked_min] = ACTIONS(201),
    [anon_sym_u32checked_max] = ACTIONS(201),
    [anon_sym_u32unchecked_max] = ACTIONS(201),
    [anon_sym_drop] = ACTIONS(203),
    [anon_sym_dropw] = ACTIONS(201),
    [anon_sym_padw] = ACTIONS(201),
    [anon_sym_swapdw] = ACTIONS(201),
    [anon_sym_cswap] = ACTIONS(203),
    [anon_sym_cswapw] = ACTIONS(201),
    [anon_sym_cdrop] = ACTIONS(203),
    [anon_sym_cdropw] = ACTIONS(201),
    [anon_sym_sdepth] = ACTIONS(201),
    [anon_sym_mem_stream] = ACTIONS(201),
    [anon_sym_adv_pipe] = ACTIONS(201),
    [anon_sym_adv_loadw] = ACTIONS(201),
    [anon_sym_hmerge] = ACTIONS(201),
    [anon_sym_hperm] = ACTIONS(201),
    [anon_sym_mtree_get] = ACTIONS(201),
    [anon_sym_mtree_set] = ACTIONS(201),
    [anon_sym_mtree_cwm] = ACTIONS(201),
    [anon_sym_caller] = ACTIONS(201),
    [anon_sym_is_odd] = ACTIONS(201),
    [anon_sym_assert_eqw] = ACTIONS(201),
    [anon_sym_clk] = ACTIONS(201),
    [anon_sym_fri_ext2fold4] = ACTIONS(201),
    [anon_sym_hash] = ACTIONS(201),
    [anon_sym_adv] = ACTIONS(203),
    [anon_sym_exp] = ACTIONS(201),
    [anon_sym_u32assert] = ACTIONS(203),
    [anon_sym_add] = ACTIONS(201),
    [anon_sym_sub] = ACTIONS(201),
    [anon_sym_mul] = ACTIONS(201),
    [anon_sym_eq] = ACTIONS(203),
    [anon_sym_neq] = ACTIONS(201),
    [anon_sym_div] = ACTIONS(201),
    [anon_sym_mem_load] = ACTIONS(203),
    [anon_sym_mem_loadw] = ACTIONS(201),
    [anon_sym_mem_store] = ACTIONS(203),
    [anon_sym_mem_storew] = ACTIONS(201),
    [anon_sym_u32checked_add] = ACTIONS(201),
    [anon_sym_u32wrapping_add] = ACTIONS(203),
    [anon_sym_u32overflowing_add] = ACTIONS(203),
    [anon_sym_u32checked_sub] = ACTIONS(201),
    [anon_sym_u32wrapping_sub] = ACTIONS(201),
    [anon_sym_u32overflowing_sub] = ACTIONS(201),
    [anon_sym_u32checked_mul] = ACTIONS(201),
    [anon_sym_u32wrapping_mul] = ACTIONS(201),
    [anon_sym_u32overflowing_mul] = ACTIONS(201),
    [anon_sym_u32checked_div] = ACTIONS(203),
    [anon_sym_u32unchecked_div] = ACTIONS(203),
    [anon_sym_u32checked_mod] = ACTIONS(201),
    [anon_sym_u32unchecked_mod] = ACTIONS(201),
    [anon_sym_u32checked_divmod] = ACTIONS(201),
    [anon_sym_u32unchecked_divmod] = ACTIONS(201),
    [anon_sym_u32checked_shr] = ACTIONS(201),
    [anon_sym_u32unchecked_shr] = ACTIONS(201),
    [anon_sym_u32checked_shl] = ACTIONS(201),
    [anon_sym_u32unchecked_shl] = ACTIONS(201),
    [anon_sym_u32checked_rotr] = ACTIONS(201),
    [anon_sym_u32unchecked_rotr] = ACTIONS(201),
    [anon_sym_u32checked_rotl] = ACTIONS(201),
    [anon_sym_u32unchecked_rotl] = ACTIONS(201),
    [anon_sym_u32checked_eq] = ACTIONS(201),
    [anon_sym_u32checked_neq] = ACTIONS(201),
    [anon_sym_locaddr] = ACTIONS(201),
    [anon_sym_loc_load] = ACTIONS(203),
    [anon_sym_loc_loadw] = ACTIONS(201),
    [anon_sym_loc_store] = ACTIONS(203),
    [anon_sym_loc_storew] = ACTIONS(201),
    [anon_sym_dup] = ACTIONS(203),
    [anon_sym_swap] = ACTIONS(203),
    [anon_sym_movup] = ACTIONS(203),
    [anon_sym_movdn] = ACTIONS(203),
    [anon_sym_adv_push] = ACTIONS(201),
    [anon_sym_dupw] = ACTIONS(201),
    [anon_sym_swapw] = ACTIONS(201),
    [anon_sym_movupw] = ACTIONS(201),
    [anon_sym_movdnw] = ACTIONS(201),
    [anon_sym_push] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(201),
    [sym__else] = ACTIONS(201),
    [anon_sym_while] = ACTIONS(201),
    [anon_sym_repeat] = ACTIONS(201),
    [sym__end] = ACTIONS(201),
  },
  [25] = {
    [anon_sym_DOT] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(231),
    [anon_sym_call] = ACTIONS(233),
    [anon_sym_syscall] = ACTIONS(231),
    [anon_sym_assert] = ACTIONS(233),
    [anon_sym_assertz] = ACTIONS(231),
    [anon_sym_assert_eq] = ACTIONS(233),
    [anon_sym_neg] = ACTIONS(231),
    [anon_sym_inv] = ACTIONS(231),
    [anon_sym_pow2] = ACTIONS(231),
    [anon_sym_not] = ACTIONS(231),
    [anon_sym_and] = ACTIONS(231),
    [anon_sym_or] = ACTIONS(231),
    [anon_sym_xor] = ACTIONS(231),
    [anon_sym_lt] = ACTIONS(233),
    [anon_sym_lte] = ACTIONS(231),
    [anon_sym_gt] = ACTIONS(233),
    [anon_sym_gte] = ACTIONS(231),
    [anon_sym_eqw] = ACTIONS(231),
    [anon_sym_ext2add] = ACTIONS(231),
    [anon_sym_ext2sub] = ACTIONS(231),
    [anon_sym_ext2mul] = ACTIONS(231),
    [anon_sym_ext2div] = ACTIONS(231),
    [anon_sym_ext2neg] = ACTIONS(231),
    [anon_sym_ext2inv] = ACTIONS(231),
    [anon_sym_u32test] = ACTIONS(233),
    [anon_sym_u32testw] = ACTIONS(231),
    [anon_sym_u32assertw] = ACTIONS(231),
    [anon_sym_u32cast] = ACTIONS(231),
    [anon_sym_u32split] = ACTIONS(231),
    [anon_sym_u32overflowing_add3] = ACTIONS(231),
    [anon_sym_u32wrapping_add3] = ACTIONS(231),
    [anon_sym_u32overflowing_madd] = ACTIONS(231),
    [anon_sym_u32wrapping_madd] = ACTIONS(231),
    [anon_sym_u32checked_and] = ACTIONS(231),
    [anon_sym_u32checked_or] = ACTIONS(231),
    [anon_sym_u32checked_xor] = ACTIONS(231),
    [anon_sym_u32checked_not] = ACTIONS(231),
    [anon_sym_u32checked_popcnt] = ACTIONS(231),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(231),
    [anon_sym_u32checked_lt] = ACTIONS(233),
    [anon_sym_u32unchecked_lt] = ACTIONS(233),
    [anon_sym_u32checked_lte] = ACTIONS(231),
    [anon_sym_u32unchecked_lte] = ACTIONS(231),
    [anon_sym_u32checked_gt] = ACTIONS(233),
    [anon_sym_u32unchecked_gt] = ACTIONS(233),
    [anon_sym_u32checked_gte] = ACTIONS(231),
    [anon_sym_u32unchecked_gte] = ACTIONS(231),
    [anon_sym_u32checked_min] = ACTIONS(231),
    [anon_sym_u32unchecked_min] = ACTIONS(231),
    [anon_sym_u32checked_max] = ACTIONS(231),
    [anon_sym_u32unchecked_max] = ACTIONS(231),
    [anon_sym_drop] = ACTIONS(233),
    [anon_sym_dropw] = ACTIONS(231),
    [anon_sym_padw] = ACTIONS(231),
    [anon_sym_swapdw] = ACTIONS(231),
    [anon_sym_cswap] = ACTIONS(233),
    [anon_sym_cswapw] = ACTIONS(231),
    [anon_sym_cdrop] = ACTIONS(233),
    [anon_sym_cdropw] = ACTIONS(231),
    [anon_sym_sdepth] = ACTIONS(231),
    [anon_sym_mem_stream] = ACTIONS(231),
    [anon_sym_adv_pipe] = ACTIONS(231),
    [anon_sym_adv_loadw] = ACTIONS(231),
    [anon_sym_hmerge] = ACTIONS(231),
    [anon_sym_hperm] = ACTIONS(231),
    [anon_sym_mtree_get] = ACTIONS(231),
    [anon_sym_mtree_set] = ACTIONS(231),
    [anon_sym_mtree_cwm] = ACTIONS(231),
    [anon_sym_caller] = ACTIONS(231),
    [anon_sym_is_odd] = ACTIONS(231),
    [anon_sym_assert_eqw] = ACTIONS(231),
    [anon_sym_clk] = ACTIONS(231),
    [anon_sym_fri_ext2fold4] = ACTIONS(231),
    [anon_sym_hash] = ACTIONS(231),
    [anon_sym_adv] = ACTIONS(233),
    [anon_sym_exp] = ACTIONS(231),
    [anon_sym_u32assert] = ACTIONS(233),
    [anon_sym_add] = ACTIONS(231),
    [anon_sym_sub] = ACTIONS(231),
    [anon_sym_mul] = ACTIONS(231),
    [anon_sym_eq] = ACTIONS(233),
    [anon_sym_neq] = ACTIONS(231),
    [anon_sym_div] = ACTIONS(231),
    [anon_sym_mem_load] = ACTIONS(233),
    [anon_sym_mem_loadw] = ACTIONS(231),
    [anon_sym_mem_store] = ACTIONS(233),
    [anon_sym_mem_storew] = ACTIONS(231),
    [anon_sym_u32checked_add] = ACTIONS(231),
    [anon_sym_u32wrapping_add] = ACTIONS(233),
    [anon_sym_u32overflowing_add] = ACTIONS(233),
    [anon_sym_u32checked_sub] = ACTIONS(231),
    [anon_sym_u32wrapping_sub] = ACTIONS(231),
    [anon_sym_u32overflowing_sub] = ACTIONS(231),
    [anon_sym_u32checked_mul] = ACTIONS(231),
    [anon_sym_u32wrapping_mul] = ACTIONS(231),
    [anon_sym_u32overflowing_mul] = ACTIONS(231),
    [anon_sym_u32checked_div] = ACTIONS(233),
    [anon_sym_u32unchecked_div] = ACTIONS(233),
    [anon_sym_u32checked_mod] = ACTIONS(231),
    [anon_sym_u32unchecked_mod] = ACTIONS(231),
    [anon_sym_u32checked_divmod] = ACTIONS(231),
    [anon_sym_u32unchecked_divmod] = ACTIONS(231),
    [anon_sym_u32checked_shr] = ACTIONS(231),
    [anon_sym_u32unchecked_shr] = ACTIONS(231),
    [anon_sym_u32checked_shl] = ACTIONS(231),
    [anon_sym_u32unchecked_shl] = ACTIONS(231),
    [anon_sym_u32checked_rotr] = ACTIONS(231),
    [anon_sym_u32unchecked_rotr] = ACTIONS(231),
    [anon_sym_u32checked_rotl] = ACTIONS(231),
    [anon_sym_u32unchecked_rotl] = ACTIONS(231),
    [anon_sym_u32checked_eq] = ACTIONS(231),
    [anon_sym_u32checked_neq] = ACTIONS(231),
    [anon_sym_locaddr] = ACTIONS(231),
    [anon_sym_loc_load] = ACTIONS(233),
    [anon_sym_loc_loadw] = ACTIONS(231),
    [anon_sym_loc_store] = ACTIONS(233),
    [anon_sym_loc_storew] = ACTIONS(231),
    [anon_sym_dup] = ACTIONS(233),
    [anon_sym_swap] = ACTIONS(233),
    [anon_sym_movup] = ACTIONS(233),
    [anon_sym_movdn] = ACTIONS(233),
    [anon_sym_adv_push] = ACTIONS(231),
    [anon_sym_dupw] = ACTIONS(231),
    [anon_sym_swapw] = ACTIONS(231),
    [anon_sym_movupw] = ACTIONS(231),
    [anon_sym_movdnw] = ACTIONS(231),
    [anon_sym_push] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(231),
    [sym__else] = ACTIONS(231),
    [anon_sym_while] = ACTIONS(231),
    [anon_sym_repeat] = ACTIONS(231),
    [sym__end] = ACTIONS(231),
  },
  [26] = {
    [anon_sym_DOT] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(237),
    [anon_sym_call] = ACTIONS(239),
    [anon_sym_syscall] = ACTIONS(237),
    [anon_sym_assert] = ACTIONS(239),
    [anon_sym_assertz] = ACTIONS(237),
    [anon_sym_assert_eq] = ACTIONS(239),
    [anon_sym_neg] = ACTIONS(237),
    [anon_sym_inv] = ACTIONS(237),
    [anon_sym_pow2] = ACTIONS(237),
    [anon_sym_not] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(237),
    [anon_sym_or] = ACTIONS(237),
    [anon_sym_xor] = ACTIONS(237),
    [anon_sym_lt] = ACTIONS(239),
    [anon_sym_lte] = ACTIONS(237),
    [anon_sym_gt] = ACTIONS(239),
    [anon_sym_gte] = ACTIONS(237),
    [anon_sym_eqw] = ACTIONS(237),
    [anon_sym_ext2add] = ACTIONS(237),
    [anon_sym_ext2sub] = ACTIONS(237),
    [anon_sym_ext2mul] = ACTIONS(237),
    [anon_sym_ext2div] = ACTIONS(237),
    [anon_sym_ext2neg] = ACTIONS(237),
    [anon_sym_ext2inv] = ACTIONS(237),
    [anon_sym_u32test] = ACTIONS(239),
    [anon_sym_u32testw] = ACTIONS(237),
    [anon_sym_u32assertw] = ACTIONS(237),
    [anon_sym_u32cast] = ACTIONS(237),
    [anon_sym_u32split] = ACTIONS(237),
    [anon_sym_u32overflowing_add3] = ACTIONS(237),
    [anon_sym_u32wrapping_add3] = ACTIONS(237),
    [anon_sym_u32overflowing_madd] = ACTIONS(237),
    [anon_sym_u32wrapping_madd] = ACTIONS(237),
    [anon_sym_u32checked_and] = ACTIONS(237),
    [anon_sym_u32checked_or] = ACTIONS(237),
    [anon_sym_u32checked_xor] = ACTIONS(237),
    [anon_sym_u32checked_not] = ACTIONS(237),
    [anon_sym_u32checked_popcnt] = ACTIONS(237),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(237),
    [anon_sym_u32checked_lt] = ACTIONS(239),
    [anon_sym_u32unchecked_lt] = ACTIONS(239),
    [anon_sym_u32checked_lte] = ACTIONS(237),
    [anon_sym_u32unchecked_lte] = ACTIONS(237),
    [anon_sym_u32checked_gt] = ACTIONS(239),
    [anon_sym_u32unchecked_gt] = ACTIONS(239),
    [anon_sym_u32checked_gte] = ACTIONS(237),
    [anon_sym_u32unchecked_gte] = ACTIONS(237),
    [anon_sym_u32checked_min] = ACTIONS(237),
    [anon_sym_u32unchecked_min] = ACTIONS(237),
    [anon_sym_u32checked_max] = ACTIONS(237),
    [anon_sym_u32unchecked_max] = ACTIONS(237),
    [anon_sym_drop] = ACTIONS(239),
    [anon_sym_dropw] = ACTIONS(237),
    [anon_sym_padw] = ACTIONS(237),
    [anon_sym_swapdw] = ACTIONS(237),
    [anon_sym_cswap] = ACTIONS(239),
    [anon_sym_cswapw] = ACTIONS(237),
    [anon_sym_cdrop] = ACTIONS(239),
    [anon_sym_cdropw] = ACTIONS(237),
    [anon_sym_sdepth] = ACTIONS(237),
    [anon_sym_mem_stream] = ACTIONS(237),
    [anon_sym_adv_pipe] = ACTIONS(237),
    [anon_sym_adv_loadw] = ACTIONS(237),
    [anon_sym_hmerge] = ACTIONS(237),
    [anon_sym_hperm] = ACTIONS(237),
    [anon_sym_mtree_get] = ACTIONS(237),
    [anon_sym_mtree_set] = ACTIONS(237),
    [anon_sym_mtree_cwm] = ACTIONS(237),
    [anon_sym_caller] = ACTIONS(237),
    [anon_sym_is_odd] = ACTIONS(237),
    [anon_sym_assert_eqw] = ACTIONS(237),
    [anon_sym_clk] = ACTIONS(237),
    [anon_sym_fri_ext2fold4] = ACTIONS(237),
    [anon_sym_hash] = ACTIONS(237),
    [anon_sym_adv] = ACTIONS(239),
    [anon_sym_exp] = ACTIONS(237),
    [anon_sym_u32assert] = ACTIONS(239),
    [anon_sym_add] = ACTIONS(237),
    [anon_sym_sub] = ACTIONS(237),
    [anon_sym_mul] = ACTIONS(237),
    [anon_sym_eq] = ACTIONS(239),
    [anon_sym_neq] = ACTIONS(237),
    [anon_sym_div] = ACTIONS(237),
    [anon_sym_mem_load] = ACTIONS(239),
    [anon_sym_mem_loadw] = ACTIONS(237),
    [anon_sym_mem_store] = ACTIONS(239),
    [anon_sym_mem_storew] = ACTIONS(237),
    [anon_sym_u32checked_add] = ACTIONS(237),
    [anon_sym_u32wrapping_add] = ACTIONS(239),
    [anon_sym_u32overflowing_add] = ACTIONS(239),
    [anon_sym_u32checked_sub] = ACTIONS(237),
    [anon_sym_u32wrapping_sub] = ACTIONS(237),
    [anon_sym_u32overflowing_sub] = ACTIONS(237),
    [anon_sym_u32checked_mul] = ACTIONS(237),
    [anon_sym_u32wrapping_mul] = ACTIONS(237),
    [anon_sym_u32overflowing_mul] = ACTIONS(237),
    [anon_sym_u32checked_div] = ACTIONS(239),
    [anon_sym_u32unchecked_div] = ACTIONS(239),
    [anon_sym_u32checked_mod] = ACTIONS(237),
    [anon_sym_u32unchecked_mod] = ACTIONS(237),
    [anon_sym_u32checked_divmod] = ACTIONS(237),
    [anon_sym_u32unchecked_divmod] = ACTIONS(237),
    [anon_sym_u32checked_shr] = ACTIONS(237),
    [anon_sym_u32unchecked_shr] = ACTIONS(237),
    [anon_sym_u32checked_shl] = ACTIONS(237),
    [anon_sym_u32unchecked_shl] = ACTIONS(237),
    [anon_sym_u32checked_rotr] = ACTIONS(237),
    [anon_sym_u32unchecked_rotr] = ACTIONS(237),
    [anon_sym_u32checked_rotl] = ACTIONS(237),
    [anon_sym_u32unchecked_rotl] = ACTIONS(237),
    [anon_sym_u32checked_eq] = ACTIONS(237),
    [anon_sym_u32checked_neq] = ACTIONS(237),
    [anon_sym_locaddr] = ACTIONS(237),
    [anon_sym_loc_load] = ACTIONS(239),
    [anon_sym_loc_loadw] = ACTIONS(237),
    [anon_sym_loc_store] = ACTIONS(239),
    [anon_sym_loc_storew] = ACTIONS(237),
    [anon_sym_dup] = ACTIONS(239),
    [anon_sym_swap] = ACTIONS(239),
    [anon_sym_movup] = ACTIONS(239),
    [anon_sym_movdn] = ACTIONS(239),
    [anon_sym_adv_push] = ACTIONS(237),
    [anon_sym_dupw] = ACTIONS(237),
    [anon_sym_swapw] = ACTIONS(237),
    [anon_sym_movupw] = ACTIONS(237),
    [anon_sym_movdnw] = ACTIONS(237),
    [anon_sym_push] = ACTIONS(237),
    [anon_sym_if] = ACTIONS(237),
    [sym__else] = ACTIONS(237),
    [anon_sym_while] = ACTIONS(237),
    [anon_sym_repeat] = ACTIONS(237),
    [sym__end] = ACTIONS(237),
  },
  [27] = {
    [anon_sym_DOT] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(243),
    [anon_sym_call] = ACTIONS(245),
    [anon_sym_syscall] = ACTIONS(243),
    [anon_sym_assert] = ACTIONS(245),
    [anon_sym_assertz] = ACTIONS(243),
    [anon_sym_assert_eq] = ACTIONS(245),
    [anon_sym_neg] = ACTIONS(243),
    [anon_sym_inv] = ACTIONS(243),
    [anon_sym_pow2] = ACTIONS(243),
    [anon_sym_not] = ACTIONS(243),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_xor] = ACTIONS(243),
    [anon_sym_lt] = ACTIONS(245),
    [anon_sym_lte] = ACTIONS(243),
    [anon_sym_gt] = ACTIONS(245),
    [anon_sym_gte] = ACTIONS(243),
    [anon_sym_eqw] = ACTIONS(243),
    [anon_sym_ext2add] = ACTIONS(243),
    [anon_sym_ext2sub] = ACTIONS(243),
    [anon_sym_ext2mul] = ACTIONS(243),
    [anon_sym_ext2div] = ACTIONS(243),
    [anon_sym_ext2neg] = ACTIONS(243),
    [anon_sym_ext2inv] = ACTIONS(243),
    [anon_sym_u32test] = ACTIONS(245),
    [anon_sym_u32testw] = ACTIONS(243),
    [anon_sym_u32assertw] = ACTIONS(243),
    [anon_sym_u32cast] = ACTIONS(243),
    [anon_sym_u32split] = ACTIONS(243),
    [anon_sym_u32overflowing_add3] = ACTIONS(243),
    [anon_sym_u32wrapping_add3] = ACTIONS(243),
    [anon_sym_u32overflowing_madd] = ACTIONS(243),
    [anon_sym_u32wrapping_madd] = ACTIONS(243),
    [anon_sym_u32checked_and] = ACTIONS(243),
    [anon_sym_u32checked_or] = ACTIONS(243),
    [anon_sym_u32checked_xor] = ACTIONS(243),
    [anon_sym_u32checked_not] = ACTIONS(243),
    [anon_sym_u32checked_popcnt] = ACTIONS(243),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(243),
    [anon_sym_u32checked_lt] = ACTIONS(245),
    [anon_sym_u32unchecked_lt] = ACTIONS(245),
    [anon_sym_u32checked_lte] = ACTIONS(243),
    [anon_sym_u32unchecked_lte] = ACTIONS(243),
    [anon_sym_u32checked_gt] = ACTIONS(245),
    [anon_sym_u32unchecked_gt] = ACTIONS(245),
    [anon_sym_u32checked_gte] = ACTIONS(243),
    [anon_sym_u32unchecked_gte] = ACTIONS(243),
    [anon_sym_u32checked_min] = ACTIONS(243),
    [anon_sym_u32unchecked_min] = ACTIONS(243),
    [anon_sym_u32checked_max] = ACTIONS(243),
    [anon_sym_u32unchecked_max] = ACTIONS(243),
    [anon_sym_drop] = ACTIONS(245),
    [anon_sym_dropw] = ACTIONS(243),
    [anon_sym_padw] = ACTIONS(243),
    [anon_sym_swapdw] = ACTIONS(243),
    [anon_sym_cswap] = ACTIONS(245),
    [anon_sym_cswapw] = ACTIONS(243),
    [anon_sym_cdrop] = ACTIONS(245),
    [anon_sym_cdropw] = ACTIONS(243),
    [anon_sym_sdepth] = ACTIONS(243),
    [anon_sym_mem_stream] = ACTIONS(243),
    [anon_sym_adv_pipe] = ACTIONS(243),
    [anon_sym_adv_loadw] = ACTIONS(243),
    [anon_sym_hmerge] = ACTIONS(243),
    [anon_sym_hperm] = ACTIONS(243),
    [anon_sym_mtree_get] = ACTIONS(243),
    [anon_sym_mtree_set] = ACTIONS(243),
    [anon_sym_mtree_cwm] = ACTIONS(243),
    [anon_sym_caller] = ACTIONS(243),
    [anon_sym_is_odd] = ACTIONS(243),
    [anon_sym_assert_eqw] = ACTIONS(243),
    [anon_sym_clk] = ACTIONS(243),
    [anon_sym_fri_ext2fold4] = ACTIONS(243),
    [anon_sym_hash] = ACTIONS(243),
    [anon_sym_adv] = ACTIONS(245),
    [anon_sym_exp] = ACTIONS(243),
    [anon_sym_u32assert] = ACTIONS(245),
    [anon_sym_add] = ACTIONS(243),
    [anon_sym_sub] = ACTIONS(243),
    [anon_sym_mul] = ACTIONS(243),
    [anon_sym_eq] = ACTIONS(245),
    [anon_sym_neq] = ACTIONS(243),
    [anon_sym_div] = ACTIONS(243),
    [anon_sym_mem_load] = ACTIONS(245),
    [anon_sym_mem_loadw] = ACTIONS(243),
    [anon_sym_mem_store] = ACTIONS(245),
    [anon_sym_mem_storew] = ACTIONS(243),
    [anon_sym_u32checked_add] = ACTIONS(243),
    [anon_sym_u32wrapping_add] = ACTIONS(245),
    [anon_sym_u32overflowing_add] = ACTIONS(245),
    [anon_sym_u32checked_sub] = ACTIONS(243),
    [anon_sym_u32wrapping_sub] = ACTIONS(243),
    [anon_sym_u32overflowing_sub] = ACTIONS(243),
    [anon_sym_u32checked_mul] = ACTIONS(243),
    [anon_sym_u32wrapping_mul] = ACTIONS(243),
    [anon_sym_u32overflowing_mul] = ACTIONS(243),
    [anon_sym_u32checked_div] = ACTIONS(245),
    [anon_sym_u32unchecked_div] = ACTIONS(245),
    [anon_sym_u32checked_mod] = ACTIONS(243),
    [anon_sym_u32unchecked_mod] = ACTIONS(243),
    [anon_sym_u32checked_divmod] = ACTIONS(243),
    [anon_sym_u32unchecked_divmod] = ACTIONS(243),
    [anon_sym_u32checked_shr] = ACTIONS(243),
    [anon_sym_u32unchecked_shr] = ACTIONS(243),
    [anon_sym_u32checked_shl] = ACTIONS(243),
    [anon_sym_u32unchecked_shl] = ACTIONS(243),
    [anon_sym_u32checked_rotr] = ACTIONS(243),
    [anon_sym_u32unchecked_rotr] = ACTIONS(243),
    [anon_sym_u32checked_rotl] = ACTIONS(243),
    [anon_sym_u32unchecked_rotl] = ACTIONS(243),
    [anon_sym_u32checked_eq] = ACTIONS(243),
    [anon_sym_u32checked_neq] = ACTIONS(243),
    [anon_sym_locaddr] = ACTIONS(243),
    [anon_sym_loc_load] = ACTIONS(245),
    [anon_sym_loc_loadw] = ACTIONS(243),
    [anon_sym_loc_store] = ACTIONS(245),
    [anon_sym_loc_storew] = ACTIONS(243),
    [anon_sym_dup] = ACTIONS(245),
    [anon_sym_swap] = ACTIONS(245),
    [anon_sym_movup] = ACTIONS(245),
    [anon_sym_movdn] = ACTIONS(245),
    [anon_sym_adv_push] = ACTIONS(243),
    [anon_sym_dupw] = ACTIONS(243),
    [anon_sym_swapw] = ACTIONS(243),
    [anon_sym_movupw] = ACTIONS(243),
    [anon_sym_movdnw] = ACTIONS(243),
    [anon_sym_push] = ACTIONS(243),
    [anon_sym_if] = ACTIONS(243),
    [sym__else] = ACTIONS(243),
    [anon_sym_while] = ACTIONS(243),
    [anon_sym_repeat] = ACTIONS(243),
    [sym__end] = ACTIONS(243),
  },
  [28] = {
    [anon_sym_DOT] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(249),
    [anon_sym_call] = ACTIONS(251),
    [anon_sym_syscall] = ACTIONS(249),
    [anon_sym_assert] = ACTIONS(251),
    [anon_sym_assertz] = ACTIONS(249),
    [anon_sym_assert_eq] = ACTIONS(251),
    [anon_sym_neg] = ACTIONS(249),
    [anon_sym_inv] = ACTIONS(249),
    [anon_sym_pow2] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_lt] = ACTIONS(251),
    [anon_sym_lte] = ACTIONS(249),
    [anon_sym_gt] = ACTIONS(251),
    [anon_sym_gte] = ACTIONS(249),
    [anon_sym_eqw] = ACTIONS(249),
    [anon_sym_ext2add] = ACTIONS(249),
    [anon_sym_ext2sub] = ACTIONS(249),
    [anon_sym_ext2mul] = ACTIONS(249),
    [anon_sym_ext2div] = ACTIONS(249),
    [anon_sym_ext2neg] = ACTIONS(249),
    [anon_sym_ext2inv] = ACTIONS(249),
    [anon_sym_u32test] = ACTIONS(251),
    [anon_sym_u32testw] = ACTIONS(249),
    [anon_sym_u32assertw] = ACTIONS(249),
    [anon_sym_u32cast] = ACTIONS(249),
    [anon_sym_u32split] = ACTIONS(249),
    [anon_sym_u32overflowing_add3] = ACTIONS(249),
    [anon_sym_u32wrapping_add3] = ACTIONS(249),
    [anon_sym_u32overflowing_madd] = ACTIONS(249),
    [anon_sym_u32wrapping_madd] = ACTIONS(249),
    [anon_sym_u32checked_and] = ACTIONS(249),
    [anon_sym_u32checked_or] = ACTIONS(249),
    [anon_sym_u32checked_xor] = ACTIONS(249),
    [anon_sym_u32checked_not] = ACTIONS(249),
    [anon_sym_u32checked_popcnt] = ACTIONS(249),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(249),
    [anon_sym_u32checked_lt] = ACTIONS(251),
    [anon_sym_u32unchecked_lt] = ACTIONS(251),
    [anon_sym_u32checked_lte] = ACTIONS(249),
    [anon_sym_u32unchecked_lte] = ACTIONS(249),
    [anon_sym_u32checked_gt] = ACTIONS(251),
    [anon_sym_u32unchecked_gt] = ACTIONS(251),
    [anon_sym_u32checked_gte] = ACTIONS(249),
    [anon_sym_u32unchecked_gte] = ACTIONS(249),
    [anon_sym_u32checked_min] = ACTIONS(249),
    [anon_sym_u32unchecked_min] = ACTIONS(249),
    [anon_sym_u32checked_max] = ACTIONS(249),
    [anon_sym_u32unchecked_max] = ACTIONS(249),
    [anon_sym_drop] = ACTIONS(251),
    [anon_sym_dropw] = ACTIONS(249),
    [anon_sym_padw] = ACTIONS(249),
    [anon_sym_swapdw] = ACTIONS(249),
    [anon_sym_cswap] = ACTIONS(251),
    [anon_sym_cswapw] = ACTIONS(249),
    [anon_sym_cdrop] = ACTIONS(251),
    [anon_sym_cdropw] = ACTIONS(249),
    [anon_sym_sdepth] = ACTIONS(249),
    [anon_sym_mem_stream] = ACTIONS(249),
    [anon_sym_adv_pipe] = ACTIONS(249),
    [anon_sym_adv_loadw] = ACTIONS(249),
    [anon_sym_hmerge] = ACTIONS(249),
    [anon_sym_hperm] = ACTIONS(249),
    [anon_sym_mtree_get] = ACTIONS(249),
    [anon_sym_mtree_set] = ACTIONS(249),
    [anon_sym_mtree_cwm] = ACTIONS(249),
    [anon_sym_caller] = ACTIONS(249),
    [anon_sym_is_odd] = ACTIONS(249),
    [anon_sym_assert_eqw] = ACTIONS(249),
    [anon_sym_clk] = ACTIONS(249),
    [anon_sym_fri_ext2fold4] = ACTIONS(249),
    [anon_sym_hash] = ACTIONS(249),
    [anon_sym_adv] = ACTIONS(251),
    [anon_sym_exp] = ACTIONS(249),
    [anon_sym_u32assert] = ACTIONS(251),
    [anon_sym_add] = ACTIONS(249),
    [anon_sym_sub] = ACTIONS(249),
    [anon_sym_mul] = ACTIONS(249),
    [anon_sym_eq] = ACTIONS(251),
    [anon_sym_neq] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mem_load] = ACTIONS(251),
    [anon_sym_mem_loadw] = ACTIONS(249),
    [anon_sym_mem_store] = ACTIONS(251),
    [anon_sym_mem_storew] = ACTIONS(249),
    [anon_sym_u32checked_add] = ACTIONS(249),
    [anon_sym_u32wrapping_add] = ACTIONS(251),
    [anon_sym_u32overflowing_add] = ACTIONS(251),
    [anon_sym_u32checked_sub] = ACTIONS(249),
    [anon_sym_u32wrapping_sub] = ACTIONS(249),
    [anon_sym_u32overflowing_sub] = ACTIONS(249),
    [anon_sym_u32checked_mul] = ACTIONS(249),
    [anon_sym_u32wrapping_mul] = ACTIONS(249),
    [anon_sym_u32overflowing_mul] = ACTIONS(249),
    [anon_sym_u32checked_div] = ACTIONS(251),
    [anon_sym_u32unchecked_div] = ACTIONS(251),
    [anon_sym_u32checked_mod] = ACTIONS(249),
    [anon_sym_u32unchecked_mod] = ACTIONS(249),
    [anon_sym_u32checked_divmod] = ACTIONS(249),
    [anon_sym_u32unchecked_divmod] = ACTIONS(249),
    [anon_sym_u32checked_shr] = ACTIONS(249),
    [anon_sym_u32unchecked_shr] = ACTIONS(249),
    [anon_sym_u32checked_shl] = ACTIONS(249),
    [anon_sym_u32unchecked_shl] = ACTIONS(249),
    [anon_sym_u32checked_rotr] = ACTIONS(249),
    [anon_sym_u32unchecked_rotr] = ACTIONS(249),
    [anon_sym_u32checked_rotl] = ACTIONS(249),
    [anon_sym_u32unchecked_rotl] = ACTIONS(249),
    [anon_sym_u32checked_eq] = ACTIONS(249),
    [anon_sym_u32checked_neq] = ACTIONS(249),
    [anon_sym_locaddr] = ACTIONS(249),
    [anon_sym_loc_load] = ACTIONS(251),
    [anon_sym_loc_loadw] = ACTIONS(249),
    [anon_sym_loc_store] = ACTIONS(251),
    [anon_sym_loc_storew] = ACTIONS(249),
    [anon_sym_dup] = ACTIONS(251),
    [anon_sym_swap] = ACTIONS(251),
    [anon_sym_movup] = ACTIONS(251),
    [anon_sym_movdn] = ACTIONS(251),
    [anon_sym_adv_push] = ACTIONS(249),
    [anon_sym_dupw] = ACTIONS(249),
    [anon_sym_swapw] = ACTIONS(249),
    [anon_sym_movupw] = ACTIONS(249),
    [anon_sym_movdnw] = ACTIONS(249),
    [anon_sym_push] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [sym__else] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_repeat] = ACTIONS(249),
    [sym__end] = ACTIONS(249),
  },
  [29] = {
    [anon_sym_DOT] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(255),
    [anon_sym_call] = ACTIONS(257),
    [anon_sym_syscall] = ACTIONS(255),
    [anon_sym_assert] = ACTIONS(257),
    [anon_sym_assertz] = ACTIONS(255),
    [anon_sym_assert_eq] = ACTIONS(257),
    [anon_sym_neg] = ACTIONS(255),
    [anon_sym_inv] = ACTIONS(255),
    [anon_sym_pow2] = ACTIONS(255),
    [anon_sym_not] = ACTIONS(255),
    [anon_sym_and] = ACTIONS(255),
    [anon_sym_or] = ACTIONS(255),
    [anon_sym_xor] = ACTIONS(255),
    [anon_sym_lt] = ACTIONS(257),
    [anon_sym_lte] = ACTIONS(255),
    [anon_sym_gt] = ACTIONS(257),
    [anon_sym_gte] = ACTIONS(255),
    [anon_sym_eqw] = ACTIONS(255),
    [anon_sym_ext2add] = ACTIONS(255),
    [anon_sym_ext2sub] = ACTIONS(255),
    [anon_sym_ext2mul] = ACTIONS(255),
    [anon_sym_ext2div] = ACTIONS(255),
    [anon_sym_ext2neg] = ACTIONS(255),
    [anon_sym_ext2inv] = ACTIONS(255),
    [anon_sym_u32test] = ACTIONS(257),
    [anon_sym_u32testw] = ACTIONS(255),
    [anon_sym_u32assertw] = ACTIONS(255),
    [anon_sym_u32cast] = ACTIONS(255),
    [anon_sym_u32split] = ACTIONS(255),
    [anon_sym_u32overflowing_add3] = ACTIONS(255),
    [anon_sym_u32wrapping_add3] = ACTIONS(255),
    [anon_sym_u32overflowing_madd] = ACTIONS(255),
    [anon_sym_u32wrapping_madd] = ACTIONS(255),
    [anon_sym_u32checked_and] = ACTIONS(255),
    [anon_sym_u32checked_or] = ACTIONS(255),
    [anon_sym_u32checked_xor] = ACTIONS(255),
    [anon_sym_u32checked_not] = ACTIONS(255),
    [anon_sym_u32checked_popcnt] = ACTIONS(255),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(255),
    [anon_sym_u32checked_lt] = ACTIONS(257),
    [anon_sym_u32unchecked_lt] = ACTIONS(257),
    [anon_sym_u32checked_lte] = ACTIONS(255),
    [anon_sym_u32unchecked_lte] = ACTIONS(255),
    [anon_sym_u32checked_gt] = ACTIONS(257),
    [anon_sym_u32unchecked_gt] = ACTIONS(257),
    [anon_sym_u32checked_gte] = ACTIONS(255),
    [anon_sym_u32unchecked_gte] = ACTIONS(255),
    [anon_sym_u32checked_min] = ACTIONS(255),
    [anon_sym_u32unchecked_min] = ACTIONS(255),
    [anon_sym_u32checked_max] = ACTIONS(255),
    [anon_sym_u32unchecked_max] = ACTIONS(255),
    [anon_sym_drop] = ACTIONS(257),
    [anon_sym_dropw] = ACTIONS(255),
    [anon_sym_padw] = ACTIONS(255),
    [anon_sym_swapdw] = ACTIONS(255),
    [anon_sym_cswap] = ACTIONS(257),
    [anon_sym_cswapw] = ACTIONS(255),
    [anon_sym_cdrop] = ACTIONS(257),
    [anon_sym_cdropw] = ACTIONS(255),
    [anon_sym_sdepth] = ACTIONS(255),
    [anon_sym_mem_stream] = ACTIONS(255),
    [anon_sym_adv_pipe] = ACTIONS(255),
    [anon_sym_adv_loadw] = ACTIONS(255),
    [anon_sym_hmerge] = ACTIONS(255),
    [anon_sym_hperm] = ACTIONS(255),
    [anon_sym_mtree_get] = ACTIONS(255),
    [anon_sym_mtree_set] = ACTIONS(255),
    [anon_sym_mtree_cwm] = ACTIONS(255),
    [anon_sym_caller] = ACTIONS(255),
    [anon_sym_is_odd] = ACTIONS(255),
    [anon_sym_assert_eqw] = ACTIONS(255),
    [anon_sym_clk] = ACTIONS(255),
    [anon_sym_fri_ext2fold4] = ACTIONS(255),
    [anon_sym_hash] = ACTIONS(255),
    [anon_sym_adv] = ACTIONS(257),
    [anon_sym_exp] = ACTIONS(255),
    [anon_sym_u32assert] = ACTIONS(257),
    [anon_sym_add] = ACTIONS(255),
    [anon_sym_sub] = ACTIONS(255),
    [anon_sym_mul] = ACTIONS(255),
    [anon_sym_eq] = ACTIONS(257),
    [anon_sym_neq] = ACTIONS(255),
    [anon_sym_div] = ACTIONS(255),
    [anon_sym_mem_load] = ACTIONS(257),
    [anon_sym_mem_loadw] = ACTIONS(255),
    [anon_sym_mem_store] = ACTIONS(257),
    [anon_sym_mem_storew] = ACTIONS(255),
    [anon_sym_u32checked_add] = ACTIONS(255),
    [anon_sym_u32wrapping_add] = ACTIONS(257),
    [anon_sym_u32overflowing_add] = ACTIONS(257),
    [anon_sym_u32checked_sub] = ACTIONS(255),
    [anon_sym_u32wrapping_sub] = ACTIONS(255),
    [anon_sym_u32overflowing_sub] = ACTIONS(255),
    [anon_sym_u32checked_mul] = ACTIONS(255),
    [anon_sym_u32wrapping_mul] = ACTIONS(255),
    [anon_sym_u32overflowing_mul] = ACTIONS(255),
    [anon_sym_u32checked_div] = ACTIONS(257),
    [anon_sym_u32unchecked_div] = ACTIONS(257),
    [anon_sym_u32checked_mod] = ACTIONS(255),
    [anon_sym_u32unchecked_mod] = ACTIONS(255),
    [anon_sym_u32checked_divmod] = ACTIONS(255),
    [anon_sym_u32unchecked_divmod] = ACTIONS(255),
    [anon_sym_u32checked_shr] = ACTIONS(255),
    [anon_sym_u32unchecked_shr] = ACTIONS(255),
    [anon_sym_u32checked_shl] = ACTIONS(255),
    [anon_sym_u32unchecked_shl] = ACTIONS(255),
    [anon_sym_u32checked_rotr] = ACTIONS(255),
    [anon_sym_u32unchecked_rotr] = ACTIONS(255),
    [anon_sym_u32checked_rotl] = ACTIONS(255),
    [anon_sym_u32unchecked_rotl] = ACTIONS(255),
    [anon_sym_u32checked_eq] = ACTIONS(255),
    [anon_sym_u32checked_neq] = ACTIONS(255),
    [anon_sym_locaddr] = ACTIONS(255),
    [anon_sym_loc_load] = ACTIONS(257),
    [anon_sym_loc_loadw] = ACTIONS(255),
    [anon_sym_loc_store] = ACTIONS(257),
    [anon_sym_loc_storew] = ACTIONS(255),
    [anon_sym_dup] = ACTIONS(257),
    [anon_sym_swap] = ACTIONS(257),
    [anon_sym_movup] = ACTIONS(257),
    [anon_sym_movdn] = ACTIONS(257),
    [anon_sym_adv_push] = ACTIONS(255),
    [anon_sym_dupw] = ACTIONS(255),
    [anon_sym_swapw] = ACTIONS(255),
    [anon_sym_movupw] = ACTIONS(255),
    [anon_sym_movdnw] = ACTIONS(255),
    [anon_sym_push] = ACTIONS(255),
    [anon_sym_if] = ACTIONS(255),
    [sym__else] = ACTIONS(255),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_repeat] = ACTIONS(255),
    [sym__end] = ACTIONS(255),
  },
  [30] = {
    [anon_sym_DOT] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(261),
    [anon_sym_call] = ACTIONS(263),
    [anon_sym_syscall] = ACTIONS(261),
    [anon_sym_assert] = ACTIONS(263),
    [anon_sym_assertz] = ACTIONS(261),
    [anon_sym_assert_eq] = ACTIONS(263),
    [anon_sym_neg] = ACTIONS(261),
    [anon_sym_inv] = ACTIONS(261),
    [anon_sym_pow2] = ACTIONS(261),
    [anon_sym_not] = ACTIONS(261),
    [anon_sym_and] = ACTIONS(261),
    [anon_sym_or] = ACTIONS(261),
    [anon_sym_xor] = ACTIONS(261),
    [anon_sym_lt] = ACTIONS(263),
    [anon_sym_lte] = ACTIONS(261),
    [anon_sym_gt] = ACTIONS(263),
    [anon_sym_gte] = ACTIONS(261),
    [anon_sym_eqw] = ACTIONS(261),
    [anon_sym_ext2add] = ACTIONS(261),
    [anon_sym_ext2sub] = ACTIONS(261),
    [anon_sym_ext2mul] = ACTIONS(261),
    [anon_sym_ext2div] = ACTIONS(261),
    [anon_sym_ext2neg] = ACTIONS(261),
    [anon_sym_ext2inv] = ACTIONS(261),
    [anon_sym_u32test] = ACTIONS(263),
    [anon_sym_u32testw] = ACTIONS(261),
    [anon_sym_u32assertw] = ACTIONS(261),
    [anon_sym_u32cast] = ACTIONS(261),
    [anon_sym_u32split] = ACTIONS(261),
    [anon_sym_u32overflowing_add3] = ACTIONS(261),
    [anon_sym_u32wrapping_add3] = ACTIONS(261),
    [anon_sym_u32overflowing_madd] = ACTIONS(261),
    [anon_sym_u32wrapping_madd] = ACTIONS(261),
    [anon_sym_u32checked_and] = ACTIONS(261),
    [anon_sym_u32checked_or] = ACTIONS(261),
    [anon_sym_u32checked_xor] = ACTIONS(261),
    [anon_sym_u32checked_not] = ACTIONS(261),
    [anon_sym_u32checked_popcnt] = ACTIONS(261),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(261),
    [anon_sym_u32checked_lt] = ACTIONS(263),
    [anon_sym_u32unchecked_lt] = ACTIONS(263),
    [anon_sym_u32checked_lte] = ACTIONS(261),
    [anon_sym_u32unchecked_lte] = ACTIONS(261),
    [anon_sym_u32checked_gt] = ACTIONS(263),
    [anon_sym_u32unchecked_gt] = ACTIONS(263),
    [anon_sym_u32checked_gte] = ACTIONS(261),
    [anon_sym_u32unchecked_gte] = ACTIONS(261),
    [anon_sym_u32checked_min] = ACTIONS(261),
    [anon_sym_u32unchecked_min] = ACTIONS(261),
    [anon_sym_u32checked_max] = ACTIONS(261),
    [anon_sym_u32unchecked_max] = ACTIONS(261),
    [anon_sym_drop] = ACTIONS(263),
    [anon_sym_dropw] = ACTIONS(261),
    [anon_sym_padw] = ACTIONS(261),
    [anon_sym_swapdw] = ACTIONS(261),
    [anon_sym_cswap] = ACTIONS(263),
    [anon_sym_cswapw] = ACTIONS(261),
    [anon_sym_cdrop] = ACTIONS(263),
    [anon_sym_cdropw] = ACTIONS(261),
    [anon_sym_sdepth] = ACTIONS(261),
    [anon_sym_mem_stream] = ACTIONS(261),
    [anon_sym_adv_pipe] = ACTIONS(261),
    [anon_sym_adv_loadw] = ACTIONS(261),
    [anon_sym_hmerge] = ACTIONS(261),
    [anon_sym_hperm] = ACTIONS(261),
    [anon_sym_mtree_get] = ACTIONS(261),
    [anon_sym_mtree_set] = ACTIONS(261),
    [anon_sym_mtree_cwm] = ACTIONS(261),
    [anon_sym_caller] = ACTIONS(261),
    [anon_sym_is_odd] = ACTIONS(261),
    [anon_sym_assert_eqw] = ACTIONS(261),
    [anon_sym_clk] = ACTIONS(261),
    [anon_sym_fri_ext2fold4] = ACTIONS(261),
    [anon_sym_hash] = ACTIONS(261),
    [anon_sym_adv] = ACTIONS(263),
    [anon_sym_exp] = ACTIONS(261),
    [anon_sym_u32assert] = ACTIONS(263),
    [anon_sym_add] = ACTIONS(261),
    [anon_sym_sub] = ACTIONS(261),
    [anon_sym_mul] = ACTIONS(261),
    [anon_sym_eq] = ACTIONS(263),
    [anon_sym_neq] = ACTIONS(261),
    [anon_sym_div] = ACTIONS(261),
    [anon_sym_mem_load] = ACTIONS(263),
    [anon_sym_mem_loadw] = ACTIONS(261),
    [anon_sym_mem_store] = ACTIONS(263),
    [anon_sym_mem_storew] = ACTIONS(261),
    [anon_sym_u32checked_add] = ACTIONS(261),
    [anon_sym_u32wrapping_add] = ACTIONS(263),
    [anon_sym_u32overflowing_add] = ACTIONS(263),
    [anon_sym_u32checked_sub] = ACTIONS(261),
    [anon_sym_u32wrapping_sub] = ACTIONS(261),
    [anon_sym_u32overflowing_sub] = ACTIONS(261),
    [anon_sym_u32checked_mul] = ACTIONS(261),
    [anon_sym_u32wrapping_mul] = ACTIONS(261),
    [anon_sym_u32overflowing_mul] = ACTIONS(261),
    [anon_sym_u32checked_div] = ACTIONS(263),
    [anon_sym_u32unchecked_div] = ACTIONS(263),
    [anon_sym_u32checked_mod] = ACTIONS(261),
    [anon_sym_u32unchecked_mod] = ACTIONS(261),
    [anon_sym_u32checked_divmod] = ACTIONS(261),
    [anon_sym_u32unchecked_divmod] = ACTIONS(261),
    [anon_sym_u32checked_shr] = ACTIONS(261),
    [anon_sym_u32unchecked_shr] = ACTIONS(261),
    [anon_sym_u32checked_shl] = ACTIONS(261),
    [anon_sym_u32unchecked_shl] = ACTIONS(261),
    [anon_sym_u32checked_rotr] = ACTIONS(261),
    [anon_sym_u32unchecked_rotr] = ACTIONS(261),
    [anon_sym_u32checked_rotl] = ACTIONS(261),
    [anon_sym_u32unchecked_rotl] = ACTIONS(261),
    [anon_sym_u32checked_eq] = ACTIONS(261),
    [anon_sym_u32checked_neq] = ACTIONS(261),
    [anon_sym_locaddr] = ACTIONS(261),
    [anon_sym_loc_load] = ACTIONS(263),
    [anon_sym_loc_loadw] = ACTIONS(261),
    [anon_sym_loc_store] = ACTIONS(263),
    [anon_sym_loc_storew] = ACTIONS(261),
    [anon_sym_dup] = ACTIONS(263),
    [anon_sym_swap] = ACTIONS(263),
    [anon_sym_movup] = ACTIONS(263),
    [anon_sym_movdn] = ACTIONS(263),
    [anon_sym_adv_push] = ACTIONS(261),
    [anon_sym_dupw] = ACTIONS(261),
    [anon_sym_swapw] = ACTIONS(261),
    [anon_sym_movupw] = ACTIONS(261),
    [anon_sym_movdnw] = ACTIONS(261),
    [anon_sym_push] = ACTIONS(261),
    [anon_sym_if] = ACTIONS(261),
    [sym__else] = ACTIONS(261),
    [anon_sym_while] = ACTIONS(261),
    [anon_sym_repeat] = ACTIONS(261),
    [sym__end] = ACTIONS(261),
  },
  [31] = {
    [anon_sym_DOT] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(267),
    [anon_sym_call] = ACTIONS(269),
    [anon_sym_syscall] = ACTIONS(267),
    [anon_sym_assert] = ACTIONS(269),
    [anon_sym_assertz] = ACTIONS(267),
    [anon_sym_assert_eq] = ACTIONS(269),
    [anon_sym_neg] = ACTIONS(267),
    [anon_sym_inv] = ACTIONS(267),
    [anon_sym_pow2] = ACTIONS(267),
    [anon_sym_not] = ACTIONS(267),
    [anon_sym_and] = ACTIONS(267),
    [anon_sym_or] = ACTIONS(267),
    [anon_sym_xor] = ACTIONS(267),
    [anon_sym_lt] = ACTIONS(269),
    [anon_sym_lte] = ACTIONS(267),
    [anon_sym_gt] = ACTIONS(269),
    [anon_sym_gte] = ACTIONS(267),
    [anon_sym_eqw] = ACTIONS(267),
    [anon_sym_ext2add] = ACTIONS(267),
    [anon_sym_ext2sub] = ACTIONS(267),
    [anon_sym_ext2mul] = ACTIONS(267),
    [anon_sym_ext2div] = ACTIONS(267),
    [anon_sym_ext2neg] = ACTIONS(267),
    [anon_sym_ext2inv] = ACTIONS(267),
    [anon_sym_u32test] = ACTIONS(269),
    [anon_sym_u32testw] = ACTIONS(267),
    [anon_sym_u32assertw] = ACTIONS(267),
    [anon_sym_u32cast] = ACTIONS(267),
    [anon_sym_u32split] = ACTIONS(267),
    [anon_sym_u32overflowing_add3] = ACTIONS(267),
    [anon_sym_u32wrapping_add3] = ACTIONS(267),
    [anon_sym_u32overflowing_madd] = ACTIONS(267),
    [anon_sym_u32wrapping_madd] = ACTIONS(267),
    [anon_sym_u32checked_and] = ACTIONS(267),
    [anon_sym_u32checked_or] = ACTIONS(267),
    [anon_sym_u32checked_xor] = ACTIONS(267),
    [anon_sym_u32checked_not] = ACTIONS(267),
    [anon_sym_u32checked_popcnt] = ACTIONS(267),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(267),
    [anon_sym_u32checked_lt] = ACTIONS(269),
    [anon_sym_u32unchecked_lt] = ACTIONS(269),
    [anon_sym_u32checked_lte] = ACTIONS(267),
    [anon_sym_u32unchecked_lte] = ACTIONS(267),
    [anon_sym_u32checked_gt] = ACTIONS(269),
    [anon_sym_u32unchecked_gt] = ACTIONS(269),
    [anon_sym_u32checked_gte] = ACTIONS(267),
    [anon_sym_u32unchecked_gte] = ACTIONS(267),
    [anon_sym_u32checked_min] = ACTIONS(267),
    [anon_sym_u32unchecked_min] = ACTIONS(267),
    [anon_sym_u32checked_max] = ACTIONS(267),
    [anon_sym_u32unchecked_max] = ACTIONS(267),
    [anon_sym_drop] = ACTIONS(269),
    [anon_sym_dropw] = ACTIONS(267),
    [anon_sym_padw] = ACTIONS(267),
    [anon_sym_swapdw] = ACTIONS(267),
    [anon_sym_cswap] = ACTIONS(269),
    [anon_sym_cswapw] = ACTIONS(267),
    [anon_sym_cdrop] = ACTIONS(269),
    [anon_sym_cdropw] = ACTIONS(267),
    [anon_sym_sdepth] = ACTIONS(267),
    [anon_sym_mem_stream] = ACTIONS(267),
    [anon_sym_adv_pipe] = ACTIONS(267),
    [anon_sym_adv_loadw] = ACTIONS(267),
    [anon_sym_hmerge] = ACTIONS(267),
    [anon_sym_hperm] = ACTIONS(267),
    [anon_sym_mtree_get] = ACTIONS(267),
    [anon_sym_mtree_set] = ACTIONS(267),
    [anon_sym_mtree_cwm] = ACTIONS(267),
    [anon_sym_caller] = ACTIONS(267),
    [anon_sym_is_odd] = ACTIONS(267),
    [anon_sym_assert_eqw] = ACTIONS(267),
    [anon_sym_clk] = ACTIONS(267),
    [anon_sym_fri_ext2fold4] = ACTIONS(267),
    [anon_sym_hash] = ACTIONS(267),
    [anon_sym_adv] = ACTIONS(269),
    [anon_sym_exp] = ACTIONS(267),
    [anon_sym_u32assert] = ACTIONS(269),
    [anon_sym_add] = ACTIONS(267),
    [anon_sym_sub] = ACTIONS(267),
    [anon_sym_mul] = ACTIONS(267),
    [anon_sym_eq] = ACTIONS(269),
    [anon_sym_neq] = ACTIONS(267),
    [anon_sym_div] = ACTIONS(267),
    [anon_sym_mem_load] = ACTIONS(269),
    [anon_sym_mem_loadw] = ACTIONS(267),
    [anon_sym_mem_store] = ACTIONS(269),
    [anon_sym_mem_storew] = ACTIONS(267),
    [anon_sym_u32checked_add] = ACTIONS(267),
    [anon_sym_u32wrapping_add] = ACTIONS(269),
    [anon_sym_u32overflowing_add] = ACTIONS(269),
    [anon_sym_u32checked_sub] = ACTIONS(267),
    [anon_sym_u32wrapping_sub] = ACTIONS(267),
    [anon_sym_u32overflowing_sub] = ACTIONS(267),
    [anon_sym_u32checked_mul] = ACTIONS(267),
    [anon_sym_u32wrapping_mul] = ACTIONS(267),
    [anon_sym_u32overflowing_mul] = ACTIONS(267),
    [anon_sym_u32checked_div] = ACTIONS(269),
    [anon_sym_u32unchecked_div] = ACTIONS(269),
    [anon_sym_u32checked_mod] = ACTIONS(267),
    [anon_sym_u32unchecked_mod] = ACTIONS(267),
    [anon_sym_u32checked_divmod] = ACTIONS(267),
    [anon_sym_u32unchecked_divmod] = ACTIONS(267),
    [anon_sym_u32checked_shr] = ACTIONS(267),
    [anon_sym_u32unchecked_shr] = ACTIONS(267),
    [anon_sym_u32checked_shl] = ACTIONS(267),
    [anon_sym_u32unchecked_shl] = ACTIONS(267),
    [anon_sym_u32checked_rotr] = ACTIONS(267),
    [anon_sym_u32unchecked_rotr] = ACTIONS(267),
    [anon_sym_u32checked_rotl] = ACTIONS(267),
    [anon_sym_u32unchecked_rotl] = ACTIONS(267),
    [anon_sym_u32checked_eq] = ACTIONS(267),
    [anon_sym_u32checked_neq] = ACTIONS(267),
    [anon_sym_locaddr] = ACTIONS(267),
    [anon_sym_loc_load] = ACTIONS(269),
    [anon_sym_loc_loadw] = ACTIONS(267),
    [anon_sym_loc_store] = ACTIONS(269),
    [anon_sym_loc_storew] = ACTIONS(267),
    [anon_sym_dup] = ACTIONS(269),
    [anon_sym_swap] = ACTIONS(269),
    [anon_sym_movup] = ACTIONS(269),
    [anon_sym_movdn] = ACTIONS(269),
    [anon_sym_adv_push] = ACTIONS(267),
    [anon_sym_dupw] = ACTIONS(267),
    [anon_sym_swapw] = ACTIONS(267),
    [anon_sym_movupw] = ACTIONS(267),
    [anon_sym_movdnw] = ACTIONS(267),
    [anon_sym_push] = ACTIONS(267),
    [anon_sym_if] = ACTIONS(267),
    [sym__else] = ACTIONS(267),
    [anon_sym_while] = ACTIONS(267),
    [anon_sym_repeat] = ACTIONS(267),
    [sym__end] = ACTIONS(267),
  },
  [32] = {
    [anon_sym_DOT] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(273),
    [anon_sym_call] = ACTIONS(275),
    [anon_sym_syscall] = ACTIONS(273),
    [anon_sym_assert] = ACTIONS(275),
    [anon_sym_assertz] = ACTIONS(273),
    [anon_sym_assert_eq] = ACTIONS(275),
    [anon_sym_neg] = ACTIONS(273),
    [anon_sym_inv] = ACTIONS(273),
    [anon_sym_pow2] = ACTIONS(273),
    [anon_sym_not] = ACTIONS(273),
    [anon_sym_and] = ACTIONS(273),
    [anon_sym_or] = ACTIONS(273),
    [anon_sym_xor] = ACTIONS(273),
    [anon_sym_lt] = ACTIONS(275),
    [anon_sym_lte] = ACTIONS(273),
    [anon_sym_gt] = ACTIONS(275),
    [anon_sym_gte] = ACTIONS(273),
    [anon_sym_eqw] = ACTIONS(273),
    [anon_sym_ext2add] = ACTIONS(273),
    [anon_sym_ext2sub] = ACTIONS(273),
    [anon_sym_ext2mul] = ACTIONS(273),
    [anon_sym_ext2div] = ACTIONS(273),
    [anon_sym_ext2neg] = ACTIONS(273),
    [anon_sym_ext2inv] = ACTIONS(273),
    [anon_sym_u32test] = ACTIONS(275),
    [anon_sym_u32testw] = ACTIONS(273),
    [anon_sym_u32assertw] = ACTIONS(273),
    [anon_sym_u32cast] = ACTIONS(273),
    [anon_sym_u32split] = ACTIONS(273),
    [anon_sym_u32overflowing_add3] = ACTIONS(273),
    [anon_sym_u32wrapping_add3] = ACTIONS(273),
    [anon_sym_u32overflowing_madd] = ACTIONS(273),
    [anon_sym_u32wrapping_madd] = ACTIONS(273),
    [anon_sym_u32checked_and] = ACTIONS(273),
    [anon_sym_u32checked_or] = ACTIONS(273),
    [anon_sym_u32checked_xor] = ACTIONS(273),
    [anon_sym_u32checked_not] = ACTIONS(273),
    [anon_sym_u32checked_popcnt] = ACTIONS(273),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(273),
    [anon_sym_u32checked_lt] = ACTIONS(275),
    [anon_sym_u32unchecked_lt] = ACTIONS(275),
    [anon_sym_u32checked_lte] = ACTIONS(273),
    [anon_sym_u32unchecked_lte] = ACTIONS(273),
    [anon_sym_u32checked_gt] = ACTIONS(275),
    [anon_sym_u32unchecked_gt] = ACTIONS(275),
    [anon_sym_u32checked_gte] = ACTIONS(273),
    [anon_sym_u32unchecked_gte] = ACTIONS(273),
    [anon_sym_u32checked_min] = ACTIONS(273),
    [anon_sym_u32unchecked_min] = ACTIONS(273),
    [anon_sym_u32checked_max] = ACTIONS(273),
    [anon_sym_u32unchecked_max] = ACTIONS(273),
    [anon_sym_drop] = ACTIONS(275),
    [anon_sym_dropw] = ACTIONS(273),
    [anon_sym_padw] = ACTIONS(273),
    [anon_sym_swapdw] = ACTIONS(273),
    [anon_sym_cswap] = ACTIONS(275),
    [anon_sym_cswapw] = ACTIONS(273),
    [anon_sym_cdrop] = ACTIONS(275),
    [anon_sym_cdropw] = ACTIONS(273),
    [anon_sym_sdepth] = ACTIONS(273),
    [anon_sym_mem_stream] = ACTIONS(273),
    [anon_sym_adv_pipe] = ACTIONS(273),
    [anon_sym_adv_loadw] = ACTIONS(273),
    [anon_sym_hmerge] = ACTIONS(273),
    [anon_sym_hperm] = ACTIONS(273),
    [anon_sym_mtree_get] = ACTIONS(273),
    [anon_sym_mtree_set] = ACTIONS(273),
    [anon_sym_mtree_cwm] = ACTIONS(273),
    [anon_sym_caller] = ACTIONS(273),
    [anon_sym_is_odd] = ACTIONS(273),
    [anon_sym_assert_eqw] = ACTIONS(273),
    [anon_sym_clk] = ACTIONS(273),
    [anon_sym_fri_ext2fold4] = ACTIONS(273),
    [anon_sym_hash] = ACTIONS(273),
    [anon_sym_adv] = ACTIONS(275),
    [anon_sym_exp] = ACTIONS(273),
    [anon_sym_u32assert] = ACTIONS(275),
    [anon_sym_add] = ACTIONS(273),
    [anon_sym_sub] = ACTIONS(273),
    [anon_sym_mul] = ACTIONS(273),
    [anon_sym_eq] = ACTIONS(275),
    [anon_sym_neq] = ACTIONS(273),
    [anon_sym_div] = ACTIONS(273),
    [anon_sym_mem_load] = ACTIONS(275),
    [anon_sym_mem_loadw] = ACTIONS(273),
    [anon_sym_mem_store] = ACTIONS(275),
    [anon_sym_mem_storew] = ACTIONS(273),
    [anon_sym_u32checked_add] = ACTIONS(273),
    [anon_sym_u32wrapping_add] = ACTIONS(275),
    [anon_sym_u32overflowing_add] = ACTIONS(275),
    [anon_sym_u32checked_sub] = ACTIONS(273),
    [anon_sym_u32wrapping_sub] = ACTIONS(273),
    [anon_sym_u32overflowing_sub] = ACTIONS(273),
    [anon_sym_u32checked_mul] = ACTIONS(273),
    [anon_sym_u32wrapping_mul] = ACTIONS(273),
    [anon_sym_u32overflowing_mul] = ACTIONS(273),
    [anon_sym_u32checked_div] = ACTIONS(275),
    [anon_sym_u32unchecked_div] = ACTIONS(275),
    [anon_sym_u32checked_mod] = ACTIONS(273),
    [anon_sym_u32unchecked_mod] = ACTIONS(273),
    [anon_sym_u32checked_divmod] = ACTIONS(273),
    [anon_sym_u32unchecked_divmod] = ACTIONS(273),
    [anon_sym_u32checked_shr] = ACTIONS(273),
    [anon_sym_u32unchecked_shr] = ACTIONS(273),
    [anon_sym_u32checked_shl] = ACTIONS(273),
    [anon_sym_u32unchecked_shl] = ACTIONS(273),
    [anon_sym_u32checked_rotr] = ACTIONS(273),
    [anon_sym_u32unchecked_rotr] = ACTIONS(273),
    [anon_sym_u32checked_rotl] = ACTIONS(273),
    [anon_sym_u32unchecked_rotl] = ACTIONS(273),
    [anon_sym_u32checked_eq] = ACTIONS(273),
    [anon_sym_u32checked_neq] = ACTIONS(273),
    [anon_sym_locaddr] = ACTIONS(273),
    [anon_sym_loc_load] = ACTIONS(275),
    [anon_sym_loc_loadw] = ACTIONS(273),
    [anon_sym_loc_store] = ACTIONS(275),
    [anon_sym_loc_storew] = ACTIONS(273),
    [anon_sym_dup] = ACTIONS(275),
    [anon_sym_swap] = ACTIONS(275),
    [anon_sym_movup] = ACTIONS(275),
    [anon_sym_movdn] = ACTIONS(275),
    [anon_sym_adv_push] = ACTIONS(273),
    [anon_sym_dupw] = ACTIONS(273),
    [anon_sym_swapw] = ACTIONS(273),
    [anon_sym_movupw] = ACTIONS(273),
    [anon_sym_movdnw] = ACTIONS(273),
    [anon_sym_push] = ACTIONS(273),
    [anon_sym_if] = ACTIONS(273),
    [sym__else] = ACTIONS(273),
    [anon_sym_while] = ACTIONS(273),
    [anon_sym_repeat] = ACTIONS(273),
    [sym__end] = ACTIONS(273),
  },
  [33] = {
    [anon_sym_DOT] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(279),
    [anon_sym_call] = ACTIONS(281),
    [anon_sym_syscall] = ACTIONS(279),
    [anon_sym_assert] = ACTIONS(281),
    [anon_sym_assertz] = ACTIONS(279),
    [anon_sym_assert_eq] = ACTIONS(281),
    [anon_sym_neg] = ACTIONS(279),
    [anon_sym_inv] = ACTIONS(279),
    [anon_sym_pow2] = ACTIONS(279),
    [anon_sym_not] = ACTIONS(279),
    [anon_sym_and] = ACTIONS(279),
    [anon_sym_or] = ACTIONS(279),
    [anon_sym_xor] = ACTIONS(279),
    [anon_sym_lt] = ACTIONS(281),
    [anon_sym_lte] = ACTIONS(279),
    [anon_sym_gt] = ACTIONS(281),
    [anon_sym_gte] = ACTIONS(279),
    [anon_sym_eqw] = ACTIONS(279),
    [anon_sym_ext2add] = ACTIONS(279),
    [anon_sym_ext2sub] = ACTIONS(279),
    [anon_sym_ext2mul] = ACTIONS(279),
    [anon_sym_ext2div] = ACTIONS(279),
    [anon_sym_ext2neg] = ACTIONS(279),
    [anon_sym_ext2inv] = ACTIONS(279),
    [anon_sym_u32test] = ACTIONS(281),
    [anon_sym_u32testw] = ACTIONS(279),
    [anon_sym_u32assertw] = ACTIONS(279),
    [anon_sym_u32cast] = ACTIONS(279),
    [anon_sym_u32split] = ACTIONS(279),
    [anon_sym_u32overflowing_add3] = ACTIONS(279),
    [anon_sym_u32wrapping_add3] = ACTIONS(279),
    [anon_sym_u32overflowing_madd] = ACTIONS(279),
    [anon_sym_u32wrapping_madd] = ACTIONS(279),
    [anon_sym_u32checked_and] = ACTIONS(279),
    [anon_sym_u32checked_or] = ACTIONS(279),
    [anon_sym_u32checked_xor] = ACTIONS(279),
    [anon_sym_u32checked_not] = ACTIONS(279),
    [anon_sym_u32checked_popcnt] = ACTIONS(279),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(279),
    [anon_sym_u32checked_lt] = ACTIONS(281),
    [anon_sym_u32unchecked_lt] = ACTIONS(281),
    [anon_sym_u32checked_lte] = ACTIONS(279),
    [anon_sym_u32unchecked_lte] = ACTIONS(279),
    [anon_sym_u32checked_gt] = ACTIONS(281),
    [anon_sym_u32unchecked_gt] = ACTIONS(281),
    [anon_sym_u32checked_gte] = ACTIONS(279),
    [anon_sym_u32unchecked_gte] = ACTIONS(279),
    [anon_sym_u32checked_min] = ACTIONS(279),
    [anon_sym_u32unchecked_min] = ACTIONS(279),
    [anon_sym_u32checked_max] = ACTIONS(279),
    [anon_sym_u32unchecked_max] = ACTIONS(279),
    [anon_sym_drop] = ACTIONS(281),
    [anon_sym_dropw] = ACTIONS(279),
    [anon_sym_padw] = ACTIONS(279),
    [anon_sym_swapdw] = ACTIONS(279),
    [anon_sym_cswap] = ACTIONS(281),
    [anon_sym_cswapw] = ACTIONS(279),
    [anon_sym_cdrop] = ACTIONS(281),
    [anon_sym_cdropw] = ACTIONS(279),
    [anon_sym_sdepth] = ACTIONS(279),
    [anon_sym_mem_stream] = ACTIONS(279),
    [anon_sym_adv_pipe] = ACTIONS(279),
    [anon_sym_adv_loadw] = ACTIONS(279),
    [anon_sym_hmerge] = ACTIONS(279),
    [anon_sym_hperm] = ACTIONS(279),
    [anon_sym_mtree_get] = ACTIONS(279),
    [anon_sym_mtree_set] = ACTIONS(279),
    [anon_sym_mtree_cwm] = ACTIONS(279),
    [anon_sym_caller] = ACTIONS(279),
    [anon_sym_is_odd] = ACTIONS(279),
    [anon_sym_assert_eqw] = ACTIONS(279),
    [anon_sym_clk] = ACTIONS(279),
    [anon_sym_fri_ext2fold4] = ACTIONS(279),
    [anon_sym_hash] = ACTIONS(279),
    [anon_sym_adv] = ACTIONS(281),
    [anon_sym_exp] = ACTIONS(279),
    [anon_sym_u32assert] = ACTIONS(281),
    [anon_sym_add] = ACTIONS(279),
    [anon_sym_sub] = ACTIONS(279),
    [anon_sym_mul] = ACTIONS(279),
    [anon_sym_eq] = ACTIONS(281),
    [anon_sym_neq] = ACTIONS(279),
    [anon_sym_div] = ACTIONS(279),
    [anon_sym_mem_load] = ACTIONS(281),
    [anon_sym_mem_loadw] = ACTIONS(279),
    [anon_sym_mem_store] = ACTIONS(281),
    [anon_sym_mem_storew] = ACTIONS(279),
    [anon_sym_u32checked_add] = ACTIONS(279),
    [anon_sym_u32wrapping_add] = ACTIONS(281),
    [anon_sym_u32overflowing_add] = ACTIONS(281),
    [anon_sym_u32checked_sub] = ACTIONS(279),
    [anon_sym_u32wrapping_sub] = ACTIONS(279),
    [anon_sym_u32overflowing_sub] = ACTIONS(279),
    [anon_sym_u32checked_mul] = ACTIONS(279),
    [anon_sym_u32wrapping_mul] = ACTIONS(279),
    [anon_sym_u32overflowing_mul] = ACTIONS(279),
    [anon_sym_u32checked_div] = ACTIONS(281),
    [anon_sym_u32unchecked_div] = ACTIONS(281),
    [anon_sym_u32checked_mod] = ACTIONS(279),
    [anon_sym_u32unchecked_mod] = ACTIONS(279),
    [anon_sym_u32checked_divmod] = ACTIONS(279),
    [anon_sym_u32unchecked_divmod] = ACTIONS(279),
    [anon_sym_u32checked_shr] = ACTIONS(279),
    [anon_sym_u32unchecked_shr] = ACTIONS(279),
    [anon_sym_u32checked_shl] = ACTIONS(279),
    [anon_sym_u32unchecked_shl] = ACTIONS(279),
    [anon_sym_u32checked_rotr] = ACTIONS(279),
    [anon_sym_u32unchecked_rotr] = ACTIONS(279),
    [anon_sym_u32checked_rotl] = ACTIONS(279),
    [anon_sym_u32unchecked_rotl] = ACTIONS(279),
    [anon_sym_u32checked_eq] = ACTIONS(279),
    [anon_sym_u32checked_neq] = ACTIONS(279),
    [anon_sym_locaddr] = ACTIONS(279),
    [anon_sym_loc_load] = ACTIONS(281),
    [anon_sym_loc_loadw] = ACTIONS(279),
    [anon_sym_loc_store] = ACTIONS(281),
    [anon_sym_loc_storew] = ACTIONS(279),
    [anon_sym_dup] = ACTIONS(281),
    [anon_sym_swap] = ACTIONS(281),
    [anon_sym_movup] = ACTIONS(281),
    [anon_sym_movdn] = ACTIONS(281),
    [anon_sym_adv_push] = ACTIONS(279),
    [anon_sym_dupw] = ACTIONS(279),
    [anon_sym_swapw] = ACTIONS(279),
    [anon_sym_movupw] = ACTIONS(279),
    [anon_sym_movdnw] = ACTIONS(279),
    [anon_sym_push] = ACTIONS(279),
    [anon_sym_if] = ACTIONS(279),
    [sym__else] = ACTIONS(279),
    [anon_sym_while] = ACTIONS(279),
    [anon_sym_repeat] = ACTIONS(279),
    [sym__end] = ACTIONS(279),
  },
  [34] = {
    [anon_sym_DOT] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(285),
    [anon_sym_call] = ACTIONS(287),
    [anon_sym_syscall] = ACTIONS(285),
    [anon_sym_assert] = ACTIONS(287),
    [anon_sym_assertz] = ACTIONS(285),
    [anon_sym_assert_eq] = ACTIONS(287),
    [anon_sym_neg] = ACTIONS(285),
    [anon_sym_inv] = ACTIONS(285),
    [anon_sym_pow2] = ACTIONS(285),
    [anon_sym_not] = ACTIONS(285),
    [anon_sym_and] = ACTIONS(285),
    [anon_sym_or] = ACTIONS(285),
    [anon_sym_xor] = ACTIONS(285),
    [anon_sym_lt] = ACTIONS(287),
    [anon_sym_lte] = ACTIONS(285),
    [anon_sym_gt] = ACTIONS(287),
    [anon_sym_gte] = ACTIONS(285),
    [anon_sym_eqw] = ACTIONS(285),
    [anon_sym_ext2add] = ACTIONS(285),
    [anon_sym_ext2sub] = ACTIONS(285),
    [anon_sym_ext2mul] = ACTIONS(285),
    [anon_sym_ext2div] = ACTIONS(285),
    [anon_sym_ext2neg] = ACTIONS(285),
    [anon_sym_ext2inv] = ACTIONS(285),
    [anon_sym_u32test] = ACTIONS(287),
    [anon_sym_u32testw] = ACTIONS(285),
    [anon_sym_u32assertw] = ACTIONS(285),
    [anon_sym_u32cast] = ACTIONS(285),
    [anon_sym_u32split] = ACTIONS(285),
    [anon_sym_u32overflowing_add3] = ACTIONS(285),
    [anon_sym_u32wrapping_add3] = ACTIONS(285),
    [anon_sym_u32overflowing_madd] = ACTIONS(285),
    [anon_sym_u32wrapping_madd] = ACTIONS(285),
    [anon_sym_u32checked_and] = ACTIONS(285),
    [anon_sym_u32checked_or] = ACTIONS(285),
    [anon_sym_u32checked_xor] = ACTIONS(285),
    [anon_sym_u32checked_not] = ACTIONS(285),
    [anon_sym_u32checked_popcnt] = ACTIONS(285),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(285),
    [anon_sym_u32checked_lt] = ACTIONS(287),
    [anon_sym_u32unchecked_lt] = ACTIONS(287),
    [anon_sym_u32checked_lte] = ACTIONS(285),
    [anon_sym_u32unchecked_lte] = ACTIONS(285),
    [anon_sym_u32checked_gt] = ACTIONS(287),
    [anon_sym_u32unchecked_gt] = ACTIONS(287),
    [anon_sym_u32checked_gte] = ACTIONS(285),
    [anon_sym_u32unchecked_gte] = ACTIONS(285),
    [anon_sym_u32checked_min] = ACTIONS(285),
    [anon_sym_u32unchecked_min] = ACTIONS(285),
    [anon_sym_u32checked_max] = ACTIONS(285),
    [anon_sym_u32unchecked_max] = ACTIONS(285),
    [anon_sym_drop] = ACTIONS(287),
    [anon_sym_dropw] = ACTIONS(285),
    [anon_sym_padw] = ACTIONS(285),
    [anon_sym_swapdw] = ACTIONS(285),
    [anon_sym_cswap] = ACTIONS(287),
    [anon_sym_cswapw] = ACTIONS(285),
    [anon_sym_cdrop] = ACTIONS(287),
    [anon_sym_cdropw] = ACTIONS(285),
    [anon_sym_sdepth] = ACTIONS(285),
    [anon_sym_mem_stream] = ACTIONS(285),
    [anon_sym_adv_pipe] = ACTIONS(285),
    [anon_sym_adv_loadw] = ACTIONS(285),
    [anon_sym_hmerge] = ACTIONS(285),
    [anon_sym_hperm] = ACTIONS(285),
    [anon_sym_mtree_get] = ACTIONS(285),
    [anon_sym_mtree_set] = ACTIONS(285),
    [anon_sym_mtree_cwm] = ACTIONS(285),
    [anon_sym_caller] = ACTIONS(285),
    [anon_sym_is_odd] = ACTIONS(285),
    [anon_sym_assert_eqw] = ACTIONS(285),
    [anon_sym_clk] = ACTIONS(285),
    [anon_sym_fri_ext2fold4] = ACTIONS(285),
    [anon_sym_hash] = ACTIONS(285),
    [anon_sym_adv] = ACTIONS(287),
    [anon_sym_exp] = ACTIONS(285),
    [anon_sym_u32assert] = ACTIONS(287),
    [anon_sym_add] = ACTIONS(285),
    [anon_sym_sub] = ACTIONS(285),
    [anon_sym_mul] = ACTIONS(285),
    [anon_sym_eq] = ACTIONS(287),
    [anon_sym_neq] = ACTIONS(285),
    [anon_sym_div] = ACTIONS(285),
    [anon_sym_mem_load] = ACTIONS(287),
    [anon_sym_mem_loadw] = ACTIONS(285),
    [anon_sym_mem_store] = ACTIONS(287),
    [anon_sym_mem_storew] = ACTIONS(285),
    [anon_sym_u32checked_add] = ACTIONS(285),
    [anon_sym_u32wrapping_add] = ACTIONS(287),
    [anon_sym_u32overflowing_add] = ACTIONS(287),
    [anon_sym_u32checked_sub] = ACTIONS(285),
    [anon_sym_u32wrapping_sub] = ACTIONS(285),
    [anon_sym_u32overflowing_sub] = ACTIONS(285),
    [anon_sym_u32checked_mul] = ACTIONS(285),
    [anon_sym_u32wrapping_mul] = ACTIONS(285),
    [anon_sym_u32overflowing_mul] = ACTIONS(285),
    [anon_sym_u32checked_div] = ACTIONS(287),
    [anon_sym_u32unchecked_div] = ACTIONS(287),
    [anon_sym_u32checked_mod] = ACTIONS(285),
    [anon_sym_u32unchecked_mod] = ACTIONS(285),
    [anon_sym_u32checked_divmod] = ACTIONS(285),
    [anon_sym_u32unchecked_divmod] = ACTIONS(285),
    [anon_sym_u32checked_shr] = ACTIONS(285),
    [anon_sym_u32unchecked_shr] = ACTIONS(285),
    [anon_sym_u32checked_shl] = ACTIONS(285),
    [anon_sym_u32unchecked_shl] = ACTIONS(285),
    [anon_sym_u32checked_rotr] = ACTIONS(285),
    [anon_sym_u32unchecked_rotr] = ACTIONS(285),
    [anon_sym_u32checked_rotl] = ACTIONS(285),
    [anon_sym_u32unchecked_rotl] = ACTIONS(285),
    [anon_sym_u32checked_eq] = ACTIONS(285),
    [anon_sym_u32checked_neq] = ACTIONS(285),
    [anon_sym_locaddr] = ACTIONS(285),
    [anon_sym_loc_load] = ACTIONS(287),
    [anon_sym_loc_loadw] = ACTIONS(285),
    [anon_sym_loc_store] = ACTIONS(287),
    [anon_sym_loc_storew] = ACTIONS(285),
    [anon_sym_dup] = ACTIONS(287),
    [anon_sym_swap] = ACTIONS(287),
    [anon_sym_movup] = ACTIONS(287),
    [anon_sym_movdn] = ACTIONS(287),
    [anon_sym_adv_push] = ACTIONS(285),
    [anon_sym_dupw] = ACTIONS(285),
    [anon_sym_swapw] = ACTIONS(285),
    [anon_sym_movupw] = ACTIONS(285),
    [anon_sym_movdnw] = ACTIONS(285),
    [anon_sym_push] = ACTIONS(285),
    [anon_sym_if] = ACTIONS(285),
    [sym__else] = ACTIONS(285),
    [anon_sym_while] = ACTIONS(285),
    [anon_sym_repeat] = ACTIONS(285),
    [sym__end] = ACTIONS(285),
  },
  [35] = {
    [anon_sym_DOT] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(291),
    [anon_sym_call] = ACTIONS(293),
    [anon_sym_syscall] = ACTIONS(291),
    [anon_sym_assert] = ACTIONS(293),
    [anon_sym_assertz] = ACTIONS(291),
    [anon_sym_assert_eq] = ACTIONS(293),
    [anon_sym_neg] = ACTIONS(291),
    [anon_sym_inv] = ACTIONS(291),
    [anon_sym_pow2] = ACTIONS(291),
    [anon_sym_not] = ACTIONS(291),
    [anon_sym_and] = ACTIONS(291),
    [anon_sym_or] = ACTIONS(291),
    [anon_sym_xor] = ACTIONS(291),
    [anon_sym_lt] = ACTIONS(293),
    [anon_sym_lte] = ACTIONS(291),
    [anon_sym_gt] = ACTIONS(293),
    [anon_sym_gte] = ACTIONS(291),
    [anon_sym_eqw] = ACTIONS(291),
    [anon_sym_ext2add] = ACTIONS(291),
    [anon_sym_ext2sub] = ACTIONS(291),
    [anon_sym_ext2mul] = ACTIONS(291),
    [anon_sym_ext2div] = ACTIONS(291),
    [anon_sym_ext2neg] = ACTIONS(291),
    [anon_sym_ext2inv] = ACTIONS(291),
    [anon_sym_u32test] = ACTIONS(293),
    [anon_sym_u32testw] = ACTIONS(291),
    [anon_sym_u32assertw] = ACTIONS(291),
    [anon_sym_u32cast] = ACTIONS(291),
    [anon_sym_u32split] = ACTIONS(291),
    [anon_sym_u32overflowing_add3] = ACTIONS(291),
    [anon_sym_u32wrapping_add3] = ACTIONS(291),
    [anon_sym_u32overflowing_madd] = ACTIONS(291),
    [anon_sym_u32wrapping_madd] = ACTIONS(291),
    [anon_sym_u32checked_and] = ACTIONS(291),
    [anon_sym_u32checked_or] = ACTIONS(291),
    [anon_sym_u32checked_xor] = ACTIONS(291),
    [anon_sym_u32checked_not] = ACTIONS(291),
    [anon_sym_u32checked_popcnt] = ACTIONS(291),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(291),
    [anon_sym_u32checked_lt] = ACTIONS(293),
    [anon_sym_u32unchecked_lt] = ACTIONS(293),
    [anon_sym_u32checked_lte] = ACTIONS(291),
    [anon_sym_u32unchecked_lte] = ACTIONS(291),
    [anon_sym_u32checked_gt] = ACTIONS(293),
    [anon_sym_u32unchecked_gt] = ACTIONS(293),
    [anon_sym_u32checked_gte] = ACTIONS(291),
    [anon_sym_u32unchecked_gte] = ACTIONS(291),
    [anon_sym_u32checked_min] = ACTIONS(291),
    [anon_sym_u32unchecked_min] = ACTIONS(291),
    [anon_sym_u32checked_max] = ACTIONS(291),
    [anon_sym_u32unchecked_max] = ACTIONS(291),
    [anon_sym_drop] = ACTIONS(293),
    [anon_sym_dropw] = ACTIONS(291),
    [anon_sym_padw] = ACTIONS(291),
    [anon_sym_swapdw] = ACTIONS(291),
    [anon_sym_cswap] = ACTIONS(293),
    [anon_sym_cswapw] = ACTIONS(291),
    [anon_sym_cdrop] = ACTIONS(293),
    [anon_sym_cdropw] = ACTIONS(291),
    [anon_sym_sdepth] = ACTIONS(291),
    [anon_sym_mem_stream] = ACTIONS(291),
    [anon_sym_adv_pipe] = ACTIONS(291),
    [anon_sym_adv_loadw] = ACTIONS(291),
    [anon_sym_hmerge] = ACTIONS(291),
    [anon_sym_hperm] = ACTIONS(291),
    [anon_sym_mtree_get] = ACTIONS(291),
    [anon_sym_mtree_set] = ACTIONS(291),
    [anon_sym_mtree_cwm] = ACTIONS(291),
    [anon_sym_caller] = ACTIONS(291),
    [anon_sym_is_odd] = ACTIONS(291),
    [anon_sym_assert_eqw] = ACTIONS(291),
    [anon_sym_clk] = ACTIONS(291),
    [anon_sym_fri_ext2fold4] = ACTIONS(291),
    [anon_sym_hash] = ACTIONS(291),
    [anon_sym_adv] = ACTIONS(293),
    [anon_sym_exp] = ACTIONS(291),
    [anon_sym_u32assert] = ACTIONS(293),
    [anon_sym_add] = ACTIONS(291),
    [anon_sym_sub] = ACTIONS(291),
    [anon_sym_mul] = ACTIONS(291),
    [anon_sym_eq] = ACTIONS(293),
    [anon_sym_neq] = ACTIONS(291),
    [anon_sym_div] = ACTIONS(291),
    [anon_sym_mem_load] = ACTIONS(293),
    [anon_sym_mem_loadw] = ACTIONS(291),
    [anon_sym_mem_store] = ACTIONS(293),
    [anon_sym_mem_storew] = ACTIONS(291),
    [anon_sym_u32checked_add] = ACTIONS(291),
    [anon_sym_u32wrapping_add] = ACTIONS(293),
    [anon_sym_u32overflowing_add] = ACTIONS(293),
    [anon_sym_u32checked_sub] = ACTIONS(291),
    [anon_sym_u32wrapping_sub] = ACTIONS(291),
    [anon_sym_u32overflowing_sub] = ACTIONS(291),
    [anon_sym_u32checked_mul] = ACTIONS(291),
    [anon_sym_u32wrapping_mul] = ACTIONS(291),
    [anon_sym_u32overflowing_mul] = ACTIONS(291),
    [anon_sym_u32checked_div] = ACTIONS(293),
    [anon_sym_u32unchecked_div] = ACTIONS(293),
    [anon_sym_u32checked_mod] = ACTIONS(291),
    [anon_sym_u32unchecked_mod] = ACTIONS(291),
    [anon_sym_u32checked_divmod] = ACTIONS(291),
    [anon_sym_u32unchecked_divmod] = ACTIONS(291),
    [anon_sym_u32checked_shr] = ACTIONS(291),
    [anon_sym_u32unchecked_shr] = ACTIONS(291),
    [anon_sym_u32checked_shl] = ACTIONS(291),
    [anon_sym_u32unchecked_shl] = ACTIONS(291),
    [anon_sym_u32checked_rotr] = ACTIONS(291),
    [anon_sym_u32unchecked_rotr] = ACTIONS(291),
    [anon_sym_u32checked_rotl] = ACTIONS(291),
    [anon_sym_u32unchecked_rotl] = ACTIONS(291),
    [anon_sym_u32checked_eq] = ACTIONS(291),
    [anon_sym_u32checked_neq] = ACTIONS(291),
    [anon_sym_locaddr] = ACTIONS(291),
    [anon_sym_loc_load] = ACTIONS(293),
    [anon_sym_loc_loadw] = ACTIONS(291),
    [anon_sym_loc_store] = ACTIONS(293),
    [anon_sym_loc_storew] = ACTIONS(291),
    [anon_sym_dup] = ACTIONS(293),
    [anon_sym_swap] = ACTIONS(293),
    [anon_sym_movup] = ACTIONS(293),
    [anon_sym_movdn] = ACTIONS(293),
    [anon_sym_adv_push] = ACTIONS(291),
    [anon_sym_dupw] = ACTIONS(291),
    [anon_sym_swapw] = ACTIONS(291),
    [anon_sym_movupw] = ACTIONS(291),
    [anon_sym_movdnw] = ACTIONS(291),
    [anon_sym_push] = ACTIONS(291),
    [anon_sym_if] = ACTIONS(291),
    [sym__else] = ACTIONS(291),
    [anon_sym_while] = ACTIONS(291),
    [anon_sym_repeat] = ACTIONS(291),
    [sym__end] = ACTIONS(291),
  },
  [36] = {
    [anon_sym_DOT] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(297),
    [anon_sym_call] = ACTIONS(299),
    [anon_sym_syscall] = ACTIONS(297),
    [anon_sym_assert] = ACTIONS(299),
    [anon_sym_assertz] = ACTIONS(297),
    [anon_sym_assert_eq] = ACTIONS(299),
    [anon_sym_neg] = ACTIONS(297),
    [anon_sym_inv] = ACTIONS(297),
    [anon_sym_pow2] = ACTIONS(297),
    [anon_sym_not] = ACTIONS(297),
    [anon_sym_and] = ACTIONS(297),
    [anon_sym_or] = ACTIONS(297),
    [anon_sym_xor] = ACTIONS(297),
    [anon_sym_lt] = ACTIONS(299),
    [anon_sym_lte] = ACTIONS(297),
    [anon_sym_gt] = ACTIONS(299),
    [anon_sym_gte] = ACTIONS(297),
    [anon_sym_eqw] = ACTIONS(297),
    [anon_sym_ext2add] = ACTIONS(297),
    [anon_sym_ext2sub] = ACTIONS(297),
    [anon_sym_ext2mul] = ACTIONS(297),
    [anon_sym_ext2div] = ACTIONS(297),
    [anon_sym_ext2neg] = ACTIONS(297),
    [anon_sym_ext2inv] = ACTIONS(297),
    [anon_sym_u32test] = ACTIONS(299),
    [anon_sym_u32testw] = ACTIONS(297),
    [anon_sym_u32assertw] = ACTIONS(297),
    [anon_sym_u32cast] = ACTIONS(297),
    [anon_sym_u32split] = ACTIONS(297),
    [anon_sym_u32overflowing_add3] = ACTIONS(297),
    [anon_sym_u32wrapping_add3] = ACTIONS(297),
    [anon_sym_u32overflowing_madd] = ACTIONS(297),
    [anon_sym_u32wrapping_madd] = ACTIONS(297),
    [anon_sym_u32checked_and] = ACTIONS(297),
    [anon_sym_u32checked_or] = ACTIONS(297),
    [anon_sym_u32checked_xor] = ACTIONS(297),
    [anon_sym_u32checked_not] = ACTIONS(297),
    [anon_sym_u32checked_popcnt] = ACTIONS(297),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(297),
    [anon_sym_u32checked_lt] = ACTIONS(299),
    [anon_sym_u32unchecked_lt] = ACTIONS(299),
    [anon_sym_u32checked_lte] = ACTIONS(297),
    [anon_sym_u32unchecked_lte] = ACTIONS(297),
    [anon_sym_u32checked_gt] = ACTIONS(299),
    [anon_sym_u32unchecked_gt] = ACTIONS(299),
    [anon_sym_u32checked_gte] = ACTIONS(297),
    [anon_sym_u32unchecked_gte] = ACTIONS(297),
    [anon_sym_u32checked_min] = ACTIONS(297),
    [anon_sym_u32unchecked_min] = ACTIONS(297),
    [anon_sym_u32checked_max] = ACTIONS(297),
    [anon_sym_u32unchecked_max] = ACTIONS(297),
    [anon_sym_drop] = ACTIONS(299),
    [anon_sym_dropw] = ACTIONS(297),
    [anon_sym_padw] = ACTIONS(297),
    [anon_sym_swapdw] = ACTIONS(297),
    [anon_sym_cswap] = ACTIONS(299),
    [anon_sym_cswapw] = ACTIONS(297),
    [anon_sym_cdrop] = ACTIONS(299),
    [anon_sym_cdropw] = ACTIONS(297),
    [anon_sym_sdepth] = ACTIONS(297),
    [anon_sym_mem_stream] = ACTIONS(297),
    [anon_sym_adv_pipe] = ACTIONS(297),
    [anon_sym_adv_loadw] = ACTIONS(297),
    [anon_sym_hmerge] = ACTIONS(297),
    [anon_sym_hperm] = ACTIONS(297),
    [anon_sym_mtree_get] = ACTIONS(297),
    [anon_sym_mtree_set] = ACTIONS(297),
    [anon_sym_mtree_cwm] = ACTIONS(297),
    [anon_sym_caller] = ACTIONS(297),
    [anon_sym_is_odd] = ACTIONS(297),
    [anon_sym_assert_eqw] = ACTIONS(297),
    [anon_sym_clk] = ACTIONS(297),
    [anon_sym_fri_ext2fold4] = ACTIONS(297),
    [anon_sym_hash] = ACTIONS(297),
    [anon_sym_adv] = ACTIONS(299),
    [anon_sym_exp] = ACTIONS(297),
    [anon_sym_u32assert] = ACTIONS(299),
    [anon_sym_add] = ACTIONS(297),
    [anon_sym_sub] = ACTIONS(297),
    [anon_sym_mul] = ACTIONS(297),
    [anon_sym_eq] = ACTIONS(299),
    [anon_sym_neq] = ACTIONS(297),
    [anon_sym_div] = ACTIONS(297),
    [anon_sym_mem_load] = ACTIONS(299),
    [anon_sym_mem_loadw] = ACTIONS(297),
    [anon_sym_mem_store] = ACTIONS(299),
    [anon_sym_mem_storew] = ACTIONS(297),
    [anon_sym_u32checked_add] = ACTIONS(297),
    [anon_sym_u32wrapping_add] = ACTIONS(299),
    [anon_sym_u32overflowing_add] = ACTIONS(299),
    [anon_sym_u32checked_sub] = ACTIONS(297),
    [anon_sym_u32wrapping_sub] = ACTIONS(297),
    [anon_sym_u32overflowing_sub] = ACTIONS(297),
    [anon_sym_u32checked_mul] = ACTIONS(297),
    [anon_sym_u32wrapping_mul] = ACTIONS(297),
    [anon_sym_u32overflowing_mul] = ACTIONS(297),
    [anon_sym_u32checked_div] = ACTIONS(299),
    [anon_sym_u32unchecked_div] = ACTIONS(299),
    [anon_sym_u32checked_mod] = ACTIONS(297),
    [anon_sym_u32unchecked_mod] = ACTIONS(297),
    [anon_sym_u32checked_divmod] = ACTIONS(297),
    [anon_sym_u32unchecked_divmod] = ACTIONS(297),
    [anon_sym_u32checked_shr] = ACTIONS(297),
    [anon_sym_u32unchecked_shr] = ACTIONS(297),
    [anon_sym_u32checked_shl] = ACTIONS(297),
    [anon_sym_u32unchecked_shl] = ACTIONS(297),
    [anon_sym_u32checked_rotr] = ACTIONS(297),
    [anon_sym_u32unchecked_rotr] = ACTIONS(297),
    [anon_sym_u32checked_rotl] = ACTIONS(297),
    [anon_sym_u32unchecked_rotl] = ACTIONS(297),
    [anon_sym_u32checked_eq] = ACTIONS(297),
    [anon_sym_u32checked_neq] = ACTIONS(297),
    [anon_sym_locaddr] = ACTIONS(297),
    [anon_sym_loc_load] = ACTIONS(299),
    [anon_sym_loc_loadw] = ACTIONS(297),
    [anon_sym_loc_store] = ACTIONS(299),
    [anon_sym_loc_storew] = ACTIONS(297),
    [anon_sym_dup] = ACTIONS(299),
    [anon_sym_swap] = ACTIONS(299),
    [anon_sym_movup] = ACTIONS(299),
    [anon_sym_movdn] = ACTIONS(299),
    [anon_sym_adv_push] = ACTIONS(297),
    [anon_sym_dupw] = ACTIONS(297),
    [anon_sym_swapw] = ACTIONS(297),
    [anon_sym_movupw] = ACTIONS(297),
    [anon_sym_movdnw] = ACTIONS(297),
    [anon_sym_push] = ACTIONS(297),
    [anon_sym_if] = ACTIONS(297),
    [sym__else] = ACTIONS(297),
    [anon_sym_while] = ACTIONS(297),
    [anon_sym_repeat] = ACTIONS(297),
    [sym__end] = ACTIONS(297),
  },
  [37] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(301),
    [anon_sym_COLON_COLON] = ACTIONS(303),
    [anon_sym_call] = ACTIONS(305),
    [anon_sym_syscall] = ACTIONS(301),
    [anon_sym_assert] = ACTIONS(305),
    [anon_sym_assertz] = ACTIONS(301),
    [anon_sym_assert_eq] = ACTIONS(305),
    [anon_sym_neg] = ACTIONS(301),
    [anon_sym_inv] = ACTIONS(301),
    [anon_sym_pow2] = ACTIONS(301),
    [anon_sym_not] = ACTIONS(301),
    [anon_sym_and] = ACTIONS(301),
    [anon_sym_or] = ACTIONS(301),
    [anon_sym_xor] = ACTIONS(301),
    [anon_sym_lt] = ACTIONS(305),
    [anon_sym_lte] = ACTIONS(301),
    [anon_sym_gt] = ACTIONS(305),
    [anon_sym_gte] = ACTIONS(301),
    [anon_sym_eqw] = ACTIONS(301),
    [anon_sym_ext2add] = ACTIONS(301),
    [anon_sym_ext2sub] = ACTIONS(301),
    [anon_sym_ext2mul] = ACTIONS(301),
    [anon_sym_ext2div] = ACTIONS(301),
    [anon_sym_ext2neg] = ACTIONS(301),
    [anon_sym_ext2inv] = ACTIONS(301),
    [anon_sym_u32test] = ACTIONS(305),
    [anon_sym_u32testw] = ACTIONS(301),
    [anon_sym_u32assertw] = ACTIONS(301),
    [anon_sym_u32cast] = ACTIONS(301),
    [anon_sym_u32split] = ACTIONS(301),
    [anon_sym_u32overflowing_add3] = ACTIONS(301),
    [anon_sym_u32wrapping_add3] = ACTIONS(301),
    [anon_sym_u32overflowing_madd] = ACTIONS(301),
    [anon_sym_u32wrapping_madd] = ACTIONS(301),
    [anon_sym_u32checked_and] = ACTIONS(301),
    [anon_sym_u32checked_or] = ACTIONS(301),
    [anon_sym_u32checked_xor] = ACTIONS(301),
    [anon_sym_u32checked_not] = ACTIONS(301),
    [anon_sym_u32checked_popcnt] = ACTIONS(301),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(301),
    [anon_sym_u32checked_lt] = ACTIONS(305),
    [anon_sym_u32unchecked_lt] = ACTIONS(305),
    [anon_sym_u32checked_lte] = ACTIONS(301),
    [anon_sym_u32unchecked_lte] = ACTIONS(301),
    [anon_sym_u32checked_gt] = ACTIONS(305),
    [anon_sym_u32unchecked_gt] = ACTIONS(305),
    [anon_sym_u32checked_gte] = ACTIONS(301),
    [anon_sym_u32unchecked_gte] = ACTIONS(301),
    [anon_sym_u32checked_min] = ACTIONS(301),
    [anon_sym_u32unchecked_min] = ACTIONS(301),
    [anon_sym_u32checked_max] = ACTIONS(301),
    [anon_sym_u32unchecked_max] = ACTIONS(301),
    [anon_sym_drop] = ACTIONS(305),
    [anon_sym_dropw] = ACTIONS(301),
    [anon_sym_padw] = ACTIONS(301),
    [anon_sym_swapdw] = ACTIONS(301),
    [anon_sym_cswap] = ACTIONS(305),
    [anon_sym_cswapw] = ACTIONS(301),
    [anon_sym_cdrop] = ACTIONS(305),
    [anon_sym_cdropw] = ACTIONS(301),
    [anon_sym_sdepth] = ACTIONS(301),
    [anon_sym_mem_stream] = ACTIONS(301),
    [anon_sym_adv_pipe] = ACTIONS(301),
    [anon_sym_adv_loadw] = ACTIONS(301),
    [anon_sym_hmerge] = ACTIONS(301),
    [anon_sym_hperm] = ACTIONS(301),
    [anon_sym_mtree_get] = ACTIONS(301),
    [anon_sym_mtree_set] = ACTIONS(301),
    [anon_sym_mtree_cwm] = ACTIONS(301),
    [anon_sym_caller] = ACTIONS(301),
    [anon_sym_is_odd] = ACTIONS(301),
    [anon_sym_assert_eqw] = ACTIONS(301),
    [anon_sym_clk] = ACTIONS(301),
    [anon_sym_fri_ext2fold4] = ACTIONS(301),
    [anon_sym_hash] = ACTIONS(301),
    [anon_sym_adv] = ACTIONS(305),
    [anon_sym_exp] = ACTIONS(301),
    [anon_sym_u32assert] = ACTIONS(305),
    [anon_sym_add] = ACTIONS(301),
    [anon_sym_sub] = ACTIONS(301),
    [anon_sym_mul] = ACTIONS(301),
    [anon_sym_eq] = ACTIONS(305),
    [anon_sym_neq] = ACTIONS(301),
    [anon_sym_div] = ACTIONS(301),
    [anon_sym_mem_load] = ACTIONS(305),
    [anon_sym_mem_loadw] = ACTIONS(301),
    [anon_sym_mem_store] = ACTIONS(305),
    [anon_sym_mem_storew] = ACTIONS(301),
    [anon_sym_u32checked_add] = ACTIONS(301),
    [anon_sym_u32wrapping_add] = ACTIONS(305),
    [anon_sym_u32overflowing_add] = ACTIONS(305),
    [anon_sym_u32checked_sub] = ACTIONS(301),
    [anon_sym_u32wrapping_sub] = ACTIONS(301),
    [anon_sym_u32overflowing_sub] = ACTIONS(301),
    [anon_sym_u32checked_mul] = ACTIONS(301),
    [anon_sym_u32wrapping_mul] = ACTIONS(301),
    [anon_sym_u32overflowing_mul] = ACTIONS(301),
    [anon_sym_u32checked_div] = ACTIONS(305),
    [anon_sym_u32unchecked_div] = ACTIONS(305),
    [anon_sym_u32checked_mod] = ACTIONS(301),
    [anon_sym_u32unchecked_mod] = ACTIONS(301),
    [anon_sym_u32checked_divmod] = ACTIONS(301),
    [anon_sym_u32unchecked_divmod] = ACTIONS(301),
    [anon_sym_u32checked_shr] = ACTIONS(301),
    [anon_sym_u32unchecked_shr] = ACTIONS(301),
    [anon_sym_u32checked_shl] = ACTIONS(301),
    [anon_sym_u32unchecked_shl] = ACTIONS(301),
    [anon_sym_u32checked_rotr] = ACTIONS(301),
    [anon_sym_u32unchecked_rotr] = ACTIONS(301),
    [anon_sym_u32checked_rotl] = ACTIONS(301),
    [anon_sym_u32unchecked_rotl] = ACTIONS(301),
    [anon_sym_u32checked_eq] = ACTIONS(301),
    [anon_sym_u32checked_neq] = ACTIONS(301),
    [anon_sym_locaddr] = ACTIONS(301),
    [anon_sym_loc_load] = ACTIONS(305),
    [anon_sym_loc_loadw] = ACTIONS(301),
    [anon_sym_loc_store] = ACTIONS(305),
    [anon_sym_loc_storew] = ACTIONS(301),
    [anon_sym_dup] = ACTIONS(305),
    [anon_sym_swap] = ACTIONS(305),
    [anon_sym_movup] = ACTIONS(305),
    [anon_sym_movdn] = ACTIONS(305),
    [anon_sym_adv_push] = ACTIONS(301),
    [anon_sym_dupw] = ACTIONS(301),
    [anon_sym_swapw] = ACTIONS(301),
    [anon_sym_movupw] = ACTIONS(301),
    [anon_sym_movdnw] = ACTIONS(301),
    [anon_sym_push] = ACTIONS(301),
    [anon_sym_if] = ACTIONS(301),
    [sym__else] = ACTIONS(301),
    [anon_sym_while] = ACTIONS(301),
    [anon_sym_repeat] = ACTIONS(301),
    [sym__end] = ACTIONS(301),
  },
  [38] = {
    [anon_sym_DOT] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(307),
    [anon_sym_call] = ACTIONS(309),
    [anon_sym_syscall] = ACTIONS(307),
    [anon_sym_assert] = ACTIONS(309),
    [anon_sym_assertz] = ACTIONS(307),
    [anon_sym_assert_eq] = ACTIONS(309),
    [anon_sym_neg] = ACTIONS(307),
    [anon_sym_inv] = ACTIONS(307),
    [anon_sym_pow2] = ACTIONS(307),
    [anon_sym_not] = ACTIONS(307),
    [anon_sym_and] = ACTIONS(307),
    [anon_sym_or] = ACTIONS(307),
    [anon_sym_xor] = ACTIONS(307),
    [anon_sym_lt] = ACTIONS(309),
    [anon_sym_lte] = ACTIONS(307),
    [anon_sym_gt] = ACTIONS(309),
    [anon_sym_gte] = ACTIONS(307),
    [anon_sym_eqw] = ACTIONS(307),
    [anon_sym_ext2add] = ACTIONS(307),
    [anon_sym_ext2sub] = ACTIONS(307),
    [anon_sym_ext2mul] = ACTIONS(307),
    [anon_sym_ext2div] = ACTIONS(307),
    [anon_sym_ext2neg] = ACTIONS(307),
    [anon_sym_ext2inv] = ACTIONS(307),
    [anon_sym_u32test] = ACTIONS(309),
    [anon_sym_u32testw] = ACTIONS(307),
    [anon_sym_u32assertw] = ACTIONS(307),
    [anon_sym_u32cast] = ACTIONS(307),
    [anon_sym_u32split] = ACTIONS(307),
    [anon_sym_u32overflowing_add3] = ACTIONS(307),
    [anon_sym_u32wrapping_add3] = ACTIONS(307),
    [anon_sym_u32overflowing_madd] = ACTIONS(307),
    [anon_sym_u32wrapping_madd] = ACTIONS(307),
    [anon_sym_u32checked_and] = ACTIONS(307),
    [anon_sym_u32checked_or] = ACTIONS(307),
    [anon_sym_u32checked_xor] = ACTIONS(307),
    [anon_sym_u32checked_not] = ACTIONS(307),
    [anon_sym_u32checked_popcnt] = ACTIONS(307),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(307),
    [anon_sym_u32checked_lt] = ACTIONS(309),
    [anon_sym_u32unchecked_lt] = ACTIONS(309),
    [anon_sym_u32checked_lte] = ACTIONS(307),
    [anon_sym_u32unchecked_lte] = ACTIONS(307),
    [anon_sym_u32checked_gt] = ACTIONS(309),
    [anon_sym_u32unchecked_gt] = ACTIONS(309),
    [anon_sym_u32checked_gte] = ACTIONS(307),
    [anon_sym_u32unchecked_gte] = ACTIONS(307),
    [anon_sym_u32checked_min] = ACTIONS(307),
    [anon_sym_u32unchecked_min] = ACTIONS(307),
    [anon_sym_u32checked_max] = ACTIONS(307),
    [anon_sym_u32unchecked_max] = ACTIONS(307),
    [anon_sym_drop] = ACTIONS(309),
    [anon_sym_dropw] = ACTIONS(307),
    [anon_sym_padw] = ACTIONS(307),
    [anon_sym_swapdw] = ACTIONS(307),
    [anon_sym_cswap] = ACTIONS(309),
    [anon_sym_cswapw] = ACTIONS(307),
    [anon_sym_cdrop] = ACTIONS(309),
    [anon_sym_cdropw] = ACTIONS(307),
    [anon_sym_sdepth] = ACTIONS(307),
    [anon_sym_mem_stream] = ACTIONS(307),
    [anon_sym_adv_pipe] = ACTIONS(307),
    [anon_sym_adv_loadw] = ACTIONS(307),
    [anon_sym_hmerge] = ACTIONS(307),
    [anon_sym_hperm] = ACTIONS(307),
    [anon_sym_mtree_get] = ACTIONS(307),
    [anon_sym_mtree_set] = ACTIONS(307),
    [anon_sym_mtree_cwm] = ACTIONS(307),
    [anon_sym_caller] = ACTIONS(307),
    [anon_sym_is_odd] = ACTIONS(307),
    [anon_sym_assert_eqw] = ACTIONS(307),
    [anon_sym_clk] = ACTIONS(307),
    [anon_sym_fri_ext2fold4] = ACTIONS(307),
    [anon_sym_hash] = ACTIONS(307),
    [anon_sym_adv] = ACTIONS(309),
    [anon_sym_exp] = ACTIONS(307),
    [anon_sym_u32assert] = ACTIONS(309),
    [anon_sym_add] = ACTIONS(307),
    [anon_sym_sub] = ACTIONS(307),
    [anon_sym_mul] = ACTIONS(307),
    [anon_sym_eq] = ACTIONS(309),
    [anon_sym_neq] = ACTIONS(307),
    [anon_sym_div] = ACTIONS(307),
    [anon_sym_mem_load] = ACTIONS(309),
    [anon_sym_mem_loadw] = ACTIONS(307),
    [anon_sym_mem_store] = ACTIONS(309),
    [anon_sym_mem_storew] = ACTIONS(307),
    [anon_sym_u32checked_add] = ACTIONS(307),
    [anon_sym_u32wrapping_add] = ACTIONS(309),
    [anon_sym_u32overflowing_add] = ACTIONS(309),
    [anon_sym_u32checked_sub] = ACTIONS(307),
    [anon_sym_u32wrapping_sub] = ACTIONS(307),
    [anon_sym_u32overflowing_sub] = ACTIONS(307),
    [anon_sym_u32checked_mul] = ACTIONS(307),
    [anon_sym_u32wrapping_mul] = ACTIONS(307),
    [anon_sym_u32overflowing_mul] = ACTIONS(307),
    [anon_sym_u32checked_div] = ACTIONS(309),
    [anon_sym_u32unchecked_div] = ACTIONS(309),
    [anon_sym_u32checked_mod] = ACTIONS(307),
    [anon_sym_u32unchecked_mod] = ACTIONS(307),
    [anon_sym_u32checked_divmod] = ACTIONS(307),
    [anon_sym_u32unchecked_divmod] = ACTIONS(307),
    [anon_sym_u32checked_shr] = ACTIONS(307),
    [anon_sym_u32unchecked_shr] = ACTIONS(307),
    [anon_sym_u32checked_shl] = ACTIONS(307),
    [anon_sym_u32unchecked_shl] = ACTIONS(307),
    [anon_sym_u32checked_rotr] = ACTIONS(307),
    [anon_sym_u32unchecked_rotr] = ACTIONS(307),
    [anon_sym_u32checked_rotl] = ACTIONS(307),
    [anon_sym_u32unchecked_rotl] = ACTIONS(307),
    [anon_sym_u32checked_eq] = ACTIONS(307),
    [anon_sym_u32checked_neq] = ACTIONS(307),
    [anon_sym_locaddr] = ACTIONS(307),
    [anon_sym_loc_load] = ACTIONS(309),
    [anon_sym_loc_loadw] = ACTIONS(307),
    [anon_sym_loc_store] = ACTIONS(309),
    [anon_sym_loc_storew] = ACTIONS(307),
    [anon_sym_dup] = ACTIONS(309),
    [anon_sym_swap] = ACTIONS(309),
    [anon_sym_movup] = ACTIONS(309),
    [anon_sym_movdn] = ACTIONS(309),
    [anon_sym_adv_push] = ACTIONS(307),
    [anon_sym_dupw] = ACTIONS(307),
    [anon_sym_swapw] = ACTIONS(307),
    [anon_sym_movupw] = ACTIONS(307),
    [anon_sym_movdnw] = ACTIONS(307),
    [anon_sym_push] = ACTIONS(307),
    [anon_sym_if] = ACTIONS(307),
    [sym__else] = ACTIONS(307),
    [anon_sym_while] = ACTIONS(307),
    [anon_sym_repeat] = ACTIONS(307),
    [sym__end] = ACTIONS(307),
  },
  [39] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(311),
    [anon_sym_COLON_COLON] = ACTIONS(313),
    [anon_sym_call] = ACTIONS(315),
    [anon_sym_syscall] = ACTIONS(311),
    [anon_sym_assert] = ACTIONS(315),
    [anon_sym_assertz] = ACTIONS(311),
    [anon_sym_assert_eq] = ACTIONS(315),
    [anon_sym_neg] = ACTIONS(311),
    [anon_sym_inv] = ACTIONS(311),
    [anon_sym_pow2] = ACTIONS(311),
    [anon_sym_not] = ACTIONS(311),
    [anon_sym_and] = ACTIONS(311),
    [anon_sym_or] = ACTIONS(311),
    [anon_sym_xor] = ACTIONS(311),
    [anon_sym_lt] = ACTIONS(315),
    [anon_sym_lte] = ACTIONS(311),
    [anon_sym_gt] = ACTIONS(315),
    [anon_sym_gte] = ACTIONS(311),
    [anon_sym_eqw] = ACTIONS(311),
    [anon_sym_ext2add] = ACTIONS(311),
    [anon_sym_ext2sub] = ACTIONS(311),
    [anon_sym_ext2mul] = ACTIONS(311),
    [anon_sym_ext2div] = ACTIONS(311),
    [anon_sym_ext2neg] = ACTIONS(311),
    [anon_sym_ext2inv] = ACTIONS(311),
    [anon_sym_u32test] = ACTIONS(315),
    [anon_sym_u32testw] = ACTIONS(311),
    [anon_sym_u32assertw] = ACTIONS(311),
    [anon_sym_u32cast] = ACTIONS(311),
    [anon_sym_u32split] = ACTIONS(311),
    [anon_sym_u32overflowing_add3] = ACTIONS(311),
    [anon_sym_u32wrapping_add3] = ACTIONS(311),
    [anon_sym_u32overflowing_madd] = ACTIONS(311),
    [anon_sym_u32wrapping_madd] = ACTIONS(311),
    [anon_sym_u32checked_and] = ACTIONS(311),
    [anon_sym_u32checked_or] = ACTIONS(311),
    [anon_sym_u32checked_xor] = ACTIONS(311),
    [anon_sym_u32checked_not] = ACTIONS(311),
    [anon_sym_u32checked_popcnt] = ACTIONS(311),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(311),
    [anon_sym_u32checked_lt] = ACTIONS(315),
    [anon_sym_u32unchecked_lt] = ACTIONS(315),
    [anon_sym_u32checked_lte] = ACTIONS(311),
    [anon_sym_u32unchecked_lte] = ACTIONS(311),
    [anon_sym_u32checked_gt] = ACTIONS(315),
    [anon_sym_u32unchecked_gt] = ACTIONS(315),
    [anon_sym_u32checked_gte] = ACTIONS(311),
    [anon_sym_u32unchecked_gte] = ACTIONS(311),
    [anon_sym_u32checked_min] = ACTIONS(311),
    [anon_sym_u32unchecked_min] = ACTIONS(311),
    [anon_sym_u32checked_max] = ACTIONS(311),
    [anon_sym_u32unchecked_max] = ACTIONS(311),
    [anon_sym_drop] = ACTIONS(315),
    [anon_sym_dropw] = ACTIONS(311),
    [anon_sym_padw] = ACTIONS(311),
    [anon_sym_swapdw] = ACTIONS(311),
    [anon_sym_cswap] = ACTIONS(315),
    [anon_sym_cswapw] = ACTIONS(311),
    [anon_sym_cdrop] = ACTIONS(315),
    [anon_sym_cdropw] = ACTIONS(311),
    [anon_sym_sdepth] = ACTIONS(311),
    [anon_sym_mem_stream] = ACTIONS(311),
    [anon_sym_adv_pipe] = ACTIONS(311),
    [anon_sym_adv_loadw] = ACTIONS(311),
    [anon_sym_hmerge] = ACTIONS(311),
    [anon_sym_hperm] = ACTIONS(311),
    [anon_sym_mtree_get] = ACTIONS(311),
    [anon_sym_mtree_set] = ACTIONS(311),
    [anon_sym_mtree_cwm] = ACTIONS(311),
    [anon_sym_caller] = ACTIONS(311),
    [anon_sym_is_odd] = ACTIONS(311),
    [anon_sym_assert_eqw] = ACTIONS(311),
    [anon_sym_clk] = ACTIONS(311),
    [anon_sym_fri_ext2fold4] = ACTIONS(311),
    [anon_sym_hash] = ACTIONS(311),
    [anon_sym_adv] = ACTIONS(315),
    [anon_sym_exp] = ACTIONS(311),
    [anon_sym_u32assert] = ACTIONS(315),
    [anon_sym_add] = ACTIONS(311),
    [anon_sym_sub] = ACTIONS(311),
    [anon_sym_mul] = ACTIONS(311),
    [anon_sym_eq] = ACTIONS(315),
    [anon_sym_neq] = ACTIONS(311),
    [anon_sym_div] = ACTIONS(311),
    [anon_sym_mem_load] = ACTIONS(315),
    [anon_sym_mem_loadw] = ACTIONS(311),
    [anon_sym_mem_store] = ACTIONS(315),
    [anon_sym_mem_storew] = ACTIONS(311),
    [anon_sym_u32checked_add] = ACTIONS(311),
    [anon_sym_u32wrapping_add] = ACTIONS(315),
    [anon_sym_u32overflowing_add] = ACTIONS(315),
    [anon_sym_u32checked_sub] = ACTIONS(311),
    [anon_sym_u32wrapping_sub] = ACTIONS(311),
    [anon_sym_u32overflowing_sub] = ACTIONS(311),
    [anon_sym_u32checked_mul] = ACTIONS(311),
    [anon_sym_u32wrapping_mul] = ACTIONS(311),
    [anon_sym_u32overflowing_mul] = ACTIONS(311),
    [anon_sym_u32checked_div] = ACTIONS(315),
    [anon_sym_u32unchecked_div] = ACTIONS(315),
    [anon_sym_u32checked_mod] = ACTIONS(311),
    [anon_sym_u32unchecked_mod] = ACTIONS(311),
    [anon_sym_u32checked_divmod] = ACTIONS(311),
    [anon_sym_u32unchecked_divmod] = ACTIONS(311),
    [anon_sym_u32checked_shr] = ACTIONS(311),
    [anon_sym_u32unchecked_shr] = ACTIONS(311),
    [anon_sym_u32checked_shl] = ACTIONS(311),
    [anon_sym_u32unchecked_shl] = ACTIONS(311),
    [anon_sym_u32checked_rotr] = ACTIONS(311),
    [anon_sym_u32unchecked_rotr] = ACTIONS(311),
    [anon_sym_u32checked_rotl] = ACTIONS(311),
    [anon_sym_u32unchecked_rotl] = ACTIONS(311),
    [anon_sym_u32checked_eq] = ACTIONS(311),
    [anon_sym_u32checked_neq] = ACTIONS(311),
    [anon_sym_locaddr] = ACTIONS(311),
    [anon_sym_loc_load] = ACTIONS(315),
    [anon_sym_loc_loadw] = ACTIONS(311),
    [anon_sym_loc_store] = ACTIONS(315),
    [anon_sym_loc_storew] = ACTIONS(311),
    [anon_sym_dup] = ACTIONS(315),
    [anon_sym_swap] = ACTIONS(315),
    [anon_sym_movup] = ACTIONS(315),
    [anon_sym_movdn] = ACTIONS(315),
    [anon_sym_adv_push] = ACTIONS(311),
    [anon_sym_dupw] = ACTIONS(311),
    [anon_sym_swapw] = ACTIONS(311),
    [anon_sym_movupw] = ACTIONS(311),
    [anon_sym_movdnw] = ACTIONS(311),
    [anon_sym_push] = ACTIONS(311),
    [anon_sym_if] = ACTIONS(311),
    [sym__else] = ACTIONS(311),
    [anon_sym_while] = ACTIONS(311),
    [anon_sym_repeat] = ACTIONS(311),
    [sym__end] = ACTIONS(311),
  },
  [40] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(317),
    [anon_sym_call] = ACTIONS(319),
    [anon_sym_syscall] = ACTIONS(317),
    [anon_sym_assert] = ACTIONS(319),
    [anon_sym_assertz] = ACTIONS(317),
    [anon_sym_assert_eq] = ACTIONS(319),
    [anon_sym_neg] = ACTIONS(317),
    [anon_sym_inv] = ACTIONS(317),
    [anon_sym_pow2] = ACTIONS(317),
    [anon_sym_not] = ACTIONS(317),
    [anon_sym_and] = ACTIONS(317),
    [anon_sym_or] = ACTIONS(317),
    [anon_sym_xor] = ACTIONS(317),
    [anon_sym_lt] = ACTIONS(319),
    [anon_sym_lte] = ACTIONS(317),
    [anon_sym_gt] = ACTIONS(319),
    [anon_sym_gte] = ACTIONS(317),
    [anon_sym_eqw] = ACTIONS(317),
    [anon_sym_ext2add] = ACTIONS(317),
    [anon_sym_ext2sub] = ACTIONS(317),
    [anon_sym_ext2mul] = ACTIONS(317),
    [anon_sym_ext2div] = ACTIONS(317),
    [anon_sym_ext2neg] = ACTIONS(317),
    [anon_sym_ext2inv] = ACTIONS(317),
    [anon_sym_u32test] = ACTIONS(319),
    [anon_sym_u32testw] = ACTIONS(317),
    [anon_sym_u32assertw] = ACTIONS(317),
    [anon_sym_u32cast] = ACTIONS(317),
    [anon_sym_u32split] = ACTIONS(317),
    [anon_sym_u32overflowing_add3] = ACTIONS(317),
    [anon_sym_u32wrapping_add3] = ACTIONS(317),
    [anon_sym_u32overflowing_madd] = ACTIONS(317),
    [anon_sym_u32wrapping_madd] = ACTIONS(317),
    [anon_sym_u32checked_and] = ACTIONS(317),
    [anon_sym_u32checked_or] = ACTIONS(317),
    [anon_sym_u32checked_xor] = ACTIONS(317),
    [anon_sym_u32checked_not] = ACTIONS(317),
    [anon_sym_u32checked_popcnt] = ACTIONS(317),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(317),
    [anon_sym_u32checked_lt] = ACTIONS(319),
    [anon_sym_u32unchecked_lt] = ACTIONS(319),
    [anon_sym_u32checked_lte] = ACTIONS(317),
    [anon_sym_u32unchecked_lte] = ACTIONS(317),
    [anon_sym_u32checked_gt] = ACTIONS(319),
    [anon_sym_u32unchecked_gt] = ACTIONS(319),
    [anon_sym_u32checked_gte] = ACTIONS(317),
    [anon_sym_u32unchecked_gte] = ACTIONS(317),
    [anon_sym_u32checked_min] = ACTIONS(317),
    [anon_sym_u32unchecked_min] = ACTIONS(317),
    [anon_sym_u32checked_max] = ACTIONS(317),
    [anon_sym_u32unchecked_max] = ACTIONS(317),
    [anon_sym_drop] = ACTIONS(319),
    [anon_sym_dropw] = ACTIONS(317),
    [anon_sym_padw] = ACTIONS(317),
    [anon_sym_swapdw] = ACTIONS(317),
    [anon_sym_cswap] = ACTIONS(319),
    [anon_sym_cswapw] = ACTIONS(317),
    [anon_sym_cdrop] = ACTIONS(319),
    [anon_sym_cdropw] = ACTIONS(317),
    [anon_sym_sdepth] = ACTIONS(317),
    [anon_sym_mem_stream] = ACTIONS(317),
    [anon_sym_adv_pipe] = ACTIONS(317),
    [anon_sym_adv_loadw] = ACTIONS(317),
    [anon_sym_hmerge] = ACTIONS(317),
    [anon_sym_hperm] = ACTIONS(317),
    [anon_sym_mtree_get] = ACTIONS(317),
    [anon_sym_mtree_set] = ACTIONS(317),
    [anon_sym_mtree_cwm] = ACTIONS(317),
    [anon_sym_caller] = ACTIONS(317),
    [anon_sym_is_odd] = ACTIONS(317),
    [anon_sym_assert_eqw] = ACTIONS(317),
    [anon_sym_clk] = ACTIONS(317),
    [anon_sym_fri_ext2fold4] = ACTIONS(317),
    [anon_sym_hash] = ACTIONS(317),
    [anon_sym_adv] = ACTIONS(319),
    [anon_sym_exp] = ACTIONS(317),
    [anon_sym_u32assert] = ACTIONS(319),
    [anon_sym_add] = ACTIONS(317),
    [anon_sym_sub] = ACTIONS(317),
    [anon_sym_mul] = ACTIONS(317),
    [anon_sym_eq] = ACTIONS(319),
    [anon_sym_neq] = ACTIONS(317),
    [anon_sym_div] = ACTIONS(317),
    [anon_sym_mem_load] = ACTIONS(319),
    [anon_sym_mem_loadw] = ACTIONS(317),
    [anon_sym_mem_store] = ACTIONS(319),
    [anon_sym_mem_storew] = ACTIONS(317),
    [anon_sym_u32checked_add] = ACTIONS(317),
    [anon_sym_u32wrapping_add] = ACTIONS(319),
    [anon_sym_u32overflowing_add] = ACTIONS(319),
    [anon_sym_u32checked_sub] = ACTIONS(317),
    [anon_sym_u32wrapping_sub] = ACTIONS(317),
    [anon_sym_u32overflowing_sub] = ACTIONS(317),
    [anon_sym_u32checked_mul] = ACTIONS(317),
    [anon_sym_u32wrapping_mul] = ACTIONS(317),
    [anon_sym_u32overflowing_mul] = ACTIONS(317),
    [anon_sym_u32checked_div] = ACTIONS(319),
    [anon_sym_u32unchecked_div] = ACTIONS(319),
    [anon_sym_u32checked_mod] = ACTIONS(317),
    [anon_sym_u32unchecked_mod] = ACTIONS(317),
    [anon_sym_u32checked_divmod] = ACTIONS(317),
    [anon_sym_u32unchecked_divmod] = ACTIONS(317),
    [anon_sym_u32checked_shr] = ACTIONS(317),
    [anon_sym_u32unchecked_shr] = ACTIONS(317),
    [anon_sym_u32checked_shl] = ACTIONS(317),
    [anon_sym_u32unchecked_shl] = ACTIONS(317),
    [anon_sym_u32checked_rotr] = ACTIONS(317),
    [anon_sym_u32unchecked_rotr] = ACTIONS(317),
    [anon_sym_u32checked_rotl] = ACTIONS(317),
    [anon_sym_u32unchecked_rotl] = ACTIONS(317),
    [anon_sym_u32checked_eq] = ACTIONS(317),
    [anon_sym_u32checked_neq] = ACTIONS(317),
    [anon_sym_locaddr] = ACTIONS(317),
    [anon_sym_loc_load] = ACTIONS(319),
    [anon_sym_loc_loadw] = ACTIONS(317),
    [anon_sym_loc_store] = ACTIONS(319),
    [anon_sym_loc_storew] = ACTIONS(317),
    [anon_sym_dup] = ACTIONS(319),
    [anon_sym_swap] = ACTIONS(319),
    [anon_sym_movup] = ACTIONS(319),
    [anon_sym_movdn] = ACTIONS(319),
    [anon_sym_adv_push] = ACTIONS(317),
    [anon_sym_dupw] = ACTIONS(317),
    [anon_sym_swapw] = ACTIONS(317),
    [anon_sym_movupw] = ACTIONS(317),
    [anon_sym_movdnw] = ACTIONS(317),
    [anon_sym_push] = ACTIONS(317),
    [anon_sym_if] = ACTIONS(317),
    [sym__else] = ACTIONS(317),
    [anon_sym_while] = ACTIONS(317),
    [anon_sym_repeat] = ACTIONS(317),
    [sym__end] = ACTIONS(317),
  },
  [41] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(321),
    [anon_sym_call] = ACTIONS(323),
    [anon_sym_syscall] = ACTIONS(321),
    [anon_sym_assert] = ACTIONS(323),
    [anon_sym_assertz] = ACTIONS(321),
    [anon_sym_assert_eq] = ACTIONS(323),
    [anon_sym_neg] = ACTIONS(321),
    [anon_sym_inv] = ACTIONS(321),
    [anon_sym_pow2] = ACTIONS(321),
    [anon_sym_not] = ACTIONS(321),
    [anon_sym_and] = ACTIONS(321),
    [anon_sym_or] = ACTIONS(321),
    [anon_sym_xor] = ACTIONS(321),
    [anon_sym_lt] = ACTIONS(323),
    [anon_sym_lte] = ACTIONS(321),
    [anon_sym_gt] = ACTIONS(323),
    [anon_sym_gte] = ACTIONS(321),
    [anon_sym_eqw] = ACTIONS(321),
    [anon_sym_ext2add] = ACTIONS(321),
    [anon_sym_ext2sub] = ACTIONS(321),
    [anon_sym_ext2mul] = ACTIONS(321),
    [anon_sym_ext2div] = ACTIONS(321),
    [anon_sym_ext2neg] = ACTIONS(321),
    [anon_sym_ext2inv] = ACTIONS(321),
    [anon_sym_u32test] = ACTIONS(323),
    [anon_sym_u32testw] = ACTIONS(321),
    [anon_sym_u32assertw] = ACTIONS(321),
    [anon_sym_u32cast] = ACTIONS(321),
    [anon_sym_u32split] = ACTIONS(321),
    [anon_sym_u32overflowing_add3] = ACTIONS(321),
    [anon_sym_u32wrapping_add3] = ACTIONS(321),
    [anon_sym_u32overflowing_madd] = ACTIONS(321),
    [anon_sym_u32wrapping_madd] = ACTIONS(321),
    [anon_sym_u32checked_and] = ACTIONS(321),
    [anon_sym_u32checked_or] = ACTIONS(321),
    [anon_sym_u32checked_xor] = ACTIONS(321),
    [anon_sym_u32checked_not] = ACTIONS(321),
    [anon_sym_u32checked_popcnt] = ACTIONS(321),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(321),
    [anon_sym_u32checked_lt] = ACTIONS(323),
    [anon_sym_u32unchecked_lt] = ACTIONS(323),
    [anon_sym_u32checked_lte] = ACTIONS(321),
    [anon_sym_u32unchecked_lte] = ACTIONS(321),
    [anon_sym_u32checked_gt] = ACTIONS(323),
    [anon_sym_u32unchecked_gt] = ACTIONS(323),
    [anon_sym_u32checked_gte] = ACTIONS(321),
    [anon_sym_u32unchecked_gte] = ACTIONS(321),
    [anon_sym_u32checked_min] = ACTIONS(321),
    [anon_sym_u32unchecked_min] = ACTIONS(321),
    [anon_sym_u32checked_max] = ACTIONS(321),
    [anon_sym_u32unchecked_max] = ACTIONS(321),
    [anon_sym_drop] = ACTIONS(323),
    [anon_sym_dropw] = ACTIONS(321),
    [anon_sym_padw] = ACTIONS(321),
    [anon_sym_swapdw] = ACTIONS(321),
    [anon_sym_cswap] = ACTIONS(323),
    [anon_sym_cswapw] = ACTIONS(321),
    [anon_sym_cdrop] = ACTIONS(323),
    [anon_sym_cdropw] = ACTIONS(321),
    [anon_sym_sdepth] = ACTIONS(321),
    [anon_sym_mem_stream] = ACTIONS(321),
    [anon_sym_adv_pipe] = ACTIONS(321),
    [anon_sym_adv_loadw] = ACTIONS(321),
    [anon_sym_hmerge] = ACTIONS(321),
    [anon_sym_hperm] = ACTIONS(321),
    [anon_sym_mtree_get] = ACTIONS(321),
    [anon_sym_mtree_set] = ACTIONS(321),
    [anon_sym_mtree_cwm] = ACTIONS(321),
    [anon_sym_caller] = ACTIONS(321),
    [anon_sym_is_odd] = ACTIONS(321),
    [anon_sym_assert_eqw] = ACTIONS(321),
    [anon_sym_clk] = ACTIONS(321),
    [anon_sym_fri_ext2fold4] = ACTIONS(321),
    [anon_sym_hash] = ACTIONS(321),
    [anon_sym_adv] = ACTIONS(323),
    [anon_sym_exp] = ACTIONS(321),
    [anon_sym_u32assert] = ACTIONS(323),
    [anon_sym_add] = ACTIONS(321),
    [anon_sym_sub] = ACTIONS(321),
    [anon_sym_mul] = ACTIONS(321),
    [anon_sym_eq] = ACTIONS(323),
    [anon_sym_neq] = ACTIONS(321),
    [anon_sym_div] = ACTIONS(321),
    [anon_sym_mem_load] = ACTIONS(323),
    [anon_sym_mem_loadw] = ACTIONS(321),
    [anon_sym_mem_store] = ACTIONS(323),
    [anon_sym_mem_storew] = ACTIONS(321),
    [anon_sym_u32checked_add] = ACTIONS(321),
    [anon_sym_u32wrapping_add] = ACTIONS(323),
    [anon_sym_u32overflowing_add] = ACTIONS(323),
    [anon_sym_u32checked_sub] = ACTIONS(321),
    [anon_sym_u32wrapping_sub] = ACTIONS(321),
    [anon_sym_u32overflowing_sub] = ACTIONS(321),
    [anon_sym_u32checked_mul] = ACTIONS(321),
    [anon_sym_u32wrapping_mul] = ACTIONS(321),
    [anon_sym_u32overflowing_mul] = ACTIONS(321),
    [anon_sym_u32checked_div] = ACTIONS(323),
    [anon_sym_u32unchecked_div] = ACTIONS(323),
    [anon_sym_u32checked_mod] = ACTIONS(321),
    [anon_sym_u32unchecked_mod] = ACTIONS(321),
    [anon_sym_u32checked_divmod] = ACTIONS(321),
    [anon_sym_u32unchecked_divmod] = ACTIONS(321),
    [anon_sym_u32checked_shr] = ACTIONS(321),
    [anon_sym_u32unchecked_shr] = ACTIONS(321),
    [anon_sym_u32checked_shl] = ACTIONS(321),
    [anon_sym_u32unchecked_shl] = ACTIONS(321),
    [anon_sym_u32checked_rotr] = ACTIONS(321),
    [anon_sym_u32unchecked_rotr] = ACTIONS(321),
    [anon_sym_u32checked_rotl] = ACTIONS(321),
    [anon_sym_u32unchecked_rotl] = ACTIONS(321),
    [anon_sym_u32checked_eq] = ACTIONS(321),
    [anon_sym_u32checked_neq] = ACTIONS(321),
    [anon_sym_locaddr] = ACTIONS(321),
    [anon_sym_loc_load] = ACTIONS(323),
    [anon_sym_loc_loadw] = ACTIONS(321),
    [anon_sym_loc_store] = ACTIONS(323),
    [anon_sym_loc_storew] = ACTIONS(321),
    [anon_sym_dup] = ACTIONS(323),
    [anon_sym_swap] = ACTIONS(323),
    [anon_sym_movup] = ACTIONS(323),
    [anon_sym_movdn] = ACTIONS(323),
    [anon_sym_adv_push] = ACTIONS(321),
    [anon_sym_dupw] = ACTIONS(321),
    [anon_sym_swapw] = ACTIONS(321),
    [anon_sym_movupw] = ACTIONS(321),
    [anon_sym_movdnw] = ACTIONS(321),
    [anon_sym_push] = ACTIONS(321),
    [anon_sym_if] = ACTIONS(321),
    [sym__else] = ACTIONS(321),
    [anon_sym_while] = ACTIONS(321),
    [anon_sym_repeat] = ACTIONS(321),
    [sym__end] = ACTIONS(321),
  },
  [42] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(325),
    [anon_sym_call] = ACTIONS(327),
    [anon_sym_syscall] = ACTIONS(325),
    [anon_sym_assert] = ACTIONS(327),
    [anon_sym_assertz] = ACTIONS(325),
    [anon_sym_assert_eq] = ACTIONS(327),
    [anon_sym_neg] = ACTIONS(325),
    [anon_sym_inv] = ACTIONS(325),
    [anon_sym_pow2] = ACTIONS(325),
    [anon_sym_not] = ACTIONS(325),
    [anon_sym_and] = ACTIONS(325),
    [anon_sym_or] = ACTIONS(325),
    [anon_sym_xor] = ACTIONS(325),
    [anon_sym_lt] = ACTIONS(327),
    [anon_sym_lte] = ACTIONS(325),
    [anon_sym_gt] = ACTIONS(327),
    [anon_sym_gte] = ACTIONS(325),
    [anon_sym_eqw] = ACTIONS(325),
    [anon_sym_ext2add] = ACTIONS(325),
    [anon_sym_ext2sub] = ACTIONS(325),
    [anon_sym_ext2mul] = ACTIONS(325),
    [anon_sym_ext2div] = ACTIONS(325),
    [anon_sym_ext2neg] = ACTIONS(325),
    [anon_sym_ext2inv] = ACTIONS(325),
    [anon_sym_u32test] = ACTIONS(327),
    [anon_sym_u32testw] = ACTIONS(325),
    [anon_sym_u32assertw] = ACTIONS(325),
    [anon_sym_u32cast] = ACTIONS(325),
    [anon_sym_u32split] = ACTIONS(325),
    [anon_sym_u32overflowing_add3] = ACTIONS(325),
    [anon_sym_u32wrapping_add3] = ACTIONS(325),
    [anon_sym_u32overflowing_madd] = ACTIONS(325),
    [anon_sym_u32wrapping_madd] = ACTIONS(325),
    [anon_sym_u32checked_and] = ACTIONS(325),
    [anon_sym_u32checked_or] = ACTIONS(325),
    [anon_sym_u32checked_xor] = ACTIONS(325),
    [anon_sym_u32checked_not] = ACTIONS(325),
    [anon_sym_u32checked_popcnt] = ACTIONS(325),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(325),
    [anon_sym_u32checked_lt] = ACTIONS(327),
    [anon_sym_u32unchecked_lt] = ACTIONS(327),
    [anon_sym_u32checked_lte] = ACTIONS(325),
    [anon_sym_u32unchecked_lte] = ACTIONS(325),
    [anon_sym_u32checked_gt] = ACTIONS(327),
    [anon_sym_u32unchecked_gt] = ACTIONS(327),
    [anon_sym_u32checked_gte] = ACTIONS(325),
    [anon_sym_u32unchecked_gte] = ACTIONS(325),
    [anon_sym_u32checked_min] = ACTIONS(325),
    [anon_sym_u32unchecked_min] = ACTIONS(325),
    [anon_sym_u32checked_max] = ACTIONS(325),
    [anon_sym_u32unchecked_max] = ACTIONS(325),
    [anon_sym_drop] = ACTIONS(327),
    [anon_sym_dropw] = ACTIONS(325),
    [anon_sym_padw] = ACTIONS(325),
    [anon_sym_swapdw] = ACTIONS(325),
    [anon_sym_cswap] = ACTIONS(327),
    [anon_sym_cswapw] = ACTIONS(325),
    [anon_sym_cdrop] = ACTIONS(327),
    [anon_sym_cdropw] = ACTIONS(325),
    [anon_sym_sdepth] = ACTIONS(325),
    [anon_sym_mem_stream] = ACTIONS(325),
    [anon_sym_adv_pipe] = ACTIONS(325),
    [anon_sym_adv_loadw] = ACTIONS(325),
    [anon_sym_hmerge] = ACTIONS(325),
    [anon_sym_hperm] = ACTIONS(325),
    [anon_sym_mtree_get] = ACTIONS(325),
    [anon_sym_mtree_set] = ACTIONS(325),
    [anon_sym_mtree_cwm] = ACTIONS(325),
    [anon_sym_caller] = ACTIONS(325),
    [anon_sym_is_odd] = ACTIONS(325),
    [anon_sym_assert_eqw] = ACTIONS(325),
    [anon_sym_clk] = ACTIONS(325),
    [anon_sym_fri_ext2fold4] = ACTIONS(325),
    [anon_sym_hash] = ACTIONS(325),
    [anon_sym_adv] = ACTIONS(327),
    [anon_sym_exp] = ACTIONS(325),
    [anon_sym_u32assert] = ACTIONS(327),
    [anon_sym_add] = ACTIONS(325),
    [anon_sym_sub] = ACTIONS(325),
    [anon_sym_mul] = ACTIONS(325),
    [anon_sym_eq] = ACTIONS(327),
    [anon_sym_neq] = ACTIONS(325),
    [anon_sym_div] = ACTIONS(325),
    [anon_sym_mem_load] = ACTIONS(327),
    [anon_sym_mem_loadw] = ACTIONS(325),
    [anon_sym_mem_store] = ACTIONS(327),
    [anon_sym_mem_storew] = ACTIONS(325),
    [anon_sym_u32checked_add] = ACTIONS(325),
    [anon_sym_u32wrapping_add] = ACTIONS(327),
    [anon_sym_u32overflowing_add] = ACTIONS(327),
    [anon_sym_u32checked_sub] = ACTIONS(325),
    [anon_sym_u32wrapping_sub] = ACTIONS(325),
    [anon_sym_u32overflowing_sub] = ACTIONS(325),
    [anon_sym_u32checked_mul] = ACTIONS(325),
    [anon_sym_u32wrapping_mul] = ACTIONS(325),
    [anon_sym_u32overflowing_mul] = ACTIONS(325),
    [anon_sym_u32checked_div] = ACTIONS(327),
    [anon_sym_u32unchecked_div] = ACTIONS(327),
    [anon_sym_u32checked_mod] = ACTIONS(325),
    [anon_sym_u32unchecked_mod] = ACTIONS(325),
    [anon_sym_u32checked_divmod] = ACTIONS(325),
    [anon_sym_u32unchecked_divmod] = ACTIONS(325),
    [anon_sym_u32checked_shr] = ACTIONS(325),
    [anon_sym_u32unchecked_shr] = ACTIONS(325),
    [anon_sym_u32checked_shl] = ACTIONS(325),
    [anon_sym_u32unchecked_shl] = ACTIONS(325),
    [anon_sym_u32checked_rotr] = ACTIONS(325),
    [anon_sym_u32unchecked_rotr] = ACTIONS(325),
    [anon_sym_u32checked_rotl] = ACTIONS(325),
    [anon_sym_u32unchecked_rotl] = ACTIONS(325),
    [anon_sym_u32checked_eq] = ACTIONS(325),
    [anon_sym_u32checked_neq] = ACTIONS(325),
    [anon_sym_locaddr] = ACTIONS(325),
    [anon_sym_loc_load] = ACTIONS(327),
    [anon_sym_loc_loadw] = ACTIONS(325),
    [anon_sym_loc_store] = ACTIONS(327),
    [anon_sym_loc_storew] = ACTIONS(325),
    [anon_sym_dup] = ACTIONS(327),
    [anon_sym_swap] = ACTIONS(327),
    [anon_sym_movup] = ACTIONS(327),
    [anon_sym_movdn] = ACTIONS(327),
    [anon_sym_adv_push] = ACTIONS(325),
    [anon_sym_dupw] = ACTIONS(325),
    [anon_sym_swapw] = ACTIONS(325),
    [anon_sym_movupw] = ACTIONS(325),
    [anon_sym_movdnw] = ACTIONS(325),
    [anon_sym_push] = ACTIONS(325),
    [anon_sym_if] = ACTIONS(325),
    [sym__else] = ACTIONS(325),
    [anon_sym_while] = ACTIONS(325),
    [anon_sym_repeat] = ACTIONS(325),
    [sym__end] = ACTIONS(325),
  },
  [43] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(329),
    [anon_sym_call] = ACTIONS(331),
    [anon_sym_syscall] = ACTIONS(329),
    [anon_sym_assert] = ACTIONS(331),
    [anon_sym_assertz] = ACTIONS(329),
    [anon_sym_assert_eq] = ACTIONS(331),
    [anon_sym_neg] = ACTIONS(329),
    [anon_sym_inv] = ACTIONS(329),
    [anon_sym_pow2] = ACTIONS(329),
    [anon_sym_not] = ACTIONS(329),
    [anon_sym_and] = ACTIONS(329),
    [anon_sym_or] = ACTIONS(329),
    [anon_sym_xor] = ACTIONS(329),
    [anon_sym_lt] = ACTIONS(331),
    [anon_sym_lte] = ACTIONS(329),
    [anon_sym_gt] = ACTIONS(331),
    [anon_sym_gte] = ACTIONS(329),
    [anon_sym_eqw] = ACTIONS(329),
    [anon_sym_ext2add] = ACTIONS(329),
    [anon_sym_ext2sub] = ACTIONS(329),
    [anon_sym_ext2mul] = ACTIONS(329),
    [anon_sym_ext2div] = ACTIONS(329),
    [anon_sym_ext2neg] = ACTIONS(329),
    [anon_sym_ext2inv] = ACTIONS(329),
    [anon_sym_u32test] = ACTIONS(331),
    [anon_sym_u32testw] = ACTIONS(329),
    [anon_sym_u32assertw] = ACTIONS(329),
    [anon_sym_u32cast] = ACTIONS(329),
    [anon_sym_u32split] = ACTIONS(329),
    [anon_sym_u32overflowing_add3] = ACTIONS(329),
    [anon_sym_u32wrapping_add3] = ACTIONS(329),
    [anon_sym_u32overflowing_madd] = ACTIONS(329),
    [anon_sym_u32wrapping_madd] = ACTIONS(329),
    [anon_sym_u32checked_and] = ACTIONS(329),
    [anon_sym_u32checked_or] = ACTIONS(329),
    [anon_sym_u32checked_xor] = ACTIONS(329),
    [anon_sym_u32checked_not] = ACTIONS(329),
    [anon_sym_u32checked_popcnt] = ACTIONS(329),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(329),
    [anon_sym_u32checked_lt] = ACTIONS(331),
    [anon_sym_u32unchecked_lt] = ACTIONS(331),
    [anon_sym_u32checked_lte] = ACTIONS(329),
    [anon_sym_u32unchecked_lte] = ACTIONS(329),
    [anon_sym_u32checked_gt] = ACTIONS(331),
    [anon_sym_u32unchecked_gt] = ACTIONS(331),
    [anon_sym_u32checked_gte] = ACTIONS(329),
    [anon_sym_u32unchecked_gte] = ACTIONS(329),
    [anon_sym_u32checked_min] = ACTIONS(329),
    [anon_sym_u32unchecked_min] = ACTIONS(329),
    [anon_sym_u32checked_max] = ACTIONS(329),
    [anon_sym_u32unchecked_max] = ACTIONS(329),
    [anon_sym_drop] = ACTIONS(331),
    [anon_sym_dropw] = ACTIONS(329),
    [anon_sym_padw] = ACTIONS(329),
    [anon_sym_swapdw] = ACTIONS(329),
    [anon_sym_cswap] = ACTIONS(331),
    [anon_sym_cswapw] = ACTIONS(329),
    [anon_sym_cdrop] = ACTIONS(331),
    [anon_sym_cdropw] = ACTIONS(329),
    [anon_sym_sdepth] = ACTIONS(329),
    [anon_sym_mem_stream] = ACTIONS(329),
    [anon_sym_adv_pipe] = ACTIONS(329),
    [anon_sym_adv_loadw] = ACTIONS(329),
    [anon_sym_hmerge] = ACTIONS(329),
    [anon_sym_hperm] = ACTIONS(329),
    [anon_sym_mtree_get] = ACTIONS(329),
    [anon_sym_mtree_set] = ACTIONS(329),
    [anon_sym_mtree_cwm] = ACTIONS(329),
    [anon_sym_caller] = ACTIONS(329),
    [anon_sym_is_odd] = ACTIONS(329),
    [anon_sym_assert_eqw] = ACTIONS(329),
    [anon_sym_clk] = ACTIONS(329),
    [anon_sym_fri_ext2fold4] = ACTIONS(329),
    [anon_sym_hash] = ACTIONS(329),
    [anon_sym_adv] = ACTIONS(331),
    [anon_sym_exp] = ACTIONS(329),
    [anon_sym_u32assert] = ACTIONS(331),
    [anon_sym_add] = ACTIONS(329),
    [anon_sym_sub] = ACTIONS(329),
    [anon_sym_mul] = ACTIONS(329),
    [anon_sym_eq] = ACTIONS(331),
    [anon_sym_neq] = ACTIONS(329),
    [anon_sym_div] = ACTIONS(329),
    [anon_sym_mem_load] = ACTIONS(331),
    [anon_sym_mem_loadw] = ACTIONS(329),
    [anon_sym_mem_store] = ACTIONS(331),
    [anon_sym_mem_storew] = ACTIONS(329),
    [anon_sym_u32checked_add] = ACTIONS(329),
    [anon_sym_u32wrapping_add] = ACTIONS(331),
    [anon_sym_u32overflowing_add] = ACTIONS(331),
    [anon_sym_u32checked_sub] = ACTIONS(329),
    [anon_sym_u32wrapping_sub] = ACTIONS(329),
    [anon_sym_u32overflowing_sub] = ACTIONS(329),
    [anon_sym_u32checked_mul] = ACTIONS(329),
    [anon_sym_u32wrapping_mul] = ACTIONS(329),
    [anon_sym_u32overflowing_mul] = ACTIONS(329),
    [anon_sym_u32checked_div] = ACTIONS(331),
    [anon_sym_u32unchecked_div] = ACTIONS(331),
    [anon_sym_u32checked_mod] = ACTIONS(329),
    [anon_sym_u32unchecked_mod] = ACTIONS(329),
    [anon_sym_u32checked_divmod] = ACTIONS(329),
    [anon_sym_u32unchecked_divmod] = ACTIONS(329),
    [anon_sym_u32checked_shr] = ACTIONS(329),
    [anon_sym_u32unchecked_shr] = ACTIONS(329),
    [anon_sym_u32checked_shl] = ACTIONS(329),
    [anon_sym_u32unchecked_shl] = ACTIONS(329),
    [anon_sym_u32checked_rotr] = ACTIONS(329),
    [anon_sym_u32unchecked_rotr] = ACTIONS(329),
    [anon_sym_u32checked_rotl] = ACTIONS(329),
    [anon_sym_u32unchecked_rotl] = ACTIONS(329),
    [anon_sym_u32checked_eq] = ACTIONS(329),
    [anon_sym_u32checked_neq] = ACTIONS(329),
    [anon_sym_locaddr] = ACTIONS(329),
    [anon_sym_loc_load] = ACTIONS(331),
    [anon_sym_loc_loadw] = ACTIONS(329),
    [anon_sym_loc_store] = ACTIONS(331),
    [anon_sym_loc_storew] = ACTIONS(329),
    [anon_sym_dup] = ACTIONS(331),
    [anon_sym_swap] = ACTIONS(331),
    [anon_sym_movup] = ACTIONS(331),
    [anon_sym_movdn] = ACTIONS(331),
    [anon_sym_adv_push] = ACTIONS(329),
    [anon_sym_dupw] = ACTIONS(329),
    [anon_sym_swapw] = ACTIONS(329),
    [anon_sym_movupw] = ACTIONS(329),
    [anon_sym_movdnw] = ACTIONS(329),
    [anon_sym_push] = ACTIONS(329),
    [anon_sym_if] = ACTIONS(329),
    [sym__else] = ACTIONS(329),
    [anon_sym_while] = ACTIONS(329),
    [anon_sym_repeat] = ACTIONS(329),
    [sym__end] = ACTIONS(329),
  },
  [44] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(333),
    [anon_sym_call] = ACTIONS(335),
    [anon_sym_syscall] = ACTIONS(333),
    [anon_sym_assert] = ACTIONS(335),
    [anon_sym_assertz] = ACTIONS(333),
    [anon_sym_assert_eq] = ACTIONS(335),
    [anon_sym_neg] = ACTIONS(333),
    [anon_sym_inv] = ACTIONS(333),
    [anon_sym_pow2] = ACTIONS(333),
    [anon_sym_not] = ACTIONS(333),
    [anon_sym_and] = ACTIONS(333),
    [anon_sym_or] = ACTIONS(333),
    [anon_sym_xor] = ACTIONS(333),
    [anon_sym_lt] = ACTIONS(335),
    [anon_sym_lte] = ACTIONS(333),
    [anon_sym_gt] = ACTIONS(335),
    [anon_sym_gte] = ACTIONS(333),
    [anon_sym_eqw] = ACTIONS(333),
    [anon_sym_ext2add] = ACTIONS(333),
    [anon_sym_ext2sub] = ACTIONS(333),
    [anon_sym_ext2mul] = ACTIONS(333),
    [anon_sym_ext2div] = ACTIONS(333),
    [anon_sym_ext2neg] = ACTIONS(333),
    [anon_sym_ext2inv] = ACTIONS(333),
    [anon_sym_u32test] = ACTIONS(335),
    [anon_sym_u32testw] = ACTIONS(333),
    [anon_sym_u32assertw] = ACTIONS(333),
    [anon_sym_u32cast] = ACTIONS(333),
    [anon_sym_u32split] = ACTIONS(333),
    [anon_sym_u32overflowing_add3] = ACTIONS(333),
    [anon_sym_u32wrapping_add3] = ACTIONS(333),
    [anon_sym_u32overflowing_madd] = ACTIONS(333),
    [anon_sym_u32wrapping_madd] = ACTIONS(333),
    [anon_sym_u32checked_and] = ACTIONS(333),
    [anon_sym_u32checked_or] = ACTIONS(333),
    [anon_sym_u32checked_xor] = ACTIONS(333),
    [anon_sym_u32checked_not] = ACTIONS(333),
    [anon_sym_u32checked_popcnt] = ACTIONS(333),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(333),
    [anon_sym_u32checked_lt] = ACTIONS(335),
    [anon_sym_u32unchecked_lt] = ACTIONS(335),
    [anon_sym_u32checked_lte] = ACTIONS(333),
    [anon_sym_u32unchecked_lte] = ACTIONS(333),
    [anon_sym_u32checked_gt] = ACTIONS(335),
    [anon_sym_u32unchecked_gt] = ACTIONS(335),
    [anon_sym_u32checked_gte] = ACTIONS(333),
    [anon_sym_u32unchecked_gte] = ACTIONS(333),
    [anon_sym_u32checked_min] = ACTIONS(333),
    [anon_sym_u32unchecked_min] = ACTIONS(333),
    [anon_sym_u32checked_max] = ACTIONS(333),
    [anon_sym_u32unchecked_max] = ACTIONS(333),
    [anon_sym_drop] = ACTIONS(335),
    [anon_sym_dropw] = ACTIONS(333),
    [anon_sym_padw] = ACTIONS(333),
    [anon_sym_swapdw] = ACTIONS(333),
    [anon_sym_cswap] = ACTIONS(335),
    [anon_sym_cswapw] = ACTIONS(333),
    [anon_sym_cdrop] = ACTIONS(335),
    [anon_sym_cdropw] = ACTIONS(333),
    [anon_sym_sdepth] = ACTIONS(333),
    [anon_sym_mem_stream] = ACTIONS(333),
    [anon_sym_adv_pipe] = ACTIONS(333),
    [anon_sym_adv_loadw] = ACTIONS(333),
    [anon_sym_hmerge] = ACTIONS(333),
    [anon_sym_hperm] = ACTIONS(333),
    [anon_sym_mtree_get] = ACTIONS(333),
    [anon_sym_mtree_set] = ACTIONS(333),
    [anon_sym_mtree_cwm] = ACTIONS(333),
    [anon_sym_caller] = ACTIONS(333),
    [anon_sym_is_odd] = ACTIONS(333),
    [anon_sym_assert_eqw] = ACTIONS(333),
    [anon_sym_clk] = ACTIONS(333),
    [anon_sym_fri_ext2fold4] = ACTIONS(333),
    [anon_sym_hash] = ACTIONS(333),
    [anon_sym_adv] = ACTIONS(335),
    [anon_sym_exp] = ACTIONS(333),
    [anon_sym_u32assert] = ACTIONS(335),
    [anon_sym_add] = ACTIONS(333),
    [anon_sym_sub] = ACTIONS(333),
    [anon_sym_mul] = ACTIONS(333),
    [anon_sym_eq] = ACTIONS(335),
    [anon_sym_neq] = ACTIONS(333),
    [anon_sym_div] = ACTIONS(333),
    [anon_sym_mem_load] = ACTIONS(335),
    [anon_sym_mem_loadw] = ACTIONS(333),
    [anon_sym_mem_store] = ACTIONS(335),
    [anon_sym_mem_storew] = ACTIONS(333),
    [anon_sym_u32checked_add] = ACTIONS(333),
    [anon_sym_u32wrapping_add] = ACTIONS(335),
    [anon_sym_u32overflowing_add] = ACTIONS(335),
    [anon_sym_u32checked_sub] = ACTIONS(333),
    [anon_sym_u32wrapping_sub] = ACTIONS(333),
    [anon_sym_u32overflowing_sub] = ACTIONS(333),
    [anon_sym_u32checked_mul] = ACTIONS(333),
    [anon_sym_u32wrapping_mul] = ACTIONS(333),
    [anon_sym_u32overflowing_mul] = ACTIONS(333),
    [anon_sym_u32checked_div] = ACTIONS(335),
    [anon_sym_u32unchecked_div] = ACTIONS(335),
    [anon_sym_u32checked_mod] = ACTIONS(333),
    [anon_sym_u32unchecked_mod] = ACTIONS(333),
    [anon_sym_u32checked_divmod] = ACTIONS(333),
    [anon_sym_u32unchecked_divmod] = ACTIONS(333),
    [anon_sym_u32checked_shr] = ACTIONS(333),
    [anon_sym_u32unchecked_shr] = ACTIONS(333),
    [anon_sym_u32checked_shl] = ACTIONS(333),
    [anon_sym_u32unchecked_shl] = ACTIONS(333),
    [anon_sym_u32checked_rotr] = ACTIONS(333),
    [anon_sym_u32unchecked_rotr] = ACTIONS(333),
    [anon_sym_u32checked_rotl] = ACTIONS(333),
    [anon_sym_u32unchecked_rotl] = ACTIONS(333),
    [anon_sym_u32checked_eq] = ACTIONS(333),
    [anon_sym_u32checked_neq] = ACTIONS(333),
    [anon_sym_locaddr] = ACTIONS(333),
    [anon_sym_loc_load] = ACTIONS(335),
    [anon_sym_loc_loadw] = ACTIONS(333),
    [anon_sym_loc_store] = ACTIONS(335),
    [anon_sym_loc_storew] = ACTIONS(333),
    [anon_sym_dup] = ACTIONS(335),
    [anon_sym_swap] = ACTIONS(335),
    [anon_sym_movup] = ACTIONS(335),
    [anon_sym_movdn] = ACTIONS(335),
    [anon_sym_adv_push] = ACTIONS(333),
    [anon_sym_dupw] = ACTIONS(333),
    [anon_sym_swapw] = ACTIONS(333),
    [anon_sym_movupw] = ACTIONS(333),
    [anon_sym_movdnw] = ACTIONS(333),
    [anon_sym_push] = ACTIONS(333),
    [anon_sym_if] = ACTIONS(333),
    [sym__else] = ACTIONS(333),
    [anon_sym_while] = ACTIONS(333),
    [anon_sym_repeat] = ACTIONS(333),
    [sym__end] = ACTIONS(333),
  },
  [45] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(337),
    [anon_sym_call] = ACTIONS(339),
    [anon_sym_syscall] = ACTIONS(337),
    [anon_sym_assert] = ACTIONS(339),
    [anon_sym_assertz] = ACTIONS(337),
    [anon_sym_assert_eq] = ACTIONS(339),
    [anon_sym_neg] = ACTIONS(337),
    [anon_sym_inv] = ACTIONS(337),
    [anon_sym_pow2] = ACTIONS(337),
    [anon_sym_not] = ACTIONS(337),
    [anon_sym_and] = ACTIONS(337),
    [anon_sym_or] = ACTIONS(337),
    [anon_sym_xor] = ACTIONS(337),
    [anon_sym_lt] = ACTIONS(339),
    [anon_sym_lte] = ACTIONS(337),
    [anon_sym_gt] = ACTIONS(339),
    [anon_sym_gte] = ACTIONS(337),
    [anon_sym_eqw] = ACTIONS(337),
    [anon_sym_ext2add] = ACTIONS(337),
    [anon_sym_ext2sub] = ACTIONS(337),
    [anon_sym_ext2mul] = ACTIONS(337),
    [anon_sym_ext2div] = ACTIONS(337),
    [anon_sym_ext2neg] = ACTIONS(337),
    [anon_sym_ext2inv] = ACTIONS(337),
    [anon_sym_u32test] = ACTIONS(339),
    [anon_sym_u32testw] = ACTIONS(337),
    [anon_sym_u32assertw] = ACTIONS(337),
    [anon_sym_u32cast] = ACTIONS(337),
    [anon_sym_u32split] = ACTIONS(337),
    [anon_sym_u32overflowing_add3] = ACTIONS(337),
    [anon_sym_u32wrapping_add3] = ACTIONS(337),
    [anon_sym_u32overflowing_madd] = ACTIONS(337),
    [anon_sym_u32wrapping_madd] = ACTIONS(337),
    [anon_sym_u32checked_and] = ACTIONS(337),
    [anon_sym_u32checked_or] = ACTIONS(337),
    [anon_sym_u32checked_xor] = ACTIONS(337),
    [anon_sym_u32checked_not] = ACTIONS(337),
    [anon_sym_u32checked_popcnt] = ACTIONS(337),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(337),
    [anon_sym_u32checked_lt] = ACTIONS(339),
    [anon_sym_u32unchecked_lt] = ACTIONS(339),
    [anon_sym_u32checked_lte] = ACTIONS(337),
    [anon_sym_u32unchecked_lte] = ACTIONS(337),
    [anon_sym_u32checked_gt] = ACTIONS(339),
    [anon_sym_u32unchecked_gt] = ACTIONS(339),
    [anon_sym_u32checked_gte] = ACTIONS(337),
    [anon_sym_u32unchecked_gte] = ACTIONS(337),
    [anon_sym_u32checked_min] = ACTIONS(337),
    [anon_sym_u32unchecked_min] = ACTIONS(337),
    [anon_sym_u32checked_max] = ACTIONS(337),
    [anon_sym_u32unchecked_max] = ACTIONS(337),
    [anon_sym_drop] = ACTIONS(339),
    [anon_sym_dropw] = ACTIONS(337),
    [anon_sym_padw] = ACTIONS(337),
    [anon_sym_swapdw] = ACTIONS(337),
    [anon_sym_cswap] = ACTIONS(339),
    [anon_sym_cswapw] = ACTIONS(337),
    [anon_sym_cdrop] = ACTIONS(339),
    [anon_sym_cdropw] = ACTIONS(337),
    [anon_sym_sdepth] = ACTIONS(337),
    [anon_sym_mem_stream] = ACTIONS(337),
    [anon_sym_adv_pipe] = ACTIONS(337),
    [anon_sym_adv_loadw] = ACTIONS(337),
    [anon_sym_hmerge] = ACTIONS(337),
    [anon_sym_hperm] = ACTIONS(337),
    [anon_sym_mtree_get] = ACTIONS(337),
    [anon_sym_mtree_set] = ACTIONS(337),
    [anon_sym_mtree_cwm] = ACTIONS(337),
    [anon_sym_caller] = ACTIONS(337),
    [anon_sym_is_odd] = ACTIONS(337),
    [anon_sym_assert_eqw] = ACTIONS(337),
    [anon_sym_clk] = ACTIONS(337),
    [anon_sym_fri_ext2fold4] = ACTIONS(337),
    [anon_sym_hash] = ACTIONS(337),
    [anon_sym_adv] = ACTIONS(339),
    [anon_sym_exp] = ACTIONS(337),
    [anon_sym_u32assert] = ACTIONS(339),
    [anon_sym_add] = ACTIONS(337),
    [anon_sym_sub] = ACTIONS(337),
    [anon_sym_mul] = ACTIONS(337),
    [anon_sym_eq] = ACTIONS(339),
    [anon_sym_neq] = ACTIONS(337),
    [anon_sym_div] = ACTIONS(337),
    [anon_sym_mem_load] = ACTIONS(339),
    [anon_sym_mem_loadw] = ACTIONS(337),
    [anon_sym_mem_store] = ACTIONS(339),
    [anon_sym_mem_storew] = ACTIONS(337),
    [anon_sym_u32checked_add] = ACTIONS(337),
    [anon_sym_u32wrapping_add] = ACTIONS(339),
    [anon_sym_u32overflowing_add] = ACTIONS(339),
    [anon_sym_u32checked_sub] = ACTIONS(337),
    [anon_sym_u32wrapping_sub] = ACTIONS(337),
    [anon_sym_u32overflowing_sub] = ACTIONS(337),
    [anon_sym_u32checked_mul] = ACTIONS(337),
    [anon_sym_u32wrapping_mul] = ACTIONS(337),
    [anon_sym_u32overflowing_mul] = ACTIONS(337),
    [anon_sym_u32checked_div] = ACTIONS(339),
    [anon_sym_u32unchecked_div] = ACTIONS(339),
    [anon_sym_u32checked_mod] = ACTIONS(337),
    [anon_sym_u32unchecked_mod] = ACTIONS(337),
    [anon_sym_u32checked_divmod] = ACTIONS(337),
    [anon_sym_u32unchecked_divmod] = ACTIONS(337),
    [anon_sym_u32checked_shr] = ACTIONS(337),
    [anon_sym_u32unchecked_shr] = ACTIONS(337),
    [anon_sym_u32checked_shl] = ACTIONS(337),
    [anon_sym_u32unchecked_shl] = ACTIONS(337),
    [anon_sym_u32checked_rotr] = ACTIONS(337),
    [anon_sym_u32unchecked_rotr] = ACTIONS(337),
    [anon_sym_u32checked_rotl] = ACTIONS(337),
    [anon_sym_u32unchecked_rotl] = ACTIONS(337),
    [anon_sym_u32checked_eq] = ACTIONS(337),
    [anon_sym_u32checked_neq] = ACTIONS(337),
    [anon_sym_locaddr] = ACTIONS(337),
    [anon_sym_loc_load] = ACTIONS(339),
    [anon_sym_loc_loadw] = ACTIONS(337),
    [anon_sym_loc_store] = ACTIONS(339),
    [anon_sym_loc_storew] = ACTIONS(337),
    [anon_sym_dup] = ACTIONS(339),
    [anon_sym_swap] = ACTIONS(339),
    [anon_sym_movup] = ACTIONS(339),
    [anon_sym_movdn] = ACTIONS(339),
    [anon_sym_adv_push] = ACTIONS(337),
    [anon_sym_dupw] = ACTIONS(337),
    [anon_sym_swapw] = ACTIONS(337),
    [anon_sym_movupw] = ACTIONS(337),
    [anon_sym_movdnw] = ACTIONS(337),
    [anon_sym_push] = ACTIONS(337),
    [anon_sym_if] = ACTIONS(337),
    [sym__else] = ACTIONS(337),
    [anon_sym_while] = ACTIONS(337),
    [anon_sym_repeat] = ACTIONS(337),
    [sym__end] = ACTIONS(337),
  },
  [46] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(341),
    [anon_sym_call] = ACTIONS(343),
    [anon_sym_syscall] = ACTIONS(341),
    [anon_sym_assert] = ACTIONS(343),
    [anon_sym_assertz] = ACTIONS(341),
    [anon_sym_assert_eq] = ACTIONS(343),
    [anon_sym_neg] = ACTIONS(341),
    [anon_sym_inv] = ACTIONS(341),
    [anon_sym_pow2] = ACTIONS(341),
    [anon_sym_not] = ACTIONS(341),
    [anon_sym_and] = ACTIONS(341),
    [anon_sym_or] = ACTIONS(341),
    [anon_sym_xor] = ACTIONS(341),
    [anon_sym_lt] = ACTIONS(343),
    [anon_sym_lte] = ACTIONS(341),
    [anon_sym_gt] = ACTIONS(343),
    [anon_sym_gte] = ACTIONS(341),
    [anon_sym_eqw] = ACTIONS(341),
    [anon_sym_ext2add] = ACTIONS(341),
    [anon_sym_ext2sub] = ACTIONS(341),
    [anon_sym_ext2mul] = ACTIONS(341),
    [anon_sym_ext2div] = ACTIONS(341),
    [anon_sym_ext2neg] = ACTIONS(341),
    [anon_sym_ext2inv] = ACTIONS(341),
    [anon_sym_u32test] = ACTIONS(343),
    [anon_sym_u32testw] = ACTIONS(341),
    [anon_sym_u32assertw] = ACTIONS(341),
    [anon_sym_u32cast] = ACTIONS(341),
    [anon_sym_u32split] = ACTIONS(341),
    [anon_sym_u32overflowing_add3] = ACTIONS(341),
    [anon_sym_u32wrapping_add3] = ACTIONS(341),
    [anon_sym_u32overflowing_madd] = ACTIONS(341),
    [anon_sym_u32wrapping_madd] = ACTIONS(341),
    [anon_sym_u32checked_and] = ACTIONS(341),
    [anon_sym_u32checked_or] = ACTIONS(341),
    [anon_sym_u32checked_xor] = ACTIONS(341),
    [anon_sym_u32checked_not] = ACTIONS(341),
    [anon_sym_u32checked_popcnt] = ACTIONS(341),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(341),
    [anon_sym_u32checked_lt] = ACTIONS(343),
    [anon_sym_u32unchecked_lt] = ACTIONS(343),
    [anon_sym_u32checked_lte] = ACTIONS(341),
    [anon_sym_u32unchecked_lte] = ACTIONS(341),
    [anon_sym_u32checked_gt] = ACTIONS(343),
    [anon_sym_u32unchecked_gt] = ACTIONS(343),
    [anon_sym_u32checked_gte] = ACTIONS(341),
    [anon_sym_u32unchecked_gte] = ACTIONS(341),
    [anon_sym_u32checked_min] = ACTIONS(341),
    [anon_sym_u32unchecked_min] = ACTIONS(341),
    [anon_sym_u32checked_max] = ACTIONS(341),
    [anon_sym_u32unchecked_max] = ACTIONS(341),
    [anon_sym_drop] = ACTIONS(343),
    [anon_sym_dropw] = ACTIONS(341),
    [anon_sym_padw] = ACTIONS(341),
    [anon_sym_swapdw] = ACTIONS(341),
    [anon_sym_cswap] = ACTIONS(343),
    [anon_sym_cswapw] = ACTIONS(341),
    [anon_sym_cdrop] = ACTIONS(343),
    [anon_sym_cdropw] = ACTIONS(341),
    [anon_sym_sdepth] = ACTIONS(341),
    [anon_sym_mem_stream] = ACTIONS(341),
    [anon_sym_adv_pipe] = ACTIONS(341),
    [anon_sym_adv_loadw] = ACTIONS(341),
    [anon_sym_hmerge] = ACTIONS(341),
    [anon_sym_hperm] = ACTIONS(341),
    [anon_sym_mtree_get] = ACTIONS(341),
    [anon_sym_mtree_set] = ACTIONS(341),
    [anon_sym_mtree_cwm] = ACTIONS(341),
    [anon_sym_caller] = ACTIONS(341),
    [anon_sym_is_odd] = ACTIONS(341),
    [anon_sym_assert_eqw] = ACTIONS(341),
    [anon_sym_clk] = ACTIONS(341),
    [anon_sym_fri_ext2fold4] = ACTIONS(341),
    [anon_sym_hash] = ACTIONS(341),
    [anon_sym_adv] = ACTIONS(343),
    [anon_sym_exp] = ACTIONS(341),
    [anon_sym_u32assert] = ACTIONS(343),
    [anon_sym_add] = ACTIONS(341),
    [anon_sym_sub] = ACTIONS(341),
    [anon_sym_mul] = ACTIONS(341),
    [anon_sym_eq] = ACTIONS(343),
    [anon_sym_neq] = ACTIONS(341),
    [anon_sym_div] = ACTIONS(341),
    [anon_sym_mem_load] = ACTIONS(343),
    [anon_sym_mem_loadw] = ACTIONS(341),
    [anon_sym_mem_store] = ACTIONS(343),
    [anon_sym_mem_storew] = ACTIONS(341),
    [anon_sym_u32checked_add] = ACTIONS(341),
    [anon_sym_u32wrapping_add] = ACTIONS(343),
    [anon_sym_u32overflowing_add] = ACTIONS(343),
    [anon_sym_u32checked_sub] = ACTIONS(341),
    [anon_sym_u32wrapping_sub] = ACTIONS(341),
    [anon_sym_u32overflowing_sub] = ACTIONS(341),
    [anon_sym_u32checked_mul] = ACTIONS(341),
    [anon_sym_u32wrapping_mul] = ACTIONS(341),
    [anon_sym_u32overflowing_mul] = ACTIONS(341),
    [anon_sym_u32checked_div] = ACTIONS(343),
    [anon_sym_u32unchecked_div] = ACTIONS(343),
    [anon_sym_u32checked_mod] = ACTIONS(341),
    [anon_sym_u32unchecked_mod] = ACTIONS(341),
    [anon_sym_u32checked_divmod] = ACTIONS(341),
    [anon_sym_u32unchecked_divmod] = ACTIONS(341),
    [anon_sym_u32checked_shr] = ACTIONS(341),
    [anon_sym_u32unchecked_shr] = ACTIONS(341),
    [anon_sym_u32checked_shl] = ACTIONS(341),
    [anon_sym_u32unchecked_shl] = ACTIONS(341),
    [anon_sym_u32checked_rotr] = ACTIONS(341),
    [anon_sym_u32unchecked_rotr] = ACTIONS(341),
    [anon_sym_u32checked_rotl] = ACTIONS(341),
    [anon_sym_u32unchecked_rotl] = ACTIONS(341),
    [anon_sym_u32checked_eq] = ACTIONS(341),
    [anon_sym_u32checked_neq] = ACTIONS(341),
    [anon_sym_locaddr] = ACTIONS(341),
    [anon_sym_loc_load] = ACTIONS(343),
    [anon_sym_loc_loadw] = ACTIONS(341),
    [anon_sym_loc_store] = ACTIONS(343),
    [anon_sym_loc_storew] = ACTIONS(341),
    [anon_sym_dup] = ACTIONS(343),
    [anon_sym_swap] = ACTIONS(343),
    [anon_sym_movup] = ACTIONS(343),
    [anon_sym_movdn] = ACTIONS(343),
    [anon_sym_adv_push] = ACTIONS(341),
    [anon_sym_dupw] = ACTIONS(341),
    [anon_sym_swapw] = ACTIONS(341),
    [anon_sym_movupw] = ACTIONS(341),
    [anon_sym_movdnw] = ACTIONS(341),
    [anon_sym_push] = ACTIONS(341),
    [anon_sym_if] = ACTIONS(341),
    [sym__else] = ACTIONS(341),
    [anon_sym_while] = ACTIONS(341),
    [anon_sym_repeat] = ACTIONS(341),
    [sym__end] = ACTIONS(341),
  },
  [47] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(345),
    [anon_sym_call] = ACTIONS(347),
    [anon_sym_syscall] = ACTIONS(345),
    [anon_sym_assert] = ACTIONS(347),
    [anon_sym_assertz] = ACTIONS(345),
    [anon_sym_assert_eq] = ACTIONS(347),
    [anon_sym_neg] = ACTIONS(345),
    [anon_sym_inv] = ACTIONS(345),
    [anon_sym_pow2] = ACTIONS(345),
    [anon_sym_not] = ACTIONS(345),
    [anon_sym_and] = ACTIONS(345),
    [anon_sym_or] = ACTIONS(345),
    [anon_sym_xor] = ACTIONS(345),
    [anon_sym_lt] = ACTIONS(347),
    [anon_sym_lte] = ACTIONS(345),
    [anon_sym_gt] = ACTIONS(347),
    [anon_sym_gte] = ACTIONS(345),
    [anon_sym_eqw] = ACTIONS(345),
    [anon_sym_ext2add] = ACTIONS(345),
    [anon_sym_ext2sub] = ACTIONS(345),
    [anon_sym_ext2mul] = ACTIONS(345),
    [anon_sym_ext2div] = ACTIONS(345),
    [anon_sym_ext2neg] = ACTIONS(345),
    [anon_sym_ext2inv] = ACTIONS(345),
    [anon_sym_u32test] = ACTIONS(347),
    [anon_sym_u32testw] = ACTIONS(345),
    [anon_sym_u32assertw] = ACTIONS(345),
    [anon_sym_u32cast] = ACTIONS(345),
    [anon_sym_u32split] = ACTIONS(345),
    [anon_sym_u32overflowing_add3] = ACTIONS(345),
    [anon_sym_u32wrapping_add3] = ACTIONS(345),
    [anon_sym_u32overflowing_madd] = ACTIONS(345),
    [anon_sym_u32wrapping_madd] = ACTIONS(345),
    [anon_sym_u32checked_and] = ACTIONS(345),
    [anon_sym_u32checked_or] = ACTIONS(345),
    [anon_sym_u32checked_xor] = ACTIONS(345),
    [anon_sym_u32checked_not] = ACTIONS(345),
    [anon_sym_u32checked_popcnt] = ACTIONS(345),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(345),
    [anon_sym_u32checked_lt] = ACTIONS(347),
    [anon_sym_u32unchecked_lt] = ACTIONS(347),
    [anon_sym_u32checked_lte] = ACTIONS(345),
    [anon_sym_u32unchecked_lte] = ACTIONS(345),
    [anon_sym_u32checked_gt] = ACTIONS(347),
    [anon_sym_u32unchecked_gt] = ACTIONS(347),
    [anon_sym_u32checked_gte] = ACTIONS(345),
    [anon_sym_u32unchecked_gte] = ACTIONS(345),
    [anon_sym_u32checked_min] = ACTIONS(345),
    [anon_sym_u32unchecked_min] = ACTIONS(345),
    [anon_sym_u32checked_max] = ACTIONS(345),
    [anon_sym_u32unchecked_max] = ACTIONS(345),
    [anon_sym_drop] = ACTIONS(347),
    [anon_sym_dropw] = ACTIONS(345),
    [anon_sym_padw] = ACTIONS(345),
    [anon_sym_swapdw] = ACTIONS(345),
    [anon_sym_cswap] = ACTIONS(347),
    [anon_sym_cswapw] = ACTIONS(345),
    [anon_sym_cdrop] = ACTIONS(347),
    [anon_sym_cdropw] = ACTIONS(345),
    [anon_sym_sdepth] = ACTIONS(345),
    [anon_sym_mem_stream] = ACTIONS(345),
    [anon_sym_adv_pipe] = ACTIONS(345),
    [anon_sym_adv_loadw] = ACTIONS(345),
    [anon_sym_hmerge] = ACTIONS(345),
    [anon_sym_hperm] = ACTIONS(345),
    [anon_sym_mtree_get] = ACTIONS(345),
    [anon_sym_mtree_set] = ACTIONS(345),
    [anon_sym_mtree_cwm] = ACTIONS(345),
    [anon_sym_caller] = ACTIONS(345),
    [anon_sym_is_odd] = ACTIONS(345),
    [anon_sym_assert_eqw] = ACTIONS(345),
    [anon_sym_clk] = ACTIONS(345),
    [anon_sym_fri_ext2fold4] = ACTIONS(345),
    [anon_sym_hash] = ACTIONS(345),
    [anon_sym_adv] = ACTIONS(347),
    [anon_sym_exp] = ACTIONS(345),
    [anon_sym_u32assert] = ACTIONS(347),
    [anon_sym_add] = ACTIONS(345),
    [anon_sym_sub] = ACTIONS(345),
    [anon_sym_mul] = ACTIONS(345),
    [anon_sym_eq] = ACTIONS(347),
    [anon_sym_neq] = ACTIONS(345),
    [anon_sym_div] = ACTIONS(345),
    [anon_sym_mem_load] = ACTIONS(347),
    [anon_sym_mem_loadw] = ACTIONS(345),
    [anon_sym_mem_store] = ACTIONS(347),
    [anon_sym_mem_storew] = ACTIONS(345),
    [anon_sym_u32checked_add] = ACTIONS(345),
    [anon_sym_u32wrapping_add] = ACTIONS(347),
    [anon_sym_u32overflowing_add] = ACTIONS(347),
    [anon_sym_u32checked_sub] = ACTIONS(345),
    [anon_sym_u32wrapping_sub] = ACTIONS(345),
    [anon_sym_u32overflowing_sub] = ACTIONS(345),
    [anon_sym_u32checked_mul] = ACTIONS(345),
    [anon_sym_u32wrapping_mul] = ACTIONS(345),
    [anon_sym_u32overflowing_mul] = ACTIONS(345),
    [anon_sym_u32checked_div] = ACTIONS(347),
    [anon_sym_u32unchecked_div] = ACTIONS(347),
    [anon_sym_u32checked_mod] = ACTIONS(345),
    [anon_sym_u32unchecked_mod] = ACTIONS(345),
    [anon_sym_u32checked_divmod] = ACTIONS(345),
    [anon_sym_u32unchecked_divmod] = ACTIONS(345),
    [anon_sym_u32checked_shr] = ACTIONS(345),
    [anon_sym_u32unchecked_shr] = ACTIONS(345),
    [anon_sym_u32checked_shl] = ACTIONS(345),
    [anon_sym_u32unchecked_shl] = ACTIONS(345),
    [anon_sym_u32checked_rotr] = ACTIONS(345),
    [anon_sym_u32unchecked_rotr] = ACTIONS(345),
    [anon_sym_u32checked_rotl] = ACTIONS(345),
    [anon_sym_u32unchecked_rotl] = ACTIONS(345),
    [anon_sym_u32checked_eq] = ACTIONS(345),
    [anon_sym_u32checked_neq] = ACTIONS(345),
    [anon_sym_locaddr] = ACTIONS(345),
    [anon_sym_loc_load] = ACTIONS(347),
    [anon_sym_loc_loadw] = ACTIONS(345),
    [anon_sym_loc_store] = ACTIONS(347),
    [anon_sym_loc_storew] = ACTIONS(345),
    [anon_sym_dup] = ACTIONS(347),
    [anon_sym_swap] = ACTIONS(347),
    [anon_sym_movup] = ACTIONS(347),
    [anon_sym_movdn] = ACTIONS(347),
    [anon_sym_adv_push] = ACTIONS(345),
    [anon_sym_dupw] = ACTIONS(345),
    [anon_sym_swapw] = ACTIONS(345),
    [anon_sym_movupw] = ACTIONS(345),
    [anon_sym_movdnw] = ACTIONS(345),
    [anon_sym_push] = ACTIONS(345),
    [anon_sym_if] = ACTIONS(345),
    [sym__else] = ACTIONS(345),
    [anon_sym_while] = ACTIONS(345),
    [anon_sym_repeat] = ACTIONS(345),
    [sym__end] = ACTIONS(345),
  },
  [48] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(349),
    [anon_sym_call] = ACTIONS(351),
    [anon_sym_syscall] = ACTIONS(349),
    [anon_sym_assert] = ACTIONS(351),
    [anon_sym_assertz] = ACTIONS(349),
    [anon_sym_assert_eq] = ACTIONS(351),
    [anon_sym_neg] = ACTIONS(349),
    [anon_sym_inv] = ACTIONS(349),
    [anon_sym_pow2] = ACTIONS(349),
    [anon_sym_not] = ACTIONS(349),
    [anon_sym_and] = ACTIONS(349),
    [anon_sym_or] = ACTIONS(349),
    [anon_sym_xor] = ACTIONS(349),
    [anon_sym_lt] = ACTIONS(351),
    [anon_sym_lte] = ACTIONS(349),
    [anon_sym_gt] = ACTIONS(351),
    [anon_sym_gte] = ACTIONS(349),
    [anon_sym_eqw] = ACTIONS(349),
    [anon_sym_ext2add] = ACTIONS(349),
    [anon_sym_ext2sub] = ACTIONS(349),
    [anon_sym_ext2mul] = ACTIONS(349),
    [anon_sym_ext2div] = ACTIONS(349),
    [anon_sym_ext2neg] = ACTIONS(349),
    [anon_sym_ext2inv] = ACTIONS(349),
    [anon_sym_u32test] = ACTIONS(351),
    [anon_sym_u32testw] = ACTIONS(349),
    [anon_sym_u32assertw] = ACTIONS(349),
    [anon_sym_u32cast] = ACTIONS(349),
    [anon_sym_u32split] = ACTIONS(349),
    [anon_sym_u32overflowing_add3] = ACTIONS(349),
    [anon_sym_u32wrapping_add3] = ACTIONS(349),
    [anon_sym_u32overflowing_madd] = ACTIONS(349),
    [anon_sym_u32wrapping_madd] = ACTIONS(349),
    [anon_sym_u32checked_and] = ACTIONS(349),
    [anon_sym_u32checked_or] = ACTIONS(349),
    [anon_sym_u32checked_xor] = ACTIONS(349),
    [anon_sym_u32checked_not] = ACTIONS(349),
    [anon_sym_u32checked_popcnt] = ACTIONS(349),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(349),
    [anon_sym_u32checked_lt] = ACTIONS(351),
    [anon_sym_u32unchecked_lt] = ACTIONS(351),
    [anon_sym_u32checked_lte] = ACTIONS(349),
    [anon_sym_u32unchecked_lte] = ACTIONS(349),
    [anon_sym_u32checked_gt] = ACTIONS(351),
    [anon_sym_u32unchecked_gt] = ACTIONS(351),
    [anon_sym_u32checked_gte] = ACTIONS(349),
    [anon_sym_u32unchecked_gte] = ACTIONS(349),
    [anon_sym_u32checked_min] = ACTIONS(349),
    [anon_sym_u32unchecked_min] = ACTIONS(349),
    [anon_sym_u32checked_max] = ACTIONS(349),
    [anon_sym_u32unchecked_max] = ACTIONS(349),
    [anon_sym_drop] = ACTIONS(351),
    [anon_sym_dropw] = ACTIONS(349),
    [anon_sym_padw] = ACTIONS(349),
    [anon_sym_swapdw] = ACTIONS(349),
    [anon_sym_cswap] = ACTIONS(351),
    [anon_sym_cswapw] = ACTIONS(349),
    [anon_sym_cdrop] = ACTIONS(351),
    [anon_sym_cdropw] = ACTIONS(349),
    [anon_sym_sdepth] = ACTIONS(349),
    [anon_sym_mem_stream] = ACTIONS(349),
    [anon_sym_adv_pipe] = ACTIONS(349),
    [anon_sym_adv_loadw] = ACTIONS(349),
    [anon_sym_hmerge] = ACTIONS(349),
    [anon_sym_hperm] = ACTIONS(349),
    [anon_sym_mtree_get] = ACTIONS(349),
    [anon_sym_mtree_set] = ACTIONS(349),
    [anon_sym_mtree_cwm] = ACTIONS(349),
    [anon_sym_caller] = ACTIONS(349),
    [anon_sym_is_odd] = ACTIONS(349),
    [anon_sym_assert_eqw] = ACTIONS(349),
    [anon_sym_clk] = ACTIONS(349),
    [anon_sym_fri_ext2fold4] = ACTIONS(349),
    [anon_sym_hash] = ACTIONS(349),
    [anon_sym_adv] = ACTIONS(351),
    [anon_sym_exp] = ACTIONS(349),
    [anon_sym_u32assert] = ACTIONS(351),
    [anon_sym_add] = ACTIONS(349),
    [anon_sym_sub] = ACTIONS(349),
    [anon_sym_mul] = ACTIONS(349),
    [anon_sym_eq] = ACTIONS(351),
    [anon_sym_neq] = ACTIONS(349),
    [anon_sym_div] = ACTIONS(349),
    [anon_sym_mem_load] = ACTIONS(351),
    [anon_sym_mem_loadw] = ACTIONS(349),
    [anon_sym_mem_store] = ACTIONS(351),
    [anon_sym_mem_storew] = ACTIONS(349),
    [anon_sym_u32checked_add] = ACTIONS(349),
    [anon_sym_u32wrapping_add] = ACTIONS(351),
    [anon_sym_u32overflowing_add] = ACTIONS(351),
    [anon_sym_u32checked_sub] = ACTIONS(349),
    [anon_sym_u32wrapping_sub] = ACTIONS(349),
    [anon_sym_u32overflowing_sub] = ACTIONS(349),
    [anon_sym_u32checked_mul] = ACTIONS(349),
    [anon_sym_u32wrapping_mul] = ACTIONS(349),
    [anon_sym_u32overflowing_mul] = ACTIONS(349),
    [anon_sym_u32checked_div] = ACTIONS(351),
    [anon_sym_u32unchecked_div] = ACTIONS(351),
    [anon_sym_u32checked_mod] = ACTIONS(349),
    [anon_sym_u32unchecked_mod] = ACTIONS(349),
    [anon_sym_u32checked_divmod] = ACTIONS(349),
    [anon_sym_u32unchecked_divmod] = ACTIONS(349),
    [anon_sym_u32checked_shr] = ACTIONS(349),
    [anon_sym_u32unchecked_shr] = ACTIONS(349),
    [anon_sym_u32checked_shl] = ACTIONS(349),
    [anon_sym_u32unchecked_shl] = ACTIONS(349),
    [anon_sym_u32checked_rotr] = ACTIONS(349),
    [anon_sym_u32unchecked_rotr] = ACTIONS(349),
    [anon_sym_u32checked_rotl] = ACTIONS(349),
    [anon_sym_u32unchecked_rotl] = ACTIONS(349),
    [anon_sym_u32checked_eq] = ACTIONS(349),
    [anon_sym_u32checked_neq] = ACTIONS(349),
    [anon_sym_locaddr] = ACTIONS(349),
    [anon_sym_loc_load] = ACTIONS(351),
    [anon_sym_loc_loadw] = ACTIONS(349),
    [anon_sym_loc_store] = ACTIONS(351),
    [anon_sym_loc_storew] = ACTIONS(349),
    [anon_sym_dup] = ACTIONS(351),
    [anon_sym_swap] = ACTIONS(351),
    [anon_sym_movup] = ACTIONS(351),
    [anon_sym_movdn] = ACTIONS(351),
    [anon_sym_adv_push] = ACTIONS(349),
    [anon_sym_dupw] = ACTIONS(349),
    [anon_sym_swapw] = ACTIONS(349),
    [anon_sym_movupw] = ACTIONS(349),
    [anon_sym_movdnw] = ACTIONS(349),
    [anon_sym_push] = ACTIONS(349),
    [anon_sym_if] = ACTIONS(349),
    [sym__else] = ACTIONS(349),
    [anon_sym_while] = ACTIONS(349),
    [anon_sym_repeat] = ACTIONS(349),
    [sym__end] = ACTIONS(349),
  },
  [49] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(353),
    [anon_sym_call] = ACTIONS(355),
    [anon_sym_syscall] = ACTIONS(353),
    [anon_sym_assert] = ACTIONS(355),
    [anon_sym_assertz] = ACTIONS(353),
    [anon_sym_assert_eq] = ACTIONS(355),
    [anon_sym_neg] = ACTIONS(353),
    [anon_sym_inv] = ACTIONS(353),
    [anon_sym_pow2] = ACTIONS(353),
    [anon_sym_not] = ACTIONS(353),
    [anon_sym_and] = ACTIONS(353),
    [anon_sym_or] = ACTIONS(353),
    [anon_sym_xor] = ACTIONS(353),
    [anon_sym_lt] = ACTIONS(355),
    [anon_sym_lte] = ACTIONS(353),
    [anon_sym_gt] = ACTIONS(355),
    [anon_sym_gte] = ACTIONS(353),
    [anon_sym_eqw] = ACTIONS(353),
    [anon_sym_ext2add] = ACTIONS(353),
    [anon_sym_ext2sub] = ACTIONS(353),
    [anon_sym_ext2mul] = ACTIONS(353),
    [anon_sym_ext2div] = ACTIONS(353),
    [anon_sym_ext2neg] = ACTIONS(353),
    [anon_sym_ext2inv] = ACTIONS(353),
    [anon_sym_u32test] = ACTIONS(355),
    [anon_sym_u32testw] = ACTIONS(353),
    [anon_sym_u32assertw] = ACTIONS(353),
    [anon_sym_u32cast] = ACTIONS(353),
    [anon_sym_u32split] = ACTIONS(353),
    [anon_sym_u32overflowing_add3] = ACTIONS(353),
    [anon_sym_u32wrapping_add3] = ACTIONS(353),
    [anon_sym_u32overflowing_madd] = ACTIONS(353),
    [anon_sym_u32wrapping_madd] = ACTIONS(353),
    [anon_sym_u32checked_and] = ACTIONS(353),
    [anon_sym_u32checked_or] = ACTIONS(353),
    [anon_sym_u32checked_xor] = ACTIONS(353),
    [anon_sym_u32checked_not] = ACTIONS(353),
    [anon_sym_u32checked_popcnt] = ACTIONS(353),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(353),
    [anon_sym_u32checked_lt] = ACTIONS(355),
    [anon_sym_u32unchecked_lt] = ACTIONS(355),
    [anon_sym_u32checked_lte] = ACTIONS(353),
    [anon_sym_u32unchecked_lte] = ACTIONS(353),
    [anon_sym_u32checked_gt] = ACTIONS(355),
    [anon_sym_u32unchecked_gt] = ACTIONS(355),
    [anon_sym_u32checked_gte] = ACTIONS(353),
    [anon_sym_u32unchecked_gte] = ACTIONS(353),
    [anon_sym_u32checked_min] = ACTIONS(353),
    [anon_sym_u32unchecked_min] = ACTIONS(353),
    [anon_sym_u32checked_max] = ACTIONS(353),
    [anon_sym_u32unchecked_max] = ACTIONS(353),
    [anon_sym_drop] = ACTIONS(355),
    [anon_sym_dropw] = ACTIONS(353),
    [anon_sym_padw] = ACTIONS(353),
    [anon_sym_swapdw] = ACTIONS(353),
    [anon_sym_cswap] = ACTIONS(355),
    [anon_sym_cswapw] = ACTIONS(353),
    [anon_sym_cdrop] = ACTIONS(355),
    [anon_sym_cdropw] = ACTIONS(353),
    [anon_sym_sdepth] = ACTIONS(353),
    [anon_sym_mem_stream] = ACTIONS(353),
    [anon_sym_adv_pipe] = ACTIONS(353),
    [anon_sym_adv_loadw] = ACTIONS(353),
    [anon_sym_hmerge] = ACTIONS(353),
    [anon_sym_hperm] = ACTIONS(353),
    [anon_sym_mtree_get] = ACTIONS(353),
    [anon_sym_mtree_set] = ACTIONS(353),
    [anon_sym_mtree_cwm] = ACTIONS(353),
    [anon_sym_caller] = ACTIONS(353),
    [anon_sym_is_odd] = ACTIONS(353),
    [anon_sym_assert_eqw] = ACTIONS(353),
    [anon_sym_clk] = ACTIONS(353),
    [anon_sym_fri_ext2fold4] = ACTIONS(353),
    [anon_sym_hash] = ACTIONS(353),
    [anon_sym_adv] = ACTIONS(355),
    [anon_sym_exp] = ACTIONS(353),
    [anon_sym_u32assert] = ACTIONS(355),
    [anon_sym_add] = ACTIONS(353),
    [anon_sym_sub] = ACTIONS(353),
    [anon_sym_mul] = ACTIONS(353),
    [anon_sym_eq] = ACTIONS(355),
    [anon_sym_neq] = ACTIONS(353),
    [anon_sym_div] = ACTIONS(353),
    [anon_sym_mem_load] = ACTIONS(355),
    [anon_sym_mem_loadw] = ACTIONS(353),
    [anon_sym_mem_store] = ACTIONS(355),
    [anon_sym_mem_storew] = ACTIONS(353),
    [anon_sym_u32checked_add] = ACTIONS(353),
    [anon_sym_u32wrapping_add] = ACTIONS(355),
    [anon_sym_u32overflowing_add] = ACTIONS(355),
    [anon_sym_u32checked_sub] = ACTIONS(353),
    [anon_sym_u32wrapping_sub] = ACTIONS(353),
    [anon_sym_u32overflowing_sub] = ACTIONS(353),
    [anon_sym_u32checked_mul] = ACTIONS(353),
    [anon_sym_u32wrapping_mul] = ACTIONS(353),
    [anon_sym_u32overflowing_mul] = ACTIONS(353),
    [anon_sym_u32checked_div] = ACTIONS(355),
    [anon_sym_u32unchecked_div] = ACTIONS(355),
    [anon_sym_u32checked_mod] = ACTIONS(353),
    [anon_sym_u32unchecked_mod] = ACTIONS(353),
    [anon_sym_u32checked_divmod] = ACTIONS(353),
    [anon_sym_u32unchecked_divmod] = ACTIONS(353),
    [anon_sym_u32checked_shr] = ACTIONS(353),
    [anon_sym_u32unchecked_shr] = ACTIONS(353),
    [anon_sym_u32checked_shl] = ACTIONS(353),
    [anon_sym_u32unchecked_shl] = ACTIONS(353),
    [anon_sym_u32checked_rotr] = ACTIONS(353),
    [anon_sym_u32unchecked_rotr] = ACTIONS(353),
    [anon_sym_u32checked_rotl] = ACTIONS(353),
    [anon_sym_u32unchecked_rotl] = ACTIONS(353),
    [anon_sym_u32checked_eq] = ACTIONS(353),
    [anon_sym_u32checked_neq] = ACTIONS(353),
    [anon_sym_locaddr] = ACTIONS(353),
    [anon_sym_loc_load] = ACTIONS(355),
    [anon_sym_loc_loadw] = ACTIONS(353),
    [anon_sym_loc_store] = ACTIONS(355),
    [anon_sym_loc_storew] = ACTIONS(353),
    [anon_sym_dup] = ACTIONS(355),
    [anon_sym_swap] = ACTIONS(355),
    [anon_sym_movup] = ACTIONS(355),
    [anon_sym_movdn] = ACTIONS(355),
    [anon_sym_adv_push] = ACTIONS(353),
    [anon_sym_dupw] = ACTIONS(353),
    [anon_sym_swapw] = ACTIONS(353),
    [anon_sym_movupw] = ACTIONS(353),
    [anon_sym_movdnw] = ACTIONS(353),
    [anon_sym_push] = ACTIONS(353),
    [anon_sym_if] = ACTIONS(353),
    [sym__else] = ACTIONS(353),
    [anon_sym_while] = ACTIONS(353),
    [anon_sym_repeat] = ACTIONS(353),
    [sym__end] = ACTIONS(353),
  },
  [50] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(357),
    [anon_sym_call] = ACTIONS(359),
    [anon_sym_syscall] = ACTIONS(357),
    [anon_sym_assert] = ACTIONS(359),
    [anon_sym_assertz] = ACTIONS(357),
    [anon_sym_assert_eq] = ACTIONS(359),
    [anon_sym_neg] = ACTIONS(357),
    [anon_sym_inv] = ACTIONS(357),
    [anon_sym_pow2] = ACTIONS(357),
    [anon_sym_not] = ACTIONS(357),
    [anon_sym_and] = ACTIONS(357),
    [anon_sym_or] = ACTIONS(357),
    [anon_sym_xor] = ACTIONS(357),
    [anon_sym_lt] = ACTIONS(359),
    [anon_sym_lte] = ACTIONS(357),
    [anon_sym_gt] = ACTIONS(359),
    [anon_sym_gte] = ACTIONS(357),
    [anon_sym_eqw] = ACTIONS(357),
    [anon_sym_ext2add] = ACTIONS(357),
    [anon_sym_ext2sub] = ACTIONS(357),
    [anon_sym_ext2mul] = ACTIONS(357),
    [anon_sym_ext2div] = ACTIONS(357),
    [anon_sym_ext2neg] = ACTIONS(357),
    [anon_sym_ext2inv] = ACTIONS(357),
    [anon_sym_u32test] = ACTIONS(359),
    [anon_sym_u32testw] = ACTIONS(357),
    [anon_sym_u32assertw] = ACTIONS(357),
    [anon_sym_u32cast] = ACTIONS(357),
    [anon_sym_u32split] = ACTIONS(357),
    [anon_sym_u32overflowing_add3] = ACTIONS(357),
    [anon_sym_u32wrapping_add3] = ACTIONS(357),
    [anon_sym_u32overflowing_madd] = ACTIONS(357),
    [anon_sym_u32wrapping_madd] = ACTIONS(357),
    [anon_sym_u32checked_and] = ACTIONS(357),
    [anon_sym_u32checked_or] = ACTIONS(357),
    [anon_sym_u32checked_xor] = ACTIONS(357),
    [anon_sym_u32checked_not] = ACTIONS(357),
    [anon_sym_u32checked_popcnt] = ACTIONS(357),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(357),
    [anon_sym_u32checked_lt] = ACTIONS(359),
    [anon_sym_u32unchecked_lt] = ACTIONS(359),
    [anon_sym_u32checked_lte] = ACTIONS(357),
    [anon_sym_u32unchecked_lte] = ACTIONS(357),
    [anon_sym_u32checked_gt] = ACTIONS(359),
    [anon_sym_u32unchecked_gt] = ACTIONS(359),
    [anon_sym_u32checked_gte] = ACTIONS(357),
    [anon_sym_u32unchecked_gte] = ACTIONS(357),
    [anon_sym_u32checked_min] = ACTIONS(357),
    [anon_sym_u32unchecked_min] = ACTIONS(357),
    [anon_sym_u32checked_max] = ACTIONS(357),
    [anon_sym_u32unchecked_max] = ACTIONS(357),
    [anon_sym_drop] = ACTIONS(359),
    [anon_sym_dropw] = ACTIONS(357),
    [anon_sym_padw] = ACTIONS(357),
    [anon_sym_swapdw] = ACTIONS(357),
    [anon_sym_cswap] = ACTIONS(359),
    [anon_sym_cswapw] = ACTIONS(357),
    [anon_sym_cdrop] = ACTIONS(359),
    [anon_sym_cdropw] = ACTIONS(357),
    [anon_sym_sdepth] = ACTIONS(357),
    [anon_sym_mem_stream] = ACTIONS(357),
    [anon_sym_adv_pipe] = ACTIONS(357),
    [anon_sym_adv_loadw] = ACTIONS(357),
    [anon_sym_hmerge] = ACTIONS(357),
    [anon_sym_hperm] = ACTIONS(357),
    [anon_sym_mtree_get] = ACTIONS(357),
    [anon_sym_mtree_set] = ACTIONS(357),
    [anon_sym_mtree_cwm] = ACTIONS(357),
    [anon_sym_caller] = ACTIONS(357),
    [anon_sym_is_odd] = ACTIONS(357),
    [anon_sym_assert_eqw] = ACTIONS(357),
    [anon_sym_clk] = ACTIONS(357),
    [anon_sym_fri_ext2fold4] = ACTIONS(357),
    [anon_sym_hash] = ACTIONS(357),
    [anon_sym_adv] = ACTIONS(359),
    [anon_sym_exp] = ACTIONS(357),
    [anon_sym_u32assert] = ACTIONS(359),
    [anon_sym_add] = ACTIONS(357),
    [anon_sym_sub] = ACTIONS(357),
    [anon_sym_mul] = ACTIONS(357),
    [anon_sym_eq] = ACTIONS(359),
    [anon_sym_neq] = ACTIONS(357),
    [anon_sym_div] = ACTIONS(357),
    [anon_sym_mem_load] = ACTIONS(359),
    [anon_sym_mem_loadw] = ACTIONS(357),
    [anon_sym_mem_store] = ACTIONS(359),
    [anon_sym_mem_storew] = ACTIONS(357),
    [anon_sym_u32checked_add] = ACTIONS(357),
    [anon_sym_u32wrapping_add] = ACTIONS(359),
    [anon_sym_u32overflowing_add] = ACTIONS(359),
    [anon_sym_u32checked_sub] = ACTIONS(357),
    [anon_sym_u32wrapping_sub] = ACTIONS(357),
    [anon_sym_u32overflowing_sub] = ACTIONS(357),
    [anon_sym_u32checked_mul] = ACTIONS(357),
    [anon_sym_u32wrapping_mul] = ACTIONS(357),
    [anon_sym_u32overflowing_mul] = ACTIONS(357),
    [anon_sym_u32checked_div] = ACTIONS(359),
    [anon_sym_u32unchecked_div] = ACTIONS(359),
    [anon_sym_u32checked_mod] = ACTIONS(357),
    [anon_sym_u32unchecked_mod] = ACTIONS(357),
    [anon_sym_u32checked_divmod] = ACTIONS(357),
    [anon_sym_u32unchecked_divmod] = ACTIONS(357),
    [anon_sym_u32checked_shr] = ACTIONS(357),
    [anon_sym_u32unchecked_shr] = ACTIONS(357),
    [anon_sym_u32checked_shl] = ACTIONS(357),
    [anon_sym_u32unchecked_shl] = ACTIONS(357),
    [anon_sym_u32checked_rotr] = ACTIONS(357),
    [anon_sym_u32unchecked_rotr] = ACTIONS(357),
    [anon_sym_u32checked_rotl] = ACTIONS(357),
    [anon_sym_u32unchecked_rotl] = ACTIONS(357),
    [anon_sym_u32checked_eq] = ACTIONS(357),
    [anon_sym_u32checked_neq] = ACTIONS(357),
    [anon_sym_locaddr] = ACTIONS(357),
    [anon_sym_loc_load] = ACTIONS(359),
    [anon_sym_loc_loadw] = ACTIONS(357),
    [anon_sym_loc_store] = ACTIONS(359),
    [anon_sym_loc_storew] = ACTIONS(357),
    [anon_sym_dup] = ACTIONS(359),
    [anon_sym_swap] = ACTIONS(359),
    [anon_sym_movup] = ACTIONS(359),
    [anon_sym_movdn] = ACTIONS(359),
    [anon_sym_adv_push] = ACTIONS(357),
    [anon_sym_dupw] = ACTIONS(357),
    [anon_sym_swapw] = ACTIONS(357),
    [anon_sym_movupw] = ACTIONS(357),
    [anon_sym_movdnw] = ACTIONS(357),
    [anon_sym_push] = ACTIONS(357),
    [anon_sym_if] = ACTIONS(357),
    [sym__else] = ACTIONS(357),
    [anon_sym_while] = ACTIONS(357),
    [anon_sym_repeat] = ACTIONS(357),
    [sym__end] = ACTIONS(357),
  },
  [51] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(361),
    [anon_sym_call] = ACTIONS(363),
    [anon_sym_syscall] = ACTIONS(361),
    [anon_sym_assert] = ACTIONS(363),
    [anon_sym_assertz] = ACTIONS(361),
    [anon_sym_assert_eq] = ACTIONS(363),
    [anon_sym_neg] = ACTIONS(361),
    [anon_sym_inv] = ACTIONS(361),
    [anon_sym_pow2] = ACTIONS(361),
    [anon_sym_not] = ACTIONS(361),
    [anon_sym_and] = ACTIONS(361),
    [anon_sym_or] = ACTIONS(361),
    [anon_sym_xor] = ACTIONS(361),
    [anon_sym_lt] = ACTIONS(363),
    [anon_sym_lte] = ACTIONS(361),
    [anon_sym_gt] = ACTIONS(363),
    [anon_sym_gte] = ACTIONS(361),
    [anon_sym_eqw] = ACTIONS(361),
    [anon_sym_ext2add] = ACTIONS(361),
    [anon_sym_ext2sub] = ACTIONS(361),
    [anon_sym_ext2mul] = ACTIONS(361),
    [anon_sym_ext2div] = ACTIONS(361),
    [anon_sym_ext2neg] = ACTIONS(361),
    [anon_sym_ext2inv] = ACTIONS(361),
    [anon_sym_u32test] = ACTIONS(363),
    [anon_sym_u32testw] = ACTIONS(361),
    [anon_sym_u32assertw] = ACTIONS(361),
    [anon_sym_u32cast] = ACTIONS(361),
    [anon_sym_u32split] = ACTIONS(361),
    [anon_sym_u32overflowing_add3] = ACTIONS(361),
    [anon_sym_u32wrapping_add3] = ACTIONS(361),
    [anon_sym_u32overflowing_madd] = ACTIONS(361),
    [anon_sym_u32wrapping_madd] = ACTIONS(361),
    [anon_sym_u32checked_and] = ACTIONS(361),
    [anon_sym_u32checked_or] = ACTIONS(361),
    [anon_sym_u32checked_xor] = ACTIONS(361),
    [anon_sym_u32checked_not] = ACTIONS(361),
    [anon_sym_u32checked_popcnt] = ACTIONS(361),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(361),
    [anon_sym_u32checked_lt] = ACTIONS(363),
    [anon_sym_u32unchecked_lt] = ACTIONS(363),
    [anon_sym_u32checked_lte] = ACTIONS(361),
    [anon_sym_u32unchecked_lte] = ACTIONS(361),
    [anon_sym_u32checked_gt] = ACTIONS(363),
    [anon_sym_u32unchecked_gt] = ACTIONS(363),
    [anon_sym_u32checked_gte] = ACTIONS(361),
    [anon_sym_u32unchecked_gte] = ACTIONS(361),
    [anon_sym_u32checked_min] = ACTIONS(361),
    [anon_sym_u32unchecked_min] = ACTIONS(361),
    [anon_sym_u32checked_max] = ACTIONS(361),
    [anon_sym_u32unchecked_max] = ACTIONS(361),
    [anon_sym_drop] = ACTIONS(363),
    [anon_sym_dropw] = ACTIONS(361),
    [anon_sym_padw] = ACTIONS(361),
    [anon_sym_swapdw] = ACTIONS(361),
    [anon_sym_cswap] = ACTIONS(363),
    [anon_sym_cswapw] = ACTIONS(361),
    [anon_sym_cdrop] = ACTIONS(363),
    [anon_sym_cdropw] = ACTIONS(361),
    [anon_sym_sdepth] = ACTIONS(361),
    [anon_sym_mem_stream] = ACTIONS(361),
    [anon_sym_adv_pipe] = ACTIONS(361),
    [anon_sym_adv_loadw] = ACTIONS(361),
    [anon_sym_hmerge] = ACTIONS(361),
    [anon_sym_hperm] = ACTIONS(361),
    [anon_sym_mtree_get] = ACTIONS(361),
    [anon_sym_mtree_set] = ACTIONS(361),
    [anon_sym_mtree_cwm] = ACTIONS(361),
    [anon_sym_caller] = ACTIONS(361),
    [anon_sym_is_odd] = ACTIONS(361),
    [anon_sym_assert_eqw] = ACTIONS(361),
    [anon_sym_clk] = ACTIONS(361),
    [anon_sym_fri_ext2fold4] = ACTIONS(361),
    [anon_sym_hash] = ACTIONS(361),
    [anon_sym_adv] = ACTIONS(363),
    [anon_sym_exp] = ACTIONS(361),
    [anon_sym_u32assert] = ACTIONS(363),
    [anon_sym_add] = ACTIONS(361),
    [anon_sym_sub] = ACTIONS(361),
    [anon_sym_mul] = ACTIONS(361),
    [anon_sym_eq] = ACTIONS(363),
    [anon_sym_neq] = ACTIONS(361),
    [anon_sym_div] = ACTIONS(361),
    [anon_sym_mem_load] = ACTIONS(363),
    [anon_sym_mem_loadw] = ACTIONS(361),
    [anon_sym_mem_store] = ACTIONS(363),
    [anon_sym_mem_storew] = ACTIONS(361),
    [anon_sym_u32checked_add] = ACTIONS(361),
    [anon_sym_u32wrapping_add] = ACTIONS(363),
    [anon_sym_u32overflowing_add] = ACTIONS(363),
    [anon_sym_u32checked_sub] = ACTIONS(361),
    [anon_sym_u32wrapping_sub] = ACTIONS(361),
    [anon_sym_u32overflowing_sub] = ACTIONS(361),
    [anon_sym_u32checked_mul] = ACTIONS(361),
    [anon_sym_u32wrapping_mul] = ACTIONS(361),
    [anon_sym_u32overflowing_mul] = ACTIONS(361),
    [anon_sym_u32checked_div] = ACTIONS(363),
    [anon_sym_u32unchecked_div] = ACTIONS(363),
    [anon_sym_u32checked_mod] = ACTIONS(361),
    [anon_sym_u32unchecked_mod] = ACTIONS(361),
    [anon_sym_u32checked_divmod] = ACTIONS(361),
    [anon_sym_u32unchecked_divmod] = ACTIONS(361),
    [anon_sym_u32checked_shr] = ACTIONS(361),
    [anon_sym_u32unchecked_shr] = ACTIONS(361),
    [anon_sym_u32checked_shl] = ACTIONS(361),
    [anon_sym_u32unchecked_shl] = ACTIONS(361),
    [anon_sym_u32checked_rotr] = ACTIONS(361),
    [anon_sym_u32unchecked_rotr] = ACTIONS(361),
    [anon_sym_u32checked_rotl] = ACTIONS(361),
    [anon_sym_u32unchecked_rotl] = ACTIONS(361),
    [anon_sym_u32checked_eq] = ACTIONS(361),
    [anon_sym_u32checked_neq] = ACTIONS(361),
    [anon_sym_locaddr] = ACTIONS(361),
    [anon_sym_loc_load] = ACTIONS(363),
    [anon_sym_loc_loadw] = ACTIONS(361),
    [anon_sym_loc_store] = ACTIONS(363),
    [anon_sym_loc_storew] = ACTIONS(361),
    [anon_sym_dup] = ACTIONS(363),
    [anon_sym_swap] = ACTIONS(363),
    [anon_sym_movup] = ACTIONS(363),
    [anon_sym_movdn] = ACTIONS(363),
    [anon_sym_adv_push] = ACTIONS(361),
    [anon_sym_dupw] = ACTIONS(361),
    [anon_sym_swapw] = ACTIONS(361),
    [anon_sym_movupw] = ACTIONS(361),
    [anon_sym_movdnw] = ACTIONS(361),
    [anon_sym_push] = ACTIONS(361),
    [anon_sym_if] = ACTIONS(361),
    [sym__else] = ACTIONS(361),
    [anon_sym_while] = ACTIONS(361),
    [anon_sym_repeat] = ACTIONS(361),
    [sym__end] = ACTIONS(361),
  },
  [52] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(365),
    [anon_sym_call] = ACTIONS(367),
    [anon_sym_syscall] = ACTIONS(365),
    [anon_sym_assert] = ACTIONS(367),
    [anon_sym_assertz] = ACTIONS(365),
    [anon_sym_assert_eq] = ACTIONS(367),
    [anon_sym_neg] = ACTIONS(365),
    [anon_sym_inv] = ACTIONS(365),
    [anon_sym_pow2] = ACTIONS(365),
    [anon_sym_not] = ACTIONS(365),
    [anon_sym_and] = ACTIONS(365),
    [anon_sym_or] = ACTIONS(365),
    [anon_sym_xor] = ACTIONS(365),
    [anon_sym_lt] = ACTIONS(367),
    [anon_sym_lte] = ACTIONS(365),
    [anon_sym_gt] = ACTIONS(367),
    [anon_sym_gte] = ACTIONS(365),
    [anon_sym_eqw] = ACTIONS(365),
    [anon_sym_ext2add] = ACTIONS(365),
    [anon_sym_ext2sub] = ACTIONS(365),
    [anon_sym_ext2mul] = ACTIONS(365),
    [anon_sym_ext2div] = ACTIONS(365),
    [anon_sym_ext2neg] = ACTIONS(365),
    [anon_sym_ext2inv] = ACTIONS(365),
    [anon_sym_u32test] = ACTIONS(367),
    [anon_sym_u32testw] = ACTIONS(365),
    [anon_sym_u32assertw] = ACTIONS(365),
    [anon_sym_u32cast] = ACTIONS(365),
    [anon_sym_u32split] = ACTIONS(365),
    [anon_sym_u32overflowing_add3] = ACTIONS(365),
    [anon_sym_u32wrapping_add3] = ACTIONS(365),
    [anon_sym_u32overflowing_madd] = ACTIONS(365),
    [anon_sym_u32wrapping_madd] = ACTIONS(365),
    [anon_sym_u32checked_and] = ACTIONS(365),
    [anon_sym_u32checked_or] = ACTIONS(365),
    [anon_sym_u32checked_xor] = ACTIONS(365),
    [anon_sym_u32checked_not] = ACTIONS(365),
    [anon_sym_u32checked_popcnt] = ACTIONS(365),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(365),
    [anon_sym_u32checked_lt] = ACTIONS(367),
    [anon_sym_u32unchecked_lt] = ACTIONS(367),
    [anon_sym_u32checked_lte] = ACTIONS(365),
    [anon_sym_u32unchecked_lte] = ACTIONS(365),
    [anon_sym_u32checked_gt] = ACTIONS(367),
    [anon_sym_u32unchecked_gt] = ACTIONS(367),
    [anon_sym_u32checked_gte] = ACTIONS(365),
    [anon_sym_u32unchecked_gte] = ACTIONS(365),
    [anon_sym_u32checked_min] = ACTIONS(365),
    [anon_sym_u32unchecked_min] = ACTIONS(365),
    [anon_sym_u32checked_max] = ACTIONS(365),
    [anon_sym_u32unchecked_max] = ACTIONS(365),
    [anon_sym_drop] = ACTIONS(367),
    [anon_sym_dropw] = ACTIONS(365),
    [anon_sym_padw] = ACTIONS(365),
    [anon_sym_swapdw] = ACTIONS(365),
    [anon_sym_cswap] = ACTIONS(367),
    [anon_sym_cswapw] = ACTIONS(365),
    [anon_sym_cdrop] = ACTIONS(367),
    [anon_sym_cdropw] = ACTIONS(365),
    [anon_sym_sdepth] = ACTIONS(365),
    [anon_sym_mem_stream] = ACTIONS(365),
    [anon_sym_adv_pipe] = ACTIONS(365),
    [anon_sym_adv_loadw] = ACTIONS(365),
    [anon_sym_hmerge] = ACTIONS(365),
    [anon_sym_hperm] = ACTIONS(365),
    [anon_sym_mtree_get] = ACTIONS(365),
    [anon_sym_mtree_set] = ACTIONS(365),
    [anon_sym_mtree_cwm] = ACTIONS(365),
    [anon_sym_caller] = ACTIONS(365),
    [anon_sym_is_odd] = ACTIONS(365),
    [anon_sym_assert_eqw] = ACTIONS(365),
    [anon_sym_clk] = ACTIONS(365),
    [anon_sym_fri_ext2fold4] = ACTIONS(365),
    [anon_sym_hash] = ACTIONS(365),
    [anon_sym_adv] = ACTIONS(367),
    [anon_sym_exp] = ACTIONS(365),
    [anon_sym_u32assert] = ACTIONS(367),
    [anon_sym_add] = ACTIONS(365),
    [anon_sym_sub] = ACTIONS(365),
    [anon_sym_mul] = ACTIONS(365),
    [anon_sym_eq] = ACTIONS(367),
    [anon_sym_neq] = ACTIONS(365),
    [anon_sym_div] = ACTIONS(365),
    [anon_sym_mem_load] = ACTIONS(367),
    [anon_sym_mem_loadw] = ACTIONS(365),
    [anon_sym_mem_store] = ACTIONS(367),
    [anon_sym_mem_storew] = ACTIONS(365),
    [anon_sym_u32checked_add] = ACTIONS(365),
    [anon_sym_u32wrapping_add] = ACTIONS(367),
    [anon_sym_u32overflowing_add] = ACTIONS(367),
    [anon_sym_u32checked_sub] = ACTIONS(365),
    [anon_sym_u32wrapping_sub] = ACTIONS(365),
    [anon_sym_u32overflowing_sub] = ACTIONS(365),
    [anon_sym_u32checked_mul] = ACTIONS(365),
    [anon_sym_u32wrapping_mul] = ACTIONS(365),
    [anon_sym_u32overflowing_mul] = ACTIONS(365),
    [anon_sym_u32checked_div] = ACTIONS(367),
    [anon_sym_u32unchecked_div] = ACTIONS(367),
    [anon_sym_u32checked_mod] = ACTIONS(365),
    [anon_sym_u32unchecked_mod] = ACTIONS(365),
    [anon_sym_u32checked_divmod] = ACTIONS(365),
    [anon_sym_u32unchecked_divmod] = ACTIONS(365),
    [anon_sym_u32checked_shr] = ACTIONS(365),
    [anon_sym_u32unchecked_shr] = ACTIONS(365),
    [anon_sym_u32checked_shl] = ACTIONS(365),
    [anon_sym_u32unchecked_shl] = ACTIONS(365),
    [anon_sym_u32checked_rotr] = ACTIONS(365),
    [anon_sym_u32unchecked_rotr] = ACTIONS(365),
    [anon_sym_u32checked_rotl] = ACTIONS(365),
    [anon_sym_u32unchecked_rotl] = ACTIONS(365),
    [anon_sym_u32checked_eq] = ACTIONS(365),
    [anon_sym_u32checked_neq] = ACTIONS(365),
    [anon_sym_locaddr] = ACTIONS(365),
    [anon_sym_loc_load] = ACTIONS(367),
    [anon_sym_loc_loadw] = ACTIONS(365),
    [anon_sym_loc_store] = ACTIONS(367),
    [anon_sym_loc_storew] = ACTIONS(365),
    [anon_sym_dup] = ACTIONS(367),
    [anon_sym_swap] = ACTIONS(367),
    [anon_sym_movup] = ACTIONS(367),
    [anon_sym_movdn] = ACTIONS(367),
    [anon_sym_adv_push] = ACTIONS(365),
    [anon_sym_dupw] = ACTIONS(365),
    [anon_sym_swapw] = ACTIONS(365),
    [anon_sym_movupw] = ACTIONS(365),
    [anon_sym_movdnw] = ACTIONS(365),
    [anon_sym_push] = ACTIONS(365),
    [anon_sym_if] = ACTIONS(365),
    [sym__else] = ACTIONS(365),
    [anon_sym_while] = ACTIONS(365),
    [anon_sym_repeat] = ACTIONS(365),
    [sym__end] = ACTIONS(365),
  },
  [53] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(369),
    [anon_sym_call] = ACTIONS(371),
    [anon_sym_syscall] = ACTIONS(369),
    [anon_sym_assert] = ACTIONS(371),
    [anon_sym_assertz] = ACTIONS(369),
    [anon_sym_assert_eq] = ACTIONS(371),
    [anon_sym_neg] = ACTIONS(369),
    [anon_sym_inv] = ACTIONS(369),
    [anon_sym_pow2] = ACTIONS(369),
    [anon_sym_not] = ACTIONS(369),
    [anon_sym_and] = ACTIONS(369),
    [anon_sym_or] = ACTIONS(369),
    [anon_sym_xor] = ACTIONS(369),
    [anon_sym_lt] = ACTIONS(371),
    [anon_sym_lte] = ACTIONS(369),
    [anon_sym_gt] = ACTIONS(371),
    [anon_sym_gte] = ACTIONS(369),
    [anon_sym_eqw] = ACTIONS(369),
    [anon_sym_ext2add] = ACTIONS(369),
    [anon_sym_ext2sub] = ACTIONS(369),
    [anon_sym_ext2mul] = ACTIONS(369),
    [anon_sym_ext2div] = ACTIONS(369),
    [anon_sym_ext2neg] = ACTIONS(369),
    [anon_sym_ext2inv] = ACTIONS(369),
    [anon_sym_u32test] = ACTIONS(371),
    [anon_sym_u32testw] = ACTIONS(369),
    [anon_sym_u32assertw] = ACTIONS(369),
    [anon_sym_u32cast] = ACTIONS(369),
    [anon_sym_u32split] = ACTIONS(369),
    [anon_sym_u32overflowing_add3] = ACTIONS(369),
    [anon_sym_u32wrapping_add3] = ACTIONS(369),
    [anon_sym_u32overflowing_madd] = ACTIONS(369),
    [anon_sym_u32wrapping_madd] = ACTIONS(369),
    [anon_sym_u32checked_and] = ACTIONS(369),
    [anon_sym_u32checked_or] = ACTIONS(369),
    [anon_sym_u32checked_xor] = ACTIONS(369),
    [anon_sym_u32checked_not] = ACTIONS(369),
    [anon_sym_u32checked_popcnt] = ACTIONS(369),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(369),
    [anon_sym_u32checked_lt] = ACTIONS(371),
    [anon_sym_u32unchecked_lt] = ACTIONS(371),
    [anon_sym_u32checked_lte] = ACTIONS(369),
    [anon_sym_u32unchecked_lte] = ACTIONS(369),
    [anon_sym_u32checked_gt] = ACTIONS(371),
    [anon_sym_u32unchecked_gt] = ACTIONS(371),
    [anon_sym_u32checked_gte] = ACTIONS(369),
    [anon_sym_u32unchecked_gte] = ACTIONS(369),
    [anon_sym_u32checked_min] = ACTIONS(369),
    [anon_sym_u32unchecked_min] = ACTIONS(369),
    [anon_sym_u32checked_max] = ACTIONS(369),
    [anon_sym_u32unchecked_max] = ACTIONS(369),
    [anon_sym_drop] = ACTIONS(371),
    [anon_sym_dropw] = ACTIONS(369),
    [anon_sym_padw] = ACTIONS(369),
    [anon_sym_swapdw] = ACTIONS(369),
    [anon_sym_cswap] = ACTIONS(371),
    [anon_sym_cswapw] = ACTIONS(369),
    [anon_sym_cdrop] = ACTIONS(371),
    [anon_sym_cdropw] = ACTIONS(369),
    [anon_sym_sdepth] = ACTIONS(369),
    [anon_sym_mem_stream] = ACTIONS(369),
    [anon_sym_adv_pipe] = ACTIONS(369),
    [anon_sym_adv_loadw] = ACTIONS(369),
    [anon_sym_hmerge] = ACTIONS(369),
    [anon_sym_hperm] = ACTIONS(369),
    [anon_sym_mtree_get] = ACTIONS(369),
    [anon_sym_mtree_set] = ACTIONS(369),
    [anon_sym_mtree_cwm] = ACTIONS(369),
    [anon_sym_caller] = ACTIONS(369),
    [anon_sym_is_odd] = ACTIONS(369),
    [anon_sym_assert_eqw] = ACTIONS(369),
    [anon_sym_clk] = ACTIONS(369),
    [anon_sym_fri_ext2fold4] = ACTIONS(369),
    [anon_sym_hash] = ACTIONS(369),
    [anon_sym_adv] = ACTIONS(371),
    [anon_sym_exp] = ACTIONS(369),
    [anon_sym_u32assert] = ACTIONS(371),
    [anon_sym_add] = ACTIONS(369),
    [anon_sym_sub] = ACTIONS(369),
    [anon_sym_mul] = ACTIONS(369),
    [anon_sym_eq] = ACTIONS(371),
    [anon_sym_neq] = ACTIONS(369),
    [anon_sym_div] = ACTIONS(369),
    [anon_sym_mem_load] = ACTIONS(371),
    [anon_sym_mem_loadw] = ACTIONS(369),
    [anon_sym_mem_store] = ACTIONS(371),
    [anon_sym_mem_storew] = ACTIONS(369),
    [anon_sym_u32checked_add] = ACTIONS(369),
    [anon_sym_u32wrapping_add] = ACTIONS(371),
    [anon_sym_u32overflowing_add] = ACTIONS(371),
    [anon_sym_u32checked_sub] = ACTIONS(369),
    [anon_sym_u32wrapping_sub] = ACTIONS(369),
    [anon_sym_u32overflowing_sub] = ACTIONS(369),
    [anon_sym_u32checked_mul] = ACTIONS(369),
    [anon_sym_u32wrapping_mul] = ACTIONS(369),
    [anon_sym_u32overflowing_mul] = ACTIONS(369),
    [anon_sym_u32checked_div] = ACTIONS(371),
    [anon_sym_u32unchecked_div] = ACTIONS(371),
    [anon_sym_u32checked_mod] = ACTIONS(369),
    [anon_sym_u32unchecked_mod] = ACTIONS(369),
    [anon_sym_u32checked_divmod] = ACTIONS(369),
    [anon_sym_u32unchecked_divmod] = ACTIONS(369),
    [anon_sym_u32checked_shr] = ACTIONS(369),
    [anon_sym_u32unchecked_shr] = ACTIONS(369),
    [anon_sym_u32checked_shl] = ACTIONS(369),
    [anon_sym_u32unchecked_shl] = ACTIONS(369),
    [anon_sym_u32checked_rotr] = ACTIONS(369),
    [anon_sym_u32unchecked_rotr] = ACTIONS(369),
    [anon_sym_u32checked_rotl] = ACTIONS(369),
    [anon_sym_u32unchecked_rotl] = ACTIONS(369),
    [anon_sym_u32checked_eq] = ACTIONS(369),
    [anon_sym_u32checked_neq] = ACTIONS(369),
    [anon_sym_locaddr] = ACTIONS(369),
    [anon_sym_loc_load] = ACTIONS(371),
    [anon_sym_loc_loadw] = ACTIONS(369),
    [anon_sym_loc_store] = ACTIONS(371),
    [anon_sym_loc_storew] = ACTIONS(369),
    [anon_sym_dup] = ACTIONS(371),
    [anon_sym_swap] = ACTIONS(371),
    [anon_sym_movup] = ACTIONS(371),
    [anon_sym_movdn] = ACTIONS(371),
    [anon_sym_adv_push] = ACTIONS(369),
    [anon_sym_dupw] = ACTIONS(369),
    [anon_sym_swapw] = ACTIONS(369),
    [anon_sym_movupw] = ACTIONS(369),
    [anon_sym_movdnw] = ACTIONS(369),
    [anon_sym_push] = ACTIONS(369),
    [anon_sym_if] = ACTIONS(369),
    [sym__else] = ACTIONS(369),
    [anon_sym_while] = ACTIONS(369),
    [anon_sym_repeat] = ACTIONS(369),
    [sym__end] = ACTIONS(369),
  },
  [54] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(373),
    [anon_sym_call] = ACTIONS(375),
    [anon_sym_syscall] = ACTIONS(373),
    [anon_sym_assert] = ACTIONS(375),
    [anon_sym_assertz] = ACTIONS(373),
    [anon_sym_assert_eq] = ACTIONS(375),
    [anon_sym_neg] = ACTIONS(373),
    [anon_sym_inv] = ACTIONS(373),
    [anon_sym_pow2] = ACTIONS(373),
    [anon_sym_not] = ACTIONS(373),
    [anon_sym_and] = ACTIONS(373),
    [anon_sym_or] = ACTIONS(373),
    [anon_sym_xor] = ACTIONS(373),
    [anon_sym_lt] = ACTIONS(375),
    [anon_sym_lte] = ACTIONS(373),
    [anon_sym_gt] = ACTIONS(375),
    [anon_sym_gte] = ACTIONS(373),
    [anon_sym_eqw] = ACTIONS(373),
    [anon_sym_ext2add] = ACTIONS(373),
    [anon_sym_ext2sub] = ACTIONS(373),
    [anon_sym_ext2mul] = ACTIONS(373),
    [anon_sym_ext2div] = ACTIONS(373),
    [anon_sym_ext2neg] = ACTIONS(373),
    [anon_sym_ext2inv] = ACTIONS(373),
    [anon_sym_u32test] = ACTIONS(375),
    [anon_sym_u32testw] = ACTIONS(373),
    [anon_sym_u32assertw] = ACTIONS(373),
    [anon_sym_u32cast] = ACTIONS(373),
    [anon_sym_u32split] = ACTIONS(373),
    [anon_sym_u32overflowing_add3] = ACTIONS(373),
    [anon_sym_u32wrapping_add3] = ACTIONS(373),
    [anon_sym_u32overflowing_madd] = ACTIONS(373),
    [anon_sym_u32wrapping_madd] = ACTIONS(373),
    [anon_sym_u32checked_and] = ACTIONS(373),
    [anon_sym_u32checked_or] = ACTIONS(373),
    [anon_sym_u32checked_xor] = ACTIONS(373),
    [anon_sym_u32checked_not] = ACTIONS(373),
    [anon_sym_u32checked_popcnt] = ACTIONS(373),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(373),
    [anon_sym_u32checked_lt] = ACTIONS(375),
    [anon_sym_u32unchecked_lt] = ACTIONS(375),
    [anon_sym_u32checked_lte] = ACTIONS(373),
    [anon_sym_u32unchecked_lte] = ACTIONS(373),
    [anon_sym_u32checked_gt] = ACTIONS(375),
    [anon_sym_u32unchecked_gt] = ACTIONS(375),
    [anon_sym_u32checked_gte] = ACTIONS(373),
    [anon_sym_u32unchecked_gte] = ACTIONS(373),
    [anon_sym_u32checked_min] = ACTIONS(373),
    [anon_sym_u32unchecked_min] = ACTIONS(373),
    [anon_sym_u32checked_max] = ACTIONS(373),
    [anon_sym_u32unchecked_max] = ACTIONS(373),
    [anon_sym_drop] = ACTIONS(375),
    [anon_sym_dropw] = ACTIONS(373),
    [anon_sym_padw] = ACTIONS(373),
    [anon_sym_swapdw] = ACTIONS(373),
    [anon_sym_cswap] = ACTIONS(375),
    [anon_sym_cswapw] = ACTIONS(373),
    [anon_sym_cdrop] = ACTIONS(375),
    [anon_sym_cdropw] = ACTIONS(373),
    [anon_sym_sdepth] = ACTIONS(373),
    [anon_sym_mem_stream] = ACTIONS(373),
    [anon_sym_adv_pipe] = ACTIONS(373),
    [anon_sym_adv_loadw] = ACTIONS(373),
    [anon_sym_hmerge] = ACTIONS(373),
    [anon_sym_hperm] = ACTIONS(373),
    [anon_sym_mtree_get] = ACTIONS(373),
    [anon_sym_mtree_set] = ACTIONS(373),
    [anon_sym_mtree_cwm] = ACTIONS(373),
    [anon_sym_caller] = ACTIONS(373),
    [anon_sym_is_odd] = ACTIONS(373),
    [anon_sym_assert_eqw] = ACTIONS(373),
    [anon_sym_clk] = ACTIONS(373),
    [anon_sym_fri_ext2fold4] = ACTIONS(373),
    [anon_sym_hash] = ACTIONS(373),
    [anon_sym_adv] = ACTIONS(375),
    [anon_sym_exp] = ACTIONS(373),
    [anon_sym_u32assert] = ACTIONS(375),
    [anon_sym_add] = ACTIONS(373),
    [anon_sym_sub] = ACTIONS(373),
    [anon_sym_mul] = ACTIONS(373),
    [anon_sym_eq] = ACTIONS(375),
    [anon_sym_neq] = ACTIONS(373),
    [anon_sym_div] = ACTIONS(373),
    [anon_sym_mem_load] = ACTIONS(375),
    [anon_sym_mem_loadw] = ACTIONS(373),
    [anon_sym_mem_store] = ACTIONS(375),
    [anon_sym_mem_storew] = ACTIONS(373),
    [anon_sym_u32checked_add] = ACTIONS(373),
    [anon_sym_u32wrapping_add] = ACTIONS(375),
    [anon_sym_u32overflowing_add] = ACTIONS(375),
    [anon_sym_u32checked_sub] = ACTIONS(373),
    [anon_sym_u32wrapping_sub] = ACTIONS(373),
    [anon_sym_u32overflowing_sub] = ACTIONS(373),
    [anon_sym_u32checked_mul] = ACTIONS(373),
    [anon_sym_u32wrapping_mul] = ACTIONS(373),
    [anon_sym_u32overflowing_mul] = ACTIONS(373),
    [anon_sym_u32checked_div] = ACTIONS(375),
    [anon_sym_u32unchecked_div] = ACTIONS(375),
    [anon_sym_u32checked_mod] = ACTIONS(373),
    [anon_sym_u32unchecked_mod] = ACTIONS(373),
    [anon_sym_u32checked_divmod] = ACTIONS(373),
    [anon_sym_u32unchecked_divmod] = ACTIONS(373),
    [anon_sym_u32checked_shr] = ACTIONS(373),
    [anon_sym_u32unchecked_shr] = ACTIONS(373),
    [anon_sym_u32checked_shl] = ACTIONS(373),
    [anon_sym_u32unchecked_shl] = ACTIONS(373),
    [anon_sym_u32checked_rotr] = ACTIONS(373),
    [anon_sym_u32unchecked_rotr] = ACTIONS(373),
    [anon_sym_u32checked_rotl] = ACTIONS(373),
    [anon_sym_u32unchecked_rotl] = ACTIONS(373),
    [anon_sym_u32checked_eq] = ACTIONS(373),
    [anon_sym_u32checked_neq] = ACTIONS(373),
    [anon_sym_locaddr] = ACTIONS(373),
    [anon_sym_loc_load] = ACTIONS(375),
    [anon_sym_loc_loadw] = ACTIONS(373),
    [anon_sym_loc_store] = ACTIONS(375),
    [anon_sym_loc_storew] = ACTIONS(373),
    [anon_sym_dup] = ACTIONS(375),
    [anon_sym_swap] = ACTIONS(375),
    [anon_sym_movup] = ACTIONS(375),
    [anon_sym_movdn] = ACTIONS(375),
    [anon_sym_adv_push] = ACTIONS(373),
    [anon_sym_dupw] = ACTIONS(373),
    [anon_sym_swapw] = ACTIONS(373),
    [anon_sym_movupw] = ACTIONS(373),
    [anon_sym_movdnw] = ACTIONS(373),
    [anon_sym_push] = ACTIONS(373),
    [anon_sym_if] = ACTIONS(373),
    [sym__else] = ACTIONS(373),
    [anon_sym_while] = ACTIONS(373),
    [anon_sym_repeat] = ACTIONS(373),
    [sym__end] = ACTIONS(373),
  },
  [55] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(377),
    [anon_sym_call] = ACTIONS(379),
    [anon_sym_syscall] = ACTIONS(377),
    [anon_sym_assert] = ACTIONS(379),
    [anon_sym_assertz] = ACTIONS(377),
    [anon_sym_assert_eq] = ACTIONS(379),
    [anon_sym_neg] = ACTIONS(377),
    [anon_sym_inv] = ACTIONS(377),
    [anon_sym_pow2] = ACTIONS(377),
    [anon_sym_not] = ACTIONS(377),
    [anon_sym_and] = ACTIONS(377),
    [anon_sym_or] = ACTIONS(377),
    [anon_sym_xor] = ACTIONS(377),
    [anon_sym_lt] = ACTIONS(379),
    [anon_sym_lte] = ACTIONS(377),
    [anon_sym_gt] = ACTIONS(379),
    [anon_sym_gte] = ACTIONS(377),
    [anon_sym_eqw] = ACTIONS(377),
    [anon_sym_ext2add] = ACTIONS(377),
    [anon_sym_ext2sub] = ACTIONS(377),
    [anon_sym_ext2mul] = ACTIONS(377),
    [anon_sym_ext2div] = ACTIONS(377),
    [anon_sym_ext2neg] = ACTIONS(377),
    [anon_sym_ext2inv] = ACTIONS(377),
    [anon_sym_u32test] = ACTIONS(379),
    [anon_sym_u32testw] = ACTIONS(377),
    [anon_sym_u32assertw] = ACTIONS(377),
    [anon_sym_u32cast] = ACTIONS(377),
    [anon_sym_u32split] = ACTIONS(377),
    [anon_sym_u32overflowing_add3] = ACTIONS(377),
    [anon_sym_u32wrapping_add3] = ACTIONS(377),
    [anon_sym_u32overflowing_madd] = ACTIONS(377),
    [anon_sym_u32wrapping_madd] = ACTIONS(377),
    [anon_sym_u32checked_and] = ACTIONS(377),
    [anon_sym_u32checked_or] = ACTIONS(377),
    [anon_sym_u32checked_xor] = ACTIONS(377),
    [anon_sym_u32checked_not] = ACTIONS(377),
    [anon_sym_u32checked_popcnt] = ACTIONS(377),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(377),
    [anon_sym_u32checked_lt] = ACTIONS(379),
    [anon_sym_u32unchecked_lt] = ACTIONS(379),
    [anon_sym_u32checked_lte] = ACTIONS(377),
    [anon_sym_u32unchecked_lte] = ACTIONS(377),
    [anon_sym_u32checked_gt] = ACTIONS(379),
    [anon_sym_u32unchecked_gt] = ACTIONS(379),
    [anon_sym_u32checked_gte] = ACTIONS(377),
    [anon_sym_u32unchecked_gte] = ACTIONS(377),
    [anon_sym_u32checked_min] = ACTIONS(377),
    [anon_sym_u32unchecked_min] = ACTIONS(377),
    [anon_sym_u32checked_max] = ACTIONS(377),
    [anon_sym_u32unchecked_max] = ACTIONS(377),
    [anon_sym_drop] = ACTIONS(379),
    [anon_sym_dropw] = ACTIONS(377),
    [anon_sym_padw] = ACTIONS(377),
    [anon_sym_swapdw] = ACTIONS(377),
    [anon_sym_cswap] = ACTIONS(379),
    [anon_sym_cswapw] = ACTIONS(377),
    [anon_sym_cdrop] = ACTIONS(379),
    [anon_sym_cdropw] = ACTIONS(377),
    [anon_sym_sdepth] = ACTIONS(377),
    [anon_sym_mem_stream] = ACTIONS(377),
    [anon_sym_adv_pipe] = ACTIONS(377),
    [anon_sym_adv_loadw] = ACTIONS(377),
    [anon_sym_hmerge] = ACTIONS(377),
    [anon_sym_hperm] = ACTIONS(377),
    [anon_sym_mtree_get] = ACTIONS(377),
    [anon_sym_mtree_set] = ACTIONS(377),
    [anon_sym_mtree_cwm] = ACTIONS(377),
    [anon_sym_caller] = ACTIONS(377),
    [anon_sym_is_odd] = ACTIONS(377),
    [anon_sym_assert_eqw] = ACTIONS(377),
    [anon_sym_clk] = ACTIONS(377),
    [anon_sym_fri_ext2fold4] = ACTIONS(377),
    [anon_sym_hash] = ACTIONS(377),
    [anon_sym_adv] = ACTIONS(379),
    [anon_sym_exp] = ACTIONS(377),
    [anon_sym_u32assert] = ACTIONS(379),
    [anon_sym_add] = ACTIONS(377),
    [anon_sym_sub] = ACTIONS(377),
    [anon_sym_mul] = ACTIONS(377),
    [anon_sym_eq] = ACTIONS(379),
    [anon_sym_neq] = ACTIONS(377),
    [anon_sym_div] = ACTIONS(377),
    [anon_sym_mem_load] = ACTIONS(379),
    [anon_sym_mem_loadw] = ACTIONS(377),
    [anon_sym_mem_store] = ACTIONS(379),
    [anon_sym_mem_storew] = ACTIONS(377),
    [anon_sym_u32checked_add] = ACTIONS(377),
    [anon_sym_u32wrapping_add] = ACTIONS(379),
    [anon_sym_u32overflowing_add] = ACTIONS(379),
    [anon_sym_u32checked_sub] = ACTIONS(377),
    [anon_sym_u32wrapping_sub] = ACTIONS(377),
    [anon_sym_u32overflowing_sub] = ACTIONS(377),
    [anon_sym_u32checked_mul] = ACTIONS(377),
    [anon_sym_u32wrapping_mul] = ACTIONS(377),
    [anon_sym_u32overflowing_mul] = ACTIONS(377),
    [anon_sym_u32checked_div] = ACTIONS(379),
    [anon_sym_u32unchecked_div] = ACTIONS(379),
    [anon_sym_u32checked_mod] = ACTIONS(377),
    [anon_sym_u32unchecked_mod] = ACTIONS(377),
    [anon_sym_u32checked_divmod] = ACTIONS(377),
    [anon_sym_u32unchecked_divmod] = ACTIONS(377),
    [anon_sym_u32checked_shr] = ACTIONS(377),
    [anon_sym_u32unchecked_shr] = ACTIONS(377),
    [anon_sym_u32checked_shl] = ACTIONS(377),
    [anon_sym_u32unchecked_shl] = ACTIONS(377),
    [anon_sym_u32checked_rotr] = ACTIONS(377),
    [anon_sym_u32unchecked_rotr] = ACTIONS(377),
    [anon_sym_u32checked_rotl] = ACTIONS(377),
    [anon_sym_u32unchecked_rotl] = ACTIONS(377),
    [anon_sym_u32checked_eq] = ACTIONS(377),
    [anon_sym_u32checked_neq] = ACTIONS(377),
    [anon_sym_locaddr] = ACTIONS(377),
    [anon_sym_loc_load] = ACTIONS(379),
    [anon_sym_loc_loadw] = ACTIONS(377),
    [anon_sym_loc_store] = ACTIONS(379),
    [anon_sym_loc_storew] = ACTIONS(377),
    [anon_sym_dup] = ACTIONS(379),
    [anon_sym_swap] = ACTIONS(379),
    [anon_sym_movup] = ACTIONS(379),
    [anon_sym_movdn] = ACTIONS(379),
    [anon_sym_adv_push] = ACTIONS(377),
    [anon_sym_dupw] = ACTIONS(377),
    [anon_sym_swapw] = ACTIONS(377),
    [anon_sym_movupw] = ACTIONS(377),
    [anon_sym_movdnw] = ACTIONS(377),
    [anon_sym_push] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [sym__else] = ACTIONS(377),
    [anon_sym_while] = ACTIONS(377),
    [anon_sym_repeat] = ACTIONS(377),
    [sym__end] = ACTIONS(377),
  },
  [56] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(381),
    [anon_sym_call] = ACTIONS(383),
    [anon_sym_syscall] = ACTIONS(381),
    [anon_sym_assert] = ACTIONS(383),
    [anon_sym_assertz] = ACTIONS(381),
    [anon_sym_assert_eq] = ACTIONS(383),
    [anon_sym_neg] = ACTIONS(381),
    [anon_sym_inv] = ACTIONS(381),
    [anon_sym_pow2] = ACTIONS(381),
    [anon_sym_not] = ACTIONS(381),
    [anon_sym_and] = ACTIONS(381),
    [anon_sym_or] = ACTIONS(381),
    [anon_sym_xor] = ACTIONS(381),
    [anon_sym_lt] = ACTIONS(383),
    [anon_sym_lte] = ACTIONS(381),
    [anon_sym_gt] = ACTIONS(383),
    [anon_sym_gte] = ACTIONS(381),
    [anon_sym_eqw] = ACTIONS(381),
    [anon_sym_ext2add] = ACTIONS(381),
    [anon_sym_ext2sub] = ACTIONS(381),
    [anon_sym_ext2mul] = ACTIONS(381),
    [anon_sym_ext2div] = ACTIONS(381),
    [anon_sym_ext2neg] = ACTIONS(381),
    [anon_sym_ext2inv] = ACTIONS(381),
    [anon_sym_u32test] = ACTIONS(383),
    [anon_sym_u32testw] = ACTIONS(381),
    [anon_sym_u32assertw] = ACTIONS(381),
    [anon_sym_u32cast] = ACTIONS(381),
    [anon_sym_u32split] = ACTIONS(381),
    [anon_sym_u32overflowing_add3] = ACTIONS(381),
    [anon_sym_u32wrapping_add3] = ACTIONS(381),
    [anon_sym_u32overflowing_madd] = ACTIONS(381),
    [anon_sym_u32wrapping_madd] = ACTIONS(381),
    [anon_sym_u32checked_and] = ACTIONS(381),
    [anon_sym_u32checked_or] = ACTIONS(381),
    [anon_sym_u32checked_xor] = ACTIONS(381),
    [anon_sym_u32checked_not] = ACTIONS(381),
    [anon_sym_u32checked_popcnt] = ACTIONS(381),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(381),
    [anon_sym_u32checked_lt] = ACTIONS(383),
    [anon_sym_u32unchecked_lt] = ACTIONS(383),
    [anon_sym_u32checked_lte] = ACTIONS(381),
    [anon_sym_u32unchecked_lte] = ACTIONS(381),
    [anon_sym_u32checked_gt] = ACTIONS(383),
    [anon_sym_u32unchecked_gt] = ACTIONS(383),
    [anon_sym_u32checked_gte] = ACTIONS(381),
    [anon_sym_u32unchecked_gte] = ACTIONS(381),
    [anon_sym_u32checked_min] = ACTIONS(381),
    [anon_sym_u32unchecked_min] = ACTIONS(381),
    [anon_sym_u32checked_max] = ACTIONS(381),
    [anon_sym_u32unchecked_max] = ACTIONS(381),
    [anon_sym_drop] = ACTIONS(383),
    [anon_sym_dropw] = ACTIONS(381),
    [anon_sym_padw] = ACTIONS(381),
    [anon_sym_swapdw] = ACTIONS(381),
    [anon_sym_cswap] = ACTIONS(383),
    [anon_sym_cswapw] = ACTIONS(381),
    [anon_sym_cdrop] = ACTIONS(383),
    [anon_sym_cdropw] = ACTIONS(381),
    [anon_sym_sdepth] = ACTIONS(381),
    [anon_sym_mem_stream] = ACTIONS(381),
    [anon_sym_adv_pipe] = ACTIONS(381),
    [anon_sym_adv_loadw] = ACTIONS(381),
    [anon_sym_hmerge] = ACTIONS(381),
    [anon_sym_hperm] = ACTIONS(381),
    [anon_sym_mtree_get] = ACTIONS(381),
    [anon_sym_mtree_set] = ACTIONS(381),
    [anon_sym_mtree_cwm] = ACTIONS(381),
    [anon_sym_caller] = ACTIONS(381),
    [anon_sym_is_odd] = ACTIONS(381),
    [anon_sym_assert_eqw] = ACTIONS(381),
    [anon_sym_clk] = ACTIONS(381),
    [anon_sym_fri_ext2fold4] = ACTIONS(381),
    [anon_sym_hash] = ACTIONS(381),
    [anon_sym_adv] = ACTIONS(383),
    [anon_sym_exp] = ACTIONS(381),
    [anon_sym_u32assert] = ACTIONS(383),
    [anon_sym_add] = ACTIONS(381),
    [anon_sym_sub] = ACTIONS(381),
    [anon_sym_mul] = ACTIONS(381),
    [anon_sym_eq] = ACTIONS(383),
    [anon_sym_neq] = ACTIONS(381),
    [anon_sym_div] = ACTIONS(381),
    [anon_sym_mem_load] = ACTIONS(383),
    [anon_sym_mem_loadw] = ACTIONS(381),
    [anon_sym_mem_store] = ACTIONS(383),
    [anon_sym_mem_storew] = ACTIONS(381),
    [anon_sym_u32checked_add] = ACTIONS(381),
    [anon_sym_u32wrapping_add] = ACTIONS(383),
    [anon_sym_u32overflowing_add] = ACTIONS(383),
    [anon_sym_u32checked_sub] = ACTIONS(381),
    [anon_sym_u32wrapping_sub] = ACTIONS(381),
    [anon_sym_u32overflowing_sub] = ACTIONS(381),
    [anon_sym_u32checked_mul] = ACTIONS(381),
    [anon_sym_u32wrapping_mul] = ACTIONS(381),
    [anon_sym_u32overflowing_mul] = ACTIONS(381),
    [anon_sym_u32checked_div] = ACTIONS(383),
    [anon_sym_u32unchecked_div] = ACTIONS(383),
    [anon_sym_u32checked_mod] = ACTIONS(381),
    [anon_sym_u32unchecked_mod] = ACTIONS(381),
    [anon_sym_u32checked_divmod] = ACTIONS(381),
    [anon_sym_u32unchecked_divmod] = ACTIONS(381),
    [anon_sym_u32checked_shr] = ACTIONS(381),
    [anon_sym_u32unchecked_shr] = ACTIONS(381),
    [anon_sym_u32checked_shl] = ACTIONS(381),
    [anon_sym_u32unchecked_shl] = ACTIONS(381),
    [anon_sym_u32checked_rotr] = ACTIONS(381),
    [anon_sym_u32unchecked_rotr] = ACTIONS(381),
    [anon_sym_u32checked_rotl] = ACTIONS(381),
    [anon_sym_u32unchecked_rotl] = ACTIONS(381),
    [anon_sym_u32checked_eq] = ACTIONS(381),
    [anon_sym_u32checked_neq] = ACTIONS(381),
    [anon_sym_locaddr] = ACTIONS(381),
    [anon_sym_loc_load] = ACTIONS(383),
    [anon_sym_loc_loadw] = ACTIONS(381),
    [anon_sym_loc_store] = ACTIONS(383),
    [anon_sym_loc_storew] = ACTIONS(381),
    [anon_sym_dup] = ACTIONS(383),
    [anon_sym_swap] = ACTIONS(383),
    [anon_sym_movup] = ACTIONS(383),
    [anon_sym_movdn] = ACTIONS(383),
    [anon_sym_adv_push] = ACTIONS(381),
    [anon_sym_dupw] = ACTIONS(381),
    [anon_sym_swapw] = ACTIONS(381),
    [anon_sym_movupw] = ACTIONS(381),
    [anon_sym_movdnw] = ACTIONS(381),
    [anon_sym_push] = ACTIONS(381),
    [anon_sym_if] = ACTIONS(381),
    [sym__else] = ACTIONS(381),
    [anon_sym_while] = ACTIONS(381),
    [anon_sym_repeat] = ACTIONS(381),
    [sym__end] = ACTIONS(381),
  },
  [57] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(385),
    [anon_sym_call] = ACTIONS(387),
    [anon_sym_syscall] = ACTIONS(385),
    [anon_sym_assert] = ACTIONS(387),
    [anon_sym_assertz] = ACTIONS(385),
    [anon_sym_assert_eq] = ACTIONS(387),
    [anon_sym_neg] = ACTIONS(385),
    [anon_sym_inv] = ACTIONS(385),
    [anon_sym_pow2] = ACTIONS(385),
    [anon_sym_not] = ACTIONS(385),
    [anon_sym_and] = ACTIONS(385),
    [anon_sym_or] = ACTIONS(385),
    [anon_sym_xor] = ACTIONS(385),
    [anon_sym_lt] = ACTIONS(387),
    [anon_sym_lte] = ACTIONS(385),
    [anon_sym_gt] = ACTIONS(387),
    [anon_sym_gte] = ACTIONS(385),
    [anon_sym_eqw] = ACTIONS(385),
    [anon_sym_ext2add] = ACTIONS(385),
    [anon_sym_ext2sub] = ACTIONS(385),
    [anon_sym_ext2mul] = ACTIONS(385),
    [anon_sym_ext2div] = ACTIONS(385),
    [anon_sym_ext2neg] = ACTIONS(385),
    [anon_sym_ext2inv] = ACTIONS(385),
    [anon_sym_u32test] = ACTIONS(387),
    [anon_sym_u32testw] = ACTIONS(385),
    [anon_sym_u32assertw] = ACTIONS(385),
    [anon_sym_u32cast] = ACTIONS(385),
    [anon_sym_u32split] = ACTIONS(385),
    [anon_sym_u32overflowing_add3] = ACTIONS(385),
    [anon_sym_u32wrapping_add3] = ACTIONS(385),
    [anon_sym_u32overflowing_madd] = ACTIONS(385),
    [anon_sym_u32wrapping_madd] = ACTIONS(385),
    [anon_sym_u32checked_and] = ACTIONS(385),
    [anon_sym_u32checked_or] = ACTIONS(385),
    [anon_sym_u32checked_xor] = ACTIONS(385),
    [anon_sym_u32checked_not] = ACTIONS(385),
    [anon_sym_u32checked_popcnt] = ACTIONS(385),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(385),
    [anon_sym_u32checked_lt] = ACTIONS(387),
    [anon_sym_u32unchecked_lt] = ACTIONS(387),
    [anon_sym_u32checked_lte] = ACTIONS(385),
    [anon_sym_u32unchecked_lte] = ACTIONS(385),
    [anon_sym_u32checked_gt] = ACTIONS(387),
    [anon_sym_u32unchecked_gt] = ACTIONS(387),
    [anon_sym_u32checked_gte] = ACTIONS(385),
    [anon_sym_u32unchecked_gte] = ACTIONS(385),
    [anon_sym_u32checked_min] = ACTIONS(385),
    [anon_sym_u32unchecked_min] = ACTIONS(385),
    [anon_sym_u32checked_max] = ACTIONS(385),
    [anon_sym_u32unchecked_max] = ACTIONS(385),
    [anon_sym_drop] = ACTIONS(387),
    [anon_sym_dropw] = ACTIONS(385),
    [anon_sym_padw] = ACTIONS(385),
    [anon_sym_swapdw] = ACTIONS(385),
    [anon_sym_cswap] = ACTIONS(387),
    [anon_sym_cswapw] = ACTIONS(385),
    [anon_sym_cdrop] = ACTIONS(387),
    [anon_sym_cdropw] = ACTIONS(385),
    [anon_sym_sdepth] = ACTIONS(385),
    [anon_sym_mem_stream] = ACTIONS(385),
    [anon_sym_adv_pipe] = ACTIONS(385),
    [anon_sym_adv_loadw] = ACTIONS(385),
    [anon_sym_hmerge] = ACTIONS(385),
    [anon_sym_hperm] = ACTIONS(385),
    [anon_sym_mtree_get] = ACTIONS(385),
    [anon_sym_mtree_set] = ACTIONS(385),
    [anon_sym_mtree_cwm] = ACTIONS(385),
    [anon_sym_caller] = ACTIONS(385),
    [anon_sym_is_odd] = ACTIONS(385),
    [anon_sym_assert_eqw] = ACTIONS(385),
    [anon_sym_clk] = ACTIONS(385),
    [anon_sym_fri_ext2fold4] = ACTIONS(385),
    [anon_sym_hash] = ACTIONS(385),
    [anon_sym_adv] = ACTIONS(387),
    [anon_sym_exp] = ACTIONS(385),
    [anon_sym_u32assert] = ACTIONS(387),
    [anon_sym_add] = ACTIONS(385),
    [anon_sym_sub] = ACTIONS(385),
    [anon_sym_mul] = ACTIONS(385),
    [anon_sym_eq] = ACTIONS(387),
    [anon_sym_neq] = ACTIONS(385),
    [anon_sym_div] = ACTIONS(385),
    [anon_sym_mem_load] = ACTIONS(387),
    [anon_sym_mem_loadw] = ACTIONS(385),
    [anon_sym_mem_store] = ACTIONS(387),
    [anon_sym_mem_storew] = ACTIONS(385),
    [anon_sym_u32checked_add] = ACTIONS(385),
    [anon_sym_u32wrapping_add] = ACTIONS(387),
    [anon_sym_u32overflowing_add] = ACTIONS(387),
    [anon_sym_u32checked_sub] = ACTIONS(385),
    [anon_sym_u32wrapping_sub] = ACTIONS(385),
    [anon_sym_u32overflowing_sub] = ACTIONS(385),
    [anon_sym_u32checked_mul] = ACTIONS(385),
    [anon_sym_u32wrapping_mul] = ACTIONS(385),
    [anon_sym_u32overflowing_mul] = ACTIONS(385),
    [anon_sym_u32checked_div] = ACTIONS(387),
    [anon_sym_u32unchecked_div] = ACTIONS(387),
    [anon_sym_u32checked_mod] = ACTIONS(385),
    [anon_sym_u32unchecked_mod] = ACTIONS(385),
    [anon_sym_u32checked_divmod] = ACTIONS(385),
    [anon_sym_u32unchecked_divmod] = ACTIONS(385),
    [anon_sym_u32checked_shr] = ACTIONS(385),
    [anon_sym_u32unchecked_shr] = ACTIONS(385),
    [anon_sym_u32checked_shl] = ACTIONS(385),
    [anon_sym_u32unchecked_shl] = ACTIONS(385),
    [anon_sym_u32checked_rotr] = ACTIONS(385),
    [anon_sym_u32unchecked_rotr] = ACTIONS(385),
    [anon_sym_u32checked_rotl] = ACTIONS(385),
    [anon_sym_u32unchecked_rotl] = ACTIONS(385),
    [anon_sym_u32checked_eq] = ACTIONS(385),
    [anon_sym_u32checked_neq] = ACTIONS(385),
    [anon_sym_locaddr] = ACTIONS(385),
    [anon_sym_loc_load] = ACTIONS(387),
    [anon_sym_loc_loadw] = ACTIONS(385),
    [anon_sym_loc_store] = ACTIONS(387),
    [anon_sym_loc_storew] = ACTIONS(385),
    [anon_sym_dup] = ACTIONS(387),
    [anon_sym_swap] = ACTIONS(387),
    [anon_sym_movup] = ACTIONS(387),
    [anon_sym_movdn] = ACTIONS(387),
    [anon_sym_adv_push] = ACTIONS(385),
    [anon_sym_dupw] = ACTIONS(385),
    [anon_sym_swapw] = ACTIONS(385),
    [anon_sym_movupw] = ACTIONS(385),
    [anon_sym_movdnw] = ACTIONS(385),
    [anon_sym_push] = ACTIONS(385),
    [anon_sym_if] = ACTIONS(385),
    [sym__else] = ACTIONS(385),
    [anon_sym_while] = ACTIONS(385),
    [anon_sym_repeat] = ACTIONS(385),
    [sym__end] = ACTIONS(385),
  },
  [58] = {
    [anon_sym_DOT] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(391),
    [anon_sym_call] = ACTIONS(393),
    [anon_sym_syscall] = ACTIONS(391),
    [anon_sym_assert] = ACTIONS(393),
    [anon_sym_assertz] = ACTIONS(391),
    [anon_sym_assert_eq] = ACTIONS(393),
    [anon_sym_neg] = ACTIONS(391),
    [anon_sym_inv] = ACTIONS(391),
    [anon_sym_pow2] = ACTIONS(391),
    [anon_sym_not] = ACTIONS(391),
    [anon_sym_and] = ACTIONS(391),
    [anon_sym_or] = ACTIONS(391),
    [anon_sym_xor] = ACTIONS(391),
    [anon_sym_lt] = ACTIONS(393),
    [anon_sym_lte] = ACTIONS(391),
    [anon_sym_gt] = ACTIONS(393),
    [anon_sym_gte] = ACTIONS(391),
    [anon_sym_eqw] = ACTIONS(391),
    [anon_sym_ext2add] = ACTIONS(391),
    [anon_sym_ext2sub] = ACTIONS(391),
    [anon_sym_ext2mul] = ACTIONS(391),
    [anon_sym_ext2div] = ACTIONS(391),
    [anon_sym_ext2neg] = ACTIONS(391),
    [anon_sym_ext2inv] = ACTIONS(391),
    [anon_sym_u32test] = ACTIONS(393),
    [anon_sym_u32testw] = ACTIONS(391),
    [anon_sym_u32assertw] = ACTIONS(391),
    [anon_sym_u32cast] = ACTIONS(391),
    [anon_sym_u32split] = ACTIONS(391),
    [anon_sym_u32overflowing_add3] = ACTIONS(391),
    [anon_sym_u32wrapping_add3] = ACTIONS(391),
    [anon_sym_u32overflowing_madd] = ACTIONS(391),
    [anon_sym_u32wrapping_madd] = ACTIONS(391),
    [anon_sym_u32checked_and] = ACTIONS(391),
    [anon_sym_u32checked_or] = ACTIONS(391),
    [anon_sym_u32checked_xor] = ACTIONS(391),
    [anon_sym_u32checked_not] = ACTIONS(391),
    [anon_sym_u32checked_popcnt] = ACTIONS(391),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(391),
    [anon_sym_u32checked_lt] = ACTIONS(393),
    [anon_sym_u32unchecked_lt] = ACTIONS(393),
    [anon_sym_u32checked_lte] = ACTIONS(391),
    [anon_sym_u32unchecked_lte] = ACTIONS(391),
    [anon_sym_u32checked_gt] = ACTIONS(393),
    [anon_sym_u32unchecked_gt] = ACTIONS(393),
    [anon_sym_u32checked_gte] = ACTIONS(391),
    [anon_sym_u32unchecked_gte] = ACTIONS(391),
    [anon_sym_u32checked_min] = ACTIONS(391),
    [anon_sym_u32unchecked_min] = ACTIONS(391),
    [anon_sym_u32checked_max] = ACTIONS(391),
    [anon_sym_u32unchecked_max] = ACTIONS(391),
    [anon_sym_drop] = ACTIONS(393),
    [anon_sym_dropw] = ACTIONS(391),
    [anon_sym_padw] = ACTIONS(391),
    [anon_sym_swapdw] = ACTIONS(391),
    [anon_sym_cswap] = ACTIONS(393),
    [anon_sym_cswapw] = ACTIONS(391),
    [anon_sym_cdrop] = ACTIONS(393),
    [anon_sym_cdropw] = ACTIONS(391),
    [anon_sym_sdepth] = ACTIONS(391),
    [anon_sym_mem_stream] = ACTIONS(391),
    [anon_sym_adv_pipe] = ACTIONS(391),
    [anon_sym_adv_loadw] = ACTIONS(391),
    [anon_sym_hmerge] = ACTIONS(391),
    [anon_sym_hperm] = ACTIONS(391),
    [anon_sym_mtree_get] = ACTIONS(391),
    [anon_sym_mtree_set] = ACTIONS(391),
    [anon_sym_mtree_cwm] = ACTIONS(391),
    [anon_sym_caller] = ACTIONS(391),
    [anon_sym_is_odd] = ACTIONS(391),
    [anon_sym_assert_eqw] = ACTIONS(391),
    [anon_sym_clk] = ACTIONS(391),
    [anon_sym_fri_ext2fold4] = ACTIONS(391),
    [anon_sym_hash] = ACTIONS(391),
    [anon_sym_adv] = ACTIONS(393),
    [anon_sym_exp] = ACTIONS(391),
    [anon_sym_u32assert] = ACTIONS(393),
    [anon_sym_add] = ACTIONS(391),
    [anon_sym_sub] = ACTIONS(391),
    [anon_sym_mul] = ACTIONS(391),
    [anon_sym_eq] = ACTIONS(393),
    [anon_sym_neq] = ACTIONS(391),
    [anon_sym_div] = ACTIONS(391),
    [anon_sym_mem_load] = ACTIONS(393),
    [anon_sym_mem_loadw] = ACTIONS(391),
    [anon_sym_mem_store] = ACTIONS(393),
    [anon_sym_mem_storew] = ACTIONS(391),
    [anon_sym_u32checked_add] = ACTIONS(391),
    [anon_sym_u32wrapping_add] = ACTIONS(393),
    [anon_sym_u32overflowing_add] = ACTIONS(393),
    [anon_sym_u32checked_sub] = ACTIONS(391),
    [anon_sym_u32wrapping_sub] = ACTIONS(391),
    [anon_sym_u32overflowing_sub] = ACTIONS(391),
    [anon_sym_u32checked_mul] = ACTIONS(391),
    [anon_sym_u32wrapping_mul] = ACTIONS(391),
    [anon_sym_u32overflowing_mul] = ACTIONS(391),
    [anon_sym_u32checked_div] = ACTIONS(393),
    [anon_sym_u32unchecked_div] = ACTIONS(393),
    [anon_sym_u32checked_mod] = ACTIONS(391),
    [anon_sym_u32unchecked_mod] = ACTIONS(391),
    [anon_sym_u32checked_divmod] = ACTIONS(391),
    [anon_sym_u32unchecked_divmod] = ACTIONS(391),
    [anon_sym_u32checked_shr] = ACTIONS(391),
    [anon_sym_u32unchecked_shr] = ACTIONS(391),
    [anon_sym_u32checked_shl] = ACTIONS(391),
    [anon_sym_u32unchecked_shl] = ACTIONS(391),
    [anon_sym_u32checked_rotr] = ACTIONS(391),
    [anon_sym_u32unchecked_rotr] = ACTIONS(391),
    [anon_sym_u32checked_rotl] = ACTIONS(391),
    [anon_sym_u32unchecked_rotl] = ACTIONS(391),
    [anon_sym_u32checked_eq] = ACTIONS(391),
    [anon_sym_u32checked_neq] = ACTIONS(391),
    [anon_sym_locaddr] = ACTIONS(391),
    [anon_sym_loc_load] = ACTIONS(393),
    [anon_sym_loc_loadw] = ACTIONS(391),
    [anon_sym_loc_store] = ACTIONS(393),
    [anon_sym_loc_storew] = ACTIONS(391),
    [anon_sym_dup] = ACTIONS(393),
    [anon_sym_swap] = ACTIONS(393),
    [anon_sym_movup] = ACTIONS(393),
    [anon_sym_movdn] = ACTIONS(393),
    [anon_sym_adv_push] = ACTIONS(391),
    [anon_sym_dupw] = ACTIONS(391),
    [anon_sym_swapw] = ACTIONS(391),
    [anon_sym_movupw] = ACTIONS(391),
    [anon_sym_movdnw] = ACTIONS(391),
    [anon_sym_push] = ACTIONS(391),
    [anon_sym_if] = ACTIONS(391),
    [anon_sym_while] = ACTIONS(391),
    [anon_sym_repeat] = ACTIONS(391),
    [sym__end] = ACTIONS(391),
  },
  [59] = {
    [anon_sym_DOT] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(397),
    [anon_sym_call] = ACTIONS(399),
    [anon_sym_syscall] = ACTIONS(397),
    [anon_sym_assert] = ACTIONS(399),
    [anon_sym_assertz] = ACTIONS(397),
    [anon_sym_assert_eq] = ACTIONS(399),
    [anon_sym_neg] = ACTIONS(397),
    [anon_sym_inv] = ACTIONS(397),
    [anon_sym_pow2] = ACTIONS(397),
    [anon_sym_not] = ACTIONS(397),
    [anon_sym_and] = ACTIONS(397),
    [anon_sym_or] = ACTIONS(397),
    [anon_sym_xor] = ACTIONS(397),
    [anon_sym_lt] = ACTIONS(399),
    [anon_sym_lte] = ACTIONS(397),
    [anon_sym_gt] = ACTIONS(399),
    [anon_sym_gte] = ACTIONS(397),
    [anon_sym_eqw] = ACTIONS(397),
    [anon_sym_ext2add] = ACTIONS(397),
    [anon_sym_ext2sub] = ACTIONS(397),
    [anon_sym_ext2mul] = ACTIONS(397),
    [anon_sym_ext2div] = ACTIONS(397),
    [anon_sym_ext2neg] = ACTIONS(397),
    [anon_sym_ext2inv] = ACTIONS(397),
    [anon_sym_u32test] = ACTIONS(399),
    [anon_sym_u32testw] = ACTIONS(397),
    [anon_sym_u32assertw] = ACTIONS(397),
    [anon_sym_u32cast] = ACTIONS(397),
    [anon_sym_u32split] = ACTIONS(397),
    [anon_sym_u32overflowing_add3] = ACTIONS(397),
    [anon_sym_u32wrapping_add3] = ACTIONS(397),
    [anon_sym_u32overflowing_madd] = ACTIONS(397),
    [anon_sym_u32wrapping_madd] = ACTIONS(397),
    [anon_sym_u32checked_and] = ACTIONS(397),
    [anon_sym_u32checked_or] = ACTIONS(397),
    [anon_sym_u32checked_xor] = ACTIONS(397),
    [anon_sym_u32checked_not] = ACTIONS(397),
    [anon_sym_u32checked_popcnt] = ACTIONS(397),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(397),
    [anon_sym_u32checked_lt] = ACTIONS(399),
    [anon_sym_u32unchecked_lt] = ACTIONS(399),
    [anon_sym_u32checked_lte] = ACTIONS(397),
    [anon_sym_u32unchecked_lte] = ACTIONS(397),
    [anon_sym_u32checked_gt] = ACTIONS(399),
    [anon_sym_u32unchecked_gt] = ACTIONS(399),
    [anon_sym_u32checked_gte] = ACTIONS(397),
    [anon_sym_u32unchecked_gte] = ACTIONS(397),
    [anon_sym_u32checked_min] = ACTIONS(397),
    [anon_sym_u32unchecked_min] = ACTIONS(397),
    [anon_sym_u32checked_max] = ACTIONS(397),
    [anon_sym_u32unchecked_max] = ACTIONS(397),
    [anon_sym_drop] = ACTIONS(399),
    [anon_sym_dropw] = ACTIONS(397),
    [anon_sym_padw] = ACTIONS(397),
    [anon_sym_swapdw] = ACTIONS(397),
    [anon_sym_cswap] = ACTIONS(399),
    [anon_sym_cswapw] = ACTIONS(397),
    [anon_sym_cdrop] = ACTIONS(399),
    [anon_sym_cdropw] = ACTIONS(397),
    [anon_sym_sdepth] = ACTIONS(397),
    [anon_sym_mem_stream] = ACTIONS(397),
    [anon_sym_adv_pipe] = ACTIONS(397),
    [anon_sym_adv_loadw] = ACTIONS(397),
    [anon_sym_hmerge] = ACTIONS(397),
    [anon_sym_hperm] = ACTIONS(397),
    [anon_sym_mtree_get] = ACTIONS(397),
    [anon_sym_mtree_set] = ACTIONS(397),
    [anon_sym_mtree_cwm] = ACTIONS(397),
    [anon_sym_caller] = ACTIONS(397),
    [anon_sym_is_odd] = ACTIONS(397),
    [anon_sym_assert_eqw] = ACTIONS(397),
    [anon_sym_clk] = ACTIONS(397),
    [anon_sym_fri_ext2fold4] = ACTIONS(397),
    [anon_sym_hash] = ACTIONS(397),
    [anon_sym_adv] = ACTIONS(399),
    [anon_sym_exp] = ACTIONS(397),
    [anon_sym_u32assert] = ACTIONS(399),
    [anon_sym_add] = ACTIONS(397),
    [anon_sym_sub] = ACTIONS(397),
    [anon_sym_mul] = ACTIONS(397),
    [anon_sym_eq] = ACTIONS(399),
    [anon_sym_neq] = ACTIONS(397),
    [anon_sym_div] = ACTIONS(397),
    [anon_sym_mem_load] = ACTIONS(399),
    [anon_sym_mem_loadw] = ACTIONS(397),
    [anon_sym_mem_store] = ACTIONS(399),
    [anon_sym_mem_storew] = ACTIONS(397),
    [anon_sym_u32checked_add] = ACTIONS(397),
    [anon_sym_u32wrapping_add] = ACTIONS(399),
    [anon_sym_u32overflowing_add] = ACTIONS(399),
    [anon_sym_u32checked_sub] = ACTIONS(397),
    [anon_sym_u32wrapping_sub] = ACTIONS(397),
    [anon_sym_u32overflowing_sub] = ACTIONS(397),
    [anon_sym_u32checked_mul] = ACTIONS(397),
    [anon_sym_u32wrapping_mul] = ACTIONS(397),
    [anon_sym_u32overflowing_mul] = ACTIONS(397),
    [anon_sym_u32checked_div] = ACTIONS(399),
    [anon_sym_u32unchecked_div] = ACTIONS(399),
    [anon_sym_u32checked_mod] = ACTIONS(397),
    [anon_sym_u32unchecked_mod] = ACTIONS(397),
    [anon_sym_u32checked_divmod] = ACTIONS(397),
    [anon_sym_u32unchecked_divmod] = ACTIONS(397),
    [anon_sym_u32checked_shr] = ACTIONS(397),
    [anon_sym_u32unchecked_shr] = ACTIONS(397),
    [anon_sym_u32checked_shl] = ACTIONS(397),
    [anon_sym_u32unchecked_shl] = ACTIONS(397),
    [anon_sym_u32checked_rotr] = ACTIONS(397),
    [anon_sym_u32unchecked_rotr] = ACTIONS(397),
    [anon_sym_u32checked_rotl] = ACTIONS(397),
    [anon_sym_u32unchecked_rotl] = ACTIONS(397),
    [anon_sym_u32checked_eq] = ACTIONS(397),
    [anon_sym_u32checked_neq] = ACTIONS(397),
    [anon_sym_locaddr] = ACTIONS(397),
    [anon_sym_loc_load] = ACTIONS(399),
    [anon_sym_loc_loadw] = ACTIONS(397),
    [anon_sym_loc_store] = ACTIONS(399),
    [anon_sym_loc_storew] = ACTIONS(397),
    [anon_sym_dup] = ACTIONS(399),
    [anon_sym_swap] = ACTIONS(399),
    [anon_sym_movup] = ACTIONS(399),
    [anon_sym_movdn] = ACTIONS(399),
    [anon_sym_adv_push] = ACTIONS(397),
    [anon_sym_dupw] = ACTIONS(397),
    [anon_sym_swapw] = ACTIONS(397),
    [anon_sym_movupw] = ACTIONS(397),
    [anon_sym_movdnw] = ACTIONS(397),
    [anon_sym_push] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(397),
    [anon_sym_while] = ACTIONS(397),
    [anon_sym_repeat] = ACTIONS(397),
    [sym__end] = ACTIONS(397),
  },
  [60] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(401),
    [anon_sym_call] = ACTIONS(403),
    [anon_sym_syscall] = ACTIONS(401),
    [anon_sym_assert] = ACTIONS(403),
    [anon_sym_assertz] = ACTIONS(401),
    [anon_sym_assert_eq] = ACTIONS(403),
    [anon_sym_neg] = ACTIONS(401),
    [anon_sym_inv] = ACTIONS(401),
    [anon_sym_pow2] = ACTIONS(401),
    [anon_sym_not] = ACTIONS(401),
    [anon_sym_and] = ACTIONS(401),
    [anon_sym_or] = ACTIONS(401),
    [anon_sym_xor] = ACTIONS(401),
    [anon_sym_lt] = ACTIONS(403),
    [anon_sym_lte] = ACTIONS(401),
    [anon_sym_gt] = ACTIONS(403),
    [anon_sym_gte] = ACTIONS(401),
    [anon_sym_eqw] = ACTIONS(401),
    [anon_sym_ext2add] = ACTIONS(401),
    [anon_sym_ext2sub] = ACTIONS(401),
    [anon_sym_ext2mul] = ACTIONS(401),
    [anon_sym_ext2div] = ACTIONS(401),
    [anon_sym_ext2neg] = ACTIONS(401),
    [anon_sym_ext2inv] = ACTIONS(401),
    [anon_sym_u32test] = ACTIONS(403),
    [anon_sym_u32testw] = ACTIONS(401),
    [anon_sym_u32assertw] = ACTIONS(401),
    [anon_sym_u32cast] = ACTIONS(401),
    [anon_sym_u32split] = ACTIONS(401),
    [anon_sym_u32overflowing_add3] = ACTIONS(401),
    [anon_sym_u32wrapping_add3] = ACTIONS(401),
    [anon_sym_u32overflowing_madd] = ACTIONS(401),
    [anon_sym_u32wrapping_madd] = ACTIONS(401),
    [anon_sym_u32checked_and] = ACTIONS(401),
    [anon_sym_u32checked_or] = ACTIONS(401),
    [anon_sym_u32checked_xor] = ACTIONS(401),
    [anon_sym_u32checked_not] = ACTIONS(401),
    [anon_sym_u32checked_popcnt] = ACTIONS(401),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(401),
    [anon_sym_u32checked_lt] = ACTIONS(403),
    [anon_sym_u32unchecked_lt] = ACTIONS(403),
    [anon_sym_u32checked_lte] = ACTIONS(401),
    [anon_sym_u32unchecked_lte] = ACTIONS(401),
    [anon_sym_u32checked_gt] = ACTIONS(403),
    [anon_sym_u32unchecked_gt] = ACTIONS(403),
    [anon_sym_u32checked_gte] = ACTIONS(401),
    [anon_sym_u32unchecked_gte] = ACTIONS(401),
    [anon_sym_u32checked_min] = ACTIONS(401),
    [anon_sym_u32unchecked_min] = ACTIONS(401),
    [anon_sym_u32checked_max] = ACTIONS(401),
    [anon_sym_u32unchecked_max] = ACTIONS(401),
    [anon_sym_drop] = ACTIONS(403),
    [anon_sym_dropw] = ACTIONS(401),
    [anon_sym_padw] = ACTIONS(401),
    [anon_sym_swapdw] = ACTIONS(401),
    [anon_sym_cswap] = ACTIONS(403),
    [anon_sym_cswapw] = ACTIONS(401),
    [anon_sym_cdrop] = ACTIONS(403),
    [anon_sym_cdropw] = ACTIONS(401),
    [anon_sym_sdepth] = ACTIONS(401),
    [anon_sym_mem_stream] = ACTIONS(401),
    [anon_sym_adv_pipe] = ACTIONS(401),
    [anon_sym_adv_loadw] = ACTIONS(401),
    [anon_sym_hmerge] = ACTIONS(401),
    [anon_sym_hperm] = ACTIONS(401),
    [anon_sym_mtree_get] = ACTIONS(401),
    [anon_sym_mtree_set] = ACTIONS(401),
    [anon_sym_mtree_cwm] = ACTIONS(401),
    [anon_sym_caller] = ACTIONS(401),
    [anon_sym_is_odd] = ACTIONS(401),
    [anon_sym_assert_eqw] = ACTIONS(401),
    [anon_sym_clk] = ACTIONS(401),
    [anon_sym_fri_ext2fold4] = ACTIONS(401),
    [anon_sym_hash] = ACTIONS(401),
    [anon_sym_adv] = ACTIONS(403),
    [anon_sym_exp] = ACTIONS(401),
    [anon_sym_u32assert] = ACTIONS(403),
    [anon_sym_add] = ACTIONS(401),
    [anon_sym_sub] = ACTIONS(401),
    [anon_sym_mul] = ACTIONS(401),
    [anon_sym_eq] = ACTIONS(403),
    [anon_sym_neq] = ACTIONS(401),
    [anon_sym_div] = ACTIONS(401),
    [anon_sym_mem_load] = ACTIONS(403),
    [anon_sym_mem_loadw] = ACTIONS(401),
    [anon_sym_mem_store] = ACTIONS(403),
    [anon_sym_mem_storew] = ACTIONS(401),
    [anon_sym_u32checked_add] = ACTIONS(401),
    [anon_sym_u32wrapping_add] = ACTIONS(403),
    [anon_sym_u32overflowing_add] = ACTIONS(403),
    [anon_sym_u32checked_sub] = ACTIONS(401),
    [anon_sym_u32wrapping_sub] = ACTIONS(401),
    [anon_sym_u32overflowing_sub] = ACTIONS(401),
    [anon_sym_u32checked_mul] = ACTIONS(401),
    [anon_sym_u32wrapping_mul] = ACTIONS(401),
    [anon_sym_u32overflowing_mul] = ACTIONS(401),
    [anon_sym_u32checked_div] = ACTIONS(403),
    [anon_sym_u32unchecked_div] = ACTIONS(403),
    [anon_sym_u32checked_mod] = ACTIONS(401),
    [anon_sym_u32unchecked_mod] = ACTIONS(401),
    [anon_sym_u32checked_divmod] = ACTIONS(401),
    [anon_sym_u32unchecked_divmod] = ACTIONS(401),
    [anon_sym_u32checked_shr] = ACTIONS(401),
    [anon_sym_u32unchecked_shr] = ACTIONS(401),
    [anon_sym_u32checked_shl] = ACTIONS(401),
    [anon_sym_u32unchecked_shl] = ACTIONS(401),
    [anon_sym_u32checked_rotr] = ACTIONS(401),
    [anon_sym_u32unchecked_rotr] = ACTIONS(401),
    [anon_sym_u32checked_rotl] = ACTIONS(401),
    [anon_sym_u32unchecked_rotl] = ACTIONS(401),
    [anon_sym_u32checked_eq] = ACTIONS(401),
    [anon_sym_u32checked_neq] = ACTIONS(401),
    [anon_sym_locaddr] = ACTIONS(401),
    [anon_sym_loc_load] = ACTIONS(403),
    [anon_sym_loc_loadw] = ACTIONS(401),
    [anon_sym_loc_store] = ACTIONS(403),
    [anon_sym_loc_storew] = ACTIONS(401),
    [anon_sym_dup] = ACTIONS(403),
    [anon_sym_swap] = ACTIONS(403),
    [anon_sym_movup] = ACTIONS(403),
    [anon_sym_movdn] = ACTIONS(403),
    [anon_sym_adv_push] = ACTIONS(401),
    [anon_sym_dupw] = ACTIONS(401),
    [anon_sym_swapw] = ACTIONS(401),
    [anon_sym_movupw] = ACTIONS(401),
    [anon_sym_movdnw] = ACTIONS(401),
    [anon_sym_push] = ACTIONS(401),
    [anon_sym_if] = ACTIONS(401),
    [sym__else] = ACTIONS(401),
    [anon_sym_while] = ACTIONS(401),
    [anon_sym_repeat] = ACTIONS(401),
    [sym__end] = ACTIONS(401),
  },
  [61] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(405),
    [anon_sym_call] = ACTIONS(407),
    [anon_sym_syscall] = ACTIONS(405),
    [anon_sym_assert] = ACTIONS(407),
    [anon_sym_assertz] = ACTIONS(405),
    [anon_sym_assert_eq] = ACTIONS(407),
    [anon_sym_neg] = ACTIONS(405),
    [anon_sym_inv] = ACTIONS(405),
    [anon_sym_pow2] = ACTIONS(405),
    [anon_sym_not] = ACTIONS(405),
    [anon_sym_and] = ACTIONS(405),
    [anon_sym_or] = ACTIONS(405),
    [anon_sym_xor] = ACTIONS(405),
    [anon_sym_lt] = ACTIONS(407),
    [anon_sym_lte] = ACTIONS(405),
    [anon_sym_gt] = ACTIONS(407),
    [anon_sym_gte] = ACTIONS(405),
    [anon_sym_eqw] = ACTIONS(405),
    [anon_sym_ext2add] = ACTIONS(405),
    [anon_sym_ext2sub] = ACTIONS(405),
    [anon_sym_ext2mul] = ACTIONS(405),
    [anon_sym_ext2div] = ACTIONS(405),
    [anon_sym_ext2neg] = ACTIONS(405),
    [anon_sym_ext2inv] = ACTIONS(405),
    [anon_sym_u32test] = ACTIONS(407),
    [anon_sym_u32testw] = ACTIONS(405),
    [anon_sym_u32assertw] = ACTIONS(405),
    [anon_sym_u32cast] = ACTIONS(405),
    [anon_sym_u32split] = ACTIONS(405),
    [anon_sym_u32overflowing_add3] = ACTIONS(405),
    [anon_sym_u32wrapping_add3] = ACTIONS(405),
    [anon_sym_u32overflowing_madd] = ACTIONS(405),
    [anon_sym_u32wrapping_madd] = ACTIONS(405),
    [anon_sym_u32checked_and] = ACTIONS(405),
    [anon_sym_u32checked_or] = ACTIONS(405),
    [anon_sym_u32checked_xor] = ACTIONS(405),
    [anon_sym_u32checked_not] = ACTIONS(405),
    [anon_sym_u32checked_popcnt] = ACTIONS(405),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(405),
    [anon_sym_u32checked_lt] = ACTIONS(407),
    [anon_sym_u32unchecked_lt] = ACTIONS(407),
    [anon_sym_u32checked_lte] = ACTIONS(405),
    [anon_sym_u32unchecked_lte] = ACTIONS(405),
    [anon_sym_u32checked_gt] = ACTIONS(407),
    [anon_sym_u32unchecked_gt] = ACTIONS(407),
    [anon_sym_u32checked_gte] = ACTIONS(405),
    [anon_sym_u32unchecked_gte] = ACTIONS(405),
    [anon_sym_u32checked_min] = ACTIONS(405),
    [anon_sym_u32unchecked_min] = ACTIONS(405),
    [anon_sym_u32checked_max] = ACTIONS(405),
    [anon_sym_u32unchecked_max] = ACTIONS(405),
    [anon_sym_drop] = ACTIONS(407),
    [anon_sym_dropw] = ACTIONS(405),
    [anon_sym_padw] = ACTIONS(405),
    [anon_sym_swapdw] = ACTIONS(405),
    [anon_sym_cswap] = ACTIONS(407),
    [anon_sym_cswapw] = ACTIONS(405),
    [anon_sym_cdrop] = ACTIONS(407),
    [anon_sym_cdropw] = ACTIONS(405),
    [anon_sym_sdepth] = ACTIONS(405),
    [anon_sym_mem_stream] = ACTIONS(405),
    [anon_sym_adv_pipe] = ACTIONS(405),
    [anon_sym_adv_loadw] = ACTIONS(405),
    [anon_sym_hmerge] = ACTIONS(405),
    [anon_sym_hperm] = ACTIONS(405),
    [anon_sym_mtree_get] = ACTIONS(405),
    [anon_sym_mtree_set] = ACTIONS(405),
    [anon_sym_mtree_cwm] = ACTIONS(405),
    [anon_sym_caller] = ACTIONS(405),
    [anon_sym_is_odd] = ACTIONS(405),
    [anon_sym_assert_eqw] = ACTIONS(405),
    [anon_sym_clk] = ACTIONS(405),
    [anon_sym_fri_ext2fold4] = ACTIONS(405),
    [anon_sym_hash] = ACTIONS(405),
    [anon_sym_adv] = ACTIONS(407),
    [anon_sym_exp] = ACTIONS(405),
    [anon_sym_u32assert] = ACTIONS(407),
    [anon_sym_add] = ACTIONS(405),
    [anon_sym_sub] = ACTIONS(405),
    [anon_sym_mul] = ACTIONS(405),
    [anon_sym_eq] = ACTIONS(407),
    [anon_sym_neq] = ACTIONS(405),
    [anon_sym_div] = ACTIONS(405),
    [anon_sym_mem_load] = ACTIONS(407),
    [anon_sym_mem_loadw] = ACTIONS(405),
    [anon_sym_mem_store] = ACTIONS(407),
    [anon_sym_mem_storew] = ACTIONS(405),
    [anon_sym_u32checked_add] = ACTIONS(405),
    [anon_sym_u32wrapping_add] = ACTIONS(407),
    [anon_sym_u32overflowing_add] = ACTIONS(407),
    [anon_sym_u32checked_sub] = ACTIONS(405),
    [anon_sym_u32wrapping_sub] = ACTIONS(405),
    [anon_sym_u32overflowing_sub] = ACTIONS(405),
    [anon_sym_u32checked_mul] = ACTIONS(405),
    [anon_sym_u32wrapping_mul] = ACTIONS(405),
    [anon_sym_u32overflowing_mul] = ACTIONS(405),
    [anon_sym_u32checked_div] = ACTIONS(407),
    [anon_sym_u32unchecked_div] = ACTIONS(407),
    [anon_sym_u32checked_mod] = ACTIONS(405),
    [anon_sym_u32unchecked_mod] = ACTIONS(405),
    [anon_sym_u32checked_divmod] = ACTIONS(405),
    [anon_sym_u32unchecked_divmod] = ACTIONS(405),
    [anon_sym_u32checked_shr] = ACTIONS(405),
    [anon_sym_u32unchecked_shr] = ACTIONS(405),
    [anon_sym_u32checked_shl] = ACTIONS(405),
    [anon_sym_u32unchecked_shl] = ACTIONS(405),
    [anon_sym_u32checked_rotr] = ACTIONS(405),
    [anon_sym_u32unchecked_rotr] = ACTIONS(405),
    [anon_sym_u32checked_rotl] = ACTIONS(405),
    [anon_sym_u32unchecked_rotl] = ACTIONS(405),
    [anon_sym_u32checked_eq] = ACTIONS(405),
    [anon_sym_u32checked_neq] = ACTIONS(405),
    [anon_sym_locaddr] = ACTIONS(405),
    [anon_sym_loc_load] = ACTIONS(407),
    [anon_sym_loc_loadw] = ACTIONS(405),
    [anon_sym_loc_store] = ACTIONS(407),
    [anon_sym_loc_storew] = ACTIONS(405),
    [anon_sym_dup] = ACTIONS(407),
    [anon_sym_swap] = ACTIONS(407),
    [anon_sym_movup] = ACTIONS(407),
    [anon_sym_movdn] = ACTIONS(407),
    [anon_sym_adv_push] = ACTIONS(405),
    [anon_sym_dupw] = ACTIONS(405),
    [anon_sym_swapw] = ACTIONS(405),
    [anon_sym_movupw] = ACTIONS(405),
    [anon_sym_movdnw] = ACTIONS(405),
    [anon_sym_push] = ACTIONS(405),
    [anon_sym_if] = ACTIONS(405),
    [sym__else] = ACTIONS(405),
    [anon_sym_while] = ACTIONS(405),
    [anon_sym_repeat] = ACTIONS(405),
    [sym__end] = ACTIONS(405),
  },
  [62] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(409),
    [anon_sym_call] = ACTIONS(411),
    [anon_sym_syscall] = ACTIONS(409),
    [anon_sym_assert] = ACTIONS(411),
    [anon_sym_assertz] = ACTIONS(409),
    [anon_sym_assert_eq] = ACTIONS(411),
    [anon_sym_neg] = ACTIONS(409),
    [anon_sym_inv] = ACTIONS(409),
    [anon_sym_pow2] = ACTIONS(409),
    [anon_sym_not] = ACTIONS(409),
    [anon_sym_and] = ACTIONS(409),
    [anon_sym_or] = ACTIONS(409),
    [anon_sym_xor] = ACTIONS(409),
    [anon_sym_lt] = ACTIONS(411),
    [anon_sym_lte] = ACTIONS(409),
    [anon_sym_gt] = ACTIONS(411),
    [anon_sym_gte] = ACTIONS(409),
    [anon_sym_eqw] = ACTIONS(409),
    [anon_sym_ext2add] = ACTIONS(409),
    [anon_sym_ext2sub] = ACTIONS(409),
    [anon_sym_ext2mul] = ACTIONS(409),
    [anon_sym_ext2div] = ACTIONS(409),
    [anon_sym_ext2neg] = ACTIONS(409),
    [anon_sym_ext2inv] = ACTIONS(409),
    [anon_sym_u32test] = ACTIONS(411),
    [anon_sym_u32testw] = ACTIONS(409),
    [anon_sym_u32assertw] = ACTIONS(409),
    [anon_sym_u32cast] = ACTIONS(409),
    [anon_sym_u32split] = ACTIONS(409),
    [anon_sym_u32overflowing_add3] = ACTIONS(409),
    [anon_sym_u32wrapping_add3] = ACTIONS(409),
    [anon_sym_u32overflowing_madd] = ACTIONS(409),
    [anon_sym_u32wrapping_madd] = ACTIONS(409),
    [anon_sym_u32checked_and] = ACTIONS(409),
    [anon_sym_u32checked_or] = ACTIONS(409),
    [anon_sym_u32checked_xor] = ACTIONS(409),
    [anon_sym_u32checked_not] = ACTIONS(409),
    [anon_sym_u32checked_popcnt] = ACTIONS(409),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(409),
    [anon_sym_u32checked_lt] = ACTIONS(411),
    [anon_sym_u32unchecked_lt] = ACTIONS(411),
    [anon_sym_u32checked_lte] = ACTIONS(409),
    [anon_sym_u32unchecked_lte] = ACTIONS(409),
    [anon_sym_u32checked_gt] = ACTIONS(411),
    [anon_sym_u32unchecked_gt] = ACTIONS(411),
    [anon_sym_u32checked_gte] = ACTIONS(409),
    [anon_sym_u32unchecked_gte] = ACTIONS(409),
    [anon_sym_u32checked_min] = ACTIONS(409),
    [anon_sym_u32unchecked_min] = ACTIONS(409),
    [anon_sym_u32checked_max] = ACTIONS(409),
    [anon_sym_u32unchecked_max] = ACTIONS(409),
    [anon_sym_drop] = ACTIONS(411),
    [anon_sym_dropw] = ACTIONS(409),
    [anon_sym_padw] = ACTIONS(409),
    [anon_sym_swapdw] = ACTIONS(409),
    [anon_sym_cswap] = ACTIONS(411),
    [anon_sym_cswapw] = ACTIONS(409),
    [anon_sym_cdrop] = ACTIONS(411),
    [anon_sym_cdropw] = ACTIONS(409),
    [anon_sym_sdepth] = ACTIONS(409),
    [anon_sym_mem_stream] = ACTIONS(409),
    [anon_sym_adv_pipe] = ACTIONS(409),
    [anon_sym_adv_loadw] = ACTIONS(409),
    [anon_sym_hmerge] = ACTIONS(409),
    [anon_sym_hperm] = ACTIONS(409),
    [anon_sym_mtree_get] = ACTIONS(409),
    [anon_sym_mtree_set] = ACTIONS(409),
    [anon_sym_mtree_cwm] = ACTIONS(409),
    [anon_sym_caller] = ACTIONS(409),
    [anon_sym_is_odd] = ACTIONS(409),
    [anon_sym_assert_eqw] = ACTIONS(409),
    [anon_sym_clk] = ACTIONS(409),
    [anon_sym_fri_ext2fold4] = ACTIONS(409),
    [anon_sym_hash] = ACTIONS(409),
    [anon_sym_adv] = ACTIONS(411),
    [anon_sym_exp] = ACTIONS(409),
    [anon_sym_u32assert] = ACTIONS(411),
    [anon_sym_add] = ACTIONS(409),
    [anon_sym_sub] = ACTIONS(409),
    [anon_sym_mul] = ACTIONS(409),
    [anon_sym_eq] = ACTIONS(411),
    [anon_sym_neq] = ACTIONS(409),
    [anon_sym_div] = ACTIONS(409),
    [anon_sym_mem_load] = ACTIONS(411),
    [anon_sym_mem_loadw] = ACTIONS(409),
    [anon_sym_mem_store] = ACTIONS(411),
    [anon_sym_mem_storew] = ACTIONS(409),
    [anon_sym_u32checked_add] = ACTIONS(409),
    [anon_sym_u32wrapping_add] = ACTIONS(411),
    [anon_sym_u32overflowing_add] = ACTIONS(411),
    [anon_sym_u32checked_sub] = ACTIONS(409),
    [anon_sym_u32wrapping_sub] = ACTIONS(409),
    [anon_sym_u32overflowing_sub] = ACTIONS(409),
    [anon_sym_u32checked_mul] = ACTIONS(409),
    [anon_sym_u32wrapping_mul] = ACTIONS(409),
    [anon_sym_u32overflowing_mul] = ACTIONS(409),
    [anon_sym_u32checked_div] = ACTIONS(411),
    [anon_sym_u32unchecked_div] = ACTIONS(411),
    [anon_sym_u32checked_mod] = ACTIONS(409),
    [anon_sym_u32unchecked_mod] = ACTIONS(409),
    [anon_sym_u32checked_divmod] = ACTIONS(409),
    [anon_sym_u32unchecked_divmod] = ACTIONS(409),
    [anon_sym_u32checked_shr] = ACTIONS(409),
    [anon_sym_u32unchecked_shr] = ACTIONS(409),
    [anon_sym_u32checked_shl] = ACTIONS(409),
    [anon_sym_u32unchecked_shl] = ACTIONS(409),
    [anon_sym_u32checked_rotr] = ACTIONS(409),
    [anon_sym_u32unchecked_rotr] = ACTIONS(409),
    [anon_sym_u32checked_rotl] = ACTIONS(409),
    [anon_sym_u32unchecked_rotl] = ACTIONS(409),
    [anon_sym_u32checked_eq] = ACTIONS(409),
    [anon_sym_u32checked_neq] = ACTIONS(409),
    [anon_sym_locaddr] = ACTIONS(409),
    [anon_sym_loc_load] = ACTIONS(411),
    [anon_sym_loc_loadw] = ACTIONS(409),
    [anon_sym_loc_store] = ACTIONS(411),
    [anon_sym_loc_storew] = ACTIONS(409),
    [anon_sym_dup] = ACTIONS(411),
    [anon_sym_swap] = ACTIONS(411),
    [anon_sym_movup] = ACTIONS(411),
    [anon_sym_movdn] = ACTIONS(411),
    [anon_sym_adv_push] = ACTIONS(409),
    [anon_sym_dupw] = ACTIONS(409),
    [anon_sym_swapw] = ACTIONS(409),
    [anon_sym_movupw] = ACTIONS(409),
    [anon_sym_movdnw] = ACTIONS(409),
    [anon_sym_push] = ACTIONS(409),
    [anon_sym_if] = ACTIONS(409),
    [sym__else] = ACTIONS(409),
    [anon_sym_while] = ACTIONS(409),
    [anon_sym_repeat] = ACTIONS(409),
    [sym__end] = ACTIONS(409),
  },
  [63] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(413),
    [anon_sym_call] = ACTIONS(415),
    [anon_sym_syscall] = ACTIONS(413),
    [anon_sym_assert] = ACTIONS(415),
    [anon_sym_assertz] = ACTIONS(413),
    [anon_sym_assert_eq] = ACTIONS(415),
    [anon_sym_neg] = ACTIONS(413),
    [anon_sym_inv] = ACTIONS(413),
    [anon_sym_pow2] = ACTIONS(413),
    [anon_sym_not] = ACTIONS(413),
    [anon_sym_and] = ACTIONS(413),
    [anon_sym_or] = ACTIONS(413),
    [anon_sym_xor] = ACTIONS(413),
    [anon_sym_lt] = ACTIONS(415),
    [anon_sym_lte] = ACTIONS(413),
    [anon_sym_gt] = ACTIONS(415),
    [anon_sym_gte] = ACTIONS(413),
    [anon_sym_eqw] = ACTIONS(413),
    [anon_sym_ext2add] = ACTIONS(413),
    [anon_sym_ext2sub] = ACTIONS(413),
    [anon_sym_ext2mul] = ACTIONS(413),
    [anon_sym_ext2div] = ACTIONS(413),
    [anon_sym_ext2neg] = ACTIONS(413),
    [anon_sym_ext2inv] = ACTIONS(413),
    [anon_sym_u32test] = ACTIONS(415),
    [anon_sym_u32testw] = ACTIONS(413),
    [anon_sym_u32assertw] = ACTIONS(413),
    [anon_sym_u32cast] = ACTIONS(413),
    [anon_sym_u32split] = ACTIONS(413),
    [anon_sym_u32overflowing_add3] = ACTIONS(413),
    [anon_sym_u32wrapping_add3] = ACTIONS(413),
    [anon_sym_u32overflowing_madd] = ACTIONS(413),
    [anon_sym_u32wrapping_madd] = ACTIONS(413),
    [anon_sym_u32checked_and] = ACTIONS(413),
    [anon_sym_u32checked_or] = ACTIONS(413),
    [anon_sym_u32checked_xor] = ACTIONS(413),
    [anon_sym_u32checked_not] = ACTIONS(413),
    [anon_sym_u32checked_popcnt] = ACTIONS(413),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(413),
    [anon_sym_u32checked_lt] = ACTIONS(415),
    [anon_sym_u32unchecked_lt] = ACTIONS(415),
    [anon_sym_u32checked_lte] = ACTIONS(413),
    [anon_sym_u32unchecked_lte] = ACTIONS(413),
    [anon_sym_u32checked_gt] = ACTIONS(415),
    [anon_sym_u32unchecked_gt] = ACTIONS(415),
    [anon_sym_u32checked_gte] = ACTIONS(413),
    [anon_sym_u32unchecked_gte] = ACTIONS(413),
    [anon_sym_u32checked_min] = ACTIONS(413),
    [anon_sym_u32unchecked_min] = ACTIONS(413),
    [anon_sym_u32checked_max] = ACTIONS(413),
    [anon_sym_u32unchecked_max] = ACTIONS(413),
    [anon_sym_drop] = ACTIONS(415),
    [anon_sym_dropw] = ACTIONS(413),
    [anon_sym_padw] = ACTIONS(413),
    [anon_sym_swapdw] = ACTIONS(413),
    [anon_sym_cswap] = ACTIONS(415),
    [anon_sym_cswapw] = ACTIONS(413),
    [anon_sym_cdrop] = ACTIONS(415),
    [anon_sym_cdropw] = ACTIONS(413),
    [anon_sym_sdepth] = ACTIONS(413),
    [anon_sym_mem_stream] = ACTIONS(413),
    [anon_sym_adv_pipe] = ACTIONS(413),
    [anon_sym_adv_loadw] = ACTIONS(413),
    [anon_sym_hmerge] = ACTIONS(413),
    [anon_sym_hperm] = ACTIONS(413),
    [anon_sym_mtree_get] = ACTIONS(413),
    [anon_sym_mtree_set] = ACTIONS(413),
    [anon_sym_mtree_cwm] = ACTIONS(413),
    [anon_sym_caller] = ACTIONS(413),
    [anon_sym_is_odd] = ACTIONS(413),
    [anon_sym_assert_eqw] = ACTIONS(413),
    [anon_sym_clk] = ACTIONS(413),
    [anon_sym_fri_ext2fold4] = ACTIONS(413),
    [anon_sym_hash] = ACTIONS(413),
    [anon_sym_adv] = ACTIONS(415),
    [anon_sym_exp] = ACTIONS(413),
    [anon_sym_u32assert] = ACTIONS(415),
    [anon_sym_add] = ACTIONS(413),
    [anon_sym_sub] = ACTIONS(413),
    [anon_sym_mul] = ACTIONS(413),
    [anon_sym_eq] = ACTIONS(415),
    [anon_sym_neq] = ACTIONS(413),
    [anon_sym_div] = ACTIONS(413),
    [anon_sym_mem_load] = ACTIONS(415),
    [anon_sym_mem_loadw] = ACTIONS(413),
    [anon_sym_mem_store] = ACTIONS(415),
    [anon_sym_mem_storew] = ACTIONS(413),
    [anon_sym_u32checked_add] = ACTIONS(413),
    [anon_sym_u32wrapping_add] = ACTIONS(415),
    [anon_sym_u32overflowing_add] = ACTIONS(415),
    [anon_sym_u32checked_sub] = ACTIONS(413),
    [anon_sym_u32wrapping_sub] = ACTIONS(413),
    [anon_sym_u32overflowing_sub] = ACTIONS(413),
    [anon_sym_u32checked_mul] = ACTIONS(413),
    [anon_sym_u32wrapping_mul] = ACTIONS(413),
    [anon_sym_u32overflowing_mul] = ACTIONS(413),
    [anon_sym_u32checked_div] = ACTIONS(415),
    [anon_sym_u32unchecked_div] = ACTIONS(415),
    [anon_sym_u32checked_mod] = ACTIONS(413),
    [anon_sym_u32unchecked_mod] = ACTIONS(413),
    [anon_sym_u32checked_divmod] = ACTIONS(413),
    [anon_sym_u32unchecked_divmod] = ACTIONS(413),
    [anon_sym_u32checked_shr] = ACTIONS(413),
    [anon_sym_u32unchecked_shr] = ACTIONS(413),
    [anon_sym_u32checked_shl] = ACTIONS(413),
    [anon_sym_u32unchecked_shl] = ACTIONS(413),
    [anon_sym_u32checked_rotr] = ACTIONS(413),
    [anon_sym_u32unchecked_rotr] = ACTIONS(413),
    [anon_sym_u32checked_rotl] = ACTIONS(413),
    [anon_sym_u32unchecked_rotl] = ACTIONS(413),
    [anon_sym_u32checked_eq] = ACTIONS(413),
    [anon_sym_u32checked_neq] = ACTIONS(413),
    [anon_sym_locaddr] = ACTIONS(413),
    [anon_sym_loc_load] = ACTIONS(415),
    [anon_sym_loc_loadw] = ACTIONS(413),
    [anon_sym_loc_store] = ACTIONS(415),
    [anon_sym_loc_storew] = ACTIONS(413),
    [anon_sym_dup] = ACTIONS(415),
    [anon_sym_swap] = ACTIONS(415),
    [anon_sym_movup] = ACTIONS(415),
    [anon_sym_movdn] = ACTIONS(415),
    [anon_sym_adv_push] = ACTIONS(413),
    [anon_sym_dupw] = ACTIONS(413),
    [anon_sym_swapw] = ACTIONS(413),
    [anon_sym_movupw] = ACTIONS(413),
    [anon_sym_movdnw] = ACTIONS(413),
    [anon_sym_push] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [sym__else] = ACTIONS(413),
    [anon_sym_while] = ACTIONS(413),
    [anon_sym_repeat] = ACTIONS(413),
    [sym__end] = ACTIONS(413),
  },
  [64] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(417),
    [anon_sym_call] = ACTIONS(419),
    [anon_sym_syscall] = ACTIONS(417),
    [anon_sym_assert] = ACTIONS(419),
    [anon_sym_assertz] = ACTIONS(417),
    [anon_sym_assert_eq] = ACTIONS(419),
    [anon_sym_neg] = ACTIONS(417),
    [anon_sym_inv] = ACTIONS(417),
    [anon_sym_pow2] = ACTIONS(417),
    [anon_sym_not] = ACTIONS(417),
    [anon_sym_and] = ACTIONS(417),
    [anon_sym_or] = ACTIONS(417),
    [anon_sym_xor] = ACTIONS(417),
    [anon_sym_lt] = ACTIONS(419),
    [anon_sym_lte] = ACTIONS(417),
    [anon_sym_gt] = ACTIONS(419),
    [anon_sym_gte] = ACTIONS(417),
    [anon_sym_eqw] = ACTIONS(417),
    [anon_sym_ext2add] = ACTIONS(417),
    [anon_sym_ext2sub] = ACTIONS(417),
    [anon_sym_ext2mul] = ACTIONS(417),
    [anon_sym_ext2div] = ACTIONS(417),
    [anon_sym_ext2neg] = ACTIONS(417),
    [anon_sym_ext2inv] = ACTIONS(417),
    [anon_sym_u32test] = ACTIONS(419),
    [anon_sym_u32testw] = ACTIONS(417),
    [anon_sym_u32assertw] = ACTIONS(417),
    [anon_sym_u32cast] = ACTIONS(417),
    [anon_sym_u32split] = ACTIONS(417),
    [anon_sym_u32overflowing_add3] = ACTIONS(417),
    [anon_sym_u32wrapping_add3] = ACTIONS(417),
    [anon_sym_u32overflowing_madd] = ACTIONS(417),
    [anon_sym_u32wrapping_madd] = ACTIONS(417),
    [anon_sym_u32checked_and] = ACTIONS(417),
    [anon_sym_u32checked_or] = ACTIONS(417),
    [anon_sym_u32checked_xor] = ACTIONS(417),
    [anon_sym_u32checked_not] = ACTIONS(417),
    [anon_sym_u32checked_popcnt] = ACTIONS(417),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(417),
    [anon_sym_u32checked_lt] = ACTIONS(419),
    [anon_sym_u32unchecked_lt] = ACTIONS(419),
    [anon_sym_u32checked_lte] = ACTIONS(417),
    [anon_sym_u32unchecked_lte] = ACTIONS(417),
    [anon_sym_u32checked_gt] = ACTIONS(419),
    [anon_sym_u32unchecked_gt] = ACTIONS(419),
    [anon_sym_u32checked_gte] = ACTIONS(417),
    [anon_sym_u32unchecked_gte] = ACTIONS(417),
    [anon_sym_u32checked_min] = ACTIONS(417),
    [anon_sym_u32unchecked_min] = ACTIONS(417),
    [anon_sym_u32checked_max] = ACTIONS(417),
    [anon_sym_u32unchecked_max] = ACTIONS(417),
    [anon_sym_drop] = ACTIONS(419),
    [anon_sym_dropw] = ACTIONS(417),
    [anon_sym_padw] = ACTIONS(417),
    [anon_sym_swapdw] = ACTIONS(417),
    [anon_sym_cswap] = ACTIONS(419),
    [anon_sym_cswapw] = ACTIONS(417),
    [anon_sym_cdrop] = ACTIONS(419),
    [anon_sym_cdropw] = ACTIONS(417),
    [anon_sym_sdepth] = ACTIONS(417),
    [anon_sym_mem_stream] = ACTIONS(417),
    [anon_sym_adv_pipe] = ACTIONS(417),
    [anon_sym_adv_loadw] = ACTIONS(417),
    [anon_sym_hmerge] = ACTIONS(417),
    [anon_sym_hperm] = ACTIONS(417),
    [anon_sym_mtree_get] = ACTIONS(417),
    [anon_sym_mtree_set] = ACTIONS(417),
    [anon_sym_mtree_cwm] = ACTIONS(417),
    [anon_sym_caller] = ACTIONS(417),
    [anon_sym_is_odd] = ACTIONS(417),
    [anon_sym_assert_eqw] = ACTIONS(417),
    [anon_sym_clk] = ACTIONS(417),
    [anon_sym_fri_ext2fold4] = ACTIONS(417),
    [anon_sym_hash] = ACTIONS(417),
    [anon_sym_adv] = ACTIONS(419),
    [anon_sym_exp] = ACTIONS(417),
    [anon_sym_u32assert] = ACTIONS(419),
    [anon_sym_add] = ACTIONS(417),
    [anon_sym_sub] = ACTIONS(417),
    [anon_sym_mul] = ACTIONS(417),
    [anon_sym_eq] = ACTIONS(419),
    [anon_sym_neq] = ACTIONS(417),
    [anon_sym_div] = ACTIONS(417),
    [anon_sym_mem_load] = ACTIONS(419),
    [anon_sym_mem_loadw] = ACTIONS(417),
    [anon_sym_mem_store] = ACTIONS(419),
    [anon_sym_mem_storew] = ACTIONS(417),
    [anon_sym_u32checked_add] = ACTIONS(417),
    [anon_sym_u32wrapping_add] = ACTIONS(419),
    [anon_sym_u32overflowing_add] = ACTIONS(419),
    [anon_sym_u32checked_sub] = ACTIONS(417),
    [anon_sym_u32wrapping_sub] = ACTIONS(417),
    [anon_sym_u32overflowing_sub] = ACTIONS(417),
    [anon_sym_u32checked_mul] = ACTIONS(417),
    [anon_sym_u32wrapping_mul] = ACTIONS(417),
    [anon_sym_u32overflowing_mul] = ACTIONS(417),
    [anon_sym_u32checked_div] = ACTIONS(419),
    [anon_sym_u32unchecked_div] = ACTIONS(419),
    [anon_sym_u32checked_mod] = ACTIONS(417),
    [anon_sym_u32unchecked_mod] = ACTIONS(417),
    [anon_sym_u32checked_divmod] = ACTIONS(417),
    [anon_sym_u32unchecked_divmod] = ACTIONS(417),
    [anon_sym_u32checked_shr] = ACTIONS(417),
    [anon_sym_u32unchecked_shr] = ACTIONS(417),
    [anon_sym_u32checked_shl] = ACTIONS(417),
    [anon_sym_u32unchecked_shl] = ACTIONS(417),
    [anon_sym_u32checked_rotr] = ACTIONS(417),
    [anon_sym_u32unchecked_rotr] = ACTIONS(417),
    [anon_sym_u32checked_rotl] = ACTIONS(417),
    [anon_sym_u32unchecked_rotl] = ACTIONS(417),
    [anon_sym_u32checked_eq] = ACTIONS(417),
    [anon_sym_u32checked_neq] = ACTIONS(417),
    [anon_sym_locaddr] = ACTIONS(417),
    [anon_sym_loc_load] = ACTIONS(419),
    [anon_sym_loc_loadw] = ACTIONS(417),
    [anon_sym_loc_store] = ACTIONS(419),
    [anon_sym_loc_storew] = ACTIONS(417),
    [anon_sym_dup] = ACTIONS(419),
    [anon_sym_swap] = ACTIONS(419),
    [anon_sym_movup] = ACTIONS(419),
    [anon_sym_movdn] = ACTIONS(419),
    [anon_sym_adv_push] = ACTIONS(417),
    [anon_sym_dupw] = ACTIONS(417),
    [anon_sym_swapw] = ACTIONS(417),
    [anon_sym_movupw] = ACTIONS(417),
    [anon_sym_movdnw] = ACTIONS(417),
    [anon_sym_push] = ACTIONS(417),
    [anon_sym_if] = ACTIONS(417),
    [sym__else] = ACTIONS(417),
    [anon_sym_while] = ACTIONS(417),
    [anon_sym_repeat] = ACTIONS(417),
    [sym__end] = ACTIONS(417),
  },
  [65] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(421),
    [anon_sym_call] = ACTIONS(423),
    [anon_sym_syscall] = ACTIONS(421),
    [anon_sym_assert] = ACTIONS(423),
    [anon_sym_assertz] = ACTIONS(421),
    [anon_sym_assert_eq] = ACTIONS(423),
    [anon_sym_neg] = ACTIONS(421),
    [anon_sym_inv] = ACTIONS(421),
    [anon_sym_pow2] = ACTIONS(421),
    [anon_sym_not] = ACTIONS(421),
    [anon_sym_and] = ACTIONS(421),
    [anon_sym_or] = ACTIONS(421),
    [anon_sym_xor] = ACTIONS(421),
    [anon_sym_lt] = ACTIONS(423),
    [anon_sym_lte] = ACTIONS(421),
    [anon_sym_gt] = ACTIONS(423),
    [anon_sym_gte] = ACTIONS(421),
    [anon_sym_eqw] = ACTIONS(421),
    [anon_sym_ext2add] = ACTIONS(421),
    [anon_sym_ext2sub] = ACTIONS(421),
    [anon_sym_ext2mul] = ACTIONS(421),
    [anon_sym_ext2div] = ACTIONS(421),
    [anon_sym_ext2neg] = ACTIONS(421),
    [anon_sym_ext2inv] = ACTIONS(421),
    [anon_sym_u32test] = ACTIONS(423),
    [anon_sym_u32testw] = ACTIONS(421),
    [anon_sym_u32assertw] = ACTIONS(421),
    [anon_sym_u32cast] = ACTIONS(421),
    [anon_sym_u32split] = ACTIONS(421),
    [anon_sym_u32overflowing_add3] = ACTIONS(421),
    [anon_sym_u32wrapping_add3] = ACTIONS(421),
    [anon_sym_u32overflowing_madd] = ACTIONS(421),
    [anon_sym_u32wrapping_madd] = ACTIONS(421),
    [anon_sym_u32checked_and] = ACTIONS(421),
    [anon_sym_u32checked_or] = ACTIONS(421),
    [anon_sym_u32checked_xor] = ACTIONS(421),
    [anon_sym_u32checked_not] = ACTIONS(421),
    [anon_sym_u32checked_popcnt] = ACTIONS(421),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(421),
    [anon_sym_u32checked_lt] = ACTIONS(423),
    [anon_sym_u32unchecked_lt] = ACTIONS(423),
    [anon_sym_u32checked_lte] = ACTIONS(421),
    [anon_sym_u32unchecked_lte] = ACTIONS(421),
    [anon_sym_u32checked_gt] = ACTIONS(423),
    [anon_sym_u32unchecked_gt] = ACTIONS(423),
    [anon_sym_u32checked_gte] = ACTIONS(421),
    [anon_sym_u32unchecked_gte] = ACTIONS(421),
    [anon_sym_u32checked_min] = ACTIONS(421),
    [anon_sym_u32unchecked_min] = ACTIONS(421),
    [anon_sym_u32checked_max] = ACTIONS(421),
    [anon_sym_u32unchecked_max] = ACTIONS(421),
    [anon_sym_drop] = ACTIONS(423),
    [anon_sym_dropw] = ACTIONS(421),
    [anon_sym_padw] = ACTIONS(421),
    [anon_sym_swapdw] = ACTIONS(421),
    [anon_sym_cswap] = ACTIONS(423),
    [anon_sym_cswapw] = ACTIONS(421),
    [anon_sym_cdrop] = ACTIONS(423),
    [anon_sym_cdropw] = ACTIONS(421),
    [anon_sym_sdepth] = ACTIONS(421),
    [anon_sym_mem_stream] = ACTIONS(421),
    [anon_sym_adv_pipe] = ACTIONS(421),
    [anon_sym_adv_loadw] = ACTIONS(421),
    [anon_sym_hmerge] = ACTIONS(421),
    [anon_sym_hperm] = ACTIONS(421),
    [anon_sym_mtree_get] = ACTIONS(421),
    [anon_sym_mtree_set] = ACTIONS(421),
    [anon_sym_mtree_cwm] = ACTIONS(421),
    [anon_sym_caller] = ACTIONS(421),
    [anon_sym_is_odd] = ACTIONS(421),
    [anon_sym_assert_eqw] = ACTIONS(421),
    [anon_sym_clk] = ACTIONS(421),
    [anon_sym_fri_ext2fold4] = ACTIONS(421),
    [anon_sym_hash] = ACTIONS(421),
    [anon_sym_adv] = ACTIONS(423),
    [anon_sym_exp] = ACTIONS(421),
    [anon_sym_u32assert] = ACTIONS(423),
    [anon_sym_add] = ACTIONS(421),
    [anon_sym_sub] = ACTIONS(421),
    [anon_sym_mul] = ACTIONS(421),
    [anon_sym_eq] = ACTIONS(423),
    [anon_sym_neq] = ACTIONS(421),
    [anon_sym_div] = ACTIONS(421),
    [anon_sym_mem_load] = ACTIONS(423),
    [anon_sym_mem_loadw] = ACTIONS(421),
    [anon_sym_mem_store] = ACTIONS(423),
    [anon_sym_mem_storew] = ACTIONS(421),
    [anon_sym_u32checked_add] = ACTIONS(421),
    [anon_sym_u32wrapping_add] = ACTIONS(423),
    [anon_sym_u32overflowing_add] = ACTIONS(423),
    [anon_sym_u32checked_sub] = ACTIONS(421),
    [anon_sym_u32wrapping_sub] = ACTIONS(421),
    [anon_sym_u32overflowing_sub] = ACTIONS(421),
    [anon_sym_u32checked_mul] = ACTIONS(421),
    [anon_sym_u32wrapping_mul] = ACTIONS(421),
    [anon_sym_u32overflowing_mul] = ACTIONS(421),
    [anon_sym_u32checked_div] = ACTIONS(423),
    [anon_sym_u32unchecked_div] = ACTIONS(423),
    [anon_sym_u32checked_mod] = ACTIONS(421),
    [anon_sym_u32unchecked_mod] = ACTIONS(421),
    [anon_sym_u32checked_divmod] = ACTIONS(421),
    [anon_sym_u32unchecked_divmod] = ACTIONS(421),
    [anon_sym_u32checked_shr] = ACTIONS(421),
    [anon_sym_u32unchecked_shr] = ACTIONS(421),
    [anon_sym_u32checked_shl] = ACTIONS(421),
    [anon_sym_u32unchecked_shl] = ACTIONS(421),
    [anon_sym_u32checked_rotr] = ACTIONS(421),
    [anon_sym_u32unchecked_rotr] = ACTIONS(421),
    [anon_sym_u32checked_rotl] = ACTIONS(421),
    [anon_sym_u32unchecked_rotl] = ACTIONS(421),
    [anon_sym_u32checked_eq] = ACTIONS(421),
    [anon_sym_u32checked_neq] = ACTIONS(421),
    [anon_sym_locaddr] = ACTIONS(421),
    [anon_sym_loc_load] = ACTIONS(423),
    [anon_sym_loc_loadw] = ACTIONS(421),
    [anon_sym_loc_store] = ACTIONS(423),
    [anon_sym_loc_storew] = ACTIONS(421),
    [anon_sym_dup] = ACTIONS(423),
    [anon_sym_swap] = ACTIONS(423),
    [anon_sym_movup] = ACTIONS(423),
    [anon_sym_movdn] = ACTIONS(423),
    [anon_sym_adv_push] = ACTIONS(421),
    [anon_sym_dupw] = ACTIONS(421),
    [anon_sym_swapw] = ACTIONS(421),
    [anon_sym_movupw] = ACTIONS(421),
    [anon_sym_movdnw] = ACTIONS(421),
    [anon_sym_push] = ACTIONS(421),
    [anon_sym_if] = ACTIONS(421),
    [sym__else] = ACTIONS(421),
    [anon_sym_while] = ACTIONS(421),
    [anon_sym_repeat] = ACTIONS(421),
    [sym__end] = ACTIONS(421),
  },
  [66] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(425),
    [anon_sym_call] = ACTIONS(427),
    [anon_sym_syscall] = ACTIONS(425),
    [anon_sym_assert] = ACTIONS(427),
    [anon_sym_assertz] = ACTIONS(425),
    [anon_sym_assert_eq] = ACTIONS(427),
    [anon_sym_neg] = ACTIONS(425),
    [anon_sym_inv] = ACTIONS(425),
    [anon_sym_pow2] = ACTIONS(425),
    [anon_sym_not] = ACTIONS(425),
    [anon_sym_and] = ACTIONS(425),
    [anon_sym_or] = ACTIONS(425),
    [anon_sym_xor] = ACTIONS(425),
    [anon_sym_lt] = ACTIONS(427),
    [anon_sym_lte] = ACTIONS(425),
    [anon_sym_gt] = ACTIONS(427),
    [anon_sym_gte] = ACTIONS(425),
    [anon_sym_eqw] = ACTIONS(425),
    [anon_sym_ext2add] = ACTIONS(425),
    [anon_sym_ext2sub] = ACTIONS(425),
    [anon_sym_ext2mul] = ACTIONS(425),
    [anon_sym_ext2div] = ACTIONS(425),
    [anon_sym_ext2neg] = ACTIONS(425),
    [anon_sym_ext2inv] = ACTIONS(425),
    [anon_sym_u32test] = ACTIONS(427),
    [anon_sym_u32testw] = ACTIONS(425),
    [anon_sym_u32assertw] = ACTIONS(425),
    [anon_sym_u32cast] = ACTIONS(425),
    [anon_sym_u32split] = ACTIONS(425),
    [anon_sym_u32overflowing_add3] = ACTIONS(425),
    [anon_sym_u32wrapping_add3] = ACTIONS(425),
    [anon_sym_u32overflowing_madd] = ACTIONS(425),
    [anon_sym_u32wrapping_madd] = ACTIONS(425),
    [anon_sym_u32checked_and] = ACTIONS(425),
    [anon_sym_u32checked_or] = ACTIONS(425),
    [anon_sym_u32checked_xor] = ACTIONS(425),
    [anon_sym_u32checked_not] = ACTIONS(425),
    [anon_sym_u32checked_popcnt] = ACTIONS(425),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(425),
    [anon_sym_u32checked_lt] = ACTIONS(427),
    [anon_sym_u32unchecked_lt] = ACTIONS(427),
    [anon_sym_u32checked_lte] = ACTIONS(425),
    [anon_sym_u32unchecked_lte] = ACTIONS(425),
    [anon_sym_u32checked_gt] = ACTIONS(427),
    [anon_sym_u32unchecked_gt] = ACTIONS(427),
    [anon_sym_u32checked_gte] = ACTIONS(425),
    [anon_sym_u32unchecked_gte] = ACTIONS(425),
    [anon_sym_u32checked_min] = ACTIONS(425),
    [anon_sym_u32unchecked_min] = ACTIONS(425),
    [anon_sym_u32checked_max] = ACTIONS(425),
    [anon_sym_u32unchecked_max] = ACTIONS(425),
    [anon_sym_drop] = ACTIONS(427),
    [anon_sym_dropw] = ACTIONS(425),
    [anon_sym_padw] = ACTIONS(425),
    [anon_sym_swapdw] = ACTIONS(425),
    [anon_sym_cswap] = ACTIONS(427),
    [anon_sym_cswapw] = ACTIONS(425),
    [anon_sym_cdrop] = ACTIONS(427),
    [anon_sym_cdropw] = ACTIONS(425),
    [anon_sym_sdepth] = ACTIONS(425),
    [anon_sym_mem_stream] = ACTIONS(425),
    [anon_sym_adv_pipe] = ACTIONS(425),
    [anon_sym_adv_loadw] = ACTIONS(425),
    [anon_sym_hmerge] = ACTIONS(425),
    [anon_sym_hperm] = ACTIONS(425),
    [anon_sym_mtree_get] = ACTIONS(425),
    [anon_sym_mtree_set] = ACTIONS(425),
    [anon_sym_mtree_cwm] = ACTIONS(425),
    [anon_sym_caller] = ACTIONS(425),
    [anon_sym_is_odd] = ACTIONS(425),
    [anon_sym_assert_eqw] = ACTIONS(425),
    [anon_sym_clk] = ACTIONS(425),
    [anon_sym_fri_ext2fold4] = ACTIONS(425),
    [anon_sym_hash] = ACTIONS(425),
    [anon_sym_adv] = ACTIONS(427),
    [anon_sym_exp] = ACTIONS(425),
    [anon_sym_u32assert] = ACTIONS(427),
    [anon_sym_add] = ACTIONS(425),
    [anon_sym_sub] = ACTIONS(425),
    [anon_sym_mul] = ACTIONS(425),
    [anon_sym_eq] = ACTIONS(427),
    [anon_sym_neq] = ACTIONS(425),
    [anon_sym_div] = ACTIONS(425),
    [anon_sym_mem_load] = ACTIONS(427),
    [anon_sym_mem_loadw] = ACTIONS(425),
    [anon_sym_mem_store] = ACTIONS(427),
    [anon_sym_mem_storew] = ACTIONS(425),
    [anon_sym_u32checked_add] = ACTIONS(425),
    [anon_sym_u32wrapping_add] = ACTIONS(427),
    [anon_sym_u32overflowing_add] = ACTIONS(427),
    [anon_sym_u32checked_sub] = ACTIONS(425),
    [anon_sym_u32wrapping_sub] = ACTIONS(425),
    [anon_sym_u32overflowing_sub] = ACTIONS(425),
    [anon_sym_u32checked_mul] = ACTIONS(425),
    [anon_sym_u32wrapping_mul] = ACTIONS(425),
    [anon_sym_u32overflowing_mul] = ACTIONS(425),
    [anon_sym_u32checked_div] = ACTIONS(427),
    [anon_sym_u32unchecked_div] = ACTIONS(427),
    [anon_sym_u32checked_mod] = ACTIONS(425),
    [anon_sym_u32unchecked_mod] = ACTIONS(425),
    [anon_sym_u32checked_divmod] = ACTIONS(425),
    [anon_sym_u32unchecked_divmod] = ACTIONS(425),
    [anon_sym_u32checked_shr] = ACTIONS(425),
    [anon_sym_u32unchecked_shr] = ACTIONS(425),
    [anon_sym_u32checked_shl] = ACTIONS(425),
    [anon_sym_u32unchecked_shl] = ACTIONS(425),
    [anon_sym_u32checked_rotr] = ACTIONS(425),
    [anon_sym_u32unchecked_rotr] = ACTIONS(425),
    [anon_sym_u32checked_rotl] = ACTIONS(425),
    [anon_sym_u32unchecked_rotl] = ACTIONS(425),
    [anon_sym_u32checked_eq] = ACTIONS(425),
    [anon_sym_u32checked_neq] = ACTIONS(425),
    [anon_sym_locaddr] = ACTIONS(425),
    [anon_sym_loc_load] = ACTIONS(427),
    [anon_sym_loc_loadw] = ACTIONS(425),
    [anon_sym_loc_store] = ACTIONS(427),
    [anon_sym_loc_storew] = ACTIONS(425),
    [anon_sym_dup] = ACTIONS(427),
    [anon_sym_swap] = ACTIONS(427),
    [anon_sym_movup] = ACTIONS(427),
    [anon_sym_movdn] = ACTIONS(427),
    [anon_sym_adv_push] = ACTIONS(425),
    [anon_sym_dupw] = ACTIONS(425),
    [anon_sym_swapw] = ACTIONS(425),
    [anon_sym_movupw] = ACTIONS(425),
    [anon_sym_movdnw] = ACTIONS(425),
    [anon_sym_push] = ACTIONS(425),
    [anon_sym_if] = ACTIONS(425),
    [sym__else] = ACTIONS(425),
    [anon_sym_while] = ACTIONS(425),
    [anon_sym_repeat] = ACTIONS(425),
    [sym__end] = ACTIONS(425),
  },
  [67] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(429),
    [anon_sym_call] = ACTIONS(431),
    [anon_sym_syscall] = ACTIONS(429),
    [anon_sym_assert] = ACTIONS(431),
    [anon_sym_assertz] = ACTIONS(429),
    [anon_sym_assert_eq] = ACTIONS(431),
    [anon_sym_neg] = ACTIONS(429),
    [anon_sym_inv] = ACTIONS(429),
    [anon_sym_pow2] = ACTIONS(429),
    [anon_sym_not] = ACTIONS(429),
    [anon_sym_and] = ACTIONS(429),
    [anon_sym_or] = ACTIONS(429),
    [anon_sym_xor] = ACTIONS(429),
    [anon_sym_lt] = ACTIONS(431),
    [anon_sym_lte] = ACTIONS(429),
    [anon_sym_gt] = ACTIONS(431),
    [anon_sym_gte] = ACTIONS(429),
    [anon_sym_eqw] = ACTIONS(429),
    [anon_sym_ext2add] = ACTIONS(429),
    [anon_sym_ext2sub] = ACTIONS(429),
    [anon_sym_ext2mul] = ACTIONS(429),
    [anon_sym_ext2div] = ACTIONS(429),
    [anon_sym_ext2neg] = ACTIONS(429),
    [anon_sym_ext2inv] = ACTIONS(429),
    [anon_sym_u32test] = ACTIONS(431),
    [anon_sym_u32testw] = ACTIONS(429),
    [anon_sym_u32assertw] = ACTIONS(429),
    [anon_sym_u32cast] = ACTIONS(429),
    [anon_sym_u32split] = ACTIONS(429),
    [anon_sym_u32overflowing_add3] = ACTIONS(429),
    [anon_sym_u32wrapping_add3] = ACTIONS(429),
    [anon_sym_u32overflowing_madd] = ACTIONS(429),
    [anon_sym_u32wrapping_madd] = ACTIONS(429),
    [anon_sym_u32checked_and] = ACTIONS(429),
    [anon_sym_u32checked_or] = ACTIONS(429),
    [anon_sym_u32checked_xor] = ACTIONS(429),
    [anon_sym_u32checked_not] = ACTIONS(429),
    [anon_sym_u32checked_popcnt] = ACTIONS(429),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(429),
    [anon_sym_u32checked_lt] = ACTIONS(431),
    [anon_sym_u32unchecked_lt] = ACTIONS(431),
    [anon_sym_u32checked_lte] = ACTIONS(429),
    [anon_sym_u32unchecked_lte] = ACTIONS(429),
    [anon_sym_u32checked_gt] = ACTIONS(431),
    [anon_sym_u32unchecked_gt] = ACTIONS(431),
    [anon_sym_u32checked_gte] = ACTIONS(429),
    [anon_sym_u32unchecked_gte] = ACTIONS(429),
    [anon_sym_u32checked_min] = ACTIONS(429),
    [anon_sym_u32unchecked_min] = ACTIONS(429),
    [anon_sym_u32checked_max] = ACTIONS(429),
    [anon_sym_u32unchecked_max] = ACTIONS(429),
    [anon_sym_drop] = ACTIONS(431),
    [anon_sym_dropw] = ACTIONS(429),
    [anon_sym_padw] = ACTIONS(429),
    [anon_sym_swapdw] = ACTIONS(429),
    [anon_sym_cswap] = ACTIONS(431),
    [anon_sym_cswapw] = ACTIONS(429),
    [anon_sym_cdrop] = ACTIONS(431),
    [anon_sym_cdropw] = ACTIONS(429),
    [anon_sym_sdepth] = ACTIONS(429),
    [anon_sym_mem_stream] = ACTIONS(429),
    [anon_sym_adv_pipe] = ACTIONS(429),
    [anon_sym_adv_loadw] = ACTIONS(429),
    [anon_sym_hmerge] = ACTIONS(429),
    [anon_sym_hperm] = ACTIONS(429),
    [anon_sym_mtree_get] = ACTIONS(429),
    [anon_sym_mtree_set] = ACTIONS(429),
    [anon_sym_mtree_cwm] = ACTIONS(429),
    [anon_sym_caller] = ACTIONS(429),
    [anon_sym_is_odd] = ACTIONS(429),
    [anon_sym_assert_eqw] = ACTIONS(429),
    [anon_sym_clk] = ACTIONS(429),
    [anon_sym_fri_ext2fold4] = ACTIONS(429),
    [anon_sym_hash] = ACTIONS(429),
    [anon_sym_adv] = ACTIONS(431),
    [anon_sym_exp] = ACTIONS(429),
    [anon_sym_u32assert] = ACTIONS(431),
    [anon_sym_add] = ACTIONS(429),
    [anon_sym_sub] = ACTIONS(429),
    [anon_sym_mul] = ACTIONS(429),
    [anon_sym_eq] = ACTIONS(431),
    [anon_sym_neq] = ACTIONS(429),
    [anon_sym_div] = ACTIONS(429),
    [anon_sym_mem_load] = ACTIONS(431),
    [anon_sym_mem_loadw] = ACTIONS(429),
    [anon_sym_mem_store] = ACTIONS(431),
    [anon_sym_mem_storew] = ACTIONS(429),
    [anon_sym_u32checked_add] = ACTIONS(429),
    [anon_sym_u32wrapping_add] = ACTIONS(431),
    [anon_sym_u32overflowing_add] = ACTIONS(431),
    [anon_sym_u32checked_sub] = ACTIONS(429),
    [anon_sym_u32wrapping_sub] = ACTIONS(429),
    [anon_sym_u32overflowing_sub] = ACTIONS(429),
    [anon_sym_u32checked_mul] = ACTIONS(429),
    [anon_sym_u32wrapping_mul] = ACTIONS(429),
    [anon_sym_u32overflowing_mul] = ACTIONS(429),
    [anon_sym_u32checked_div] = ACTIONS(431),
    [anon_sym_u32unchecked_div] = ACTIONS(431),
    [anon_sym_u32checked_mod] = ACTIONS(429),
    [anon_sym_u32unchecked_mod] = ACTIONS(429),
    [anon_sym_u32checked_divmod] = ACTIONS(429),
    [anon_sym_u32unchecked_divmod] = ACTIONS(429),
    [anon_sym_u32checked_shr] = ACTIONS(429),
    [anon_sym_u32unchecked_shr] = ACTIONS(429),
    [anon_sym_u32checked_shl] = ACTIONS(429),
    [anon_sym_u32unchecked_shl] = ACTIONS(429),
    [anon_sym_u32checked_rotr] = ACTIONS(429),
    [anon_sym_u32unchecked_rotr] = ACTIONS(429),
    [anon_sym_u32checked_rotl] = ACTIONS(429),
    [anon_sym_u32unchecked_rotl] = ACTIONS(429),
    [anon_sym_u32checked_eq] = ACTIONS(429),
    [anon_sym_u32checked_neq] = ACTIONS(429),
    [anon_sym_locaddr] = ACTIONS(429),
    [anon_sym_loc_load] = ACTIONS(431),
    [anon_sym_loc_loadw] = ACTIONS(429),
    [anon_sym_loc_store] = ACTIONS(431),
    [anon_sym_loc_storew] = ACTIONS(429),
    [anon_sym_dup] = ACTIONS(431),
    [anon_sym_swap] = ACTIONS(431),
    [anon_sym_movup] = ACTIONS(431),
    [anon_sym_movdn] = ACTIONS(431),
    [anon_sym_adv_push] = ACTIONS(429),
    [anon_sym_dupw] = ACTIONS(429),
    [anon_sym_swapw] = ACTIONS(429),
    [anon_sym_movupw] = ACTIONS(429),
    [anon_sym_movdnw] = ACTIONS(429),
    [anon_sym_push] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(429),
    [sym__else] = ACTIONS(429),
    [anon_sym_while] = ACTIONS(429),
    [anon_sym_repeat] = ACTIONS(429),
    [sym__end] = ACTIONS(429),
  },
  [68] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(433),
    [anon_sym_call] = ACTIONS(435),
    [anon_sym_syscall] = ACTIONS(433),
    [anon_sym_assert] = ACTIONS(435),
    [anon_sym_assertz] = ACTIONS(433),
    [anon_sym_assert_eq] = ACTIONS(435),
    [anon_sym_neg] = ACTIONS(433),
    [anon_sym_inv] = ACTIONS(433),
    [anon_sym_pow2] = ACTIONS(433),
    [anon_sym_not] = ACTIONS(433),
    [anon_sym_and] = ACTIONS(433),
    [anon_sym_or] = ACTIONS(433),
    [anon_sym_xor] = ACTIONS(433),
    [anon_sym_lt] = ACTIONS(435),
    [anon_sym_lte] = ACTIONS(433),
    [anon_sym_gt] = ACTIONS(435),
    [anon_sym_gte] = ACTIONS(433),
    [anon_sym_eqw] = ACTIONS(433),
    [anon_sym_ext2add] = ACTIONS(433),
    [anon_sym_ext2sub] = ACTIONS(433),
    [anon_sym_ext2mul] = ACTIONS(433),
    [anon_sym_ext2div] = ACTIONS(433),
    [anon_sym_ext2neg] = ACTIONS(433),
    [anon_sym_ext2inv] = ACTIONS(433),
    [anon_sym_u32test] = ACTIONS(435),
    [anon_sym_u32testw] = ACTIONS(433),
    [anon_sym_u32assertw] = ACTIONS(433),
    [anon_sym_u32cast] = ACTIONS(433),
    [anon_sym_u32split] = ACTIONS(433),
    [anon_sym_u32overflowing_add3] = ACTIONS(433),
    [anon_sym_u32wrapping_add3] = ACTIONS(433),
    [anon_sym_u32overflowing_madd] = ACTIONS(433),
    [anon_sym_u32wrapping_madd] = ACTIONS(433),
    [anon_sym_u32checked_and] = ACTIONS(433),
    [anon_sym_u32checked_or] = ACTIONS(433),
    [anon_sym_u32checked_xor] = ACTIONS(433),
    [anon_sym_u32checked_not] = ACTIONS(433),
    [anon_sym_u32checked_popcnt] = ACTIONS(433),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(433),
    [anon_sym_u32checked_lt] = ACTIONS(435),
    [anon_sym_u32unchecked_lt] = ACTIONS(435),
    [anon_sym_u32checked_lte] = ACTIONS(433),
    [anon_sym_u32unchecked_lte] = ACTIONS(433),
    [anon_sym_u32checked_gt] = ACTIONS(435),
    [anon_sym_u32unchecked_gt] = ACTIONS(435),
    [anon_sym_u32checked_gte] = ACTIONS(433),
    [anon_sym_u32unchecked_gte] = ACTIONS(433),
    [anon_sym_u32checked_min] = ACTIONS(433),
    [anon_sym_u32unchecked_min] = ACTIONS(433),
    [anon_sym_u32checked_max] = ACTIONS(433),
    [anon_sym_u32unchecked_max] = ACTIONS(433),
    [anon_sym_drop] = ACTIONS(435),
    [anon_sym_dropw] = ACTIONS(433),
    [anon_sym_padw] = ACTIONS(433),
    [anon_sym_swapdw] = ACTIONS(433),
    [anon_sym_cswap] = ACTIONS(435),
    [anon_sym_cswapw] = ACTIONS(433),
    [anon_sym_cdrop] = ACTIONS(435),
    [anon_sym_cdropw] = ACTIONS(433),
    [anon_sym_sdepth] = ACTIONS(433),
    [anon_sym_mem_stream] = ACTIONS(433),
    [anon_sym_adv_pipe] = ACTIONS(433),
    [anon_sym_adv_loadw] = ACTIONS(433),
    [anon_sym_hmerge] = ACTIONS(433),
    [anon_sym_hperm] = ACTIONS(433),
    [anon_sym_mtree_get] = ACTIONS(433),
    [anon_sym_mtree_set] = ACTIONS(433),
    [anon_sym_mtree_cwm] = ACTIONS(433),
    [anon_sym_caller] = ACTIONS(433),
    [anon_sym_is_odd] = ACTIONS(433),
    [anon_sym_assert_eqw] = ACTIONS(433),
    [anon_sym_clk] = ACTIONS(433),
    [anon_sym_fri_ext2fold4] = ACTIONS(433),
    [anon_sym_hash] = ACTIONS(433),
    [anon_sym_adv] = ACTIONS(435),
    [anon_sym_exp] = ACTIONS(433),
    [anon_sym_u32assert] = ACTIONS(435),
    [anon_sym_add] = ACTIONS(433),
    [anon_sym_sub] = ACTIONS(433),
    [anon_sym_mul] = ACTIONS(433),
    [anon_sym_eq] = ACTIONS(435),
    [anon_sym_neq] = ACTIONS(433),
    [anon_sym_div] = ACTIONS(433),
    [anon_sym_mem_load] = ACTIONS(435),
    [anon_sym_mem_loadw] = ACTIONS(433),
    [anon_sym_mem_store] = ACTIONS(435),
    [anon_sym_mem_storew] = ACTIONS(433),
    [anon_sym_u32checked_add] = ACTIONS(433),
    [anon_sym_u32wrapping_add] = ACTIONS(435),
    [anon_sym_u32overflowing_add] = ACTIONS(435),
    [anon_sym_u32checked_sub] = ACTIONS(433),
    [anon_sym_u32wrapping_sub] = ACTIONS(433),
    [anon_sym_u32overflowing_sub] = ACTIONS(433),
    [anon_sym_u32checked_mul] = ACTIONS(433),
    [anon_sym_u32wrapping_mul] = ACTIONS(433),
    [anon_sym_u32overflowing_mul] = ACTIONS(433),
    [anon_sym_u32checked_div] = ACTIONS(435),
    [anon_sym_u32unchecked_div] = ACTIONS(435),
    [anon_sym_u32checked_mod] = ACTIONS(433),
    [anon_sym_u32unchecked_mod] = ACTIONS(433),
    [anon_sym_u32checked_divmod] = ACTIONS(433),
    [anon_sym_u32unchecked_divmod] = ACTIONS(433),
    [anon_sym_u32checked_shr] = ACTIONS(433),
    [anon_sym_u32unchecked_shr] = ACTIONS(433),
    [anon_sym_u32checked_shl] = ACTIONS(433),
    [anon_sym_u32unchecked_shl] = ACTIONS(433),
    [anon_sym_u32checked_rotr] = ACTIONS(433),
    [anon_sym_u32unchecked_rotr] = ACTIONS(433),
    [anon_sym_u32checked_rotl] = ACTIONS(433),
    [anon_sym_u32unchecked_rotl] = ACTIONS(433),
    [anon_sym_u32checked_eq] = ACTIONS(433),
    [anon_sym_u32checked_neq] = ACTIONS(433),
    [anon_sym_locaddr] = ACTIONS(433),
    [anon_sym_loc_load] = ACTIONS(435),
    [anon_sym_loc_loadw] = ACTIONS(433),
    [anon_sym_loc_store] = ACTIONS(435),
    [anon_sym_loc_storew] = ACTIONS(433),
    [anon_sym_dup] = ACTIONS(435),
    [anon_sym_swap] = ACTIONS(435),
    [anon_sym_movup] = ACTIONS(435),
    [anon_sym_movdn] = ACTIONS(435),
    [anon_sym_adv_push] = ACTIONS(433),
    [anon_sym_dupw] = ACTIONS(433),
    [anon_sym_swapw] = ACTIONS(433),
    [anon_sym_movupw] = ACTIONS(433),
    [anon_sym_movdnw] = ACTIONS(433),
    [anon_sym_push] = ACTIONS(433),
    [anon_sym_if] = ACTIONS(433),
    [sym__else] = ACTIONS(433),
    [anon_sym_while] = ACTIONS(433),
    [anon_sym_repeat] = ACTIONS(433),
    [sym__end] = ACTIONS(433),
  },
  [69] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(437),
    [anon_sym_call] = ACTIONS(439),
    [anon_sym_syscall] = ACTIONS(437),
    [anon_sym_assert] = ACTIONS(439),
    [anon_sym_assertz] = ACTIONS(437),
    [anon_sym_assert_eq] = ACTIONS(439),
    [anon_sym_neg] = ACTIONS(437),
    [anon_sym_inv] = ACTIONS(437),
    [anon_sym_pow2] = ACTIONS(437),
    [anon_sym_not] = ACTIONS(437),
    [anon_sym_and] = ACTIONS(437),
    [anon_sym_or] = ACTIONS(437),
    [anon_sym_xor] = ACTIONS(437),
    [anon_sym_lt] = ACTIONS(439),
    [anon_sym_lte] = ACTIONS(437),
    [anon_sym_gt] = ACTIONS(439),
    [anon_sym_gte] = ACTIONS(437),
    [anon_sym_eqw] = ACTIONS(437),
    [anon_sym_ext2add] = ACTIONS(437),
    [anon_sym_ext2sub] = ACTIONS(437),
    [anon_sym_ext2mul] = ACTIONS(437),
    [anon_sym_ext2div] = ACTIONS(437),
    [anon_sym_ext2neg] = ACTIONS(437),
    [anon_sym_ext2inv] = ACTIONS(437),
    [anon_sym_u32test] = ACTIONS(439),
    [anon_sym_u32testw] = ACTIONS(437),
    [anon_sym_u32assertw] = ACTIONS(437),
    [anon_sym_u32cast] = ACTIONS(437),
    [anon_sym_u32split] = ACTIONS(437),
    [anon_sym_u32overflowing_add3] = ACTIONS(437),
    [anon_sym_u32wrapping_add3] = ACTIONS(437),
    [anon_sym_u32overflowing_madd] = ACTIONS(437),
    [anon_sym_u32wrapping_madd] = ACTIONS(437),
    [anon_sym_u32checked_and] = ACTIONS(437),
    [anon_sym_u32checked_or] = ACTIONS(437),
    [anon_sym_u32checked_xor] = ACTIONS(437),
    [anon_sym_u32checked_not] = ACTIONS(437),
    [anon_sym_u32checked_popcnt] = ACTIONS(437),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(437),
    [anon_sym_u32checked_lt] = ACTIONS(439),
    [anon_sym_u32unchecked_lt] = ACTIONS(439),
    [anon_sym_u32checked_lte] = ACTIONS(437),
    [anon_sym_u32unchecked_lte] = ACTIONS(437),
    [anon_sym_u32checked_gt] = ACTIONS(439),
    [anon_sym_u32unchecked_gt] = ACTIONS(439),
    [anon_sym_u32checked_gte] = ACTIONS(437),
    [anon_sym_u32unchecked_gte] = ACTIONS(437),
    [anon_sym_u32checked_min] = ACTIONS(437),
    [anon_sym_u32unchecked_min] = ACTIONS(437),
    [anon_sym_u32checked_max] = ACTIONS(437),
    [anon_sym_u32unchecked_max] = ACTIONS(437),
    [anon_sym_drop] = ACTIONS(439),
    [anon_sym_dropw] = ACTIONS(437),
    [anon_sym_padw] = ACTIONS(437),
    [anon_sym_swapdw] = ACTIONS(437),
    [anon_sym_cswap] = ACTIONS(439),
    [anon_sym_cswapw] = ACTIONS(437),
    [anon_sym_cdrop] = ACTIONS(439),
    [anon_sym_cdropw] = ACTIONS(437),
    [anon_sym_sdepth] = ACTIONS(437),
    [anon_sym_mem_stream] = ACTIONS(437),
    [anon_sym_adv_pipe] = ACTIONS(437),
    [anon_sym_adv_loadw] = ACTIONS(437),
    [anon_sym_hmerge] = ACTIONS(437),
    [anon_sym_hperm] = ACTIONS(437),
    [anon_sym_mtree_get] = ACTIONS(437),
    [anon_sym_mtree_set] = ACTIONS(437),
    [anon_sym_mtree_cwm] = ACTIONS(437),
    [anon_sym_caller] = ACTIONS(437),
    [anon_sym_is_odd] = ACTIONS(437),
    [anon_sym_assert_eqw] = ACTIONS(437),
    [anon_sym_clk] = ACTIONS(437),
    [anon_sym_fri_ext2fold4] = ACTIONS(437),
    [anon_sym_hash] = ACTIONS(437),
    [anon_sym_adv] = ACTIONS(439),
    [anon_sym_exp] = ACTIONS(437),
    [anon_sym_u32assert] = ACTIONS(439),
    [anon_sym_add] = ACTIONS(437),
    [anon_sym_sub] = ACTIONS(437),
    [anon_sym_mul] = ACTIONS(437),
    [anon_sym_eq] = ACTIONS(439),
    [anon_sym_neq] = ACTIONS(437),
    [anon_sym_div] = ACTIONS(437),
    [anon_sym_mem_load] = ACTIONS(439),
    [anon_sym_mem_loadw] = ACTIONS(437),
    [anon_sym_mem_store] = ACTIONS(439),
    [anon_sym_mem_storew] = ACTIONS(437),
    [anon_sym_u32checked_add] = ACTIONS(437),
    [anon_sym_u32wrapping_add] = ACTIONS(439),
    [anon_sym_u32overflowing_add] = ACTIONS(439),
    [anon_sym_u32checked_sub] = ACTIONS(437),
    [anon_sym_u32wrapping_sub] = ACTIONS(437),
    [anon_sym_u32overflowing_sub] = ACTIONS(437),
    [anon_sym_u32checked_mul] = ACTIONS(437),
    [anon_sym_u32wrapping_mul] = ACTIONS(437),
    [anon_sym_u32overflowing_mul] = ACTIONS(437),
    [anon_sym_u32checked_div] = ACTIONS(439),
    [anon_sym_u32unchecked_div] = ACTIONS(439),
    [anon_sym_u32checked_mod] = ACTIONS(437),
    [anon_sym_u32unchecked_mod] = ACTIONS(437),
    [anon_sym_u32checked_divmod] = ACTIONS(437),
    [anon_sym_u32unchecked_divmod] = ACTIONS(437),
    [anon_sym_u32checked_shr] = ACTIONS(437),
    [anon_sym_u32unchecked_shr] = ACTIONS(437),
    [anon_sym_u32checked_shl] = ACTIONS(437),
    [anon_sym_u32unchecked_shl] = ACTIONS(437),
    [anon_sym_u32checked_rotr] = ACTIONS(437),
    [anon_sym_u32unchecked_rotr] = ACTIONS(437),
    [anon_sym_u32checked_rotl] = ACTIONS(437),
    [anon_sym_u32unchecked_rotl] = ACTIONS(437),
    [anon_sym_u32checked_eq] = ACTIONS(437),
    [anon_sym_u32checked_neq] = ACTIONS(437),
    [anon_sym_locaddr] = ACTIONS(437),
    [anon_sym_loc_load] = ACTIONS(439),
    [anon_sym_loc_loadw] = ACTIONS(437),
    [anon_sym_loc_store] = ACTIONS(439),
    [anon_sym_loc_storew] = ACTIONS(437),
    [anon_sym_dup] = ACTIONS(439),
    [anon_sym_swap] = ACTIONS(439),
    [anon_sym_movup] = ACTIONS(439),
    [anon_sym_movdn] = ACTIONS(439),
    [anon_sym_adv_push] = ACTIONS(437),
    [anon_sym_dupw] = ACTIONS(437),
    [anon_sym_swapw] = ACTIONS(437),
    [anon_sym_movupw] = ACTIONS(437),
    [anon_sym_movdnw] = ACTIONS(437),
    [anon_sym_push] = ACTIONS(437),
    [anon_sym_if] = ACTIONS(437),
    [sym__else] = ACTIONS(437),
    [anon_sym_while] = ACTIONS(437),
    [anon_sym_repeat] = ACTIONS(437),
    [sym__end] = ACTIONS(437),
  },
  [70] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(441),
    [anon_sym_call] = ACTIONS(443),
    [anon_sym_syscall] = ACTIONS(441),
    [anon_sym_assert] = ACTIONS(443),
    [anon_sym_assertz] = ACTIONS(441),
    [anon_sym_assert_eq] = ACTIONS(443),
    [anon_sym_neg] = ACTIONS(441),
    [anon_sym_inv] = ACTIONS(441),
    [anon_sym_pow2] = ACTIONS(441),
    [anon_sym_not] = ACTIONS(441),
    [anon_sym_and] = ACTIONS(441),
    [anon_sym_or] = ACTIONS(441),
    [anon_sym_xor] = ACTIONS(441),
    [anon_sym_lt] = ACTIONS(443),
    [anon_sym_lte] = ACTIONS(441),
    [anon_sym_gt] = ACTIONS(443),
    [anon_sym_gte] = ACTIONS(441),
    [anon_sym_eqw] = ACTIONS(441),
    [anon_sym_ext2add] = ACTIONS(441),
    [anon_sym_ext2sub] = ACTIONS(441),
    [anon_sym_ext2mul] = ACTIONS(441),
    [anon_sym_ext2div] = ACTIONS(441),
    [anon_sym_ext2neg] = ACTIONS(441),
    [anon_sym_ext2inv] = ACTIONS(441),
    [anon_sym_u32test] = ACTIONS(443),
    [anon_sym_u32testw] = ACTIONS(441),
    [anon_sym_u32assertw] = ACTIONS(441),
    [anon_sym_u32cast] = ACTIONS(441),
    [anon_sym_u32split] = ACTIONS(441),
    [anon_sym_u32overflowing_add3] = ACTIONS(441),
    [anon_sym_u32wrapping_add3] = ACTIONS(441),
    [anon_sym_u32overflowing_madd] = ACTIONS(441),
    [anon_sym_u32wrapping_madd] = ACTIONS(441),
    [anon_sym_u32checked_and] = ACTIONS(441),
    [anon_sym_u32checked_or] = ACTIONS(441),
    [anon_sym_u32checked_xor] = ACTIONS(441),
    [anon_sym_u32checked_not] = ACTIONS(441),
    [anon_sym_u32checked_popcnt] = ACTIONS(441),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(441),
    [anon_sym_u32checked_lt] = ACTIONS(443),
    [anon_sym_u32unchecked_lt] = ACTIONS(443),
    [anon_sym_u32checked_lte] = ACTIONS(441),
    [anon_sym_u32unchecked_lte] = ACTIONS(441),
    [anon_sym_u32checked_gt] = ACTIONS(443),
    [anon_sym_u32unchecked_gt] = ACTIONS(443),
    [anon_sym_u32checked_gte] = ACTIONS(441),
    [anon_sym_u32unchecked_gte] = ACTIONS(441),
    [anon_sym_u32checked_min] = ACTIONS(441),
    [anon_sym_u32unchecked_min] = ACTIONS(441),
    [anon_sym_u32checked_max] = ACTIONS(441),
    [anon_sym_u32unchecked_max] = ACTIONS(441),
    [anon_sym_drop] = ACTIONS(443),
    [anon_sym_dropw] = ACTIONS(441),
    [anon_sym_padw] = ACTIONS(441),
    [anon_sym_swapdw] = ACTIONS(441),
    [anon_sym_cswap] = ACTIONS(443),
    [anon_sym_cswapw] = ACTIONS(441),
    [anon_sym_cdrop] = ACTIONS(443),
    [anon_sym_cdropw] = ACTIONS(441),
    [anon_sym_sdepth] = ACTIONS(441),
    [anon_sym_mem_stream] = ACTIONS(441),
    [anon_sym_adv_pipe] = ACTIONS(441),
    [anon_sym_adv_loadw] = ACTIONS(441),
    [anon_sym_hmerge] = ACTIONS(441),
    [anon_sym_hperm] = ACTIONS(441),
    [anon_sym_mtree_get] = ACTIONS(441),
    [anon_sym_mtree_set] = ACTIONS(441),
    [anon_sym_mtree_cwm] = ACTIONS(441),
    [anon_sym_caller] = ACTIONS(441),
    [anon_sym_is_odd] = ACTIONS(441),
    [anon_sym_assert_eqw] = ACTIONS(441),
    [anon_sym_clk] = ACTIONS(441),
    [anon_sym_fri_ext2fold4] = ACTIONS(441),
    [anon_sym_hash] = ACTIONS(441),
    [anon_sym_adv] = ACTIONS(443),
    [anon_sym_exp] = ACTIONS(441),
    [anon_sym_u32assert] = ACTIONS(443),
    [anon_sym_add] = ACTIONS(441),
    [anon_sym_sub] = ACTIONS(441),
    [anon_sym_mul] = ACTIONS(441),
    [anon_sym_eq] = ACTIONS(443),
    [anon_sym_neq] = ACTIONS(441),
    [anon_sym_div] = ACTIONS(441),
    [anon_sym_mem_load] = ACTIONS(443),
    [anon_sym_mem_loadw] = ACTIONS(441),
    [anon_sym_mem_store] = ACTIONS(443),
    [anon_sym_mem_storew] = ACTIONS(441),
    [anon_sym_u32checked_add] = ACTIONS(441),
    [anon_sym_u32wrapping_add] = ACTIONS(443),
    [anon_sym_u32overflowing_add] = ACTIONS(443),
    [anon_sym_u32checked_sub] = ACTIONS(441),
    [anon_sym_u32wrapping_sub] = ACTIONS(441),
    [anon_sym_u32overflowing_sub] = ACTIONS(441),
    [anon_sym_u32checked_mul] = ACTIONS(441),
    [anon_sym_u32wrapping_mul] = ACTIONS(441),
    [anon_sym_u32overflowing_mul] = ACTIONS(441),
    [anon_sym_u32checked_div] = ACTIONS(443),
    [anon_sym_u32unchecked_div] = ACTIONS(443),
    [anon_sym_u32checked_mod] = ACTIONS(441),
    [anon_sym_u32unchecked_mod] = ACTIONS(441),
    [anon_sym_u32checked_divmod] = ACTIONS(441),
    [anon_sym_u32unchecked_divmod] = ACTIONS(441),
    [anon_sym_u32checked_shr] = ACTIONS(441),
    [anon_sym_u32unchecked_shr] = ACTIONS(441),
    [anon_sym_u32checked_shl] = ACTIONS(441),
    [anon_sym_u32unchecked_shl] = ACTIONS(441),
    [anon_sym_u32checked_rotr] = ACTIONS(441),
    [anon_sym_u32unchecked_rotr] = ACTIONS(441),
    [anon_sym_u32checked_rotl] = ACTIONS(441),
    [anon_sym_u32unchecked_rotl] = ACTIONS(441),
    [anon_sym_u32checked_eq] = ACTIONS(441),
    [anon_sym_u32checked_neq] = ACTIONS(441),
    [anon_sym_locaddr] = ACTIONS(441),
    [anon_sym_loc_load] = ACTIONS(443),
    [anon_sym_loc_loadw] = ACTIONS(441),
    [anon_sym_loc_store] = ACTIONS(443),
    [anon_sym_loc_storew] = ACTIONS(441),
    [anon_sym_dup] = ACTIONS(443),
    [anon_sym_swap] = ACTIONS(443),
    [anon_sym_movup] = ACTIONS(443),
    [anon_sym_movdn] = ACTIONS(443),
    [anon_sym_adv_push] = ACTIONS(441),
    [anon_sym_dupw] = ACTIONS(441),
    [anon_sym_swapw] = ACTIONS(441),
    [anon_sym_movupw] = ACTIONS(441),
    [anon_sym_movdnw] = ACTIONS(441),
    [anon_sym_push] = ACTIONS(441),
    [anon_sym_if] = ACTIONS(441),
    [sym__else] = ACTIONS(441),
    [anon_sym_while] = ACTIONS(441),
    [anon_sym_repeat] = ACTIONS(441),
    [sym__end] = ACTIONS(441),
  },
  [71] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(445),
    [anon_sym_call] = ACTIONS(447),
    [anon_sym_syscall] = ACTIONS(445),
    [anon_sym_assert] = ACTIONS(447),
    [anon_sym_assertz] = ACTIONS(445),
    [anon_sym_assert_eq] = ACTIONS(447),
    [anon_sym_neg] = ACTIONS(445),
    [anon_sym_inv] = ACTIONS(445),
    [anon_sym_pow2] = ACTIONS(445),
    [anon_sym_not] = ACTIONS(445),
    [anon_sym_and] = ACTIONS(445),
    [anon_sym_or] = ACTIONS(445),
    [anon_sym_xor] = ACTIONS(445),
    [anon_sym_lt] = ACTIONS(447),
    [anon_sym_lte] = ACTIONS(445),
    [anon_sym_gt] = ACTIONS(447),
    [anon_sym_gte] = ACTIONS(445),
    [anon_sym_eqw] = ACTIONS(445),
    [anon_sym_ext2add] = ACTIONS(445),
    [anon_sym_ext2sub] = ACTIONS(445),
    [anon_sym_ext2mul] = ACTIONS(445),
    [anon_sym_ext2div] = ACTIONS(445),
    [anon_sym_ext2neg] = ACTIONS(445),
    [anon_sym_ext2inv] = ACTIONS(445),
    [anon_sym_u32test] = ACTIONS(447),
    [anon_sym_u32testw] = ACTIONS(445),
    [anon_sym_u32assertw] = ACTIONS(445),
    [anon_sym_u32cast] = ACTIONS(445),
    [anon_sym_u32split] = ACTIONS(445),
    [anon_sym_u32overflowing_add3] = ACTIONS(445),
    [anon_sym_u32wrapping_add3] = ACTIONS(445),
    [anon_sym_u32overflowing_madd] = ACTIONS(445),
    [anon_sym_u32wrapping_madd] = ACTIONS(445),
    [anon_sym_u32checked_and] = ACTIONS(445),
    [anon_sym_u32checked_or] = ACTIONS(445),
    [anon_sym_u32checked_xor] = ACTIONS(445),
    [anon_sym_u32checked_not] = ACTIONS(445),
    [anon_sym_u32checked_popcnt] = ACTIONS(445),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(445),
    [anon_sym_u32checked_lt] = ACTIONS(447),
    [anon_sym_u32unchecked_lt] = ACTIONS(447),
    [anon_sym_u32checked_lte] = ACTIONS(445),
    [anon_sym_u32unchecked_lte] = ACTIONS(445),
    [anon_sym_u32checked_gt] = ACTIONS(447),
    [anon_sym_u32unchecked_gt] = ACTIONS(447),
    [anon_sym_u32checked_gte] = ACTIONS(445),
    [anon_sym_u32unchecked_gte] = ACTIONS(445),
    [anon_sym_u32checked_min] = ACTIONS(445),
    [anon_sym_u32unchecked_min] = ACTIONS(445),
    [anon_sym_u32checked_max] = ACTIONS(445),
    [anon_sym_u32unchecked_max] = ACTIONS(445),
    [anon_sym_drop] = ACTIONS(447),
    [anon_sym_dropw] = ACTIONS(445),
    [anon_sym_padw] = ACTIONS(445),
    [anon_sym_swapdw] = ACTIONS(445),
    [anon_sym_cswap] = ACTIONS(447),
    [anon_sym_cswapw] = ACTIONS(445),
    [anon_sym_cdrop] = ACTIONS(447),
    [anon_sym_cdropw] = ACTIONS(445),
    [anon_sym_sdepth] = ACTIONS(445),
    [anon_sym_mem_stream] = ACTIONS(445),
    [anon_sym_adv_pipe] = ACTIONS(445),
    [anon_sym_adv_loadw] = ACTIONS(445),
    [anon_sym_hmerge] = ACTIONS(445),
    [anon_sym_hperm] = ACTIONS(445),
    [anon_sym_mtree_get] = ACTIONS(445),
    [anon_sym_mtree_set] = ACTIONS(445),
    [anon_sym_mtree_cwm] = ACTIONS(445),
    [anon_sym_caller] = ACTIONS(445),
    [anon_sym_is_odd] = ACTIONS(445),
    [anon_sym_assert_eqw] = ACTIONS(445),
    [anon_sym_clk] = ACTIONS(445),
    [anon_sym_fri_ext2fold4] = ACTIONS(445),
    [anon_sym_hash] = ACTIONS(445),
    [anon_sym_adv] = ACTIONS(447),
    [anon_sym_exp] = ACTIONS(445),
    [anon_sym_u32assert] = ACTIONS(447),
    [anon_sym_add] = ACTIONS(445),
    [anon_sym_sub] = ACTIONS(445),
    [anon_sym_mul] = ACTIONS(445),
    [anon_sym_eq] = ACTIONS(447),
    [anon_sym_neq] = ACTIONS(445),
    [anon_sym_div] = ACTIONS(445),
    [anon_sym_mem_load] = ACTIONS(447),
    [anon_sym_mem_loadw] = ACTIONS(445),
    [anon_sym_mem_store] = ACTIONS(447),
    [anon_sym_mem_storew] = ACTIONS(445),
    [anon_sym_u32checked_add] = ACTIONS(445),
    [anon_sym_u32wrapping_add] = ACTIONS(447),
    [anon_sym_u32overflowing_add] = ACTIONS(447),
    [anon_sym_u32checked_sub] = ACTIONS(445),
    [anon_sym_u32wrapping_sub] = ACTIONS(445),
    [anon_sym_u32overflowing_sub] = ACTIONS(445),
    [anon_sym_u32checked_mul] = ACTIONS(445),
    [anon_sym_u32wrapping_mul] = ACTIONS(445),
    [anon_sym_u32overflowing_mul] = ACTIONS(445),
    [anon_sym_u32checked_div] = ACTIONS(447),
    [anon_sym_u32unchecked_div] = ACTIONS(447),
    [anon_sym_u32checked_mod] = ACTIONS(445),
    [anon_sym_u32unchecked_mod] = ACTIONS(445),
    [anon_sym_u32checked_divmod] = ACTIONS(445),
    [anon_sym_u32unchecked_divmod] = ACTIONS(445),
    [anon_sym_u32checked_shr] = ACTIONS(445),
    [anon_sym_u32unchecked_shr] = ACTIONS(445),
    [anon_sym_u32checked_shl] = ACTIONS(445),
    [anon_sym_u32unchecked_shl] = ACTIONS(445),
    [anon_sym_u32checked_rotr] = ACTIONS(445),
    [anon_sym_u32unchecked_rotr] = ACTIONS(445),
    [anon_sym_u32checked_rotl] = ACTIONS(445),
    [anon_sym_u32unchecked_rotl] = ACTIONS(445),
    [anon_sym_u32checked_eq] = ACTIONS(445),
    [anon_sym_u32checked_neq] = ACTIONS(445),
    [anon_sym_locaddr] = ACTIONS(445),
    [anon_sym_loc_load] = ACTIONS(447),
    [anon_sym_loc_loadw] = ACTIONS(445),
    [anon_sym_loc_store] = ACTIONS(447),
    [anon_sym_loc_storew] = ACTIONS(445),
    [anon_sym_dup] = ACTIONS(447),
    [anon_sym_swap] = ACTIONS(447),
    [anon_sym_movup] = ACTIONS(447),
    [anon_sym_movdn] = ACTIONS(447),
    [anon_sym_adv_push] = ACTIONS(445),
    [anon_sym_dupw] = ACTIONS(445),
    [anon_sym_swapw] = ACTIONS(445),
    [anon_sym_movupw] = ACTIONS(445),
    [anon_sym_movdnw] = ACTIONS(445),
    [anon_sym_push] = ACTIONS(445),
    [anon_sym_if] = ACTIONS(445),
    [sym__else] = ACTIONS(445),
    [anon_sym_while] = ACTIONS(445),
    [anon_sym_repeat] = ACTIONS(445),
    [sym__end] = ACTIONS(445),
  },
  [72] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(449),
    [anon_sym_call] = ACTIONS(451),
    [anon_sym_syscall] = ACTIONS(449),
    [anon_sym_assert] = ACTIONS(451),
    [anon_sym_assertz] = ACTIONS(449),
    [anon_sym_assert_eq] = ACTIONS(451),
    [anon_sym_neg] = ACTIONS(449),
    [anon_sym_inv] = ACTIONS(449),
    [anon_sym_pow2] = ACTIONS(449),
    [anon_sym_not] = ACTIONS(449),
    [anon_sym_and] = ACTIONS(449),
    [anon_sym_or] = ACTIONS(449),
    [anon_sym_xor] = ACTIONS(449),
    [anon_sym_lt] = ACTIONS(451),
    [anon_sym_lte] = ACTIONS(449),
    [anon_sym_gt] = ACTIONS(451),
    [anon_sym_gte] = ACTIONS(449),
    [anon_sym_eqw] = ACTIONS(449),
    [anon_sym_ext2add] = ACTIONS(449),
    [anon_sym_ext2sub] = ACTIONS(449),
    [anon_sym_ext2mul] = ACTIONS(449),
    [anon_sym_ext2div] = ACTIONS(449),
    [anon_sym_ext2neg] = ACTIONS(449),
    [anon_sym_ext2inv] = ACTIONS(449),
    [anon_sym_u32test] = ACTIONS(451),
    [anon_sym_u32testw] = ACTIONS(449),
    [anon_sym_u32assertw] = ACTIONS(449),
    [anon_sym_u32cast] = ACTIONS(449),
    [anon_sym_u32split] = ACTIONS(449),
    [anon_sym_u32overflowing_add3] = ACTIONS(449),
    [anon_sym_u32wrapping_add3] = ACTIONS(449),
    [anon_sym_u32overflowing_madd] = ACTIONS(449),
    [anon_sym_u32wrapping_madd] = ACTIONS(449),
    [anon_sym_u32checked_and] = ACTIONS(449),
    [anon_sym_u32checked_or] = ACTIONS(449),
    [anon_sym_u32checked_xor] = ACTIONS(449),
    [anon_sym_u32checked_not] = ACTIONS(449),
    [anon_sym_u32checked_popcnt] = ACTIONS(449),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(449),
    [anon_sym_u32checked_lt] = ACTIONS(451),
    [anon_sym_u32unchecked_lt] = ACTIONS(451),
    [anon_sym_u32checked_lte] = ACTIONS(449),
    [anon_sym_u32unchecked_lte] = ACTIONS(449),
    [anon_sym_u32checked_gt] = ACTIONS(451),
    [anon_sym_u32unchecked_gt] = ACTIONS(451),
    [anon_sym_u32checked_gte] = ACTIONS(449),
    [anon_sym_u32unchecked_gte] = ACTIONS(449),
    [anon_sym_u32checked_min] = ACTIONS(449),
    [anon_sym_u32unchecked_min] = ACTIONS(449),
    [anon_sym_u32checked_max] = ACTIONS(449),
    [anon_sym_u32unchecked_max] = ACTIONS(449),
    [anon_sym_drop] = ACTIONS(451),
    [anon_sym_dropw] = ACTIONS(449),
    [anon_sym_padw] = ACTIONS(449),
    [anon_sym_swapdw] = ACTIONS(449),
    [anon_sym_cswap] = ACTIONS(451),
    [anon_sym_cswapw] = ACTIONS(449),
    [anon_sym_cdrop] = ACTIONS(451),
    [anon_sym_cdropw] = ACTIONS(449),
    [anon_sym_sdepth] = ACTIONS(449),
    [anon_sym_mem_stream] = ACTIONS(449),
    [anon_sym_adv_pipe] = ACTIONS(449),
    [anon_sym_adv_loadw] = ACTIONS(449),
    [anon_sym_hmerge] = ACTIONS(449),
    [anon_sym_hperm] = ACTIONS(449),
    [anon_sym_mtree_get] = ACTIONS(449),
    [anon_sym_mtree_set] = ACTIONS(449),
    [anon_sym_mtree_cwm] = ACTIONS(449),
    [anon_sym_caller] = ACTIONS(449),
    [anon_sym_is_odd] = ACTIONS(449),
    [anon_sym_assert_eqw] = ACTIONS(449),
    [anon_sym_clk] = ACTIONS(449),
    [anon_sym_fri_ext2fold4] = ACTIONS(449),
    [anon_sym_hash] = ACTIONS(449),
    [anon_sym_adv] = ACTIONS(451),
    [anon_sym_exp] = ACTIONS(449),
    [anon_sym_u32assert] = ACTIONS(451),
    [anon_sym_add] = ACTIONS(449),
    [anon_sym_sub] = ACTIONS(449),
    [anon_sym_mul] = ACTIONS(449),
    [anon_sym_eq] = ACTIONS(451),
    [anon_sym_neq] = ACTIONS(449),
    [anon_sym_div] = ACTIONS(449),
    [anon_sym_mem_load] = ACTIONS(451),
    [anon_sym_mem_loadw] = ACTIONS(449),
    [anon_sym_mem_store] = ACTIONS(451),
    [anon_sym_mem_storew] = ACTIONS(449),
    [anon_sym_u32checked_add] = ACTIONS(449),
    [anon_sym_u32wrapping_add] = ACTIONS(451),
    [anon_sym_u32overflowing_add] = ACTIONS(451),
    [anon_sym_u32checked_sub] = ACTIONS(449),
    [anon_sym_u32wrapping_sub] = ACTIONS(449),
    [anon_sym_u32overflowing_sub] = ACTIONS(449),
    [anon_sym_u32checked_mul] = ACTIONS(449),
    [anon_sym_u32wrapping_mul] = ACTIONS(449),
    [anon_sym_u32overflowing_mul] = ACTIONS(449),
    [anon_sym_u32checked_div] = ACTIONS(451),
    [anon_sym_u32unchecked_div] = ACTIONS(451),
    [anon_sym_u32checked_mod] = ACTIONS(449),
    [anon_sym_u32unchecked_mod] = ACTIONS(449),
    [anon_sym_u32checked_divmod] = ACTIONS(449),
    [anon_sym_u32unchecked_divmod] = ACTIONS(449),
    [anon_sym_u32checked_shr] = ACTIONS(449),
    [anon_sym_u32unchecked_shr] = ACTIONS(449),
    [anon_sym_u32checked_shl] = ACTIONS(449),
    [anon_sym_u32unchecked_shl] = ACTIONS(449),
    [anon_sym_u32checked_rotr] = ACTIONS(449),
    [anon_sym_u32unchecked_rotr] = ACTIONS(449),
    [anon_sym_u32checked_rotl] = ACTIONS(449),
    [anon_sym_u32unchecked_rotl] = ACTIONS(449),
    [anon_sym_u32checked_eq] = ACTIONS(449),
    [anon_sym_u32checked_neq] = ACTIONS(449),
    [anon_sym_locaddr] = ACTIONS(449),
    [anon_sym_loc_load] = ACTIONS(451),
    [anon_sym_loc_loadw] = ACTIONS(449),
    [anon_sym_loc_store] = ACTIONS(451),
    [anon_sym_loc_storew] = ACTIONS(449),
    [anon_sym_dup] = ACTIONS(451),
    [anon_sym_swap] = ACTIONS(451),
    [anon_sym_movup] = ACTIONS(451),
    [anon_sym_movdn] = ACTIONS(451),
    [anon_sym_adv_push] = ACTIONS(449),
    [anon_sym_dupw] = ACTIONS(449),
    [anon_sym_swapw] = ACTIONS(449),
    [anon_sym_movupw] = ACTIONS(449),
    [anon_sym_movdnw] = ACTIONS(449),
    [anon_sym_push] = ACTIONS(449),
    [anon_sym_if] = ACTIONS(449),
    [sym__else] = ACTIONS(449),
    [anon_sym_while] = ACTIONS(449),
    [anon_sym_repeat] = ACTIONS(449),
    [sym__end] = ACTIONS(449),
  },
  [73] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(453),
    [anon_sym_call] = ACTIONS(455),
    [anon_sym_syscall] = ACTIONS(453),
    [anon_sym_assert] = ACTIONS(455),
    [anon_sym_assertz] = ACTIONS(453),
    [anon_sym_assert_eq] = ACTIONS(455),
    [anon_sym_neg] = ACTIONS(453),
    [anon_sym_inv] = ACTIONS(453),
    [anon_sym_pow2] = ACTIONS(453),
    [anon_sym_not] = ACTIONS(453),
    [anon_sym_and] = ACTIONS(453),
    [anon_sym_or] = ACTIONS(453),
    [anon_sym_xor] = ACTIONS(453),
    [anon_sym_lt] = ACTIONS(455),
    [anon_sym_lte] = ACTIONS(453),
    [anon_sym_gt] = ACTIONS(455),
    [anon_sym_gte] = ACTIONS(453),
    [anon_sym_eqw] = ACTIONS(453),
    [anon_sym_ext2add] = ACTIONS(453),
    [anon_sym_ext2sub] = ACTIONS(453),
    [anon_sym_ext2mul] = ACTIONS(453),
    [anon_sym_ext2div] = ACTIONS(453),
    [anon_sym_ext2neg] = ACTIONS(453),
    [anon_sym_ext2inv] = ACTIONS(453),
    [anon_sym_u32test] = ACTIONS(455),
    [anon_sym_u32testw] = ACTIONS(453),
    [anon_sym_u32assertw] = ACTIONS(453),
    [anon_sym_u32cast] = ACTIONS(453),
    [anon_sym_u32split] = ACTIONS(453),
    [anon_sym_u32overflowing_add3] = ACTIONS(453),
    [anon_sym_u32wrapping_add3] = ACTIONS(453),
    [anon_sym_u32overflowing_madd] = ACTIONS(453),
    [anon_sym_u32wrapping_madd] = ACTIONS(453),
    [anon_sym_u32checked_and] = ACTIONS(453),
    [anon_sym_u32checked_or] = ACTIONS(453),
    [anon_sym_u32checked_xor] = ACTIONS(453),
    [anon_sym_u32checked_not] = ACTIONS(453),
    [anon_sym_u32checked_popcnt] = ACTIONS(453),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(453),
    [anon_sym_u32checked_lt] = ACTIONS(455),
    [anon_sym_u32unchecked_lt] = ACTIONS(455),
    [anon_sym_u32checked_lte] = ACTIONS(453),
    [anon_sym_u32unchecked_lte] = ACTIONS(453),
    [anon_sym_u32checked_gt] = ACTIONS(455),
    [anon_sym_u32unchecked_gt] = ACTIONS(455),
    [anon_sym_u32checked_gte] = ACTIONS(453),
    [anon_sym_u32unchecked_gte] = ACTIONS(453),
    [anon_sym_u32checked_min] = ACTIONS(453),
    [anon_sym_u32unchecked_min] = ACTIONS(453),
    [anon_sym_u32checked_max] = ACTIONS(453),
    [anon_sym_u32unchecked_max] = ACTIONS(453),
    [anon_sym_drop] = ACTIONS(455),
    [anon_sym_dropw] = ACTIONS(453),
    [anon_sym_padw] = ACTIONS(453),
    [anon_sym_swapdw] = ACTIONS(453),
    [anon_sym_cswap] = ACTIONS(455),
    [anon_sym_cswapw] = ACTIONS(453),
    [anon_sym_cdrop] = ACTIONS(455),
    [anon_sym_cdropw] = ACTIONS(453),
    [anon_sym_sdepth] = ACTIONS(453),
    [anon_sym_mem_stream] = ACTIONS(453),
    [anon_sym_adv_pipe] = ACTIONS(453),
    [anon_sym_adv_loadw] = ACTIONS(453),
    [anon_sym_hmerge] = ACTIONS(453),
    [anon_sym_hperm] = ACTIONS(453),
    [anon_sym_mtree_get] = ACTIONS(453),
    [anon_sym_mtree_set] = ACTIONS(453),
    [anon_sym_mtree_cwm] = ACTIONS(453),
    [anon_sym_caller] = ACTIONS(453),
    [anon_sym_is_odd] = ACTIONS(453),
    [anon_sym_assert_eqw] = ACTIONS(453),
    [anon_sym_clk] = ACTIONS(453),
    [anon_sym_fri_ext2fold4] = ACTIONS(453),
    [anon_sym_hash] = ACTIONS(453),
    [anon_sym_adv] = ACTIONS(455),
    [anon_sym_exp] = ACTIONS(453),
    [anon_sym_u32assert] = ACTIONS(455),
    [anon_sym_add] = ACTIONS(453),
    [anon_sym_sub] = ACTIONS(453),
    [anon_sym_mul] = ACTIONS(453),
    [anon_sym_eq] = ACTIONS(455),
    [anon_sym_neq] = ACTIONS(453),
    [anon_sym_div] = ACTIONS(453),
    [anon_sym_mem_load] = ACTIONS(455),
    [anon_sym_mem_loadw] = ACTIONS(453),
    [anon_sym_mem_store] = ACTIONS(455),
    [anon_sym_mem_storew] = ACTIONS(453),
    [anon_sym_u32checked_add] = ACTIONS(453),
    [anon_sym_u32wrapping_add] = ACTIONS(455),
    [anon_sym_u32overflowing_add] = ACTIONS(455),
    [anon_sym_u32checked_sub] = ACTIONS(453),
    [anon_sym_u32wrapping_sub] = ACTIONS(453),
    [anon_sym_u32overflowing_sub] = ACTIONS(453),
    [anon_sym_u32checked_mul] = ACTIONS(453),
    [anon_sym_u32wrapping_mul] = ACTIONS(453),
    [anon_sym_u32overflowing_mul] = ACTIONS(453),
    [anon_sym_u32checked_div] = ACTIONS(455),
    [anon_sym_u32unchecked_div] = ACTIONS(455),
    [anon_sym_u32checked_mod] = ACTIONS(453),
    [anon_sym_u32unchecked_mod] = ACTIONS(453),
    [anon_sym_u32checked_divmod] = ACTIONS(453),
    [anon_sym_u32unchecked_divmod] = ACTIONS(453),
    [anon_sym_u32checked_shr] = ACTIONS(453),
    [anon_sym_u32unchecked_shr] = ACTIONS(453),
    [anon_sym_u32checked_shl] = ACTIONS(453),
    [anon_sym_u32unchecked_shl] = ACTIONS(453),
    [anon_sym_u32checked_rotr] = ACTIONS(453),
    [anon_sym_u32unchecked_rotr] = ACTIONS(453),
    [anon_sym_u32checked_rotl] = ACTIONS(453),
    [anon_sym_u32unchecked_rotl] = ACTIONS(453),
    [anon_sym_u32checked_eq] = ACTIONS(453),
    [anon_sym_u32checked_neq] = ACTIONS(453),
    [anon_sym_locaddr] = ACTIONS(453),
    [anon_sym_loc_load] = ACTIONS(455),
    [anon_sym_loc_loadw] = ACTIONS(453),
    [anon_sym_loc_store] = ACTIONS(455),
    [anon_sym_loc_storew] = ACTIONS(453),
    [anon_sym_dup] = ACTIONS(455),
    [anon_sym_swap] = ACTIONS(455),
    [anon_sym_movup] = ACTIONS(455),
    [anon_sym_movdn] = ACTIONS(455),
    [anon_sym_adv_push] = ACTIONS(453),
    [anon_sym_dupw] = ACTIONS(453),
    [anon_sym_swapw] = ACTIONS(453),
    [anon_sym_movupw] = ACTIONS(453),
    [anon_sym_movdnw] = ACTIONS(453),
    [anon_sym_push] = ACTIONS(453),
    [anon_sym_if] = ACTIONS(453),
    [anon_sym_while] = ACTIONS(453),
    [anon_sym_repeat] = ACTIONS(453),
    [sym__end] = ACTIONS(453),
  },
  [74] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(457),
    [anon_sym_call] = ACTIONS(459),
    [anon_sym_syscall] = ACTIONS(457),
    [anon_sym_assert] = ACTIONS(459),
    [anon_sym_assertz] = ACTIONS(457),
    [anon_sym_assert_eq] = ACTIONS(459),
    [anon_sym_neg] = ACTIONS(457),
    [anon_sym_inv] = ACTIONS(457),
    [anon_sym_pow2] = ACTIONS(457),
    [anon_sym_not] = ACTIONS(457),
    [anon_sym_and] = ACTIONS(457),
    [anon_sym_or] = ACTIONS(457),
    [anon_sym_xor] = ACTIONS(457),
    [anon_sym_lt] = ACTIONS(459),
    [anon_sym_lte] = ACTIONS(457),
    [anon_sym_gt] = ACTIONS(459),
    [anon_sym_gte] = ACTIONS(457),
    [anon_sym_eqw] = ACTIONS(457),
    [anon_sym_ext2add] = ACTIONS(457),
    [anon_sym_ext2sub] = ACTIONS(457),
    [anon_sym_ext2mul] = ACTIONS(457),
    [anon_sym_ext2div] = ACTIONS(457),
    [anon_sym_ext2neg] = ACTIONS(457),
    [anon_sym_ext2inv] = ACTIONS(457),
    [anon_sym_u32test] = ACTIONS(459),
    [anon_sym_u32testw] = ACTIONS(457),
    [anon_sym_u32assertw] = ACTIONS(457),
    [anon_sym_u32cast] = ACTIONS(457),
    [anon_sym_u32split] = ACTIONS(457),
    [anon_sym_u32overflowing_add3] = ACTIONS(457),
    [anon_sym_u32wrapping_add3] = ACTIONS(457),
    [anon_sym_u32overflowing_madd] = ACTIONS(457),
    [anon_sym_u32wrapping_madd] = ACTIONS(457),
    [anon_sym_u32checked_and] = ACTIONS(457),
    [anon_sym_u32checked_or] = ACTIONS(457),
    [anon_sym_u32checked_xor] = ACTIONS(457),
    [anon_sym_u32checked_not] = ACTIONS(457),
    [anon_sym_u32checked_popcnt] = ACTIONS(457),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(457),
    [anon_sym_u32checked_lt] = ACTIONS(459),
    [anon_sym_u32unchecked_lt] = ACTIONS(459),
    [anon_sym_u32checked_lte] = ACTIONS(457),
    [anon_sym_u32unchecked_lte] = ACTIONS(457),
    [anon_sym_u32checked_gt] = ACTIONS(459),
    [anon_sym_u32unchecked_gt] = ACTIONS(459),
    [anon_sym_u32checked_gte] = ACTIONS(457),
    [anon_sym_u32unchecked_gte] = ACTIONS(457),
    [anon_sym_u32checked_min] = ACTIONS(457),
    [anon_sym_u32unchecked_min] = ACTIONS(457),
    [anon_sym_u32checked_max] = ACTIONS(457),
    [anon_sym_u32unchecked_max] = ACTIONS(457),
    [anon_sym_drop] = ACTIONS(459),
    [anon_sym_dropw] = ACTIONS(457),
    [anon_sym_padw] = ACTIONS(457),
    [anon_sym_swapdw] = ACTIONS(457),
    [anon_sym_cswap] = ACTIONS(459),
    [anon_sym_cswapw] = ACTIONS(457),
    [anon_sym_cdrop] = ACTIONS(459),
    [anon_sym_cdropw] = ACTIONS(457),
    [anon_sym_sdepth] = ACTIONS(457),
    [anon_sym_mem_stream] = ACTIONS(457),
    [anon_sym_adv_pipe] = ACTIONS(457),
    [anon_sym_adv_loadw] = ACTIONS(457),
    [anon_sym_hmerge] = ACTIONS(457),
    [anon_sym_hperm] = ACTIONS(457),
    [anon_sym_mtree_get] = ACTIONS(457),
    [anon_sym_mtree_set] = ACTIONS(457),
    [anon_sym_mtree_cwm] = ACTIONS(457),
    [anon_sym_caller] = ACTIONS(457),
    [anon_sym_is_odd] = ACTIONS(457),
    [anon_sym_assert_eqw] = ACTIONS(457),
    [anon_sym_clk] = ACTIONS(457),
    [anon_sym_fri_ext2fold4] = ACTIONS(457),
    [anon_sym_hash] = ACTIONS(457),
    [anon_sym_adv] = ACTIONS(459),
    [anon_sym_exp] = ACTIONS(457),
    [anon_sym_u32assert] = ACTIONS(459),
    [anon_sym_add] = ACTIONS(457),
    [anon_sym_sub] = ACTIONS(457),
    [anon_sym_mul] = ACTIONS(457),
    [anon_sym_eq] = ACTIONS(459),
    [anon_sym_neq] = ACTIONS(457),
    [anon_sym_div] = ACTIONS(457),
    [anon_sym_mem_load] = ACTIONS(459),
    [anon_sym_mem_loadw] = ACTIONS(457),
    [anon_sym_mem_store] = ACTIONS(459),
    [anon_sym_mem_storew] = ACTIONS(457),
    [anon_sym_u32checked_add] = ACTIONS(457),
    [anon_sym_u32wrapping_add] = ACTIONS(459),
    [anon_sym_u32overflowing_add] = ACTIONS(459),
    [anon_sym_u32checked_sub] = ACTIONS(457),
    [anon_sym_u32wrapping_sub] = ACTIONS(457),
    [anon_sym_u32overflowing_sub] = ACTIONS(457),
    [anon_sym_u32checked_mul] = ACTIONS(457),
    [anon_sym_u32wrapping_mul] = ACTIONS(457),
    [anon_sym_u32overflowing_mul] = ACTIONS(457),
    [anon_sym_u32checked_div] = ACTIONS(459),
    [anon_sym_u32unchecked_div] = ACTIONS(459),
    [anon_sym_u32checked_mod] = ACTIONS(457),
    [anon_sym_u32unchecked_mod] = ACTIONS(457),
    [anon_sym_u32checked_divmod] = ACTIONS(457),
    [anon_sym_u32unchecked_divmod] = ACTIONS(457),
    [anon_sym_u32checked_shr] = ACTIONS(457),
    [anon_sym_u32unchecked_shr] = ACTIONS(457),
    [anon_sym_u32checked_shl] = ACTIONS(457),
    [anon_sym_u32unchecked_shl] = ACTIONS(457),
    [anon_sym_u32checked_rotr] = ACTIONS(457),
    [anon_sym_u32unchecked_rotr] = ACTIONS(457),
    [anon_sym_u32checked_rotl] = ACTIONS(457),
    [anon_sym_u32unchecked_rotl] = ACTIONS(457),
    [anon_sym_u32checked_eq] = ACTIONS(457),
    [anon_sym_u32checked_neq] = ACTIONS(457),
    [anon_sym_locaddr] = ACTIONS(457),
    [anon_sym_loc_load] = ACTIONS(459),
    [anon_sym_loc_loadw] = ACTIONS(457),
    [anon_sym_loc_store] = ACTIONS(459),
    [anon_sym_loc_storew] = ACTIONS(457),
    [anon_sym_dup] = ACTIONS(459),
    [anon_sym_swap] = ACTIONS(459),
    [anon_sym_movup] = ACTIONS(459),
    [anon_sym_movdn] = ACTIONS(459),
    [anon_sym_adv_push] = ACTIONS(457),
    [anon_sym_dupw] = ACTIONS(457),
    [anon_sym_swapw] = ACTIONS(457),
    [anon_sym_movupw] = ACTIONS(457),
    [anon_sym_movdnw] = ACTIONS(457),
    [anon_sym_push] = ACTIONS(457),
    [anon_sym_if] = ACTIONS(457),
    [anon_sym_while] = ACTIONS(457),
    [anon_sym_repeat] = ACTIONS(457),
    [sym__end] = ACTIONS(457),
  },
  [75] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(461),
    [anon_sym_call] = ACTIONS(463),
    [anon_sym_syscall] = ACTIONS(461),
    [anon_sym_assert] = ACTIONS(463),
    [anon_sym_assertz] = ACTIONS(461),
    [anon_sym_assert_eq] = ACTIONS(463),
    [anon_sym_neg] = ACTIONS(461),
    [anon_sym_inv] = ACTIONS(461),
    [anon_sym_pow2] = ACTIONS(461),
    [anon_sym_not] = ACTIONS(461),
    [anon_sym_and] = ACTIONS(461),
    [anon_sym_or] = ACTIONS(461),
    [anon_sym_xor] = ACTIONS(461),
    [anon_sym_lt] = ACTIONS(463),
    [anon_sym_lte] = ACTIONS(461),
    [anon_sym_gt] = ACTIONS(463),
    [anon_sym_gte] = ACTIONS(461),
    [anon_sym_eqw] = ACTIONS(461),
    [anon_sym_ext2add] = ACTIONS(461),
    [anon_sym_ext2sub] = ACTIONS(461),
    [anon_sym_ext2mul] = ACTIONS(461),
    [anon_sym_ext2div] = ACTIONS(461),
    [anon_sym_ext2neg] = ACTIONS(461),
    [anon_sym_ext2inv] = ACTIONS(461),
    [anon_sym_u32test] = ACTIONS(463),
    [anon_sym_u32testw] = ACTIONS(461),
    [anon_sym_u32assertw] = ACTIONS(461),
    [anon_sym_u32cast] = ACTIONS(461),
    [anon_sym_u32split] = ACTIONS(461),
    [anon_sym_u32overflowing_add3] = ACTIONS(461),
    [anon_sym_u32wrapping_add3] = ACTIONS(461),
    [anon_sym_u32overflowing_madd] = ACTIONS(461),
    [anon_sym_u32wrapping_madd] = ACTIONS(461),
    [anon_sym_u32checked_and] = ACTIONS(461),
    [anon_sym_u32checked_or] = ACTIONS(461),
    [anon_sym_u32checked_xor] = ACTIONS(461),
    [anon_sym_u32checked_not] = ACTIONS(461),
    [anon_sym_u32checked_popcnt] = ACTIONS(461),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(461),
    [anon_sym_u32checked_lt] = ACTIONS(463),
    [anon_sym_u32unchecked_lt] = ACTIONS(463),
    [anon_sym_u32checked_lte] = ACTIONS(461),
    [anon_sym_u32unchecked_lte] = ACTIONS(461),
    [anon_sym_u32checked_gt] = ACTIONS(463),
    [anon_sym_u32unchecked_gt] = ACTIONS(463),
    [anon_sym_u32checked_gte] = ACTIONS(461),
    [anon_sym_u32unchecked_gte] = ACTIONS(461),
    [anon_sym_u32checked_min] = ACTIONS(461),
    [anon_sym_u32unchecked_min] = ACTIONS(461),
    [anon_sym_u32checked_max] = ACTIONS(461),
    [anon_sym_u32unchecked_max] = ACTIONS(461),
    [anon_sym_drop] = ACTIONS(463),
    [anon_sym_dropw] = ACTIONS(461),
    [anon_sym_padw] = ACTIONS(461),
    [anon_sym_swapdw] = ACTIONS(461),
    [anon_sym_cswap] = ACTIONS(463),
    [anon_sym_cswapw] = ACTIONS(461),
    [anon_sym_cdrop] = ACTIONS(463),
    [anon_sym_cdropw] = ACTIONS(461),
    [anon_sym_sdepth] = ACTIONS(461),
    [anon_sym_mem_stream] = ACTIONS(461),
    [anon_sym_adv_pipe] = ACTIONS(461),
    [anon_sym_adv_loadw] = ACTIONS(461),
    [anon_sym_hmerge] = ACTIONS(461),
    [anon_sym_hperm] = ACTIONS(461),
    [anon_sym_mtree_get] = ACTIONS(461),
    [anon_sym_mtree_set] = ACTIONS(461),
    [anon_sym_mtree_cwm] = ACTIONS(461),
    [anon_sym_caller] = ACTIONS(461),
    [anon_sym_is_odd] = ACTIONS(461),
    [anon_sym_assert_eqw] = ACTIONS(461),
    [anon_sym_clk] = ACTIONS(461),
    [anon_sym_fri_ext2fold4] = ACTIONS(461),
    [anon_sym_hash] = ACTIONS(461),
    [anon_sym_adv] = ACTIONS(463),
    [anon_sym_exp] = ACTIONS(461),
    [anon_sym_u32assert] = ACTIONS(463),
    [anon_sym_add] = ACTIONS(461),
    [anon_sym_sub] = ACTIONS(461),
    [anon_sym_mul] = ACTIONS(461),
    [anon_sym_eq] = ACTIONS(463),
    [anon_sym_neq] = ACTIONS(461),
    [anon_sym_div] = ACTIONS(461),
    [anon_sym_mem_load] = ACTIONS(463),
    [anon_sym_mem_loadw] = ACTIONS(461),
    [anon_sym_mem_store] = ACTIONS(463),
    [anon_sym_mem_storew] = ACTIONS(461),
    [anon_sym_u32checked_add] = ACTIONS(461),
    [anon_sym_u32wrapping_add] = ACTIONS(463),
    [anon_sym_u32overflowing_add] = ACTIONS(463),
    [anon_sym_u32checked_sub] = ACTIONS(461),
    [anon_sym_u32wrapping_sub] = ACTIONS(461),
    [anon_sym_u32overflowing_sub] = ACTIONS(461),
    [anon_sym_u32checked_mul] = ACTIONS(461),
    [anon_sym_u32wrapping_mul] = ACTIONS(461),
    [anon_sym_u32overflowing_mul] = ACTIONS(461),
    [anon_sym_u32checked_div] = ACTIONS(463),
    [anon_sym_u32unchecked_div] = ACTIONS(463),
    [anon_sym_u32checked_mod] = ACTIONS(461),
    [anon_sym_u32unchecked_mod] = ACTIONS(461),
    [anon_sym_u32checked_divmod] = ACTIONS(461),
    [anon_sym_u32unchecked_divmod] = ACTIONS(461),
    [anon_sym_u32checked_shr] = ACTIONS(461),
    [anon_sym_u32unchecked_shr] = ACTIONS(461),
    [anon_sym_u32checked_shl] = ACTIONS(461),
    [anon_sym_u32unchecked_shl] = ACTIONS(461),
    [anon_sym_u32checked_rotr] = ACTIONS(461),
    [anon_sym_u32unchecked_rotr] = ACTIONS(461),
    [anon_sym_u32checked_rotl] = ACTIONS(461),
    [anon_sym_u32unchecked_rotl] = ACTIONS(461),
    [anon_sym_u32checked_eq] = ACTIONS(461),
    [anon_sym_u32checked_neq] = ACTIONS(461),
    [anon_sym_locaddr] = ACTIONS(461),
    [anon_sym_loc_load] = ACTIONS(463),
    [anon_sym_loc_loadw] = ACTIONS(461),
    [anon_sym_loc_store] = ACTIONS(463),
    [anon_sym_loc_storew] = ACTIONS(461),
    [anon_sym_dup] = ACTIONS(463),
    [anon_sym_swap] = ACTIONS(463),
    [anon_sym_movup] = ACTIONS(463),
    [anon_sym_movdn] = ACTIONS(463),
    [anon_sym_adv_push] = ACTIONS(461),
    [anon_sym_dupw] = ACTIONS(461),
    [anon_sym_swapw] = ACTIONS(461),
    [anon_sym_movupw] = ACTIONS(461),
    [anon_sym_movdnw] = ACTIONS(461),
    [anon_sym_push] = ACTIONS(461),
    [anon_sym_if] = ACTIONS(461),
    [anon_sym_while] = ACTIONS(461),
    [anon_sym_repeat] = ACTIONS(461),
    [sym__end] = ACTIONS(461),
  },
  [76] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_exec] = ACTIONS(465),
    [anon_sym_call] = ACTIONS(467),
    [anon_sym_syscall] = ACTIONS(465),
    [anon_sym_assert] = ACTIONS(467),
    [anon_sym_assertz] = ACTIONS(465),
    [anon_sym_assert_eq] = ACTIONS(467),
    [anon_sym_neg] = ACTIONS(465),
    [anon_sym_inv] = ACTIONS(465),
    [anon_sym_pow2] = ACTIONS(465),
    [anon_sym_not] = ACTIONS(465),
    [anon_sym_and] = ACTIONS(465),
    [anon_sym_or] = ACTIONS(465),
    [anon_sym_xor] = ACTIONS(465),
    [anon_sym_lt] = ACTIONS(467),
    [anon_sym_lte] = ACTIONS(465),
    [anon_sym_gt] = ACTIONS(467),
    [anon_sym_gte] = ACTIONS(465),
    [anon_sym_eqw] = ACTIONS(465),
    [anon_sym_ext2add] = ACTIONS(465),
    [anon_sym_ext2sub] = ACTIONS(465),
    [anon_sym_ext2mul] = ACTIONS(465),
    [anon_sym_ext2div] = ACTIONS(465),
    [anon_sym_ext2neg] = ACTIONS(465),
    [anon_sym_ext2inv] = ACTIONS(465),
    [anon_sym_u32test] = ACTIONS(467),
    [anon_sym_u32testw] = ACTIONS(465),
    [anon_sym_u32assertw] = ACTIONS(465),
    [anon_sym_u32cast] = ACTIONS(465),
    [anon_sym_u32split] = ACTIONS(465),
    [anon_sym_u32overflowing_add3] = ACTIONS(465),
    [anon_sym_u32wrapping_add3] = ACTIONS(465),
    [anon_sym_u32overflowing_madd] = ACTIONS(465),
    [anon_sym_u32wrapping_madd] = ACTIONS(465),
    [anon_sym_u32checked_and] = ACTIONS(465),
    [anon_sym_u32checked_or] = ACTIONS(465),
    [anon_sym_u32checked_xor] = ACTIONS(465),
    [anon_sym_u32checked_not] = ACTIONS(465),
    [anon_sym_u32checked_popcnt] = ACTIONS(465),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(465),
    [anon_sym_u32checked_lt] = ACTIONS(467),
    [anon_sym_u32unchecked_lt] = ACTIONS(467),
    [anon_sym_u32checked_lte] = ACTIONS(465),
    [anon_sym_u32unchecked_lte] = ACTIONS(465),
    [anon_sym_u32checked_gt] = ACTIONS(467),
    [anon_sym_u32unchecked_gt] = ACTIONS(467),
    [anon_sym_u32checked_gte] = ACTIONS(465),
    [anon_sym_u32unchecked_gte] = ACTIONS(465),
    [anon_sym_u32checked_min] = ACTIONS(465),
    [anon_sym_u32unchecked_min] = ACTIONS(465),
    [anon_sym_u32checked_max] = ACTIONS(465),
    [anon_sym_u32unchecked_max] = ACTIONS(465),
    [anon_sym_drop] = ACTIONS(467),
    [anon_sym_dropw] = ACTIONS(465),
    [anon_sym_padw] = ACTIONS(465),
    [anon_sym_swapdw] = ACTIONS(465),
    [anon_sym_cswap] = ACTIONS(467),
    [anon_sym_cswapw] = ACTIONS(465),
    [anon_sym_cdrop] = ACTIONS(467),
    [anon_sym_cdropw] = ACTIONS(465),
    [anon_sym_sdepth] = ACTIONS(465),
    [anon_sym_mem_stream] = ACTIONS(465),
    [anon_sym_adv_pipe] = ACTIONS(465),
    [anon_sym_adv_loadw] = ACTIONS(465),
    [anon_sym_hmerge] = ACTIONS(465),
    [anon_sym_hperm] = ACTIONS(465),
    [anon_sym_mtree_get] = ACTIONS(465),
    [anon_sym_mtree_set] = ACTIONS(465),
    [anon_sym_mtree_cwm] = ACTIONS(465),
    [anon_sym_caller] = ACTIONS(465),
    [anon_sym_is_odd] = ACTIONS(465),
    [anon_sym_assert_eqw] = ACTIONS(465),
    [anon_sym_clk] = ACTIONS(465),
    [anon_sym_fri_ext2fold4] = ACTIONS(465),
    [anon_sym_hash] = ACTIONS(465),
    [anon_sym_adv] = ACTIONS(467),
    [anon_sym_exp] = ACTIONS(465),
    [anon_sym_u32assert] = ACTIONS(467),
    [anon_sym_add] = ACTIONS(465),
    [anon_sym_sub] = ACTIONS(465),
    [anon_sym_mul] = ACTIONS(465),
    [anon_sym_eq] = ACTIONS(467),
    [anon_sym_neq] = ACTIONS(465),
    [anon_sym_div] = ACTIONS(465),
    [anon_sym_mem_load] = ACTIONS(467),
    [anon_sym_mem_loadw] = ACTIONS(465),
    [anon_sym_mem_store] = ACTIONS(467),
    [anon_sym_mem_storew] = ACTIONS(465),
    [anon_sym_u32checked_add] = ACTIONS(465),
    [anon_sym_u32wrapping_add] = ACTIONS(467),
    [anon_sym_u32overflowing_add] = ACTIONS(467),
    [anon_sym_u32checked_sub] = ACTIONS(465),
    [anon_sym_u32wrapping_sub] = ACTIONS(465),
    [anon_sym_u32overflowing_sub] = ACTIONS(465),
    [anon_sym_u32checked_mul] = ACTIONS(465),
    [anon_sym_u32wrapping_mul] = ACTIONS(465),
    [anon_sym_u32overflowing_mul] = ACTIONS(465),
    [anon_sym_u32checked_div] = ACTIONS(467),
    [anon_sym_u32unchecked_div] = ACTIONS(467),
    [anon_sym_u32checked_mod] = ACTIONS(465),
    [anon_sym_u32unchecked_mod] = ACTIONS(465),
    [anon_sym_u32checked_divmod] = ACTIONS(465),
    [anon_sym_u32unchecked_divmod] = ACTIONS(465),
    [anon_sym_u32checked_shr] = ACTIONS(465),
    [anon_sym_u32unchecked_shr] = ACTIONS(465),
    [anon_sym_u32checked_shl] = ACTIONS(465),
    [anon_sym_u32unchecked_shl] = ACTIONS(465),
    [anon_sym_u32checked_rotr] = ACTIONS(465),
    [anon_sym_u32unchecked_rotr] = ACTIONS(465),
    [anon_sym_u32checked_rotl] = ACTIONS(465),
    [anon_sym_u32unchecked_rotl] = ACTIONS(465),
    [anon_sym_u32checked_eq] = ACTIONS(465),
    [anon_sym_u32checked_neq] = ACTIONS(465),
    [anon_sym_locaddr] = ACTIONS(465),
    [anon_sym_loc_load] = ACTIONS(467),
    [anon_sym_loc_loadw] = ACTIONS(465),
    [anon_sym_loc_store] = ACTIONS(467),
    [anon_sym_loc_storew] = ACTIONS(465),
    [anon_sym_dup] = ACTIONS(467),
    [anon_sym_swap] = ACTIONS(467),
    [anon_sym_movup] = ACTIONS(467),
    [anon_sym_movdn] = ACTIONS(467),
    [anon_sym_adv_push] = ACTIONS(465),
    [anon_sym_dupw] = ACTIONS(465),
    [anon_sym_swapw] = ACTIONS(465),
    [anon_sym_movupw] = ACTIONS(465),
    [anon_sym_movdnw] = ACTIONS(465),
    [anon_sym_push] = ACTIONS(465),
    [anon_sym_if] = ACTIONS(465),
    [anon_sym_while] = ACTIONS(465),
    [anon_sym_repeat] = ACTIONS(465),
    [sym__end] = ACTIONS(465),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_const,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_proc,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      sym__begin,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__proc,
    STATE(10), 1,
      sym__export,
    STATE(112), 1,
      sym_main,
    STATE(84), 2,
      sym_const,
      aux_sym_source_file_repeat2,
    STATE(90), 2,
      sym_use,
      aux_sym_source_file_repeat1,
    STATE(86), 3,
      sym_export,
      sym_proc,
      aux_sym_source_file_repeat3,
  [44] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_1,
    ACTIONS(473), 15,
      anon_sym_2,
      anon_sym_0,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
  [68] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_1,
    ACTIONS(477), 15,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
      anon_sym_16,
  [92] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_1,
    ACTIONS(481), 14,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
  [115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 14,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
  [135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 14,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_10,
      anon_sym_11,
      anon_sym_12,
      anon_sym_13,
      anon_sym_14,
      anon_sym_15,
  [155] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_const,
    ACTIONS(11), 1,
      anon_sym_proc,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      sym__begin,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__proc,
    STATE(10), 1,
      sym__export,
    STATE(112), 1,
      sym_main,
    STATE(92), 2,
      sym_const,
      aux_sym_source_file_repeat2,
    STATE(86), 3,
      sym_export,
      sym_proc,
      aux_sym_source_file_repeat3,
  [192] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_const,
    ACTIONS(11), 1,
      anon_sym_proc,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      sym__begin,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__proc,
    STATE(10), 1,
      sym__export,
    STATE(115), 1,
      sym_main,
    STATE(92), 2,
      sym_const,
      aux_sym_source_file_repeat2,
    STATE(87), 3,
      sym_export,
      sym_proc,
      aux_sym_source_file_repeat3,
  [229] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_proc,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      sym__begin,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__proc,
    STATE(10), 1,
      sym__export,
    STATE(112), 1,
      sym_main,
    STATE(88), 3,
      sym_export,
      sym_proc,
      aux_sym_source_file_repeat3,
  [259] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_proc,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      sym__begin,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__proc,
    STATE(10), 1,
      sym__export,
    STATE(115), 1,
      sym_main,
    STATE(88), 3,
      sym_export,
      sym_proc,
      aux_sym_source_file_repeat3,
  [289] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_proc,
    ACTIONS(13), 1,
      anon_sym_export,
    ACTIONS(15), 1,
      sym__begin,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__proc,
    STATE(10), 1,
      sym__export,
    STATE(136), 1,
      sym_main,
    STATE(88), 3,
      sym_export,
      sym_proc,
      aux_sym_source_file_repeat3,
  [319] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_proc,
    ACTIONS(496), 1,
      anon_sym_export,
    STATE(9), 1,
      sym__proc,
    STATE(10), 1,
      sym__export,
    ACTIONS(491), 2,
      ts_builtin_sym_end,
      sym__begin,
    STATE(88), 3,
      sym_export,
      sym_proc,
      aux_sym_source_file_repeat3,
  [344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      aux_sym__path_repeat1,
    ACTIONS(499), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_use,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_use,
    STATE(90), 2,
      sym_use,
      aux_sym_source_file_repeat1,
    ACTIONS(503), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      aux_sym__path_repeat1,
    ACTIONS(508), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_use,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_const,
    STATE(92), 2,
      sym_const,
      aux_sym_source_file_repeat2,
    ACTIONS(513), 4,
      ts_builtin_sym_end,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_use,
      anon_sym_COLON_COLON,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_use,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_mem,
    ACTIONS(520), 4,
      anon_sym_ext2inv,
      anon_sym_u64div,
      anon_sym_keyval,
      anon_sym_ext2intt,
  [453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 4,
      ts_builtin_sym_end,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 4,
      ts_builtin_sym_end,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 4,
      ts_builtin_sym_end,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_0,
      anon_sym_3,
  [504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 4,
      ts_builtin_sym_end,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [514] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      sym_uppercase,
    ACTIONS(538), 1,
      anon_sym_0x,
    ACTIONS(540), 1,
      sym_felt,
    STATE(24), 1,
      sym_felt_hex,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 3,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
  [539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 2,
      anon_sym_1,
      anon_sym_2,
  [547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym__label,
    STATE(94), 1,
      sym__path,
  [557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym__push_repeat1,
  [567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COLON_COLON,
    STATE(89), 1,
      aux_sym__path_repeat1,
  [577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 2,
      sym_uppercase,
      sym_u32,
  [585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_2,
      anon_sym_3,
  [593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 2,
      sym_uppercase,
      sym_u16,
  [601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_2,
      anon_sym_3,
  [609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
  [616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_u32,
  [623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym_u8,
  [630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
  [637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_felt,
  [644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym__label,
  [651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_u16,
  [658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_u16,
  [665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_DOT,
  [672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_u32,
  [679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_felt,
  [686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_u,
  [693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__label,
  [700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_felt_hex_token1,
  [707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym__label,
  [714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__label,
  [721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_true,
  [728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_EQ,
  [735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
  [742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
  [749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_DOT,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_DOT,
  [763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_DOT,
  [770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_DOT,
  [777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_DOT,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_DOT,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_DOT,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_DOT,
  [812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DOT,
  [819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__label,
  [826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym__label,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym__label,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym_u32,
  [847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym__proc_name,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__proc_name,
  [861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_true,
  [868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym_uppercase,
  [875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
  [882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
  [889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_DOT,
  [896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
  [903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_DOT,
  [910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_u32,
  [917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(77)] = 0,
  [SMALL_STATE(78)] = 44,
  [SMALL_STATE(79)] = 68,
  [SMALL_STATE(80)] = 92,
  [SMALL_STATE(81)] = 115,
  [SMALL_STATE(82)] = 135,
  [SMALL_STATE(83)] = 155,
  [SMALL_STATE(84)] = 192,
  [SMALL_STATE(85)] = 229,
  [SMALL_STATE(86)] = 259,
  [SMALL_STATE(87)] = 289,
  [SMALL_STATE(88)] = 319,
  [SMALL_STATE(89)] = 344,
  [SMALL_STATE(90)] = 362,
  [SMALL_STATE(91)] = 380,
  [SMALL_STATE(92)] = 398,
  [SMALL_STATE(93)] = 415,
  [SMALL_STATE(94)] = 428,
  [SMALL_STATE(95)] = 440,
  [SMALL_STATE(96)] = 453,
  [SMALL_STATE(97)] = 464,
  [SMALL_STATE(98)] = 474,
  [SMALL_STATE(99)] = 484,
  [SMALL_STATE(100)] = 494,
  [SMALL_STATE(101)] = 504,
  [SMALL_STATE(102)] = 514,
  [SMALL_STATE(103)] = 530,
  [SMALL_STATE(104)] = 539,
  [SMALL_STATE(105)] = 547,
  [SMALL_STATE(106)] = 557,
  [SMALL_STATE(107)] = 567,
  [SMALL_STATE(108)] = 577,
  [SMALL_STATE(109)] = 585,
  [SMALL_STATE(110)] = 593,
  [SMALL_STATE(111)] = 601,
  [SMALL_STATE(112)] = 609,
  [SMALL_STATE(113)] = 616,
  [SMALL_STATE(114)] = 623,
  [SMALL_STATE(115)] = 630,
  [SMALL_STATE(116)] = 637,
  [SMALL_STATE(117)] = 644,
  [SMALL_STATE(118)] = 651,
  [SMALL_STATE(119)] = 658,
  [SMALL_STATE(120)] = 665,
  [SMALL_STATE(121)] = 672,
  [SMALL_STATE(122)] = 679,
  [SMALL_STATE(123)] = 686,
  [SMALL_STATE(124)] = 693,
  [SMALL_STATE(125)] = 700,
  [SMALL_STATE(126)] = 707,
  [SMALL_STATE(127)] = 714,
  [SMALL_STATE(128)] = 721,
  [SMALL_STATE(129)] = 728,
  [SMALL_STATE(130)] = 735,
  [SMALL_STATE(131)] = 742,
  [SMALL_STATE(132)] = 749,
  [SMALL_STATE(133)] = 756,
  [SMALL_STATE(134)] = 763,
  [SMALL_STATE(135)] = 770,
  [SMALL_STATE(136)] = 777,
  [SMALL_STATE(137)] = 784,
  [SMALL_STATE(138)] = 791,
  [SMALL_STATE(139)] = 798,
  [SMALL_STATE(140)] = 805,
  [SMALL_STATE(141)] = 812,
  [SMALL_STATE(142)] = 819,
  [SMALL_STATE(143)] = 826,
  [SMALL_STATE(144)] = 833,
  [SMALL_STATE(145)] = 840,
  [SMALL_STATE(146)] = 847,
  [SMALL_STATE(147)] = 854,
  [SMALL_STATE(148)] = 861,
  [SMALL_STATE(149)] = 868,
  [SMALL_STATE(150)] = 875,
  [SMALL_STATE(151)] = 882,
  [SMALL_STATE(152)] = 889,
  [SMALL_STATE(153)] = 896,
  [SMALL_STATE(154)] = 903,
  [SMALL_STATE(155)] = 910,
  [SMALL_STATE(156)] = 917,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(141),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(140),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(139),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(42),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(42),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(138),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(23),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(137),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(25),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(25),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(26),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(26),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(27),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(27),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(28),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(28),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(29),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(30),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(31),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(32),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(33),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(34),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(35),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(36),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(21),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(106),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(134),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(133),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(132),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__push_repeat1, 2), SHIFT_REPEAT(102),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__push_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__push_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__push, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__push, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movdnw, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movdnw, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syscall, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__felt_inst, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__felt_inst, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_inst, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mem_inst, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__u32_inst, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__u32_inst, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__u16_inst, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__u16_inst, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dup, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dup, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__swap, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__swap, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movup, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movup, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movdn, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movdn, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adv_push, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__adv_push, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dupw, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dupw, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__swapw, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__swapw, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movupw, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movupw, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_felt_hex, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_felt_hex, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_inst, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mem_inst, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assert, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assert, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__felt_inst, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__felt_inst, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adv_inst, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__adv_inst, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adv_mem, 7),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__adv_mem, 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__swap, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__swap, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__u32_inst, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__u32_inst, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__u16_inst, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__u16_inst, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dup, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dup, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proc, 3, .production_id = 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__proc, 3, .production_id = 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export, 3, .production_id = 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__export, 3, .production_id = 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 5),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movdnw, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movdnw, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movupw, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movupw, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__swapw, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__swapw, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dupw, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dupw, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adv_push, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__adv_push, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movdn, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movdn, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movup, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movup, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall, 5),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syscall, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else, 5),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__repeat, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__while, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__while, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export, 5, .production_id = 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__export, 5, .production_id = 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proc, 5, .production_id = 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__proc, 5, .production_id = 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(154),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(152),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2), SHIFT_REPEAT(117),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(120),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3, .production_id = 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 5),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [628] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_masm(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
