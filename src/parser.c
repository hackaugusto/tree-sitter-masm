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
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 51
#define SYMBOL_COUNT 193
#define ALIAS_COUNT 0
#define TOKEN_COUNT 162
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_use = 1,
  anon_sym_exec = 2,
  anon_sym_DOT = 3,
  anon_sym_COLON_COLON = 4,
  anon_sym_call = 5,
  anon_sym_syscall = 6,
  anon_sym_assert = 7,
  anon_sym_assertz = 8,
  anon_sym_assert_eq = 9,
  anon_sym_neg = 10,
  anon_sym_inv = 11,
  anon_sym_pow2 = 12,
  anon_sym_not = 13,
  anon_sym_and = 14,
  anon_sym_or = 15,
  anon_sym_xor = 16,
  anon_sym_lt = 17,
  anon_sym_lte = 18,
  anon_sym_gt = 19,
  anon_sym_gte = 20,
  anon_sym_eqw = 21,
  anon_sym_ext2add = 22,
  anon_sym_ext2sub = 23,
  anon_sym_ext2mul = 24,
  anon_sym_ext2div = 25,
  anon_sym_ext2neg = 26,
  anon_sym_ext2inv = 27,
  anon_sym_u32test = 28,
  anon_sym_u32testw = 29,
  anon_sym_u32assertw = 30,
  anon_sym_u32cast = 31,
  anon_sym_u32split = 32,
  anon_sym_u32overflowing_add3 = 33,
  anon_sym_u32wrapping_add3 = 34,
  anon_sym_u32overflowing_madd = 35,
  anon_sym_u32wrapping_madd = 36,
  anon_sym_u32checked_and = 37,
  anon_sym_u32checked_or = 38,
  anon_sym_u32checked_xor = 39,
  anon_sym_u32checked_not = 40,
  anon_sym_u32checked_popcnt = 41,
  anon_sym_u32unchecked_popcnt = 42,
  anon_sym_u32checked_lt = 43,
  anon_sym_u32unchecked_lt = 44,
  anon_sym_u32checked_lte = 45,
  anon_sym_u32unchecked_lte = 46,
  anon_sym_u32checked_gt = 47,
  anon_sym_u32unchecked_gt = 48,
  anon_sym_u32checked_gte = 49,
  anon_sym_u32unchecked_gte = 50,
  anon_sym_u32checked_min = 51,
  anon_sym_u32unchecked_min = 52,
  anon_sym_u32checked_max = 53,
  anon_sym_u32unchecked_max = 54,
  anon_sym_drop = 55,
  anon_sym_dropw = 56,
  anon_sym_padw = 57,
  anon_sym_swapdw = 58,
  anon_sym_cswap = 59,
  anon_sym_cswapw = 60,
  anon_sym_cdrop = 61,
  anon_sym_cdropw = 62,
  anon_sym_sdepth = 63,
  anon_sym_mem_stream = 64,
  anon_sym_adv_pipe = 65,
  anon_sym_adv_loadw = 66,
  anon_sym_rphash = 67,
  anon_sym_rpperm = 68,
  anon_sym_mtree_get = 69,
  anon_sym_mtree_set = 70,
  anon_sym_mtree_cwm = 71,
  anon_sym_caller = 72,
  anon_sym_adv = 73,
  anon_sym_u64div = 74,
  anon_sym_keyval = 75,
  anon_sym_ext2intt = 76,
  anon_sym_mem = 77,
  anon_sym_exp = 78,
  anon_sym_u = 79,
  anon_sym_u32assert = 80,
  anon_sym_1 = 81,
  anon_sym_2 = 82,
  anon_sym_add = 83,
  anon_sym_sub = 84,
  anon_sym_mul = 85,
  anon_sym_eq = 86,
  anon_sym_neq = 87,
  anon_sym_u32checked_add = 88,
  anon_sym_u32wrapping_add = 89,
  anon_sym_u32overflowing_add = 90,
  anon_sym_u32checked_sub = 91,
  anon_sym_u32wrapping_sub = 92,
  anon_sym_u32overflowing_sub = 93,
  anon_sym_u32checked_mul = 94,
  anon_sym_u32wrapping_mul = 95,
  anon_sym_u32overflowing_mul = 96,
  anon_sym_u32checked_div = 97,
  anon_sym_u32unchecked_div = 98,
  anon_sym_u32checked_mod = 99,
  anon_sym_u32unchecked_mod = 100,
  anon_sym_u32checked_divmod = 101,
  anon_sym_u32unchecked_divmod = 102,
  anon_sym_u32checked_shr = 103,
  anon_sym_u32unchecked_shr = 104,
  anon_sym_u32checked_shl = 105,
  anon_sym_u32unchecked_shl = 106,
  anon_sym_u32checked_rotr = 107,
  anon_sym_u32unchecked_rotr = 108,
  anon_sym_u32checked_rotl = 109,
  anon_sym_u32unchecked_rotl = 110,
  anon_sym_u32checked_eq = 111,
  anon_sym_u32checked_neq = 112,
  anon_sym_mem_load = 113,
  anon_sym_mem_loadw = 114,
  anon_sym_mem_store = 115,
  anon_sym_mem_storew = 116,
  anon_sym_locaddr = 117,
  anon_sym_loc_load = 118,
  anon_sym_loc_loadw = 119,
  anon_sym_loc_store = 120,
  anon_sym_loc_storew = 121,
  anon_sym_dup = 122,
  anon_sym_0 = 123,
  anon_sym_3 = 124,
  anon_sym_4 = 125,
  anon_sym_5 = 126,
  anon_sym_6 = 127,
  anon_sym_7 = 128,
  anon_sym_8 = 129,
  anon_sym_9 = 130,
  anon_sym_10 = 131,
  anon_sym_11 = 132,
  anon_sym_12 = 133,
  anon_sym_13 = 134,
  anon_sym_14 = 135,
  anon_sym_15 = 136,
  anon_sym_swap = 137,
  anon_sym_movup = 138,
  anon_sym_movdn = 139,
  anon_sym_adv_push = 140,
  anon_sym_16 = 141,
  anon_sym_dupw = 142,
  anon_sym_swapw = 143,
  anon_sym_movupw = 144,
  anon_sym_movdnw = 145,
  anon_sym_push = 146,
  anon_sym_proc = 147,
  anon_sym_export = 148,
  anon_sym_if = 149,
  anon_sym_true = 150,
  sym__else = 151,
  anon_sym_while = 152,
  anon_sym_repeat = 153,
  sym__begin = 154,
  sym__end = 155,
  sym__label = 156,
  sym__proc_name = 157,
  sym__felt = 158,
  sym__u32 = 159,
  sym__u16 = 160,
  sym__u8 = 161,
  sym_source_file = 162,
  sym_use = 163,
  sym_export = 164,
  sym_proc = 165,
  sym_main = 166,
  sym_if = 167,
  sym_if_else = 168,
  sym_while = 169,
  sym_repeat = 170,
  sym_exec = 171,
  sym_call = 172,
  sym_syscall = 173,
  sym__block = 174,
  sym_opcode = 175,
  sym__simple_inst = 176,
  sym__adv_inst = 177,
  sym__adv_mem = 178,
  sym__exp = 179,
  sym__assert = 180,
  sym__felt_inst = 181,
  sym__u32_inst = 182,
  sym__proc = 183,
  sym__export = 184,
  sym__if = 185,
  sym__while = 186,
  sym__repeat = 187,
  sym__path = 188,
  aux_sym_source_file_repeat1 = 189,
  aux_sym_source_file_repeat2 = 190,
  aux_sym_export_repeat1 = 191,
  aux_sym__path_repeat1 = 192,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_use] = "use",
  [anon_sym_exec] = "exec",
  [anon_sym_DOT] = ".",
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
  [anon_sym_rphash] = "rphash",
  [anon_sym_rpperm] = "rpperm",
  [anon_sym_mtree_get] = "mtree_get",
  [anon_sym_mtree_set] = "mtree_set",
  [anon_sym_mtree_cwm] = "mtree_cwm",
  [anon_sym_caller] = "caller",
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
  [anon_sym_mem_load] = "mem_load",
  [anon_sym_mem_loadw] = "mem_loadw",
  [anon_sym_mem_store] = "mem_store",
  [anon_sym_mem_storew] = "mem_storew",
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
  [sym__felt] = "_felt",
  [sym__u32] = "_u32",
  [sym__u16] = "_u16",
  [sym__u8] = "_u8",
  [sym_source_file] = "source_file",
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
  [sym__u32_inst] = "_u32_inst",
  [sym__proc] = "_proc",
  [sym__export] = "_export",
  [sym__if] = "_if",
  [sym__while] = "_while",
  [sym__repeat] = "_repeat",
  [sym__path] = "_path",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_export_repeat1] = "export_repeat1",
  [aux_sym__path_repeat1] = "_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [anon_sym_rphash] = anon_sym_rphash,
  [anon_sym_rpperm] = anon_sym_rpperm,
  [anon_sym_mtree_get] = anon_sym_mtree_get,
  [anon_sym_mtree_set] = anon_sym_mtree_set,
  [anon_sym_mtree_cwm] = anon_sym_mtree_cwm,
  [anon_sym_caller] = anon_sym_caller,
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
  [anon_sym_mem_load] = anon_sym_mem_load,
  [anon_sym_mem_loadw] = anon_sym_mem_loadw,
  [anon_sym_mem_store] = anon_sym_mem_store,
  [anon_sym_mem_storew] = anon_sym_mem_storew,
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
  [sym__felt] = sym__felt,
  [sym__u32] = sym__u32,
  [sym__u16] = sym__u16,
  [sym__u8] = sym__u8,
  [sym_source_file] = sym_source_file,
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
  [sym__u32_inst] = sym__u32_inst,
  [sym__proc] = sym__proc,
  [sym__export] = sym__export,
  [sym__if] = sym__if,
  [sym__while] = sym__while,
  [sym__repeat] = sym__repeat,
  [sym__path] = sym__path,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_export_repeat1] = aux_sym_export_repeat1,
  [aux_sym__path_repeat1] = aux_sym__path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_DOT] = {
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
  [anon_sym_rphash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpperm] = {
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
  [sym__felt] = {
    .visible = false,
    .named = true,
  },
  [sym__u32] = {
    .visible = false,
    .named = true,
  },
  [sym__u16] = {
    .visible = false,
    .named = true,
  },
  [sym__u8] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
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
  [sym__u32_inst] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__path_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(325);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '0') ADVANCE(454);
      if (lookahead == '1') ADVANCE(411);
      if (lookahead == '2') ADVANCE(413);
      if (lookahead == '3') ADVANCE(455);
      if (lookahead == '4') ADVANCE(456);
      if (lookahead == '5') ADVANCE(457);
      if (lookahead == '6') ADVANCE(458);
      if (lookahead == '7') ADVANCE(459);
      if (lookahead == '8') ADVANCE(460);
      if (lookahead == '9') ADVANCE(461);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'g') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead == 'w') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'g') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(410);
      if (lookahead == '2') ADVANCE(412);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(337);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(149);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(329);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(184);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'g') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(213);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == 'u') ADVANCE(197);
      if (lookahead == 'w') ADVANCE(259);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(415);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(348);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(422);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(423);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(424);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(414);
      if (lookahead == 'v') ADVANCE(398);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(414);
      if (lookahead == 'v') ADVANCE(399);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(419);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(430);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(420);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(431);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(432);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(433);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(262);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == 'y') ADVANCE(262);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == 'g') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(480);
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(335);
      if (lookahead == 'q') ADVANCE(418);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(351);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(477);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(392);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(388);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(471);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(171);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 160:
      if (lookahead == 'k') ADVANCE(125);
      END_STATE();
    case 161:
      if (lookahead == 'k') ADVANCE(127);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(349);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(437);
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'q') ADVANCE(417);
      if (lookahead == 'x') ADVANCE(112);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'q') ADVANCE(417);
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(404);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(393);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(396);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(389);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(453);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(469);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 237:
      if (lookahead == 'q') ADVANCE(334);
      END_STATE();
    case 238:
      if (lookahead == 'q') ADVANCE(442);
      END_STATE();
    case 239:
      if (lookahead == 'q') ADVANCE(443);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == 'v') ADVANCE(352);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 302:
      if (lookahead == 'v') ADVANCE(336);
      END_STATE();
    case 303:
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 304:
      if (lookahead == 'v') ADVANCE(350);
      END_STATE();
    case 305:
      if (lookahead == 'v') ADVANCE(352);
      END_STATE();
    case 306:
      if (lookahead == 'v') ADVANCE(400);
      END_STATE();
    case 307:
      if (lookahead == 'v') ADVANCE(428);
      END_STATE();
    case 308:
      if (lookahead == 'v') ADVANCE(429);
      END_STATE();
    case 309:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 310:
      if (lookahead == 'v') ADVANCE(128);
      END_STATE();
    case 311:
      if (lookahead == 'w') ADVANCE(382);
      END_STATE();
    case 312:
      if (lookahead == 'w') ADVANCE(383);
      END_STATE();
    case 313:
      if (lookahead == 'w') ADVANCE(391);
      END_STATE();
    case 314:
      if (lookahead == 'w') ADVANCE(4);
      END_STATE();
    case 315:
      if (lookahead == 'w') ADVANCE(187);
      END_STATE();
    case 316:
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 317:
      if (lookahead == 'w') ADVANCE(159);
      END_STATE();
    case 318:
      if (lookahead == 'x') ADVANCE(234);
      END_STATE();
    case 319:
      if (lookahead == 'x') ADVANCE(378);
      END_STATE();
    case 320:
      if (lookahead == 'x') ADVANCE(379);
      END_STATE();
    case 321:
      if (lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 322:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(322)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 323:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(323)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 324:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(487);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_syscall);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'z') ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_assertz);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_assert_eq);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_inv);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_pow2);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_lt);
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_lte);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_gt);
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_gte);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_eqw);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_ext2add);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_ext2sub);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_ext2mul);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_ext2div);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_ext2neg);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_ext2inv);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_u32test);
      if (lookahead == 'w') ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_u32testw);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_u32assertw);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_u32cast);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_u32split);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_u32overflowing_add3);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_u32wrapping_add3);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_u32overflowing_madd);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_u32wrapping_madd);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_u32checked_and);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_u32checked_or);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_u32checked_xor);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_u32checked_not);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_u32checked_popcnt);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_u32unchecked_popcnt);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_u32checked_lt);
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_u32unchecked_lt);
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_u32checked_lte);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_u32unchecked_lte);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_u32checked_gt);
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_u32unchecked_gt);
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_u32checked_gte);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_u32unchecked_gte);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_u32checked_min);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_u32unchecked_min);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_u32checked_max);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_u32unchecked_max);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_drop);
      if (lookahead == 'w') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_dropw);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_padw);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_swapdw);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_cswap);
      if (lookahead == 'w') ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_cswapw);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_cdrop);
      if (lookahead == 'w') ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_cdropw);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_sdepth);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_mem_stream);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_adv_pipe);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_adv_loadw);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_rphash);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_rpperm);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_mtree_get);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_mtree_set);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_mtree_cwm);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_caller);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_adv);
      if (lookahead == '_') ADVANCE(175);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_adv);
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_u64div);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_keyval);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_ext2intt);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_mem);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_mem);
      if (lookahead == '_') ADVANCE(184);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_exp);
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_u32assert);
      if (lookahead == 'w') ADVANCE(355);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '0') ADVANCE(462);
      if (lookahead == '1') ADVANCE(463);
      if (lookahead == '2') ADVANCE(464);
      if (lookahead == '3') ADVANCE(465);
      if (lookahead == '4') ADVANCE(466);
      if (lookahead == '5') ADVANCE(467);
      if (lookahead == '6') ADVANCE(472);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_eq);
      if (lookahead == 'w') ADVANCE(346);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_neq);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_u32checked_add);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_u32wrapping_add);
      if (lookahead == '3') ADVANCE(359);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_u32overflowing_add);
      if (lookahead == '3') ADVANCE(358);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_u32checked_sub);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_u32wrapping_sub);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_u32overflowing_sub);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_u32checked_mul);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_u32wrapping_mul);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_u32overflowing_mul);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_u32checked_div);
      if (lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_u32unchecked_div);
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_u32checked_mod);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_u32unchecked_mod);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_u32checked_divmod);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_u32unchecked_divmod);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_u32checked_shr);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_u32unchecked_shr);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_u32checked_shl);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_u32unchecked_shl);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_u32checked_rotr);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_u32unchecked_rotr);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_u32checked_rotl);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_u32unchecked_rotl);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_u32checked_eq);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_u32checked_neq);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_mem_load);
      if (lookahead == 'w') ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_mem_loadw);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_mem_store);
      if (lookahead == 'w') ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_mem_storew);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_locaddr);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_loc_load);
      if (lookahead == 'w') ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_loc_loadw);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_loc_store);
      if (lookahead == 'w') ADVANCE(452);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_loc_storew);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_dup);
      if (lookahead == 'w') ADVANCE(473);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_swap);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == 'w') ADVANCE(474);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_movup);
      if (lookahead == 'w') ADVANCE(475);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_movdn);
      if (lookahead == 'w') ADVANCE(476);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_adv_push);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_dupw);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_swapw);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_movupw);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_movdnw);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__else);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__begin);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__label);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__proc_name);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(488);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(490);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(491);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(492);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(493);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(494);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(495);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(497);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(498);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(502);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(527);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__proc_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
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
      ACCEPT_TOKEN(sym__felt);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(594);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(602);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(604);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(605);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__felt);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__u32);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(609);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(610);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(611);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__u32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__u16);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__u16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(622);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__u8);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__u8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__u8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
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
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 322},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 322},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 296},
  [80] = {.lex_state = 323},
  [81] = {.lex_state = 296},
  [82] = {.lex_state = 322},
  [83] = {.lex_state = 322},
  [84] = {.lex_state = 322},
  [85] = {.lex_state = 322},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 322},
  [93] = {.lex_state = 322},
  [94] = {.lex_state = 322},
  [95] = {.lex_state = 296},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 323},
  [100] = {.lex_state = 323},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 296},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [anon_sym_rphash] = ACTIONS(1),
    [anon_sym_rpperm] = ACTIONS(1),
    [anon_sym_mtree_get] = ACTIONS(1),
    [anon_sym_mtree_set] = ACTIONS(1),
    [anon_sym_mtree_cwm] = ACTIONS(1),
    [anon_sym_caller] = ACTIONS(1),
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
    [sym__felt] = ACTIONS(1),
    [sym__u32] = ACTIONS(1),
    [sym__u16] = ACTIONS(1),
    [sym__u8] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(103),
    [sym_use] = STATE(51),
    [sym_export] = STATE(52),
    [sym_proc] = STATE(52),
    [sym_main] = STATE(101),
    [sym__proc] = STATE(9),
    [sym__export] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(51),
    [aux_sym_source_file_repeat2] = STATE(52),
    [anon_sym_use] = ACTIONS(3),
    [anon_sym_proc] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [sym__begin] = ACTIONS(9),
  },
  [2] = {
    [sym_if] = STATE(4),
    [sym_if_else] = STATE(4),
    [sym_while] = STATE(4),
    [sym_repeat] = STATE(4),
    [sym_exec] = STATE(4),
    [sym_call] = STATE(4),
    [sym_syscall] = STATE(4),
    [sym__block] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(4),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [sym__else] = ACTIONS(37),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(43),
  },
  [3] = {
    [sym_if] = STATE(2),
    [sym_if_else] = STATE(2),
    [sym_while] = STATE(2),
    [sym_repeat] = STATE(2),
    [sym_exec] = STATE(2),
    [sym_call] = STATE(2),
    [sym_syscall] = STATE(2),
    [sym__block] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(2),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [sym__else] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(47),
  },
  [4] = {
    [sym_if] = STATE(4),
    [sym_if_else] = STATE(4),
    [sym_while] = STATE(4),
    [sym_repeat] = STATE(4),
    [sym_exec] = STATE(4),
    [sym_call] = STATE(4),
    [sym_syscall] = STATE(4),
    [sym__block] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(4),
    [anon_sym_exec] = ACTIONS(49),
    [anon_sym_call] = ACTIONS(52),
    [anon_sym_syscall] = ACTIONS(55),
    [anon_sym_assert] = ACTIONS(58),
    [anon_sym_assertz] = ACTIONS(61),
    [anon_sym_assert_eq] = ACTIONS(61),
    [anon_sym_neg] = ACTIONS(61),
    [anon_sym_inv] = ACTIONS(61),
    [anon_sym_pow2] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_and] = ACTIONS(61),
    [anon_sym_or] = ACTIONS(61),
    [anon_sym_xor] = ACTIONS(61),
    [anon_sym_lt] = ACTIONS(58),
    [anon_sym_lte] = ACTIONS(61),
    [anon_sym_gt] = ACTIONS(58),
    [anon_sym_gte] = ACTIONS(61),
    [anon_sym_eqw] = ACTIONS(61),
    [anon_sym_ext2add] = ACTIONS(61),
    [anon_sym_ext2sub] = ACTIONS(61),
    [anon_sym_ext2mul] = ACTIONS(61),
    [anon_sym_ext2div] = ACTIONS(61),
    [anon_sym_ext2neg] = ACTIONS(61),
    [anon_sym_ext2inv] = ACTIONS(61),
    [anon_sym_u32test] = ACTIONS(58),
    [anon_sym_u32testw] = ACTIONS(61),
    [anon_sym_u32assertw] = ACTIONS(61),
    [anon_sym_u32cast] = ACTIONS(61),
    [anon_sym_u32split] = ACTIONS(61),
    [anon_sym_u32overflowing_add3] = ACTIONS(61),
    [anon_sym_u32wrapping_add3] = ACTIONS(61),
    [anon_sym_u32overflowing_madd] = ACTIONS(61),
    [anon_sym_u32wrapping_madd] = ACTIONS(61),
    [anon_sym_u32checked_and] = ACTIONS(61),
    [anon_sym_u32checked_or] = ACTIONS(61),
    [anon_sym_u32checked_xor] = ACTIONS(61),
    [anon_sym_u32checked_not] = ACTIONS(61),
    [anon_sym_u32checked_popcnt] = ACTIONS(61),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(61),
    [anon_sym_u32checked_lt] = ACTIONS(58),
    [anon_sym_u32unchecked_lt] = ACTIONS(58),
    [anon_sym_u32checked_lte] = ACTIONS(61),
    [anon_sym_u32unchecked_lte] = ACTIONS(61),
    [anon_sym_u32checked_gt] = ACTIONS(58),
    [anon_sym_u32unchecked_gt] = ACTIONS(58),
    [anon_sym_u32checked_gte] = ACTIONS(61),
    [anon_sym_u32unchecked_gte] = ACTIONS(61),
    [anon_sym_u32checked_min] = ACTIONS(61),
    [anon_sym_u32unchecked_min] = ACTIONS(61),
    [anon_sym_u32checked_max] = ACTIONS(61),
    [anon_sym_u32unchecked_max] = ACTIONS(61),
    [anon_sym_drop] = ACTIONS(58),
    [anon_sym_dropw] = ACTIONS(61),
    [anon_sym_padw] = ACTIONS(61),
    [anon_sym_swapdw] = ACTIONS(61),
    [anon_sym_cswap] = ACTIONS(58),
    [anon_sym_cswapw] = ACTIONS(61),
    [anon_sym_cdrop] = ACTIONS(58),
    [anon_sym_cdropw] = ACTIONS(61),
    [anon_sym_sdepth] = ACTIONS(61),
    [anon_sym_mem_stream] = ACTIONS(61),
    [anon_sym_adv_pipe] = ACTIONS(61),
    [anon_sym_adv_loadw] = ACTIONS(61),
    [anon_sym_rphash] = ACTIONS(61),
    [anon_sym_rpperm] = ACTIONS(61),
    [anon_sym_mtree_get] = ACTIONS(61),
    [anon_sym_mtree_set] = ACTIONS(61),
    [anon_sym_mtree_cwm] = ACTIONS(61),
    [anon_sym_caller] = ACTIONS(61),
    [anon_sym_adv] = ACTIONS(64),
    [anon_sym_exp] = ACTIONS(67),
    [anon_sym_u32assert] = ACTIONS(70),
    [anon_sym_add] = ACTIONS(73),
    [anon_sym_sub] = ACTIONS(73),
    [anon_sym_mul] = ACTIONS(73),
    [anon_sym_eq] = ACTIONS(76),
    [anon_sym_neq] = ACTIONS(73),
    [anon_sym_u32checked_add] = ACTIONS(79),
    [anon_sym_u32wrapping_add] = ACTIONS(82),
    [anon_sym_u32overflowing_add] = ACTIONS(82),
    [anon_sym_u32checked_sub] = ACTIONS(79),
    [anon_sym_u32wrapping_sub] = ACTIONS(79),
    [anon_sym_u32overflowing_sub] = ACTIONS(79),
    [anon_sym_u32checked_mul] = ACTIONS(79),
    [anon_sym_u32wrapping_mul] = ACTIONS(79),
    [anon_sym_u32overflowing_mul] = ACTIONS(79),
    [anon_sym_u32checked_div] = ACTIONS(82),
    [anon_sym_u32unchecked_div] = ACTIONS(82),
    [anon_sym_u32checked_mod] = ACTIONS(79),
    [anon_sym_u32unchecked_mod] = ACTIONS(79),
    [anon_sym_u32checked_divmod] = ACTIONS(79),
    [anon_sym_u32unchecked_divmod] = ACTIONS(79),
    [anon_sym_u32checked_shr] = ACTIONS(79),
    [anon_sym_u32unchecked_shr] = ACTIONS(79),
    [anon_sym_u32checked_shl] = ACTIONS(79),
    [anon_sym_u32unchecked_shl] = ACTIONS(79),
    [anon_sym_u32checked_rotr] = ACTIONS(79),
    [anon_sym_u32unchecked_rotr] = ACTIONS(79),
    [anon_sym_u32checked_rotl] = ACTIONS(79),
    [anon_sym_u32unchecked_rotl] = ACTIONS(79),
    [anon_sym_u32checked_eq] = ACTIONS(79),
    [anon_sym_u32checked_neq] = ACTIONS(79),
    [anon_sym_mem_load] = ACTIONS(82),
    [anon_sym_mem_loadw] = ACTIONS(79),
    [anon_sym_mem_store] = ACTIONS(82),
    [anon_sym_mem_storew] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(85),
    [sym__else] = ACTIONS(88),
    [anon_sym_while] = ACTIONS(90),
    [anon_sym_repeat] = ACTIONS(93),
    [sym__end] = ACTIONS(88),
  },
  [5] = {
    [sym_if] = STATE(4),
    [sym_if_else] = STATE(4),
    [sym_while] = STATE(4),
    [sym_repeat] = STATE(4),
    [sym_exec] = STATE(4),
    [sym_call] = STATE(4),
    [sym_syscall] = STATE(4),
    [sym__block] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(4),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(96),
  },
  [6] = {
    [sym_if] = STATE(16),
    [sym_if_else] = STATE(16),
    [sym_while] = STATE(16),
    [sym_repeat] = STATE(16),
    [sym_exec] = STATE(16),
    [sym_call] = STATE(16),
    [sym_syscall] = STATE(16),
    [sym__block] = STATE(16),
    [sym_opcode] = STATE(16),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(16),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(98),
  },
  [7] = {
    [sym_if] = STATE(4),
    [sym_if_else] = STATE(4),
    [sym_while] = STATE(4),
    [sym_repeat] = STATE(4),
    [sym_exec] = STATE(4),
    [sym_call] = STATE(4),
    [sym_syscall] = STATE(4),
    [sym__block] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(4),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(100),
  },
  [8] = {
    [sym_if] = STATE(4),
    [sym_if_else] = STATE(4),
    [sym_while] = STATE(4),
    [sym_repeat] = STATE(4),
    [sym_exec] = STATE(4),
    [sym_call] = STATE(4),
    [sym_syscall] = STATE(4),
    [sym__block] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(4),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(102),
  },
  [9] = {
    [sym_if] = STATE(5),
    [sym_if_else] = STATE(5),
    [sym_while] = STATE(5),
    [sym_repeat] = STATE(5),
    [sym_exec] = STATE(5),
    [sym_call] = STATE(5),
    [sym_syscall] = STATE(5),
    [sym__block] = STATE(5),
    [sym_opcode] = STATE(5),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(5),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(104),
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
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(13),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(106),
  },
  [11] = {
    [sym_if] = STATE(12),
    [sym_if_else] = STATE(12),
    [sym_while] = STATE(12),
    [sym_repeat] = STATE(12),
    [sym_exec] = STATE(12),
    [sym_call] = STATE(12),
    [sym_syscall] = STATE(12),
    [sym__block] = STATE(12),
    [sym_opcode] = STATE(12),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(12),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(108),
  },
  [12] = {
    [sym_if] = STATE(4),
    [sym_if_else] = STATE(4),
    [sym_while] = STATE(4),
    [sym_repeat] = STATE(4),
    [sym_exec] = STATE(4),
    [sym_call] = STATE(4),
    [sym_syscall] = STATE(4),
    [sym__block] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(4),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(110),
  },
  [13] = {
    [sym_if] = STATE(4),
    [sym_if_else] = STATE(4),
    [sym_while] = STATE(4),
    [sym_repeat] = STATE(4),
    [sym_exec] = STATE(4),
    [sym_call] = STATE(4),
    [sym_syscall] = STATE(4),
    [sym__block] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(4),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(112),
  },
  [14] = {
    [sym_if] = STATE(4),
    [sym_if_else] = STATE(4),
    [sym_while] = STATE(4),
    [sym_repeat] = STATE(4),
    [sym_exec] = STATE(4),
    [sym_call] = STATE(4),
    [sym_syscall] = STATE(4),
    [sym__block] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(4),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(114),
  },
  [15] = {
    [sym_if] = STATE(14),
    [sym_if_else] = STATE(14),
    [sym_while] = STATE(14),
    [sym_repeat] = STATE(14),
    [sym_exec] = STATE(14),
    [sym_call] = STATE(14),
    [sym_syscall] = STATE(14),
    [sym__block] = STATE(14),
    [sym_opcode] = STATE(14),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(14),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(110),
  },
  [16] = {
    [sym_if] = STATE(4),
    [sym_if_else] = STATE(4),
    [sym_while] = STATE(4),
    [sym_repeat] = STATE(4),
    [sym_exec] = STATE(4),
    [sym_call] = STATE(4),
    [sym_syscall] = STATE(4),
    [sym__block] = STATE(4),
    [sym_opcode] = STATE(4),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(4),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(116),
  },
  [17] = {
    [sym_if] = STATE(8),
    [sym_if_else] = STATE(8),
    [sym_while] = STATE(8),
    [sym_repeat] = STATE(8),
    [sym_exec] = STATE(8),
    [sym_call] = STATE(8),
    [sym_syscall] = STATE(8),
    [sym__block] = STATE(8),
    [sym_opcode] = STATE(8),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(8),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(118),
  },
  [18] = {
    [sym_if] = STATE(7),
    [sym_if_else] = STATE(7),
    [sym_while] = STATE(7),
    [sym_repeat] = STATE(7),
    [sym_exec] = STATE(7),
    [sym_call] = STATE(7),
    [sym_syscall] = STATE(7),
    [sym__block] = STATE(7),
    [sym_opcode] = STATE(7),
    [sym__simple_inst] = STATE(33),
    [sym__adv_inst] = STATE(33),
    [sym__adv_mem] = STATE(33),
    [sym__exp] = STATE(33),
    [sym__assert] = STATE(33),
    [sym__felt_inst] = STATE(33),
    [sym__u32_inst] = STATE(33),
    [sym__if] = STATE(3),
    [sym__while] = STATE(17),
    [sym__repeat] = STATE(18),
    [aux_sym_export_repeat1] = STATE(7),
    [anon_sym_exec] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_assert] = ACTIONS(17),
    [anon_sym_assertz] = ACTIONS(19),
    [anon_sym_assert_eq] = ACTIONS(19),
    [anon_sym_neg] = ACTIONS(19),
    [anon_sym_inv] = ACTIONS(19),
    [anon_sym_pow2] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_lt] = ACTIONS(17),
    [anon_sym_lte] = ACTIONS(19),
    [anon_sym_gt] = ACTIONS(17),
    [anon_sym_gte] = ACTIONS(19),
    [anon_sym_eqw] = ACTIONS(19),
    [anon_sym_ext2add] = ACTIONS(19),
    [anon_sym_ext2sub] = ACTIONS(19),
    [anon_sym_ext2mul] = ACTIONS(19),
    [anon_sym_ext2div] = ACTIONS(19),
    [anon_sym_ext2neg] = ACTIONS(19),
    [anon_sym_ext2inv] = ACTIONS(19),
    [anon_sym_u32test] = ACTIONS(17),
    [anon_sym_u32testw] = ACTIONS(19),
    [anon_sym_u32assertw] = ACTIONS(19),
    [anon_sym_u32cast] = ACTIONS(19),
    [anon_sym_u32split] = ACTIONS(19),
    [anon_sym_u32overflowing_add3] = ACTIONS(19),
    [anon_sym_u32wrapping_add3] = ACTIONS(19),
    [anon_sym_u32overflowing_madd] = ACTIONS(19),
    [anon_sym_u32wrapping_madd] = ACTIONS(19),
    [anon_sym_u32checked_and] = ACTIONS(19),
    [anon_sym_u32checked_or] = ACTIONS(19),
    [anon_sym_u32checked_xor] = ACTIONS(19),
    [anon_sym_u32checked_not] = ACTIONS(19),
    [anon_sym_u32checked_popcnt] = ACTIONS(19),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(19),
    [anon_sym_u32checked_lt] = ACTIONS(17),
    [anon_sym_u32unchecked_lt] = ACTIONS(17),
    [anon_sym_u32checked_lte] = ACTIONS(19),
    [anon_sym_u32unchecked_lte] = ACTIONS(19),
    [anon_sym_u32checked_gt] = ACTIONS(17),
    [anon_sym_u32unchecked_gt] = ACTIONS(17),
    [anon_sym_u32checked_gte] = ACTIONS(19),
    [anon_sym_u32unchecked_gte] = ACTIONS(19),
    [anon_sym_u32checked_min] = ACTIONS(19),
    [anon_sym_u32unchecked_min] = ACTIONS(19),
    [anon_sym_u32checked_max] = ACTIONS(19),
    [anon_sym_u32unchecked_max] = ACTIONS(19),
    [anon_sym_drop] = ACTIONS(17),
    [anon_sym_dropw] = ACTIONS(19),
    [anon_sym_padw] = ACTIONS(19),
    [anon_sym_swapdw] = ACTIONS(19),
    [anon_sym_cswap] = ACTIONS(17),
    [anon_sym_cswapw] = ACTIONS(19),
    [anon_sym_cdrop] = ACTIONS(17),
    [anon_sym_cdropw] = ACTIONS(19),
    [anon_sym_sdepth] = ACTIONS(19),
    [anon_sym_mem_stream] = ACTIONS(19),
    [anon_sym_adv_pipe] = ACTIONS(19),
    [anon_sym_adv_loadw] = ACTIONS(19),
    [anon_sym_rphash] = ACTIONS(19),
    [anon_sym_rpperm] = ACTIONS(19),
    [anon_sym_mtree_get] = ACTIONS(19),
    [anon_sym_mtree_set] = ACTIONS(19),
    [anon_sym_mtree_cwm] = ACTIONS(19),
    [anon_sym_caller] = ACTIONS(19),
    [anon_sym_adv] = ACTIONS(21),
    [anon_sym_exp] = ACTIONS(23),
    [anon_sym_u32assert] = ACTIONS(25),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_eq] = ACTIONS(29),
    [anon_sym_neq] = ACTIONS(27),
    [anon_sym_u32checked_add] = ACTIONS(31),
    [anon_sym_u32wrapping_add] = ACTIONS(33),
    [anon_sym_u32overflowing_add] = ACTIONS(33),
    [anon_sym_u32checked_sub] = ACTIONS(31),
    [anon_sym_u32wrapping_sub] = ACTIONS(31),
    [anon_sym_u32overflowing_sub] = ACTIONS(31),
    [anon_sym_u32checked_mul] = ACTIONS(31),
    [anon_sym_u32wrapping_mul] = ACTIONS(31),
    [anon_sym_u32overflowing_mul] = ACTIONS(31),
    [anon_sym_u32checked_div] = ACTIONS(33),
    [anon_sym_u32unchecked_div] = ACTIONS(33),
    [anon_sym_u32checked_mod] = ACTIONS(31),
    [anon_sym_u32unchecked_mod] = ACTIONS(31),
    [anon_sym_u32checked_divmod] = ACTIONS(31),
    [anon_sym_u32unchecked_divmod] = ACTIONS(31),
    [anon_sym_u32checked_shr] = ACTIONS(31),
    [anon_sym_u32unchecked_shr] = ACTIONS(31),
    [anon_sym_u32checked_shl] = ACTIONS(31),
    [anon_sym_u32unchecked_shl] = ACTIONS(31),
    [anon_sym_u32checked_rotr] = ACTIONS(31),
    [anon_sym_u32unchecked_rotr] = ACTIONS(31),
    [anon_sym_u32checked_rotl] = ACTIONS(31),
    [anon_sym_u32unchecked_rotl] = ACTIONS(31),
    [anon_sym_u32checked_eq] = ACTIONS(31),
    [anon_sym_u32checked_neq] = ACTIONS(31),
    [anon_sym_mem_load] = ACTIONS(33),
    [anon_sym_mem_loadw] = ACTIONS(31),
    [anon_sym_mem_store] = ACTIONS(33),
    [anon_sym_mem_storew] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_repeat] = ACTIONS(41),
    [sym__end] = ACTIONS(120),
  },
  [19] = {
    [anon_sym_exec] = ACTIONS(122),
    [anon_sym_COLON_COLON] = ACTIONS(124),
    [anon_sym_call] = ACTIONS(126),
    [anon_sym_syscall] = ACTIONS(122),
    [anon_sym_assert] = ACTIONS(126),
    [anon_sym_assertz] = ACTIONS(122),
    [anon_sym_assert_eq] = ACTIONS(122),
    [anon_sym_neg] = ACTIONS(122),
    [anon_sym_inv] = ACTIONS(122),
    [anon_sym_pow2] = ACTIONS(122),
    [anon_sym_not] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_xor] = ACTIONS(122),
    [anon_sym_lt] = ACTIONS(126),
    [anon_sym_lte] = ACTIONS(122),
    [anon_sym_gt] = ACTIONS(126),
    [anon_sym_gte] = ACTIONS(122),
    [anon_sym_eqw] = ACTIONS(122),
    [anon_sym_ext2add] = ACTIONS(122),
    [anon_sym_ext2sub] = ACTIONS(122),
    [anon_sym_ext2mul] = ACTIONS(122),
    [anon_sym_ext2div] = ACTIONS(122),
    [anon_sym_ext2neg] = ACTIONS(122),
    [anon_sym_ext2inv] = ACTIONS(122),
    [anon_sym_u32test] = ACTIONS(126),
    [anon_sym_u32testw] = ACTIONS(122),
    [anon_sym_u32assertw] = ACTIONS(122),
    [anon_sym_u32cast] = ACTIONS(122),
    [anon_sym_u32split] = ACTIONS(122),
    [anon_sym_u32overflowing_add3] = ACTIONS(122),
    [anon_sym_u32wrapping_add3] = ACTIONS(122),
    [anon_sym_u32overflowing_madd] = ACTIONS(122),
    [anon_sym_u32wrapping_madd] = ACTIONS(122),
    [anon_sym_u32checked_and] = ACTIONS(122),
    [anon_sym_u32checked_or] = ACTIONS(122),
    [anon_sym_u32checked_xor] = ACTIONS(122),
    [anon_sym_u32checked_not] = ACTIONS(122),
    [anon_sym_u32checked_popcnt] = ACTIONS(122),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(122),
    [anon_sym_u32checked_lt] = ACTIONS(126),
    [anon_sym_u32unchecked_lt] = ACTIONS(126),
    [anon_sym_u32checked_lte] = ACTIONS(122),
    [anon_sym_u32unchecked_lte] = ACTIONS(122),
    [anon_sym_u32checked_gt] = ACTIONS(126),
    [anon_sym_u32unchecked_gt] = ACTIONS(126),
    [anon_sym_u32checked_gte] = ACTIONS(122),
    [anon_sym_u32unchecked_gte] = ACTIONS(122),
    [anon_sym_u32checked_min] = ACTIONS(122),
    [anon_sym_u32unchecked_min] = ACTIONS(122),
    [anon_sym_u32checked_max] = ACTIONS(122),
    [anon_sym_u32unchecked_max] = ACTIONS(122),
    [anon_sym_drop] = ACTIONS(126),
    [anon_sym_dropw] = ACTIONS(122),
    [anon_sym_padw] = ACTIONS(122),
    [anon_sym_swapdw] = ACTIONS(122),
    [anon_sym_cswap] = ACTIONS(126),
    [anon_sym_cswapw] = ACTIONS(122),
    [anon_sym_cdrop] = ACTIONS(126),
    [anon_sym_cdropw] = ACTIONS(122),
    [anon_sym_sdepth] = ACTIONS(122),
    [anon_sym_mem_stream] = ACTIONS(122),
    [anon_sym_adv_pipe] = ACTIONS(122),
    [anon_sym_adv_loadw] = ACTIONS(122),
    [anon_sym_rphash] = ACTIONS(122),
    [anon_sym_rpperm] = ACTIONS(122),
    [anon_sym_mtree_get] = ACTIONS(122),
    [anon_sym_mtree_set] = ACTIONS(122),
    [anon_sym_mtree_cwm] = ACTIONS(122),
    [anon_sym_caller] = ACTIONS(122),
    [anon_sym_adv] = ACTIONS(126),
    [anon_sym_exp] = ACTIONS(122),
    [anon_sym_u32assert] = ACTIONS(126),
    [anon_sym_add] = ACTIONS(122),
    [anon_sym_sub] = ACTIONS(122),
    [anon_sym_mul] = ACTIONS(122),
    [anon_sym_eq] = ACTIONS(126),
    [anon_sym_neq] = ACTIONS(122),
    [anon_sym_u32checked_add] = ACTIONS(122),
    [anon_sym_u32wrapping_add] = ACTIONS(126),
    [anon_sym_u32overflowing_add] = ACTIONS(126),
    [anon_sym_u32checked_sub] = ACTIONS(122),
    [anon_sym_u32wrapping_sub] = ACTIONS(122),
    [anon_sym_u32overflowing_sub] = ACTIONS(122),
    [anon_sym_u32checked_mul] = ACTIONS(122),
    [anon_sym_u32wrapping_mul] = ACTIONS(122),
    [anon_sym_u32overflowing_mul] = ACTIONS(122),
    [anon_sym_u32checked_div] = ACTIONS(126),
    [anon_sym_u32unchecked_div] = ACTIONS(126),
    [anon_sym_u32checked_mod] = ACTIONS(122),
    [anon_sym_u32unchecked_mod] = ACTIONS(122),
    [anon_sym_u32checked_divmod] = ACTIONS(122),
    [anon_sym_u32unchecked_divmod] = ACTIONS(122),
    [anon_sym_u32checked_shr] = ACTIONS(122),
    [anon_sym_u32unchecked_shr] = ACTIONS(122),
    [anon_sym_u32checked_shl] = ACTIONS(122),
    [anon_sym_u32unchecked_shl] = ACTIONS(122),
    [anon_sym_u32checked_rotr] = ACTIONS(122),
    [anon_sym_u32unchecked_rotr] = ACTIONS(122),
    [anon_sym_u32checked_rotl] = ACTIONS(122),
    [anon_sym_u32unchecked_rotl] = ACTIONS(122),
    [anon_sym_u32checked_eq] = ACTIONS(122),
    [anon_sym_u32checked_neq] = ACTIONS(122),
    [anon_sym_mem_load] = ACTIONS(126),
    [anon_sym_mem_loadw] = ACTIONS(122),
    [anon_sym_mem_store] = ACTIONS(126),
    [anon_sym_mem_storew] = ACTIONS(122),
    [anon_sym_if] = ACTIONS(122),
    [sym__else] = ACTIONS(122),
    [anon_sym_while] = ACTIONS(122),
    [anon_sym_repeat] = ACTIONS(122),
    [sym__end] = ACTIONS(122),
  },
  [20] = {
    [anon_sym_exec] = ACTIONS(128),
    [anon_sym_COLON_COLON] = ACTIONS(130),
    [anon_sym_call] = ACTIONS(132),
    [anon_sym_syscall] = ACTIONS(128),
    [anon_sym_assert] = ACTIONS(132),
    [anon_sym_assertz] = ACTIONS(128),
    [anon_sym_assert_eq] = ACTIONS(128),
    [anon_sym_neg] = ACTIONS(128),
    [anon_sym_inv] = ACTIONS(128),
    [anon_sym_pow2] = ACTIONS(128),
    [anon_sym_not] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(128),
    [anon_sym_or] = ACTIONS(128),
    [anon_sym_xor] = ACTIONS(128),
    [anon_sym_lt] = ACTIONS(132),
    [anon_sym_lte] = ACTIONS(128),
    [anon_sym_gt] = ACTIONS(132),
    [anon_sym_gte] = ACTIONS(128),
    [anon_sym_eqw] = ACTIONS(128),
    [anon_sym_ext2add] = ACTIONS(128),
    [anon_sym_ext2sub] = ACTIONS(128),
    [anon_sym_ext2mul] = ACTIONS(128),
    [anon_sym_ext2div] = ACTIONS(128),
    [anon_sym_ext2neg] = ACTIONS(128),
    [anon_sym_ext2inv] = ACTIONS(128),
    [anon_sym_u32test] = ACTIONS(132),
    [anon_sym_u32testw] = ACTIONS(128),
    [anon_sym_u32assertw] = ACTIONS(128),
    [anon_sym_u32cast] = ACTIONS(128),
    [anon_sym_u32split] = ACTIONS(128),
    [anon_sym_u32overflowing_add3] = ACTIONS(128),
    [anon_sym_u32wrapping_add3] = ACTIONS(128),
    [anon_sym_u32overflowing_madd] = ACTIONS(128),
    [anon_sym_u32wrapping_madd] = ACTIONS(128),
    [anon_sym_u32checked_and] = ACTIONS(128),
    [anon_sym_u32checked_or] = ACTIONS(128),
    [anon_sym_u32checked_xor] = ACTIONS(128),
    [anon_sym_u32checked_not] = ACTIONS(128),
    [anon_sym_u32checked_popcnt] = ACTIONS(128),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(128),
    [anon_sym_u32checked_lt] = ACTIONS(132),
    [anon_sym_u32unchecked_lt] = ACTIONS(132),
    [anon_sym_u32checked_lte] = ACTIONS(128),
    [anon_sym_u32unchecked_lte] = ACTIONS(128),
    [anon_sym_u32checked_gt] = ACTIONS(132),
    [anon_sym_u32unchecked_gt] = ACTIONS(132),
    [anon_sym_u32checked_gte] = ACTIONS(128),
    [anon_sym_u32unchecked_gte] = ACTIONS(128),
    [anon_sym_u32checked_min] = ACTIONS(128),
    [anon_sym_u32unchecked_min] = ACTIONS(128),
    [anon_sym_u32checked_max] = ACTIONS(128),
    [anon_sym_u32unchecked_max] = ACTIONS(128),
    [anon_sym_drop] = ACTIONS(132),
    [anon_sym_dropw] = ACTIONS(128),
    [anon_sym_padw] = ACTIONS(128),
    [anon_sym_swapdw] = ACTIONS(128),
    [anon_sym_cswap] = ACTIONS(132),
    [anon_sym_cswapw] = ACTIONS(128),
    [anon_sym_cdrop] = ACTIONS(132),
    [anon_sym_cdropw] = ACTIONS(128),
    [anon_sym_sdepth] = ACTIONS(128),
    [anon_sym_mem_stream] = ACTIONS(128),
    [anon_sym_adv_pipe] = ACTIONS(128),
    [anon_sym_adv_loadw] = ACTIONS(128),
    [anon_sym_rphash] = ACTIONS(128),
    [anon_sym_rpperm] = ACTIONS(128),
    [anon_sym_mtree_get] = ACTIONS(128),
    [anon_sym_mtree_set] = ACTIONS(128),
    [anon_sym_mtree_cwm] = ACTIONS(128),
    [anon_sym_caller] = ACTIONS(128),
    [anon_sym_adv] = ACTIONS(132),
    [anon_sym_exp] = ACTIONS(128),
    [anon_sym_u32assert] = ACTIONS(132),
    [anon_sym_add] = ACTIONS(128),
    [anon_sym_sub] = ACTIONS(128),
    [anon_sym_mul] = ACTIONS(128),
    [anon_sym_eq] = ACTIONS(132),
    [anon_sym_neq] = ACTIONS(128),
    [anon_sym_u32checked_add] = ACTIONS(128),
    [anon_sym_u32wrapping_add] = ACTIONS(132),
    [anon_sym_u32overflowing_add] = ACTIONS(132),
    [anon_sym_u32checked_sub] = ACTIONS(128),
    [anon_sym_u32wrapping_sub] = ACTIONS(128),
    [anon_sym_u32overflowing_sub] = ACTIONS(128),
    [anon_sym_u32checked_mul] = ACTIONS(128),
    [anon_sym_u32wrapping_mul] = ACTIONS(128),
    [anon_sym_u32overflowing_mul] = ACTIONS(128),
    [anon_sym_u32checked_div] = ACTIONS(132),
    [anon_sym_u32unchecked_div] = ACTIONS(132),
    [anon_sym_u32checked_mod] = ACTIONS(128),
    [anon_sym_u32unchecked_mod] = ACTIONS(128),
    [anon_sym_u32checked_divmod] = ACTIONS(128),
    [anon_sym_u32unchecked_divmod] = ACTIONS(128),
    [anon_sym_u32checked_shr] = ACTIONS(128),
    [anon_sym_u32unchecked_shr] = ACTIONS(128),
    [anon_sym_u32checked_shl] = ACTIONS(128),
    [anon_sym_u32unchecked_shl] = ACTIONS(128),
    [anon_sym_u32checked_rotr] = ACTIONS(128),
    [anon_sym_u32unchecked_rotr] = ACTIONS(128),
    [anon_sym_u32checked_rotl] = ACTIONS(128),
    [anon_sym_u32unchecked_rotl] = ACTIONS(128),
    [anon_sym_u32checked_eq] = ACTIONS(128),
    [anon_sym_u32checked_neq] = ACTIONS(128),
    [anon_sym_mem_load] = ACTIONS(132),
    [anon_sym_mem_loadw] = ACTIONS(128),
    [anon_sym_mem_store] = ACTIONS(132),
    [anon_sym_mem_storew] = ACTIONS(128),
    [anon_sym_if] = ACTIONS(128),
    [sym__else] = ACTIONS(128),
    [anon_sym_while] = ACTIONS(128),
    [anon_sym_repeat] = ACTIONS(128),
    [sym__end] = ACTIONS(128),
  },
  [21] = {
    [anon_sym_exec] = ACTIONS(134),
    [anon_sym_COLON_COLON] = ACTIONS(136),
    [anon_sym_call] = ACTIONS(138),
    [anon_sym_syscall] = ACTIONS(134),
    [anon_sym_assert] = ACTIONS(138),
    [anon_sym_assertz] = ACTIONS(134),
    [anon_sym_assert_eq] = ACTIONS(134),
    [anon_sym_neg] = ACTIONS(134),
    [anon_sym_inv] = ACTIONS(134),
    [anon_sym_pow2] = ACTIONS(134),
    [anon_sym_not] = ACTIONS(134),
    [anon_sym_and] = ACTIONS(134),
    [anon_sym_or] = ACTIONS(134),
    [anon_sym_xor] = ACTIONS(134),
    [anon_sym_lt] = ACTIONS(138),
    [anon_sym_lte] = ACTIONS(134),
    [anon_sym_gt] = ACTIONS(138),
    [anon_sym_gte] = ACTIONS(134),
    [anon_sym_eqw] = ACTIONS(134),
    [anon_sym_ext2add] = ACTIONS(134),
    [anon_sym_ext2sub] = ACTIONS(134),
    [anon_sym_ext2mul] = ACTIONS(134),
    [anon_sym_ext2div] = ACTIONS(134),
    [anon_sym_ext2neg] = ACTIONS(134),
    [anon_sym_ext2inv] = ACTIONS(134),
    [anon_sym_u32test] = ACTIONS(138),
    [anon_sym_u32testw] = ACTIONS(134),
    [anon_sym_u32assertw] = ACTIONS(134),
    [anon_sym_u32cast] = ACTIONS(134),
    [anon_sym_u32split] = ACTIONS(134),
    [anon_sym_u32overflowing_add3] = ACTIONS(134),
    [anon_sym_u32wrapping_add3] = ACTIONS(134),
    [anon_sym_u32overflowing_madd] = ACTIONS(134),
    [anon_sym_u32wrapping_madd] = ACTIONS(134),
    [anon_sym_u32checked_and] = ACTIONS(134),
    [anon_sym_u32checked_or] = ACTIONS(134),
    [anon_sym_u32checked_xor] = ACTIONS(134),
    [anon_sym_u32checked_not] = ACTIONS(134),
    [anon_sym_u32checked_popcnt] = ACTIONS(134),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(134),
    [anon_sym_u32checked_lt] = ACTIONS(138),
    [anon_sym_u32unchecked_lt] = ACTIONS(138),
    [anon_sym_u32checked_lte] = ACTIONS(134),
    [anon_sym_u32unchecked_lte] = ACTIONS(134),
    [anon_sym_u32checked_gt] = ACTIONS(138),
    [anon_sym_u32unchecked_gt] = ACTIONS(138),
    [anon_sym_u32checked_gte] = ACTIONS(134),
    [anon_sym_u32unchecked_gte] = ACTIONS(134),
    [anon_sym_u32checked_min] = ACTIONS(134),
    [anon_sym_u32unchecked_min] = ACTIONS(134),
    [anon_sym_u32checked_max] = ACTIONS(134),
    [anon_sym_u32unchecked_max] = ACTIONS(134),
    [anon_sym_drop] = ACTIONS(138),
    [anon_sym_dropw] = ACTIONS(134),
    [anon_sym_padw] = ACTIONS(134),
    [anon_sym_swapdw] = ACTIONS(134),
    [anon_sym_cswap] = ACTIONS(138),
    [anon_sym_cswapw] = ACTIONS(134),
    [anon_sym_cdrop] = ACTIONS(138),
    [anon_sym_cdropw] = ACTIONS(134),
    [anon_sym_sdepth] = ACTIONS(134),
    [anon_sym_mem_stream] = ACTIONS(134),
    [anon_sym_adv_pipe] = ACTIONS(134),
    [anon_sym_adv_loadw] = ACTIONS(134),
    [anon_sym_rphash] = ACTIONS(134),
    [anon_sym_rpperm] = ACTIONS(134),
    [anon_sym_mtree_get] = ACTIONS(134),
    [anon_sym_mtree_set] = ACTIONS(134),
    [anon_sym_mtree_cwm] = ACTIONS(134),
    [anon_sym_caller] = ACTIONS(134),
    [anon_sym_adv] = ACTIONS(138),
    [anon_sym_exp] = ACTIONS(134),
    [anon_sym_u32assert] = ACTIONS(138),
    [anon_sym_add] = ACTIONS(134),
    [anon_sym_sub] = ACTIONS(134),
    [anon_sym_mul] = ACTIONS(134),
    [anon_sym_eq] = ACTIONS(138),
    [anon_sym_neq] = ACTIONS(134),
    [anon_sym_u32checked_add] = ACTIONS(134),
    [anon_sym_u32wrapping_add] = ACTIONS(138),
    [anon_sym_u32overflowing_add] = ACTIONS(138),
    [anon_sym_u32checked_sub] = ACTIONS(134),
    [anon_sym_u32wrapping_sub] = ACTIONS(134),
    [anon_sym_u32overflowing_sub] = ACTIONS(134),
    [anon_sym_u32checked_mul] = ACTIONS(134),
    [anon_sym_u32wrapping_mul] = ACTIONS(134),
    [anon_sym_u32overflowing_mul] = ACTIONS(134),
    [anon_sym_u32checked_div] = ACTIONS(138),
    [anon_sym_u32unchecked_div] = ACTIONS(138),
    [anon_sym_u32checked_mod] = ACTIONS(134),
    [anon_sym_u32unchecked_mod] = ACTIONS(134),
    [anon_sym_u32checked_divmod] = ACTIONS(134),
    [anon_sym_u32unchecked_divmod] = ACTIONS(134),
    [anon_sym_u32checked_shr] = ACTIONS(134),
    [anon_sym_u32unchecked_shr] = ACTIONS(134),
    [anon_sym_u32checked_shl] = ACTIONS(134),
    [anon_sym_u32unchecked_shl] = ACTIONS(134),
    [anon_sym_u32checked_rotr] = ACTIONS(134),
    [anon_sym_u32unchecked_rotr] = ACTIONS(134),
    [anon_sym_u32checked_rotl] = ACTIONS(134),
    [anon_sym_u32unchecked_rotl] = ACTIONS(134),
    [anon_sym_u32checked_eq] = ACTIONS(134),
    [anon_sym_u32checked_neq] = ACTIONS(134),
    [anon_sym_mem_load] = ACTIONS(138),
    [anon_sym_mem_loadw] = ACTIONS(134),
    [anon_sym_mem_store] = ACTIONS(138),
    [anon_sym_mem_storew] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(134),
    [sym__else] = ACTIONS(134),
    [anon_sym_while] = ACTIONS(134),
    [anon_sym_repeat] = ACTIONS(134),
    [sym__end] = ACTIONS(134),
  },
  [22] = {
    [anon_sym_exec] = ACTIONS(140),
    [anon_sym_DOT] = ACTIONS(142),
    [anon_sym_call] = ACTIONS(144),
    [anon_sym_syscall] = ACTIONS(140),
    [anon_sym_assert] = ACTIONS(144),
    [anon_sym_assertz] = ACTIONS(140),
    [anon_sym_assert_eq] = ACTIONS(140),
    [anon_sym_neg] = ACTIONS(140),
    [anon_sym_inv] = ACTIONS(140),
    [anon_sym_pow2] = ACTIONS(140),
    [anon_sym_not] = ACTIONS(140),
    [anon_sym_and] = ACTIONS(140),
    [anon_sym_or] = ACTIONS(140),
    [anon_sym_xor] = ACTIONS(140),
    [anon_sym_lt] = ACTIONS(144),
    [anon_sym_lte] = ACTIONS(140),
    [anon_sym_gt] = ACTIONS(144),
    [anon_sym_gte] = ACTIONS(140),
    [anon_sym_eqw] = ACTIONS(140),
    [anon_sym_ext2add] = ACTIONS(140),
    [anon_sym_ext2sub] = ACTIONS(140),
    [anon_sym_ext2mul] = ACTIONS(140),
    [anon_sym_ext2div] = ACTIONS(140),
    [anon_sym_ext2neg] = ACTIONS(140),
    [anon_sym_ext2inv] = ACTIONS(140),
    [anon_sym_u32test] = ACTIONS(144),
    [anon_sym_u32testw] = ACTIONS(140),
    [anon_sym_u32assertw] = ACTIONS(140),
    [anon_sym_u32cast] = ACTIONS(140),
    [anon_sym_u32split] = ACTIONS(140),
    [anon_sym_u32overflowing_add3] = ACTIONS(140),
    [anon_sym_u32wrapping_add3] = ACTIONS(140),
    [anon_sym_u32overflowing_madd] = ACTIONS(140),
    [anon_sym_u32wrapping_madd] = ACTIONS(140),
    [anon_sym_u32checked_and] = ACTIONS(140),
    [anon_sym_u32checked_or] = ACTIONS(140),
    [anon_sym_u32checked_xor] = ACTIONS(140),
    [anon_sym_u32checked_not] = ACTIONS(140),
    [anon_sym_u32checked_popcnt] = ACTIONS(140),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(140),
    [anon_sym_u32checked_lt] = ACTIONS(144),
    [anon_sym_u32unchecked_lt] = ACTIONS(144),
    [anon_sym_u32checked_lte] = ACTIONS(140),
    [anon_sym_u32unchecked_lte] = ACTIONS(140),
    [anon_sym_u32checked_gt] = ACTIONS(144),
    [anon_sym_u32unchecked_gt] = ACTIONS(144),
    [anon_sym_u32checked_gte] = ACTIONS(140),
    [anon_sym_u32unchecked_gte] = ACTIONS(140),
    [anon_sym_u32checked_min] = ACTIONS(140),
    [anon_sym_u32unchecked_min] = ACTIONS(140),
    [anon_sym_u32checked_max] = ACTIONS(140),
    [anon_sym_u32unchecked_max] = ACTIONS(140),
    [anon_sym_drop] = ACTIONS(144),
    [anon_sym_dropw] = ACTIONS(140),
    [anon_sym_padw] = ACTIONS(140),
    [anon_sym_swapdw] = ACTIONS(140),
    [anon_sym_cswap] = ACTIONS(144),
    [anon_sym_cswapw] = ACTIONS(140),
    [anon_sym_cdrop] = ACTIONS(144),
    [anon_sym_cdropw] = ACTIONS(140),
    [anon_sym_sdepth] = ACTIONS(140),
    [anon_sym_mem_stream] = ACTIONS(140),
    [anon_sym_adv_pipe] = ACTIONS(140),
    [anon_sym_adv_loadw] = ACTIONS(140),
    [anon_sym_rphash] = ACTIONS(140),
    [anon_sym_rpperm] = ACTIONS(140),
    [anon_sym_mtree_get] = ACTIONS(140),
    [anon_sym_mtree_set] = ACTIONS(140),
    [anon_sym_mtree_cwm] = ACTIONS(140),
    [anon_sym_caller] = ACTIONS(140),
    [anon_sym_adv] = ACTIONS(144),
    [anon_sym_exp] = ACTIONS(140),
    [anon_sym_u32assert] = ACTIONS(144),
    [anon_sym_add] = ACTIONS(140),
    [anon_sym_sub] = ACTIONS(140),
    [anon_sym_mul] = ACTIONS(140),
    [anon_sym_eq] = ACTIONS(144),
    [anon_sym_neq] = ACTIONS(140),
    [anon_sym_u32checked_add] = ACTIONS(140),
    [anon_sym_u32wrapping_add] = ACTIONS(144),
    [anon_sym_u32overflowing_add] = ACTIONS(144),
    [anon_sym_u32checked_sub] = ACTIONS(140),
    [anon_sym_u32wrapping_sub] = ACTIONS(140),
    [anon_sym_u32overflowing_sub] = ACTIONS(140),
    [anon_sym_u32checked_mul] = ACTIONS(140),
    [anon_sym_u32wrapping_mul] = ACTIONS(140),
    [anon_sym_u32overflowing_mul] = ACTIONS(140),
    [anon_sym_u32checked_div] = ACTIONS(144),
    [anon_sym_u32unchecked_div] = ACTIONS(144),
    [anon_sym_u32checked_mod] = ACTIONS(140),
    [anon_sym_u32unchecked_mod] = ACTIONS(140),
    [anon_sym_u32checked_divmod] = ACTIONS(140),
    [anon_sym_u32unchecked_divmod] = ACTIONS(140),
    [anon_sym_u32checked_shr] = ACTIONS(140),
    [anon_sym_u32unchecked_shr] = ACTIONS(140),
    [anon_sym_u32checked_shl] = ACTIONS(140),
    [anon_sym_u32unchecked_shl] = ACTIONS(140),
    [anon_sym_u32checked_rotr] = ACTIONS(140),
    [anon_sym_u32unchecked_rotr] = ACTIONS(140),
    [anon_sym_u32checked_rotl] = ACTIONS(140),
    [anon_sym_u32unchecked_rotl] = ACTIONS(140),
    [anon_sym_u32checked_eq] = ACTIONS(140),
    [anon_sym_u32checked_neq] = ACTIONS(140),
    [anon_sym_mem_load] = ACTIONS(144),
    [anon_sym_mem_loadw] = ACTIONS(140),
    [anon_sym_mem_store] = ACTIONS(144),
    [anon_sym_mem_storew] = ACTIONS(140),
    [anon_sym_if] = ACTIONS(140),
    [sym__else] = ACTIONS(140),
    [anon_sym_while] = ACTIONS(140),
    [anon_sym_repeat] = ACTIONS(140),
    [sym__end] = ACTIONS(140),
  },
  [23] = {
    [anon_sym_exec] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(148),
    [anon_sym_call] = ACTIONS(150),
    [anon_sym_syscall] = ACTIONS(146),
    [anon_sym_assert] = ACTIONS(150),
    [anon_sym_assertz] = ACTIONS(146),
    [anon_sym_assert_eq] = ACTIONS(146),
    [anon_sym_neg] = ACTIONS(146),
    [anon_sym_inv] = ACTIONS(146),
    [anon_sym_pow2] = ACTIONS(146),
    [anon_sym_not] = ACTIONS(146),
    [anon_sym_and] = ACTIONS(146),
    [anon_sym_or] = ACTIONS(146),
    [anon_sym_xor] = ACTIONS(146),
    [anon_sym_lt] = ACTIONS(150),
    [anon_sym_lte] = ACTIONS(146),
    [anon_sym_gt] = ACTIONS(150),
    [anon_sym_gte] = ACTIONS(146),
    [anon_sym_eqw] = ACTIONS(146),
    [anon_sym_ext2add] = ACTIONS(146),
    [anon_sym_ext2sub] = ACTIONS(146),
    [anon_sym_ext2mul] = ACTIONS(146),
    [anon_sym_ext2div] = ACTIONS(146),
    [anon_sym_ext2neg] = ACTIONS(146),
    [anon_sym_ext2inv] = ACTIONS(146),
    [anon_sym_u32test] = ACTIONS(150),
    [anon_sym_u32testw] = ACTIONS(146),
    [anon_sym_u32assertw] = ACTIONS(146),
    [anon_sym_u32cast] = ACTIONS(146),
    [anon_sym_u32split] = ACTIONS(146),
    [anon_sym_u32overflowing_add3] = ACTIONS(146),
    [anon_sym_u32wrapping_add3] = ACTIONS(146),
    [anon_sym_u32overflowing_madd] = ACTIONS(146),
    [anon_sym_u32wrapping_madd] = ACTIONS(146),
    [anon_sym_u32checked_and] = ACTIONS(146),
    [anon_sym_u32checked_or] = ACTIONS(146),
    [anon_sym_u32checked_xor] = ACTIONS(146),
    [anon_sym_u32checked_not] = ACTIONS(146),
    [anon_sym_u32checked_popcnt] = ACTIONS(146),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(146),
    [anon_sym_u32checked_lt] = ACTIONS(150),
    [anon_sym_u32unchecked_lt] = ACTIONS(150),
    [anon_sym_u32checked_lte] = ACTIONS(146),
    [anon_sym_u32unchecked_lte] = ACTIONS(146),
    [anon_sym_u32checked_gt] = ACTIONS(150),
    [anon_sym_u32unchecked_gt] = ACTIONS(150),
    [anon_sym_u32checked_gte] = ACTIONS(146),
    [anon_sym_u32unchecked_gte] = ACTIONS(146),
    [anon_sym_u32checked_min] = ACTIONS(146),
    [anon_sym_u32unchecked_min] = ACTIONS(146),
    [anon_sym_u32checked_max] = ACTIONS(146),
    [anon_sym_u32unchecked_max] = ACTIONS(146),
    [anon_sym_drop] = ACTIONS(150),
    [anon_sym_dropw] = ACTIONS(146),
    [anon_sym_padw] = ACTIONS(146),
    [anon_sym_swapdw] = ACTIONS(146),
    [anon_sym_cswap] = ACTIONS(150),
    [anon_sym_cswapw] = ACTIONS(146),
    [anon_sym_cdrop] = ACTIONS(150),
    [anon_sym_cdropw] = ACTIONS(146),
    [anon_sym_sdepth] = ACTIONS(146),
    [anon_sym_mem_stream] = ACTIONS(146),
    [anon_sym_adv_pipe] = ACTIONS(146),
    [anon_sym_adv_loadw] = ACTIONS(146),
    [anon_sym_rphash] = ACTIONS(146),
    [anon_sym_rpperm] = ACTIONS(146),
    [anon_sym_mtree_get] = ACTIONS(146),
    [anon_sym_mtree_set] = ACTIONS(146),
    [anon_sym_mtree_cwm] = ACTIONS(146),
    [anon_sym_caller] = ACTIONS(146),
    [anon_sym_adv] = ACTIONS(150),
    [anon_sym_exp] = ACTIONS(146),
    [anon_sym_u32assert] = ACTIONS(150),
    [anon_sym_add] = ACTIONS(146),
    [anon_sym_sub] = ACTIONS(146),
    [anon_sym_mul] = ACTIONS(146),
    [anon_sym_eq] = ACTIONS(150),
    [anon_sym_neq] = ACTIONS(146),
    [anon_sym_u32checked_add] = ACTIONS(146),
    [anon_sym_u32wrapping_add] = ACTIONS(150),
    [anon_sym_u32overflowing_add] = ACTIONS(150),
    [anon_sym_u32checked_sub] = ACTIONS(146),
    [anon_sym_u32wrapping_sub] = ACTIONS(146),
    [anon_sym_u32overflowing_sub] = ACTIONS(146),
    [anon_sym_u32checked_mul] = ACTIONS(146),
    [anon_sym_u32wrapping_mul] = ACTIONS(146),
    [anon_sym_u32overflowing_mul] = ACTIONS(146),
    [anon_sym_u32checked_div] = ACTIONS(150),
    [anon_sym_u32unchecked_div] = ACTIONS(150),
    [anon_sym_u32checked_mod] = ACTIONS(146),
    [anon_sym_u32unchecked_mod] = ACTIONS(146),
    [anon_sym_u32checked_divmod] = ACTIONS(146),
    [anon_sym_u32unchecked_divmod] = ACTIONS(146),
    [anon_sym_u32checked_shr] = ACTIONS(146),
    [anon_sym_u32unchecked_shr] = ACTIONS(146),
    [anon_sym_u32checked_shl] = ACTIONS(146),
    [anon_sym_u32unchecked_shl] = ACTIONS(146),
    [anon_sym_u32checked_rotr] = ACTIONS(146),
    [anon_sym_u32unchecked_rotr] = ACTIONS(146),
    [anon_sym_u32checked_rotl] = ACTIONS(146),
    [anon_sym_u32unchecked_rotl] = ACTIONS(146),
    [anon_sym_u32checked_eq] = ACTIONS(146),
    [anon_sym_u32checked_neq] = ACTIONS(146),
    [anon_sym_mem_load] = ACTIONS(150),
    [anon_sym_mem_loadw] = ACTIONS(146),
    [anon_sym_mem_store] = ACTIONS(150),
    [anon_sym_mem_storew] = ACTIONS(146),
    [anon_sym_if] = ACTIONS(146),
    [sym__else] = ACTIONS(146),
    [anon_sym_while] = ACTIONS(146),
    [anon_sym_repeat] = ACTIONS(146),
    [sym__end] = ACTIONS(146),
  },
  [24] = {
    [anon_sym_exec] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(154),
    [anon_sym_call] = ACTIONS(156),
    [anon_sym_syscall] = ACTIONS(152),
    [anon_sym_assert] = ACTIONS(156),
    [anon_sym_assertz] = ACTIONS(152),
    [anon_sym_assert_eq] = ACTIONS(152),
    [anon_sym_neg] = ACTIONS(152),
    [anon_sym_inv] = ACTIONS(152),
    [anon_sym_pow2] = ACTIONS(152),
    [anon_sym_not] = ACTIONS(152),
    [anon_sym_and] = ACTIONS(152),
    [anon_sym_or] = ACTIONS(152),
    [anon_sym_xor] = ACTIONS(152),
    [anon_sym_lt] = ACTIONS(156),
    [anon_sym_lte] = ACTIONS(152),
    [anon_sym_gt] = ACTIONS(156),
    [anon_sym_gte] = ACTIONS(152),
    [anon_sym_eqw] = ACTIONS(152),
    [anon_sym_ext2add] = ACTIONS(152),
    [anon_sym_ext2sub] = ACTIONS(152),
    [anon_sym_ext2mul] = ACTIONS(152),
    [anon_sym_ext2div] = ACTIONS(152),
    [anon_sym_ext2neg] = ACTIONS(152),
    [anon_sym_ext2inv] = ACTIONS(152),
    [anon_sym_u32test] = ACTIONS(156),
    [anon_sym_u32testw] = ACTIONS(152),
    [anon_sym_u32assertw] = ACTIONS(152),
    [anon_sym_u32cast] = ACTIONS(152),
    [anon_sym_u32split] = ACTIONS(152),
    [anon_sym_u32overflowing_add3] = ACTIONS(152),
    [anon_sym_u32wrapping_add3] = ACTIONS(152),
    [anon_sym_u32overflowing_madd] = ACTIONS(152),
    [anon_sym_u32wrapping_madd] = ACTIONS(152),
    [anon_sym_u32checked_and] = ACTIONS(152),
    [anon_sym_u32checked_or] = ACTIONS(152),
    [anon_sym_u32checked_xor] = ACTIONS(152),
    [anon_sym_u32checked_not] = ACTIONS(152),
    [anon_sym_u32checked_popcnt] = ACTIONS(152),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(152),
    [anon_sym_u32checked_lt] = ACTIONS(156),
    [anon_sym_u32unchecked_lt] = ACTIONS(156),
    [anon_sym_u32checked_lte] = ACTIONS(152),
    [anon_sym_u32unchecked_lte] = ACTIONS(152),
    [anon_sym_u32checked_gt] = ACTIONS(156),
    [anon_sym_u32unchecked_gt] = ACTIONS(156),
    [anon_sym_u32checked_gte] = ACTIONS(152),
    [anon_sym_u32unchecked_gte] = ACTIONS(152),
    [anon_sym_u32checked_min] = ACTIONS(152),
    [anon_sym_u32unchecked_min] = ACTIONS(152),
    [anon_sym_u32checked_max] = ACTIONS(152),
    [anon_sym_u32unchecked_max] = ACTIONS(152),
    [anon_sym_drop] = ACTIONS(156),
    [anon_sym_dropw] = ACTIONS(152),
    [anon_sym_padw] = ACTIONS(152),
    [anon_sym_swapdw] = ACTIONS(152),
    [anon_sym_cswap] = ACTIONS(156),
    [anon_sym_cswapw] = ACTIONS(152),
    [anon_sym_cdrop] = ACTIONS(156),
    [anon_sym_cdropw] = ACTIONS(152),
    [anon_sym_sdepth] = ACTIONS(152),
    [anon_sym_mem_stream] = ACTIONS(152),
    [anon_sym_adv_pipe] = ACTIONS(152),
    [anon_sym_adv_loadw] = ACTIONS(152),
    [anon_sym_rphash] = ACTIONS(152),
    [anon_sym_rpperm] = ACTIONS(152),
    [anon_sym_mtree_get] = ACTIONS(152),
    [anon_sym_mtree_set] = ACTIONS(152),
    [anon_sym_mtree_cwm] = ACTIONS(152),
    [anon_sym_caller] = ACTIONS(152),
    [anon_sym_adv] = ACTIONS(156),
    [anon_sym_exp] = ACTIONS(152),
    [anon_sym_u32assert] = ACTIONS(156),
    [anon_sym_add] = ACTIONS(152),
    [anon_sym_sub] = ACTIONS(152),
    [anon_sym_mul] = ACTIONS(152),
    [anon_sym_eq] = ACTIONS(156),
    [anon_sym_neq] = ACTIONS(152),
    [anon_sym_u32checked_add] = ACTIONS(152),
    [anon_sym_u32wrapping_add] = ACTIONS(156),
    [anon_sym_u32overflowing_add] = ACTIONS(156),
    [anon_sym_u32checked_sub] = ACTIONS(152),
    [anon_sym_u32wrapping_sub] = ACTIONS(152),
    [anon_sym_u32overflowing_sub] = ACTIONS(152),
    [anon_sym_u32checked_mul] = ACTIONS(152),
    [anon_sym_u32wrapping_mul] = ACTIONS(152),
    [anon_sym_u32overflowing_mul] = ACTIONS(152),
    [anon_sym_u32checked_div] = ACTIONS(156),
    [anon_sym_u32unchecked_div] = ACTIONS(156),
    [anon_sym_u32checked_mod] = ACTIONS(152),
    [anon_sym_u32unchecked_mod] = ACTIONS(152),
    [anon_sym_u32checked_divmod] = ACTIONS(152),
    [anon_sym_u32unchecked_divmod] = ACTIONS(152),
    [anon_sym_u32checked_shr] = ACTIONS(152),
    [anon_sym_u32unchecked_shr] = ACTIONS(152),
    [anon_sym_u32checked_shl] = ACTIONS(152),
    [anon_sym_u32unchecked_shl] = ACTIONS(152),
    [anon_sym_u32checked_rotr] = ACTIONS(152),
    [anon_sym_u32unchecked_rotr] = ACTIONS(152),
    [anon_sym_u32checked_rotl] = ACTIONS(152),
    [anon_sym_u32unchecked_rotl] = ACTIONS(152),
    [anon_sym_u32checked_eq] = ACTIONS(152),
    [anon_sym_u32checked_neq] = ACTIONS(152),
    [anon_sym_mem_load] = ACTIONS(156),
    [anon_sym_mem_loadw] = ACTIONS(152),
    [anon_sym_mem_store] = ACTIONS(156),
    [anon_sym_mem_storew] = ACTIONS(152),
    [anon_sym_if] = ACTIONS(152),
    [sym__else] = ACTIONS(152),
    [anon_sym_while] = ACTIONS(152),
    [anon_sym_repeat] = ACTIONS(152),
    [sym__end] = ACTIONS(152),
  },
  [25] = {
    [anon_sym_exec] = ACTIONS(158),
    [anon_sym_call] = ACTIONS(160),
    [anon_sym_syscall] = ACTIONS(158),
    [anon_sym_assert] = ACTIONS(160),
    [anon_sym_assertz] = ACTIONS(158),
    [anon_sym_assert_eq] = ACTIONS(158),
    [anon_sym_neg] = ACTIONS(158),
    [anon_sym_inv] = ACTIONS(158),
    [anon_sym_pow2] = ACTIONS(158),
    [anon_sym_not] = ACTIONS(158),
    [anon_sym_and] = ACTIONS(158),
    [anon_sym_or] = ACTIONS(158),
    [anon_sym_xor] = ACTIONS(158),
    [anon_sym_lt] = ACTIONS(160),
    [anon_sym_lte] = ACTIONS(158),
    [anon_sym_gt] = ACTIONS(160),
    [anon_sym_gte] = ACTIONS(158),
    [anon_sym_eqw] = ACTIONS(158),
    [anon_sym_ext2add] = ACTIONS(158),
    [anon_sym_ext2sub] = ACTIONS(158),
    [anon_sym_ext2mul] = ACTIONS(158),
    [anon_sym_ext2div] = ACTIONS(158),
    [anon_sym_ext2neg] = ACTIONS(158),
    [anon_sym_ext2inv] = ACTIONS(158),
    [anon_sym_u32test] = ACTIONS(160),
    [anon_sym_u32testw] = ACTIONS(158),
    [anon_sym_u32assertw] = ACTIONS(158),
    [anon_sym_u32cast] = ACTIONS(158),
    [anon_sym_u32split] = ACTIONS(158),
    [anon_sym_u32overflowing_add3] = ACTIONS(158),
    [anon_sym_u32wrapping_add3] = ACTIONS(158),
    [anon_sym_u32overflowing_madd] = ACTIONS(158),
    [anon_sym_u32wrapping_madd] = ACTIONS(158),
    [anon_sym_u32checked_and] = ACTIONS(158),
    [anon_sym_u32checked_or] = ACTIONS(158),
    [anon_sym_u32checked_xor] = ACTIONS(158),
    [anon_sym_u32checked_not] = ACTIONS(158),
    [anon_sym_u32checked_popcnt] = ACTIONS(158),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(158),
    [anon_sym_u32checked_lt] = ACTIONS(160),
    [anon_sym_u32unchecked_lt] = ACTIONS(160),
    [anon_sym_u32checked_lte] = ACTIONS(158),
    [anon_sym_u32unchecked_lte] = ACTIONS(158),
    [anon_sym_u32checked_gt] = ACTIONS(160),
    [anon_sym_u32unchecked_gt] = ACTIONS(160),
    [anon_sym_u32checked_gte] = ACTIONS(158),
    [anon_sym_u32unchecked_gte] = ACTIONS(158),
    [anon_sym_u32checked_min] = ACTIONS(158),
    [anon_sym_u32unchecked_min] = ACTIONS(158),
    [anon_sym_u32checked_max] = ACTIONS(158),
    [anon_sym_u32unchecked_max] = ACTIONS(158),
    [anon_sym_drop] = ACTIONS(160),
    [anon_sym_dropw] = ACTIONS(158),
    [anon_sym_padw] = ACTIONS(158),
    [anon_sym_swapdw] = ACTIONS(158),
    [anon_sym_cswap] = ACTIONS(160),
    [anon_sym_cswapw] = ACTIONS(158),
    [anon_sym_cdrop] = ACTIONS(160),
    [anon_sym_cdropw] = ACTIONS(158),
    [anon_sym_sdepth] = ACTIONS(158),
    [anon_sym_mem_stream] = ACTIONS(158),
    [anon_sym_adv_pipe] = ACTIONS(158),
    [anon_sym_adv_loadw] = ACTIONS(158),
    [anon_sym_rphash] = ACTIONS(158),
    [anon_sym_rpperm] = ACTIONS(158),
    [anon_sym_mtree_get] = ACTIONS(158),
    [anon_sym_mtree_set] = ACTIONS(158),
    [anon_sym_mtree_cwm] = ACTIONS(158),
    [anon_sym_caller] = ACTIONS(158),
    [anon_sym_adv] = ACTIONS(160),
    [anon_sym_exp] = ACTIONS(158),
    [anon_sym_u32assert] = ACTIONS(160),
    [anon_sym_add] = ACTIONS(158),
    [anon_sym_sub] = ACTIONS(158),
    [anon_sym_mul] = ACTIONS(158),
    [anon_sym_eq] = ACTIONS(160),
    [anon_sym_neq] = ACTIONS(158),
    [anon_sym_u32checked_add] = ACTIONS(158),
    [anon_sym_u32wrapping_add] = ACTIONS(160),
    [anon_sym_u32overflowing_add] = ACTIONS(160),
    [anon_sym_u32checked_sub] = ACTIONS(158),
    [anon_sym_u32wrapping_sub] = ACTIONS(158),
    [anon_sym_u32overflowing_sub] = ACTIONS(158),
    [anon_sym_u32checked_mul] = ACTIONS(158),
    [anon_sym_u32wrapping_mul] = ACTIONS(158),
    [anon_sym_u32overflowing_mul] = ACTIONS(158),
    [anon_sym_u32checked_div] = ACTIONS(160),
    [anon_sym_u32unchecked_div] = ACTIONS(160),
    [anon_sym_u32checked_mod] = ACTIONS(158),
    [anon_sym_u32unchecked_mod] = ACTIONS(158),
    [anon_sym_u32checked_divmod] = ACTIONS(158),
    [anon_sym_u32unchecked_divmod] = ACTIONS(158),
    [anon_sym_u32checked_shr] = ACTIONS(158),
    [anon_sym_u32unchecked_shr] = ACTIONS(158),
    [anon_sym_u32checked_shl] = ACTIONS(158),
    [anon_sym_u32unchecked_shl] = ACTIONS(158),
    [anon_sym_u32checked_rotr] = ACTIONS(158),
    [anon_sym_u32unchecked_rotr] = ACTIONS(158),
    [anon_sym_u32checked_rotl] = ACTIONS(158),
    [anon_sym_u32unchecked_rotl] = ACTIONS(158),
    [anon_sym_u32checked_eq] = ACTIONS(158),
    [anon_sym_u32checked_neq] = ACTIONS(158),
    [anon_sym_mem_load] = ACTIONS(160),
    [anon_sym_mem_loadw] = ACTIONS(158),
    [anon_sym_mem_store] = ACTIONS(160),
    [anon_sym_mem_storew] = ACTIONS(158),
    [anon_sym_if] = ACTIONS(158),
    [sym__else] = ACTIONS(158),
    [anon_sym_while] = ACTIONS(158),
    [anon_sym_repeat] = ACTIONS(158),
    [sym__end] = ACTIONS(158),
  },
  [26] = {
    [anon_sym_exec] = ACTIONS(162),
    [anon_sym_call] = ACTIONS(164),
    [anon_sym_syscall] = ACTIONS(162),
    [anon_sym_assert] = ACTIONS(164),
    [anon_sym_assertz] = ACTIONS(162),
    [anon_sym_assert_eq] = ACTIONS(162),
    [anon_sym_neg] = ACTIONS(162),
    [anon_sym_inv] = ACTIONS(162),
    [anon_sym_pow2] = ACTIONS(162),
    [anon_sym_not] = ACTIONS(162),
    [anon_sym_and] = ACTIONS(162),
    [anon_sym_or] = ACTIONS(162),
    [anon_sym_xor] = ACTIONS(162),
    [anon_sym_lt] = ACTIONS(164),
    [anon_sym_lte] = ACTIONS(162),
    [anon_sym_gt] = ACTIONS(164),
    [anon_sym_gte] = ACTIONS(162),
    [anon_sym_eqw] = ACTIONS(162),
    [anon_sym_ext2add] = ACTIONS(162),
    [anon_sym_ext2sub] = ACTIONS(162),
    [anon_sym_ext2mul] = ACTIONS(162),
    [anon_sym_ext2div] = ACTIONS(162),
    [anon_sym_ext2neg] = ACTIONS(162),
    [anon_sym_ext2inv] = ACTIONS(162),
    [anon_sym_u32test] = ACTIONS(164),
    [anon_sym_u32testw] = ACTIONS(162),
    [anon_sym_u32assertw] = ACTIONS(162),
    [anon_sym_u32cast] = ACTIONS(162),
    [anon_sym_u32split] = ACTIONS(162),
    [anon_sym_u32overflowing_add3] = ACTIONS(162),
    [anon_sym_u32wrapping_add3] = ACTIONS(162),
    [anon_sym_u32overflowing_madd] = ACTIONS(162),
    [anon_sym_u32wrapping_madd] = ACTIONS(162),
    [anon_sym_u32checked_and] = ACTIONS(162),
    [anon_sym_u32checked_or] = ACTIONS(162),
    [anon_sym_u32checked_xor] = ACTIONS(162),
    [anon_sym_u32checked_not] = ACTIONS(162),
    [anon_sym_u32checked_popcnt] = ACTIONS(162),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(162),
    [anon_sym_u32checked_lt] = ACTIONS(164),
    [anon_sym_u32unchecked_lt] = ACTIONS(164),
    [anon_sym_u32checked_lte] = ACTIONS(162),
    [anon_sym_u32unchecked_lte] = ACTIONS(162),
    [anon_sym_u32checked_gt] = ACTIONS(164),
    [anon_sym_u32unchecked_gt] = ACTIONS(164),
    [anon_sym_u32checked_gte] = ACTIONS(162),
    [anon_sym_u32unchecked_gte] = ACTIONS(162),
    [anon_sym_u32checked_min] = ACTIONS(162),
    [anon_sym_u32unchecked_min] = ACTIONS(162),
    [anon_sym_u32checked_max] = ACTIONS(162),
    [anon_sym_u32unchecked_max] = ACTIONS(162),
    [anon_sym_drop] = ACTIONS(164),
    [anon_sym_dropw] = ACTIONS(162),
    [anon_sym_padw] = ACTIONS(162),
    [anon_sym_swapdw] = ACTIONS(162),
    [anon_sym_cswap] = ACTIONS(164),
    [anon_sym_cswapw] = ACTIONS(162),
    [anon_sym_cdrop] = ACTIONS(164),
    [anon_sym_cdropw] = ACTIONS(162),
    [anon_sym_sdepth] = ACTIONS(162),
    [anon_sym_mem_stream] = ACTIONS(162),
    [anon_sym_adv_pipe] = ACTIONS(162),
    [anon_sym_adv_loadw] = ACTIONS(162),
    [anon_sym_rphash] = ACTIONS(162),
    [anon_sym_rpperm] = ACTIONS(162),
    [anon_sym_mtree_get] = ACTIONS(162),
    [anon_sym_mtree_set] = ACTIONS(162),
    [anon_sym_mtree_cwm] = ACTIONS(162),
    [anon_sym_caller] = ACTIONS(162),
    [anon_sym_adv] = ACTIONS(164),
    [anon_sym_exp] = ACTIONS(162),
    [anon_sym_u32assert] = ACTIONS(164),
    [anon_sym_add] = ACTIONS(162),
    [anon_sym_sub] = ACTIONS(162),
    [anon_sym_mul] = ACTIONS(162),
    [anon_sym_eq] = ACTIONS(164),
    [anon_sym_neq] = ACTIONS(162),
    [anon_sym_u32checked_add] = ACTIONS(162),
    [anon_sym_u32wrapping_add] = ACTIONS(164),
    [anon_sym_u32overflowing_add] = ACTIONS(164),
    [anon_sym_u32checked_sub] = ACTIONS(162),
    [anon_sym_u32wrapping_sub] = ACTIONS(162),
    [anon_sym_u32overflowing_sub] = ACTIONS(162),
    [anon_sym_u32checked_mul] = ACTIONS(162),
    [anon_sym_u32wrapping_mul] = ACTIONS(162),
    [anon_sym_u32overflowing_mul] = ACTIONS(162),
    [anon_sym_u32checked_div] = ACTIONS(164),
    [anon_sym_u32unchecked_div] = ACTIONS(164),
    [anon_sym_u32checked_mod] = ACTIONS(162),
    [anon_sym_u32unchecked_mod] = ACTIONS(162),
    [anon_sym_u32checked_divmod] = ACTIONS(162),
    [anon_sym_u32unchecked_divmod] = ACTIONS(162),
    [anon_sym_u32checked_shr] = ACTIONS(162),
    [anon_sym_u32unchecked_shr] = ACTIONS(162),
    [anon_sym_u32checked_shl] = ACTIONS(162),
    [anon_sym_u32unchecked_shl] = ACTIONS(162),
    [anon_sym_u32checked_rotr] = ACTIONS(162),
    [anon_sym_u32unchecked_rotr] = ACTIONS(162),
    [anon_sym_u32checked_rotl] = ACTIONS(162),
    [anon_sym_u32unchecked_rotl] = ACTIONS(162),
    [anon_sym_u32checked_eq] = ACTIONS(162),
    [anon_sym_u32checked_neq] = ACTIONS(162),
    [anon_sym_mem_load] = ACTIONS(164),
    [anon_sym_mem_loadw] = ACTIONS(162),
    [anon_sym_mem_store] = ACTIONS(164),
    [anon_sym_mem_storew] = ACTIONS(162),
    [anon_sym_if] = ACTIONS(162),
    [sym__else] = ACTIONS(162),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_repeat] = ACTIONS(162),
    [sym__end] = ACTIONS(162),
  },
  [27] = {
    [anon_sym_exec] = ACTIONS(166),
    [anon_sym_call] = ACTIONS(168),
    [anon_sym_syscall] = ACTIONS(166),
    [anon_sym_assert] = ACTIONS(168),
    [anon_sym_assertz] = ACTIONS(166),
    [anon_sym_assert_eq] = ACTIONS(166),
    [anon_sym_neg] = ACTIONS(166),
    [anon_sym_inv] = ACTIONS(166),
    [anon_sym_pow2] = ACTIONS(166),
    [anon_sym_not] = ACTIONS(166),
    [anon_sym_and] = ACTIONS(166),
    [anon_sym_or] = ACTIONS(166),
    [anon_sym_xor] = ACTIONS(166),
    [anon_sym_lt] = ACTIONS(168),
    [anon_sym_lte] = ACTIONS(166),
    [anon_sym_gt] = ACTIONS(168),
    [anon_sym_gte] = ACTIONS(166),
    [anon_sym_eqw] = ACTIONS(166),
    [anon_sym_ext2add] = ACTIONS(166),
    [anon_sym_ext2sub] = ACTIONS(166),
    [anon_sym_ext2mul] = ACTIONS(166),
    [anon_sym_ext2div] = ACTIONS(166),
    [anon_sym_ext2neg] = ACTIONS(166),
    [anon_sym_ext2inv] = ACTIONS(166),
    [anon_sym_u32test] = ACTIONS(168),
    [anon_sym_u32testw] = ACTIONS(166),
    [anon_sym_u32assertw] = ACTIONS(166),
    [anon_sym_u32cast] = ACTIONS(166),
    [anon_sym_u32split] = ACTIONS(166),
    [anon_sym_u32overflowing_add3] = ACTIONS(166),
    [anon_sym_u32wrapping_add3] = ACTIONS(166),
    [anon_sym_u32overflowing_madd] = ACTIONS(166),
    [anon_sym_u32wrapping_madd] = ACTIONS(166),
    [anon_sym_u32checked_and] = ACTIONS(166),
    [anon_sym_u32checked_or] = ACTIONS(166),
    [anon_sym_u32checked_xor] = ACTIONS(166),
    [anon_sym_u32checked_not] = ACTIONS(166),
    [anon_sym_u32checked_popcnt] = ACTIONS(166),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(166),
    [anon_sym_u32checked_lt] = ACTIONS(168),
    [anon_sym_u32unchecked_lt] = ACTIONS(168),
    [anon_sym_u32checked_lte] = ACTIONS(166),
    [anon_sym_u32unchecked_lte] = ACTIONS(166),
    [anon_sym_u32checked_gt] = ACTIONS(168),
    [anon_sym_u32unchecked_gt] = ACTIONS(168),
    [anon_sym_u32checked_gte] = ACTIONS(166),
    [anon_sym_u32unchecked_gte] = ACTIONS(166),
    [anon_sym_u32checked_min] = ACTIONS(166),
    [anon_sym_u32unchecked_min] = ACTIONS(166),
    [anon_sym_u32checked_max] = ACTIONS(166),
    [anon_sym_u32unchecked_max] = ACTIONS(166),
    [anon_sym_drop] = ACTIONS(168),
    [anon_sym_dropw] = ACTIONS(166),
    [anon_sym_padw] = ACTIONS(166),
    [anon_sym_swapdw] = ACTIONS(166),
    [anon_sym_cswap] = ACTIONS(168),
    [anon_sym_cswapw] = ACTIONS(166),
    [anon_sym_cdrop] = ACTIONS(168),
    [anon_sym_cdropw] = ACTIONS(166),
    [anon_sym_sdepth] = ACTIONS(166),
    [anon_sym_mem_stream] = ACTIONS(166),
    [anon_sym_adv_pipe] = ACTIONS(166),
    [anon_sym_adv_loadw] = ACTIONS(166),
    [anon_sym_rphash] = ACTIONS(166),
    [anon_sym_rpperm] = ACTIONS(166),
    [anon_sym_mtree_get] = ACTIONS(166),
    [anon_sym_mtree_set] = ACTIONS(166),
    [anon_sym_mtree_cwm] = ACTIONS(166),
    [anon_sym_caller] = ACTIONS(166),
    [anon_sym_adv] = ACTIONS(168),
    [anon_sym_exp] = ACTIONS(166),
    [anon_sym_u32assert] = ACTIONS(168),
    [anon_sym_add] = ACTIONS(166),
    [anon_sym_sub] = ACTIONS(166),
    [anon_sym_mul] = ACTIONS(166),
    [anon_sym_eq] = ACTIONS(168),
    [anon_sym_neq] = ACTIONS(166),
    [anon_sym_u32checked_add] = ACTIONS(166),
    [anon_sym_u32wrapping_add] = ACTIONS(168),
    [anon_sym_u32overflowing_add] = ACTIONS(168),
    [anon_sym_u32checked_sub] = ACTIONS(166),
    [anon_sym_u32wrapping_sub] = ACTIONS(166),
    [anon_sym_u32overflowing_sub] = ACTIONS(166),
    [anon_sym_u32checked_mul] = ACTIONS(166),
    [anon_sym_u32wrapping_mul] = ACTIONS(166),
    [anon_sym_u32overflowing_mul] = ACTIONS(166),
    [anon_sym_u32checked_div] = ACTIONS(168),
    [anon_sym_u32unchecked_div] = ACTIONS(168),
    [anon_sym_u32checked_mod] = ACTIONS(166),
    [anon_sym_u32unchecked_mod] = ACTIONS(166),
    [anon_sym_u32checked_divmod] = ACTIONS(166),
    [anon_sym_u32unchecked_divmod] = ACTIONS(166),
    [anon_sym_u32checked_shr] = ACTIONS(166),
    [anon_sym_u32unchecked_shr] = ACTIONS(166),
    [anon_sym_u32checked_shl] = ACTIONS(166),
    [anon_sym_u32unchecked_shl] = ACTIONS(166),
    [anon_sym_u32checked_rotr] = ACTIONS(166),
    [anon_sym_u32unchecked_rotr] = ACTIONS(166),
    [anon_sym_u32checked_rotl] = ACTIONS(166),
    [anon_sym_u32unchecked_rotl] = ACTIONS(166),
    [anon_sym_u32checked_eq] = ACTIONS(166),
    [anon_sym_u32checked_neq] = ACTIONS(166),
    [anon_sym_mem_load] = ACTIONS(168),
    [anon_sym_mem_loadw] = ACTIONS(166),
    [anon_sym_mem_store] = ACTIONS(168),
    [anon_sym_mem_storew] = ACTIONS(166),
    [anon_sym_if] = ACTIONS(166),
    [sym__else] = ACTIONS(166),
    [anon_sym_while] = ACTIONS(166),
    [anon_sym_repeat] = ACTIONS(166),
    [sym__end] = ACTIONS(166),
  },
  [28] = {
    [anon_sym_exec] = ACTIONS(170),
    [anon_sym_call] = ACTIONS(172),
    [anon_sym_syscall] = ACTIONS(170),
    [anon_sym_assert] = ACTIONS(172),
    [anon_sym_assertz] = ACTIONS(170),
    [anon_sym_assert_eq] = ACTIONS(170),
    [anon_sym_neg] = ACTIONS(170),
    [anon_sym_inv] = ACTIONS(170),
    [anon_sym_pow2] = ACTIONS(170),
    [anon_sym_not] = ACTIONS(170),
    [anon_sym_and] = ACTIONS(170),
    [anon_sym_or] = ACTIONS(170),
    [anon_sym_xor] = ACTIONS(170),
    [anon_sym_lt] = ACTIONS(172),
    [anon_sym_lte] = ACTIONS(170),
    [anon_sym_gt] = ACTIONS(172),
    [anon_sym_gte] = ACTIONS(170),
    [anon_sym_eqw] = ACTIONS(170),
    [anon_sym_ext2add] = ACTIONS(170),
    [anon_sym_ext2sub] = ACTIONS(170),
    [anon_sym_ext2mul] = ACTIONS(170),
    [anon_sym_ext2div] = ACTIONS(170),
    [anon_sym_ext2neg] = ACTIONS(170),
    [anon_sym_ext2inv] = ACTIONS(170),
    [anon_sym_u32test] = ACTIONS(172),
    [anon_sym_u32testw] = ACTIONS(170),
    [anon_sym_u32assertw] = ACTIONS(170),
    [anon_sym_u32cast] = ACTIONS(170),
    [anon_sym_u32split] = ACTIONS(170),
    [anon_sym_u32overflowing_add3] = ACTIONS(170),
    [anon_sym_u32wrapping_add3] = ACTIONS(170),
    [anon_sym_u32overflowing_madd] = ACTIONS(170),
    [anon_sym_u32wrapping_madd] = ACTIONS(170),
    [anon_sym_u32checked_and] = ACTIONS(170),
    [anon_sym_u32checked_or] = ACTIONS(170),
    [anon_sym_u32checked_xor] = ACTIONS(170),
    [anon_sym_u32checked_not] = ACTIONS(170),
    [anon_sym_u32checked_popcnt] = ACTIONS(170),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(170),
    [anon_sym_u32checked_lt] = ACTIONS(172),
    [anon_sym_u32unchecked_lt] = ACTIONS(172),
    [anon_sym_u32checked_lte] = ACTIONS(170),
    [anon_sym_u32unchecked_lte] = ACTIONS(170),
    [anon_sym_u32checked_gt] = ACTIONS(172),
    [anon_sym_u32unchecked_gt] = ACTIONS(172),
    [anon_sym_u32checked_gte] = ACTIONS(170),
    [anon_sym_u32unchecked_gte] = ACTIONS(170),
    [anon_sym_u32checked_min] = ACTIONS(170),
    [anon_sym_u32unchecked_min] = ACTIONS(170),
    [anon_sym_u32checked_max] = ACTIONS(170),
    [anon_sym_u32unchecked_max] = ACTIONS(170),
    [anon_sym_drop] = ACTIONS(172),
    [anon_sym_dropw] = ACTIONS(170),
    [anon_sym_padw] = ACTIONS(170),
    [anon_sym_swapdw] = ACTIONS(170),
    [anon_sym_cswap] = ACTIONS(172),
    [anon_sym_cswapw] = ACTIONS(170),
    [anon_sym_cdrop] = ACTIONS(172),
    [anon_sym_cdropw] = ACTIONS(170),
    [anon_sym_sdepth] = ACTIONS(170),
    [anon_sym_mem_stream] = ACTIONS(170),
    [anon_sym_adv_pipe] = ACTIONS(170),
    [anon_sym_adv_loadw] = ACTIONS(170),
    [anon_sym_rphash] = ACTIONS(170),
    [anon_sym_rpperm] = ACTIONS(170),
    [anon_sym_mtree_get] = ACTIONS(170),
    [anon_sym_mtree_set] = ACTIONS(170),
    [anon_sym_mtree_cwm] = ACTIONS(170),
    [anon_sym_caller] = ACTIONS(170),
    [anon_sym_adv] = ACTIONS(172),
    [anon_sym_exp] = ACTIONS(170),
    [anon_sym_u32assert] = ACTIONS(172),
    [anon_sym_add] = ACTIONS(170),
    [anon_sym_sub] = ACTIONS(170),
    [anon_sym_mul] = ACTIONS(170),
    [anon_sym_eq] = ACTIONS(172),
    [anon_sym_neq] = ACTIONS(170),
    [anon_sym_u32checked_add] = ACTIONS(170),
    [anon_sym_u32wrapping_add] = ACTIONS(172),
    [anon_sym_u32overflowing_add] = ACTIONS(172),
    [anon_sym_u32checked_sub] = ACTIONS(170),
    [anon_sym_u32wrapping_sub] = ACTIONS(170),
    [anon_sym_u32overflowing_sub] = ACTIONS(170),
    [anon_sym_u32checked_mul] = ACTIONS(170),
    [anon_sym_u32wrapping_mul] = ACTIONS(170),
    [anon_sym_u32overflowing_mul] = ACTIONS(170),
    [anon_sym_u32checked_div] = ACTIONS(172),
    [anon_sym_u32unchecked_div] = ACTIONS(172),
    [anon_sym_u32checked_mod] = ACTIONS(170),
    [anon_sym_u32unchecked_mod] = ACTIONS(170),
    [anon_sym_u32checked_divmod] = ACTIONS(170),
    [anon_sym_u32unchecked_divmod] = ACTIONS(170),
    [anon_sym_u32checked_shr] = ACTIONS(170),
    [anon_sym_u32unchecked_shr] = ACTIONS(170),
    [anon_sym_u32checked_shl] = ACTIONS(170),
    [anon_sym_u32unchecked_shl] = ACTIONS(170),
    [anon_sym_u32checked_rotr] = ACTIONS(170),
    [anon_sym_u32unchecked_rotr] = ACTIONS(170),
    [anon_sym_u32checked_rotl] = ACTIONS(170),
    [anon_sym_u32unchecked_rotl] = ACTIONS(170),
    [anon_sym_u32checked_eq] = ACTIONS(170),
    [anon_sym_u32checked_neq] = ACTIONS(170),
    [anon_sym_mem_load] = ACTIONS(172),
    [anon_sym_mem_loadw] = ACTIONS(170),
    [anon_sym_mem_store] = ACTIONS(172),
    [anon_sym_mem_storew] = ACTIONS(170),
    [anon_sym_if] = ACTIONS(170),
    [sym__else] = ACTIONS(170),
    [anon_sym_while] = ACTIONS(170),
    [anon_sym_repeat] = ACTIONS(170),
    [sym__end] = ACTIONS(170),
  },
  [29] = {
    [anon_sym_exec] = ACTIONS(174),
    [anon_sym_call] = ACTIONS(176),
    [anon_sym_syscall] = ACTIONS(174),
    [anon_sym_assert] = ACTIONS(176),
    [anon_sym_assertz] = ACTIONS(174),
    [anon_sym_assert_eq] = ACTIONS(174),
    [anon_sym_neg] = ACTIONS(174),
    [anon_sym_inv] = ACTIONS(174),
    [anon_sym_pow2] = ACTIONS(174),
    [anon_sym_not] = ACTIONS(174),
    [anon_sym_and] = ACTIONS(174),
    [anon_sym_or] = ACTIONS(174),
    [anon_sym_xor] = ACTIONS(174),
    [anon_sym_lt] = ACTIONS(176),
    [anon_sym_lte] = ACTIONS(174),
    [anon_sym_gt] = ACTIONS(176),
    [anon_sym_gte] = ACTIONS(174),
    [anon_sym_eqw] = ACTIONS(174),
    [anon_sym_ext2add] = ACTIONS(174),
    [anon_sym_ext2sub] = ACTIONS(174),
    [anon_sym_ext2mul] = ACTIONS(174),
    [anon_sym_ext2div] = ACTIONS(174),
    [anon_sym_ext2neg] = ACTIONS(174),
    [anon_sym_ext2inv] = ACTIONS(174),
    [anon_sym_u32test] = ACTIONS(176),
    [anon_sym_u32testw] = ACTIONS(174),
    [anon_sym_u32assertw] = ACTIONS(174),
    [anon_sym_u32cast] = ACTIONS(174),
    [anon_sym_u32split] = ACTIONS(174),
    [anon_sym_u32overflowing_add3] = ACTIONS(174),
    [anon_sym_u32wrapping_add3] = ACTIONS(174),
    [anon_sym_u32overflowing_madd] = ACTIONS(174),
    [anon_sym_u32wrapping_madd] = ACTIONS(174),
    [anon_sym_u32checked_and] = ACTIONS(174),
    [anon_sym_u32checked_or] = ACTIONS(174),
    [anon_sym_u32checked_xor] = ACTIONS(174),
    [anon_sym_u32checked_not] = ACTIONS(174),
    [anon_sym_u32checked_popcnt] = ACTIONS(174),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(174),
    [anon_sym_u32checked_lt] = ACTIONS(176),
    [anon_sym_u32unchecked_lt] = ACTIONS(176),
    [anon_sym_u32checked_lte] = ACTIONS(174),
    [anon_sym_u32unchecked_lte] = ACTIONS(174),
    [anon_sym_u32checked_gt] = ACTIONS(176),
    [anon_sym_u32unchecked_gt] = ACTIONS(176),
    [anon_sym_u32checked_gte] = ACTIONS(174),
    [anon_sym_u32unchecked_gte] = ACTIONS(174),
    [anon_sym_u32checked_min] = ACTIONS(174),
    [anon_sym_u32unchecked_min] = ACTIONS(174),
    [anon_sym_u32checked_max] = ACTIONS(174),
    [anon_sym_u32unchecked_max] = ACTIONS(174),
    [anon_sym_drop] = ACTIONS(176),
    [anon_sym_dropw] = ACTIONS(174),
    [anon_sym_padw] = ACTIONS(174),
    [anon_sym_swapdw] = ACTIONS(174),
    [anon_sym_cswap] = ACTIONS(176),
    [anon_sym_cswapw] = ACTIONS(174),
    [anon_sym_cdrop] = ACTIONS(176),
    [anon_sym_cdropw] = ACTIONS(174),
    [anon_sym_sdepth] = ACTIONS(174),
    [anon_sym_mem_stream] = ACTIONS(174),
    [anon_sym_adv_pipe] = ACTIONS(174),
    [anon_sym_adv_loadw] = ACTIONS(174),
    [anon_sym_rphash] = ACTIONS(174),
    [anon_sym_rpperm] = ACTIONS(174),
    [anon_sym_mtree_get] = ACTIONS(174),
    [anon_sym_mtree_set] = ACTIONS(174),
    [anon_sym_mtree_cwm] = ACTIONS(174),
    [anon_sym_caller] = ACTIONS(174),
    [anon_sym_adv] = ACTIONS(176),
    [anon_sym_exp] = ACTIONS(174),
    [anon_sym_u32assert] = ACTIONS(176),
    [anon_sym_add] = ACTIONS(174),
    [anon_sym_sub] = ACTIONS(174),
    [anon_sym_mul] = ACTIONS(174),
    [anon_sym_eq] = ACTIONS(176),
    [anon_sym_neq] = ACTIONS(174),
    [anon_sym_u32checked_add] = ACTIONS(174),
    [anon_sym_u32wrapping_add] = ACTIONS(176),
    [anon_sym_u32overflowing_add] = ACTIONS(176),
    [anon_sym_u32checked_sub] = ACTIONS(174),
    [anon_sym_u32wrapping_sub] = ACTIONS(174),
    [anon_sym_u32overflowing_sub] = ACTIONS(174),
    [anon_sym_u32checked_mul] = ACTIONS(174),
    [anon_sym_u32wrapping_mul] = ACTIONS(174),
    [anon_sym_u32overflowing_mul] = ACTIONS(174),
    [anon_sym_u32checked_div] = ACTIONS(176),
    [anon_sym_u32unchecked_div] = ACTIONS(176),
    [anon_sym_u32checked_mod] = ACTIONS(174),
    [anon_sym_u32unchecked_mod] = ACTIONS(174),
    [anon_sym_u32checked_divmod] = ACTIONS(174),
    [anon_sym_u32unchecked_divmod] = ACTIONS(174),
    [anon_sym_u32checked_shr] = ACTIONS(174),
    [anon_sym_u32unchecked_shr] = ACTIONS(174),
    [anon_sym_u32checked_shl] = ACTIONS(174),
    [anon_sym_u32unchecked_shl] = ACTIONS(174),
    [anon_sym_u32checked_rotr] = ACTIONS(174),
    [anon_sym_u32unchecked_rotr] = ACTIONS(174),
    [anon_sym_u32checked_rotl] = ACTIONS(174),
    [anon_sym_u32unchecked_rotl] = ACTIONS(174),
    [anon_sym_u32checked_eq] = ACTIONS(174),
    [anon_sym_u32checked_neq] = ACTIONS(174),
    [anon_sym_mem_load] = ACTIONS(176),
    [anon_sym_mem_loadw] = ACTIONS(174),
    [anon_sym_mem_store] = ACTIONS(176),
    [anon_sym_mem_storew] = ACTIONS(174),
    [anon_sym_if] = ACTIONS(174),
    [sym__else] = ACTIONS(174),
    [anon_sym_while] = ACTIONS(174),
    [anon_sym_repeat] = ACTIONS(174),
    [sym__end] = ACTIONS(174),
  },
  [30] = {
    [anon_sym_exec] = ACTIONS(178),
    [anon_sym_call] = ACTIONS(180),
    [anon_sym_syscall] = ACTIONS(178),
    [anon_sym_assert] = ACTIONS(180),
    [anon_sym_assertz] = ACTIONS(178),
    [anon_sym_assert_eq] = ACTIONS(178),
    [anon_sym_neg] = ACTIONS(178),
    [anon_sym_inv] = ACTIONS(178),
    [anon_sym_pow2] = ACTIONS(178),
    [anon_sym_not] = ACTIONS(178),
    [anon_sym_and] = ACTIONS(178),
    [anon_sym_or] = ACTIONS(178),
    [anon_sym_xor] = ACTIONS(178),
    [anon_sym_lt] = ACTIONS(180),
    [anon_sym_lte] = ACTIONS(178),
    [anon_sym_gt] = ACTIONS(180),
    [anon_sym_gte] = ACTIONS(178),
    [anon_sym_eqw] = ACTIONS(178),
    [anon_sym_ext2add] = ACTIONS(178),
    [anon_sym_ext2sub] = ACTIONS(178),
    [anon_sym_ext2mul] = ACTIONS(178),
    [anon_sym_ext2div] = ACTIONS(178),
    [anon_sym_ext2neg] = ACTIONS(178),
    [anon_sym_ext2inv] = ACTIONS(178),
    [anon_sym_u32test] = ACTIONS(180),
    [anon_sym_u32testw] = ACTIONS(178),
    [anon_sym_u32assertw] = ACTIONS(178),
    [anon_sym_u32cast] = ACTIONS(178),
    [anon_sym_u32split] = ACTIONS(178),
    [anon_sym_u32overflowing_add3] = ACTIONS(178),
    [anon_sym_u32wrapping_add3] = ACTIONS(178),
    [anon_sym_u32overflowing_madd] = ACTIONS(178),
    [anon_sym_u32wrapping_madd] = ACTIONS(178),
    [anon_sym_u32checked_and] = ACTIONS(178),
    [anon_sym_u32checked_or] = ACTIONS(178),
    [anon_sym_u32checked_xor] = ACTIONS(178),
    [anon_sym_u32checked_not] = ACTIONS(178),
    [anon_sym_u32checked_popcnt] = ACTIONS(178),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(178),
    [anon_sym_u32checked_lt] = ACTIONS(180),
    [anon_sym_u32unchecked_lt] = ACTIONS(180),
    [anon_sym_u32checked_lte] = ACTIONS(178),
    [anon_sym_u32unchecked_lte] = ACTIONS(178),
    [anon_sym_u32checked_gt] = ACTIONS(180),
    [anon_sym_u32unchecked_gt] = ACTIONS(180),
    [anon_sym_u32checked_gte] = ACTIONS(178),
    [anon_sym_u32unchecked_gte] = ACTIONS(178),
    [anon_sym_u32checked_min] = ACTIONS(178),
    [anon_sym_u32unchecked_min] = ACTIONS(178),
    [anon_sym_u32checked_max] = ACTIONS(178),
    [anon_sym_u32unchecked_max] = ACTIONS(178),
    [anon_sym_drop] = ACTIONS(180),
    [anon_sym_dropw] = ACTIONS(178),
    [anon_sym_padw] = ACTIONS(178),
    [anon_sym_swapdw] = ACTIONS(178),
    [anon_sym_cswap] = ACTIONS(180),
    [anon_sym_cswapw] = ACTIONS(178),
    [anon_sym_cdrop] = ACTIONS(180),
    [anon_sym_cdropw] = ACTIONS(178),
    [anon_sym_sdepth] = ACTIONS(178),
    [anon_sym_mem_stream] = ACTIONS(178),
    [anon_sym_adv_pipe] = ACTIONS(178),
    [anon_sym_adv_loadw] = ACTIONS(178),
    [anon_sym_rphash] = ACTIONS(178),
    [anon_sym_rpperm] = ACTIONS(178),
    [anon_sym_mtree_get] = ACTIONS(178),
    [anon_sym_mtree_set] = ACTIONS(178),
    [anon_sym_mtree_cwm] = ACTIONS(178),
    [anon_sym_caller] = ACTIONS(178),
    [anon_sym_adv] = ACTIONS(180),
    [anon_sym_exp] = ACTIONS(178),
    [anon_sym_u32assert] = ACTIONS(180),
    [anon_sym_add] = ACTIONS(178),
    [anon_sym_sub] = ACTIONS(178),
    [anon_sym_mul] = ACTIONS(178),
    [anon_sym_eq] = ACTIONS(180),
    [anon_sym_neq] = ACTIONS(178),
    [anon_sym_u32checked_add] = ACTIONS(178),
    [anon_sym_u32wrapping_add] = ACTIONS(180),
    [anon_sym_u32overflowing_add] = ACTIONS(180),
    [anon_sym_u32checked_sub] = ACTIONS(178),
    [anon_sym_u32wrapping_sub] = ACTIONS(178),
    [anon_sym_u32overflowing_sub] = ACTIONS(178),
    [anon_sym_u32checked_mul] = ACTIONS(178),
    [anon_sym_u32wrapping_mul] = ACTIONS(178),
    [anon_sym_u32overflowing_mul] = ACTIONS(178),
    [anon_sym_u32checked_div] = ACTIONS(180),
    [anon_sym_u32unchecked_div] = ACTIONS(180),
    [anon_sym_u32checked_mod] = ACTIONS(178),
    [anon_sym_u32unchecked_mod] = ACTIONS(178),
    [anon_sym_u32checked_divmod] = ACTIONS(178),
    [anon_sym_u32unchecked_divmod] = ACTIONS(178),
    [anon_sym_u32checked_shr] = ACTIONS(178),
    [anon_sym_u32unchecked_shr] = ACTIONS(178),
    [anon_sym_u32checked_shl] = ACTIONS(178),
    [anon_sym_u32unchecked_shl] = ACTIONS(178),
    [anon_sym_u32checked_rotr] = ACTIONS(178),
    [anon_sym_u32unchecked_rotr] = ACTIONS(178),
    [anon_sym_u32checked_rotl] = ACTIONS(178),
    [anon_sym_u32unchecked_rotl] = ACTIONS(178),
    [anon_sym_u32checked_eq] = ACTIONS(178),
    [anon_sym_u32checked_neq] = ACTIONS(178),
    [anon_sym_mem_load] = ACTIONS(180),
    [anon_sym_mem_loadw] = ACTIONS(178),
    [anon_sym_mem_store] = ACTIONS(180),
    [anon_sym_mem_storew] = ACTIONS(178),
    [anon_sym_if] = ACTIONS(178),
    [sym__else] = ACTIONS(178),
    [anon_sym_while] = ACTIONS(178),
    [anon_sym_repeat] = ACTIONS(178),
    [sym__end] = ACTIONS(178),
  },
  [31] = {
    [anon_sym_exec] = ACTIONS(182),
    [anon_sym_call] = ACTIONS(184),
    [anon_sym_syscall] = ACTIONS(182),
    [anon_sym_assert] = ACTIONS(184),
    [anon_sym_assertz] = ACTIONS(182),
    [anon_sym_assert_eq] = ACTIONS(182),
    [anon_sym_neg] = ACTIONS(182),
    [anon_sym_inv] = ACTIONS(182),
    [anon_sym_pow2] = ACTIONS(182),
    [anon_sym_not] = ACTIONS(182),
    [anon_sym_and] = ACTIONS(182),
    [anon_sym_or] = ACTIONS(182),
    [anon_sym_xor] = ACTIONS(182),
    [anon_sym_lt] = ACTIONS(184),
    [anon_sym_lte] = ACTIONS(182),
    [anon_sym_gt] = ACTIONS(184),
    [anon_sym_gte] = ACTIONS(182),
    [anon_sym_eqw] = ACTIONS(182),
    [anon_sym_ext2add] = ACTIONS(182),
    [anon_sym_ext2sub] = ACTIONS(182),
    [anon_sym_ext2mul] = ACTIONS(182),
    [anon_sym_ext2div] = ACTIONS(182),
    [anon_sym_ext2neg] = ACTIONS(182),
    [anon_sym_ext2inv] = ACTIONS(182),
    [anon_sym_u32test] = ACTIONS(184),
    [anon_sym_u32testw] = ACTIONS(182),
    [anon_sym_u32assertw] = ACTIONS(182),
    [anon_sym_u32cast] = ACTIONS(182),
    [anon_sym_u32split] = ACTIONS(182),
    [anon_sym_u32overflowing_add3] = ACTIONS(182),
    [anon_sym_u32wrapping_add3] = ACTIONS(182),
    [anon_sym_u32overflowing_madd] = ACTIONS(182),
    [anon_sym_u32wrapping_madd] = ACTIONS(182),
    [anon_sym_u32checked_and] = ACTIONS(182),
    [anon_sym_u32checked_or] = ACTIONS(182),
    [anon_sym_u32checked_xor] = ACTIONS(182),
    [anon_sym_u32checked_not] = ACTIONS(182),
    [anon_sym_u32checked_popcnt] = ACTIONS(182),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(182),
    [anon_sym_u32checked_lt] = ACTIONS(184),
    [anon_sym_u32unchecked_lt] = ACTIONS(184),
    [anon_sym_u32checked_lte] = ACTIONS(182),
    [anon_sym_u32unchecked_lte] = ACTIONS(182),
    [anon_sym_u32checked_gt] = ACTIONS(184),
    [anon_sym_u32unchecked_gt] = ACTIONS(184),
    [anon_sym_u32checked_gte] = ACTIONS(182),
    [anon_sym_u32unchecked_gte] = ACTIONS(182),
    [anon_sym_u32checked_min] = ACTIONS(182),
    [anon_sym_u32unchecked_min] = ACTIONS(182),
    [anon_sym_u32checked_max] = ACTIONS(182),
    [anon_sym_u32unchecked_max] = ACTIONS(182),
    [anon_sym_drop] = ACTIONS(184),
    [anon_sym_dropw] = ACTIONS(182),
    [anon_sym_padw] = ACTIONS(182),
    [anon_sym_swapdw] = ACTIONS(182),
    [anon_sym_cswap] = ACTIONS(184),
    [anon_sym_cswapw] = ACTIONS(182),
    [anon_sym_cdrop] = ACTIONS(184),
    [anon_sym_cdropw] = ACTIONS(182),
    [anon_sym_sdepth] = ACTIONS(182),
    [anon_sym_mem_stream] = ACTIONS(182),
    [anon_sym_adv_pipe] = ACTIONS(182),
    [anon_sym_adv_loadw] = ACTIONS(182),
    [anon_sym_rphash] = ACTIONS(182),
    [anon_sym_rpperm] = ACTIONS(182),
    [anon_sym_mtree_get] = ACTIONS(182),
    [anon_sym_mtree_set] = ACTIONS(182),
    [anon_sym_mtree_cwm] = ACTIONS(182),
    [anon_sym_caller] = ACTIONS(182),
    [anon_sym_adv] = ACTIONS(184),
    [anon_sym_exp] = ACTIONS(182),
    [anon_sym_u32assert] = ACTIONS(184),
    [anon_sym_add] = ACTIONS(182),
    [anon_sym_sub] = ACTIONS(182),
    [anon_sym_mul] = ACTIONS(182),
    [anon_sym_eq] = ACTIONS(184),
    [anon_sym_neq] = ACTIONS(182),
    [anon_sym_u32checked_add] = ACTIONS(182),
    [anon_sym_u32wrapping_add] = ACTIONS(184),
    [anon_sym_u32overflowing_add] = ACTIONS(184),
    [anon_sym_u32checked_sub] = ACTIONS(182),
    [anon_sym_u32wrapping_sub] = ACTIONS(182),
    [anon_sym_u32overflowing_sub] = ACTIONS(182),
    [anon_sym_u32checked_mul] = ACTIONS(182),
    [anon_sym_u32wrapping_mul] = ACTIONS(182),
    [anon_sym_u32overflowing_mul] = ACTIONS(182),
    [anon_sym_u32checked_div] = ACTIONS(184),
    [anon_sym_u32unchecked_div] = ACTIONS(184),
    [anon_sym_u32checked_mod] = ACTIONS(182),
    [anon_sym_u32unchecked_mod] = ACTIONS(182),
    [anon_sym_u32checked_divmod] = ACTIONS(182),
    [anon_sym_u32unchecked_divmod] = ACTIONS(182),
    [anon_sym_u32checked_shr] = ACTIONS(182),
    [anon_sym_u32unchecked_shr] = ACTIONS(182),
    [anon_sym_u32checked_shl] = ACTIONS(182),
    [anon_sym_u32unchecked_shl] = ACTIONS(182),
    [anon_sym_u32checked_rotr] = ACTIONS(182),
    [anon_sym_u32unchecked_rotr] = ACTIONS(182),
    [anon_sym_u32checked_rotl] = ACTIONS(182),
    [anon_sym_u32unchecked_rotl] = ACTIONS(182),
    [anon_sym_u32checked_eq] = ACTIONS(182),
    [anon_sym_u32checked_neq] = ACTIONS(182),
    [anon_sym_mem_load] = ACTIONS(184),
    [anon_sym_mem_loadw] = ACTIONS(182),
    [anon_sym_mem_store] = ACTIONS(184),
    [anon_sym_mem_storew] = ACTIONS(182),
    [anon_sym_if] = ACTIONS(182),
    [sym__else] = ACTIONS(182),
    [anon_sym_while] = ACTIONS(182),
    [anon_sym_repeat] = ACTIONS(182),
    [sym__end] = ACTIONS(182),
  },
  [32] = {
    [anon_sym_exec] = ACTIONS(186),
    [anon_sym_call] = ACTIONS(188),
    [anon_sym_syscall] = ACTIONS(186),
    [anon_sym_assert] = ACTIONS(188),
    [anon_sym_assertz] = ACTIONS(186),
    [anon_sym_assert_eq] = ACTIONS(186),
    [anon_sym_neg] = ACTIONS(186),
    [anon_sym_inv] = ACTIONS(186),
    [anon_sym_pow2] = ACTIONS(186),
    [anon_sym_not] = ACTIONS(186),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(186),
    [anon_sym_xor] = ACTIONS(186),
    [anon_sym_lt] = ACTIONS(188),
    [anon_sym_lte] = ACTIONS(186),
    [anon_sym_gt] = ACTIONS(188),
    [anon_sym_gte] = ACTIONS(186),
    [anon_sym_eqw] = ACTIONS(186),
    [anon_sym_ext2add] = ACTIONS(186),
    [anon_sym_ext2sub] = ACTIONS(186),
    [anon_sym_ext2mul] = ACTIONS(186),
    [anon_sym_ext2div] = ACTIONS(186),
    [anon_sym_ext2neg] = ACTIONS(186),
    [anon_sym_ext2inv] = ACTIONS(186),
    [anon_sym_u32test] = ACTIONS(188),
    [anon_sym_u32testw] = ACTIONS(186),
    [anon_sym_u32assertw] = ACTIONS(186),
    [anon_sym_u32cast] = ACTIONS(186),
    [anon_sym_u32split] = ACTIONS(186),
    [anon_sym_u32overflowing_add3] = ACTIONS(186),
    [anon_sym_u32wrapping_add3] = ACTIONS(186),
    [anon_sym_u32overflowing_madd] = ACTIONS(186),
    [anon_sym_u32wrapping_madd] = ACTIONS(186),
    [anon_sym_u32checked_and] = ACTIONS(186),
    [anon_sym_u32checked_or] = ACTIONS(186),
    [anon_sym_u32checked_xor] = ACTIONS(186),
    [anon_sym_u32checked_not] = ACTIONS(186),
    [anon_sym_u32checked_popcnt] = ACTIONS(186),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(186),
    [anon_sym_u32checked_lt] = ACTIONS(188),
    [anon_sym_u32unchecked_lt] = ACTIONS(188),
    [anon_sym_u32checked_lte] = ACTIONS(186),
    [anon_sym_u32unchecked_lte] = ACTIONS(186),
    [anon_sym_u32checked_gt] = ACTIONS(188),
    [anon_sym_u32unchecked_gt] = ACTIONS(188),
    [anon_sym_u32checked_gte] = ACTIONS(186),
    [anon_sym_u32unchecked_gte] = ACTIONS(186),
    [anon_sym_u32checked_min] = ACTIONS(186),
    [anon_sym_u32unchecked_min] = ACTIONS(186),
    [anon_sym_u32checked_max] = ACTIONS(186),
    [anon_sym_u32unchecked_max] = ACTIONS(186),
    [anon_sym_drop] = ACTIONS(188),
    [anon_sym_dropw] = ACTIONS(186),
    [anon_sym_padw] = ACTIONS(186),
    [anon_sym_swapdw] = ACTIONS(186),
    [anon_sym_cswap] = ACTIONS(188),
    [anon_sym_cswapw] = ACTIONS(186),
    [anon_sym_cdrop] = ACTIONS(188),
    [anon_sym_cdropw] = ACTIONS(186),
    [anon_sym_sdepth] = ACTIONS(186),
    [anon_sym_mem_stream] = ACTIONS(186),
    [anon_sym_adv_pipe] = ACTIONS(186),
    [anon_sym_adv_loadw] = ACTIONS(186),
    [anon_sym_rphash] = ACTIONS(186),
    [anon_sym_rpperm] = ACTIONS(186),
    [anon_sym_mtree_get] = ACTIONS(186),
    [anon_sym_mtree_set] = ACTIONS(186),
    [anon_sym_mtree_cwm] = ACTIONS(186),
    [anon_sym_caller] = ACTIONS(186),
    [anon_sym_adv] = ACTIONS(188),
    [anon_sym_exp] = ACTIONS(186),
    [anon_sym_u32assert] = ACTIONS(188),
    [anon_sym_add] = ACTIONS(186),
    [anon_sym_sub] = ACTIONS(186),
    [anon_sym_mul] = ACTIONS(186),
    [anon_sym_eq] = ACTIONS(188),
    [anon_sym_neq] = ACTIONS(186),
    [anon_sym_u32checked_add] = ACTIONS(186),
    [anon_sym_u32wrapping_add] = ACTIONS(188),
    [anon_sym_u32overflowing_add] = ACTIONS(188),
    [anon_sym_u32checked_sub] = ACTIONS(186),
    [anon_sym_u32wrapping_sub] = ACTIONS(186),
    [anon_sym_u32overflowing_sub] = ACTIONS(186),
    [anon_sym_u32checked_mul] = ACTIONS(186),
    [anon_sym_u32wrapping_mul] = ACTIONS(186),
    [anon_sym_u32overflowing_mul] = ACTIONS(186),
    [anon_sym_u32checked_div] = ACTIONS(188),
    [anon_sym_u32unchecked_div] = ACTIONS(188),
    [anon_sym_u32checked_mod] = ACTIONS(186),
    [anon_sym_u32unchecked_mod] = ACTIONS(186),
    [anon_sym_u32checked_divmod] = ACTIONS(186),
    [anon_sym_u32unchecked_divmod] = ACTIONS(186),
    [anon_sym_u32checked_shr] = ACTIONS(186),
    [anon_sym_u32unchecked_shr] = ACTIONS(186),
    [anon_sym_u32checked_shl] = ACTIONS(186),
    [anon_sym_u32unchecked_shl] = ACTIONS(186),
    [anon_sym_u32checked_rotr] = ACTIONS(186),
    [anon_sym_u32unchecked_rotr] = ACTIONS(186),
    [anon_sym_u32checked_rotl] = ACTIONS(186),
    [anon_sym_u32unchecked_rotl] = ACTIONS(186),
    [anon_sym_u32checked_eq] = ACTIONS(186),
    [anon_sym_u32checked_neq] = ACTIONS(186),
    [anon_sym_mem_load] = ACTIONS(188),
    [anon_sym_mem_loadw] = ACTIONS(186),
    [anon_sym_mem_store] = ACTIONS(188),
    [anon_sym_mem_storew] = ACTIONS(186),
    [anon_sym_if] = ACTIONS(186),
    [sym__else] = ACTIONS(186),
    [anon_sym_while] = ACTIONS(186),
    [anon_sym_repeat] = ACTIONS(186),
    [sym__end] = ACTIONS(186),
  },
  [33] = {
    [anon_sym_exec] = ACTIONS(190),
    [anon_sym_call] = ACTIONS(192),
    [anon_sym_syscall] = ACTIONS(190),
    [anon_sym_assert] = ACTIONS(192),
    [anon_sym_assertz] = ACTIONS(190),
    [anon_sym_assert_eq] = ACTIONS(190),
    [anon_sym_neg] = ACTIONS(190),
    [anon_sym_inv] = ACTIONS(190),
    [anon_sym_pow2] = ACTIONS(190),
    [anon_sym_not] = ACTIONS(190),
    [anon_sym_and] = ACTIONS(190),
    [anon_sym_or] = ACTIONS(190),
    [anon_sym_xor] = ACTIONS(190),
    [anon_sym_lt] = ACTIONS(192),
    [anon_sym_lte] = ACTIONS(190),
    [anon_sym_gt] = ACTIONS(192),
    [anon_sym_gte] = ACTIONS(190),
    [anon_sym_eqw] = ACTIONS(190),
    [anon_sym_ext2add] = ACTIONS(190),
    [anon_sym_ext2sub] = ACTIONS(190),
    [anon_sym_ext2mul] = ACTIONS(190),
    [anon_sym_ext2div] = ACTIONS(190),
    [anon_sym_ext2neg] = ACTIONS(190),
    [anon_sym_ext2inv] = ACTIONS(190),
    [anon_sym_u32test] = ACTIONS(192),
    [anon_sym_u32testw] = ACTIONS(190),
    [anon_sym_u32assertw] = ACTIONS(190),
    [anon_sym_u32cast] = ACTIONS(190),
    [anon_sym_u32split] = ACTIONS(190),
    [anon_sym_u32overflowing_add3] = ACTIONS(190),
    [anon_sym_u32wrapping_add3] = ACTIONS(190),
    [anon_sym_u32overflowing_madd] = ACTIONS(190),
    [anon_sym_u32wrapping_madd] = ACTIONS(190),
    [anon_sym_u32checked_and] = ACTIONS(190),
    [anon_sym_u32checked_or] = ACTIONS(190),
    [anon_sym_u32checked_xor] = ACTIONS(190),
    [anon_sym_u32checked_not] = ACTIONS(190),
    [anon_sym_u32checked_popcnt] = ACTIONS(190),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(190),
    [anon_sym_u32checked_lt] = ACTIONS(192),
    [anon_sym_u32unchecked_lt] = ACTIONS(192),
    [anon_sym_u32checked_lte] = ACTIONS(190),
    [anon_sym_u32unchecked_lte] = ACTIONS(190),
    [anon_sym_u32checked_gt] = ACTIONS(192),
    [anon_sym_u32unchecked_gt] = ACTIONS(192),
    [anon_sym_u32checked_gte] = ACTIONS(190),
    [anon_sym_u32unchecked_gte] = ACTIONS(190),
    [anon_sym_u32checked_min] = ACTIONS(190),
    [anon_sym_u32unchecked_min] = ACTIONS(190),
    [anon_sym_u32checked_max] = ACTIONS(190),
    [anon_sym_u32unchecked_max] = ACTIONS(190),
    [anon_sym_drop] = ACTIONS(192),
    [anon_sym_dropw] = ACTIONS(190),
    [anon_sym_padw] = ACTIONS(190),
    [anon_sym_swapdw] = ACTIONS(190),
    [anon_sym_cswap] = ACTIONS(192),
    [anon_sym_cswapw] = ACTIONS(190),
    [anon_sym_cdrop] = ACTIONS(192),
    [anon_sym_cdropw] = ACTIONS(190),
    [anon_sym_sdepth] = ACTIONS(190),
    [anon_sym_mem_stream] = ACTIONS(190),
    [anon_sym_adv_pipe] = ACTIONS(190),
    [anon_sym_adv_loadw] = ACTIONS(190),
    [anon_sym_rphash] = ACTIONS(190),
    [anon_sym_rpperm] = ACTIONS(190),
    [anon_sym_mtree_get] = ACTIONS(190),
    [anon_sym_mtree_set] = ACTIONS(190),
    [anon_sym_mtree_cwm] = ACTIONS(190),
    [anon_sym_caller] = ACTIONS(190),
    [anon_sym_adv] = ACTIONS(192),
    [anon_sym_exp] = ACTIONS(190),
    [anon_sym_u32assert] = ACTIONS(192),
    [anon_sym_add] = ACTIONS(190),
    [anon_sym_sub] = ACTIONS(190),
    [anon_sym_mul] = ACTIONS(190),
    [anon_sym_eq] = ACTIONS(192),
    [anon_sym_neq] = ACTIONS(190),
    [anon_sym_u32checked_add] = ACTIONS(190),
    [anon_sym_u32wrapping_add] = ACTIONS(192),
    [anon_sym_u32overflowing_add] = ACTIONS(192),
    [anon_sym_u32checked_sub] = ACTIONS(190),
    [anon_sym_u32wrapping_sub] = ACTIONS(190),
    [anon_sym_u32overflowing_sub] = ACTIONS(190),
    [anon_sym_u32checked_mul] = ACTIONS(190),
    [anon_sym_u32wrapping_mul] = ACTIONS(190),
    [anon_sym_u32overflowing_mul] = ACTIONS(190),
    [anon_sym_u32checked_div] = ACTIONS(192),
    [anon_sym_u32unchecked_div] = ACTIONS(192),
    [anon_sym_u32checked_mod] = ACTIONS(190),
    [anon_sym_u32unchecked_mod] = ACTIONS(190),
    [anon_sym_u32checked_divmod] = ACTIONS(190),
    [anon_sym_u32unchecked_divmod] = ACTIONS(190),
    [anon_sym_u32checked_shr] = ACTIONS(190),
    [anon_sym_u32unchecked_shr] = ACTIONS(190),
    [anon_sym_u32checked_shl] = ACTIONS(190),
    [anon_sym_u32unchecked_shl] = ACTIONS(190),
    [anon_sym_u32checked_rotr] = ACTIONS(190),
    [anon_sym_u32unchecked_rotr] = ACTIONS(190),
    [anon_sym_u32checked_rotl] = ACTIONS(190),
    [anon_sym_u32unchecked_rotl] = ACTIONS(190),
    [anon_sym_u32checked_eq] = ACTIONS(190),
    [anon_sym_u32checked_neq] = ACTIONS(190),
    [anon_sym_mem_load] = ACTIONS(192),
    [anon_sym_mem_loadw] = ACTIONS(190),
    [anon_sym_mem_store] = ACTIONS(192),
    [anon_sym_mem_storew] = ACTIONS(190),
    [anon_sym_if] = ACTIONS(190),
    [sym__else] = ACTIONS(190),
    [anon_sym_while] = ACTIONS(190),
    [anon_sym_repeat] = ACTIONS(190),
    [sym__end] = ACTIONS(190),
  },
  [34] = {
    [anon_sym_exec] = ACTIONS(194),
    [anon_sym_call] = ACTIONS(196),
    [anon_sym_syscall] = ACTIONS(194),
    [anon_sym_assert] = ACTIONS(196),
    [anon_sym_assertz] = ACTIONS(194),
    [anon_sym_assert_eq] = ACTIONS(194),
    [anon_sym_neg] = ACTIONS(194),
    [anon_sym_inv] = ACTIONS(194),
    [anon_sym_pow2] = ACTIONS(194),
    [anon_sym_not] = ACTIONS(194),
    [anon_sym_and] = ACTIONS(194),
    [anon_sym_or] = ACTIONS(194),
    [anon_sym_xor] = ACTIONS(194),
    [anon_sym_lt] = ACTIONS(196),
    [anon_sym_lte] = ACTIONS(194),
    [anon_sym_gt] = ACTIONS(196),
    [anon_sym_gte] = ACTIONS(194),
    [anon_sym_eqw] = ACTIONS(194),
    [anon_sym_ext2add] = ACTIONS(194),
    [anon_sym_ext2sub] = ACTIONS(194),
    [anon_sym_ext2mul] = ACTIONS(194),
    [anon_sym_ext2div] = ACTIONS(194),
    [anon_sym_ext2neg] = ACTIONS(194),
    [anon_sym_ext2inv] = ACTIONS(194),
    [anon_sym_u32test] = ACTIONS(196),
    [anon_sym_u32testw] = ACTIONS(194),
    [anon_sym_u32assertw] = ACTIONS(194),
    [anon_sym_u32cast] = ACTIONS(194),
    [anon_sym_u32split] = ACTIONS(194),
    [anon_sym_u32overflowing_add3] = ACTIONS(194),
    [anon_sym_u32wrapping_add3] = ACTIONS(194),
    [anon_sym_u32overflowing_madd] = ACTIONS(194),
    [anon_sym_u32wrapping_madd] = ACTIONS(194),
    [anon_sym_u32checked_and] = ACTIONS(194),
    [anon_sym_u32checked_or] = ACTIONS(194),
    [anon_sym_u32checked_xor] = ACTIONS(194),
    [anon_sym_u32checked_not] = ACTIONS(194),
    [anon_sym_u32checked_popcnt] = ACTIONS(194),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(194),
    [anon_sym_u32checked_lt] = ACTIONS(196),
    [anon_sym_u32unchecked_lt] = ACTIONS(196),
    [anon_sym_u32checked_lte] = ACTIONS(194),
    [anon_sym_u32unchecked_lte] = ACTIONS(194),
    [anon_sym_u32checked_gt] = ACTIONS(196),
    [anon_sym_u32unchecked_gt] = ACTIONS(196),
    [anon_sym_u32checked_gte] = ACTIONS(194),
    [anon_sym_u32unchecked_gte] = ACTIONS(194),
    [anon_sym_u32checked_min] = ACTIONS(194),
    [anon_sym_u32unchecked_min] = ACTIONS(194),
    [anon_sym_u32checked_max] = ACTIONS(194),
    [anon_sym_u32unchecked_max] = ACTIONS(194),
    [anon_sym_drop] = ACTIONS(196),
    [anon_sym_dropw] = ACTIONS(194),
    [anon_sym_padw] = ACTIONS(194),
    [anon_sym_swapdw] = ACTIONS(194),
    [anon_sym_cswap] = ACTIONS(196),
    [anon_sym_cswapw] = ACTIONS(194),
    [anon_sym_cdrop] = ACTIONS(196),
    [anon_sym_cdropw] = ACTIONS(194),
    [anon_sym_sdepth] = ACTIONS(194),
    [anon_sym_mem_stream] = ACTIONS(194),
    [anon_sym_adv_pipe] = ACTIONS(194),
    [anon_sym_adv_loadw] = ACTIONS(194),
    [anon_sym_rphash] = ACTIONS(194),
    [anon_sym_rpperm] = ACTIONS(194),
    [anon_sym_mtree_get] = ACTIONS(194),
    [anon_sym_mtree_set] = ACTIONS(194),
    [anon_sym_mtree_cwm] = ACTIONS(194),
    [anon_sym_caller] = ACTIONS(194),
    [anon_sym_adv] = ACTIONS(196),
    [anon_sym_exp] = ACTIONS(194),
    [anon_sym_u32assert] = ACTIONS(196),
    [anon_sym_add] = ACTIONS(194),
    [anon_sym_sub] = ACTIONS(194),
    [anon_sym_mul] = ACTIONS(194),
    [anon_sym_eq] = ACTIONS(196),
    [anon_sym_neq] = ACTIONS(194),
    [anon_sym_u32checked_add] = ACTIONS(194),
    [anon_sym_u32wrapping_add] = ACTIONS(196),
    [anon_sym_u32overflowing_add] = ACTIONS(196),
    [anon_sym_u32checked_sub] = ACTIONS(194),
    [anon_sym_u32wrapping_sub] = ACTIONS(194),
    [anon_sym_u32overflowing_sub] = ACTIONS(194),
    [anon_sym_u32checked_mul] = ACTIONS(194),
    [anon_sym_u32wrapping_mul] = ACTIONS(194),
    [anon_sym_u32overflowing_mul] = ACTIONS(194),
    [anon_sym_u32checked_div] = ACTIONS(196),
    [anon_sym_u32unchecked_div] = ACTIONS(196),
    [anon_sym_u32checked_mod] = ACTIONS(194),
    [anon_sym_u32unchecked_mod] = ACTIONS(194),
    [anon_sym_u32checked_divmod] = ACTIONS(194),
    [anon_sym_u32unchecked_divmod] = ACTIONS(194),
    [anon_sym_u32checked_shr] = ACTIONS(194),
    [anon_sym_u32unchecked_shr] = ACTIONS(194),
    [anon_sym_u32checked_shl] = ACTIONS(194),
    [anon_sym_u32unchecked_shl] = ACTIONS(194),
    [anon_sym_u32checked_rotr] = ACTIONS(194),
    [anon_sym_u32unchecked_rotr] = ACTIONS(194),
    [anon_sym_u32checked_rotl] = ACTIONS(194),
    [anon_sym_u32unchecked_rotl] = ACTIONS(194),
    [anon_sym_u32checked_eq] = ACTIONS(194),
    [anon_sym_u32checked_neq] = ACTIONS(194),
    [anon_sym_mem_load] = ACTIONS(196),
    [anon_sym_mem_loadw] = ACTIONS(194),
    [anon_sym_mem_store] = ACTIONS(196),
    [anon_sym_mem_storew] = ACTIONS(194),
    [anon_sym_if] = ACTIONS(194),
    [sym__else] = ACTIONS(194),
    [anon_sym_while] = ACTIONS(194),
    [anon_sym_repeat] = ACTIONS(194),
    [sym__end] = ACTIONS(194),
  },
  [35] = {
    [anon_sym_exec] = ACTIONS(198),
    [anon_sym_call] = ACTIONS(200),
    [anon_sym_syscall] = ACTIONS(198),
    [anon_sym_assert] = ACTIONS(200),
    [anon_sym_assertz] = ACTIONS(198),
    [anon_sym_assert_eq] = ACTIONS(198),
    [anon_sym_neg] = ACTIONS(198),
    [anon_sym_inv] = ACTIONS(198),
    [anon_sym_pow2] = ACTIONS(198),
    [anon_sym_not] = ACTIONS(198),
    [anon_sym_and] = ACTIONS(198),
    [anon_sym_or] = ACTIONS(198),
    [anon_sym_xor] = ACTIONS(198),
    [anon_sym_lt] = ACTIONS(200),
    [anon_sym_lte] = ACTIONS(198),
    [anon_sym_gt] = ACTIONS(200),
    [anon_sym_gte] = ACTIONS(198),
    [anon_sym_eqw] = ACTIONS(198),
    [anon_sym_ext2add] = ACTIONS(198),
    [anon_sym_ext2sub] = ACTIONS(198),
    [anon_sym_ext2mul] = ACTIONS(198),
    [anon_sym_ext2div] = ACTIONS(198),
    [anon_sym_ext2neg] = ACTIONS(198),
    [anon_sym_ext2inv] = ACTIONS(198),
    [anon_sym_u32test] = ACTIONS(200),
    [anon_sym_u32testw] = ACTIONS(198),
    [anon_sym_u32assertw] = ACTIONS(198),
    [anon_sym_u32cast] = ACTIONS(198),
    [anon_sym_u32split] = ACTIONS(198),
    [anon_sym_u32overflowing_add3] = ACTIONS(198),
    [anon_sym_u32wrapping_add3] = ACTIONS(198),
    [anon_sym_u32overflowing_madd] = ACTIONS(198),
    [anon_sym_u32wrapping_madd] = ACTIONS(198),
    [anon_sym_u32checked_and] = ACTIONS(198),
    [anon_sym_u32checked_or] = ACTIONS(198),
    [anon_sym_u32checked_xor] = ACTIONS(198),
    [anon_sym_u32checked_not] = ACTIONS(198),
    [anon_sym_u32checked_popcnt] = ACTIONS(198),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(198),
    [anon_sym_u32checked_lt] = ACTIONS(200),
    [anon_sym_u32unchecked_lt] = ACTIONS(200),
    [anon_sym_u32checked_lte] = ACTIONS(198),
    [anon_sym_u32unchecked_lte] = ACTIONS(198),
    [anon_sym_u32checked_gt] = ACTIONS(200),
    [anon_sym_u32unchecked_gt] = ACTIONS(200),
    [anon_sym_u32checked_gte] = ACTIONS(198),
    [anon_sym_u32unchecked_gte] = ACTIONS(198),
    [anon_sym_u32checked_min] = ACTIONS(198),
    [anon_sym_u32unchecked_min] = ACTIONS(198),
    [anon_sym_u32checked_max] = ACTIONS(198),
    [anon_sym_u32unchecked_max] = ACTIONS(198),
    [anon_sym_drop] = ACTIONS(200),
    [anon_sym_dropw] = ACTIONS(198),
    [anon_sym_padw] = ACTIONS(198),
    [anon_sym_swapdw] = ACTIONS(198),
    [anon_sym_cswap] = ACTIONS(200),
    [anon_sym_cswapw] = ACTIONS(198),
    [anon_sym_cdrop] = ACTIONS(200),
    [anon_sym_cdropw] = ACTIONS(198),
    [anon_sym_sdepth] = ACTIONS(198),
    [anon_sym_mem_stream] = ACTIONS(198),
    [anon_sym_adv_pipe] = ACTIONS(198),
    [anon_sym_adv_loadw] = ACTIONS(198),
    [anon_sym_rphash] = ACTIONS(198),
    [anon_sym_rpperm] = ACTIONS(198),
    [anon_sym_mtree_get] = ACTIONS(198),
    [anon_sym_mtree_set] = ACTIONS(198),
    [anon_sym_mtree_cwm] = ACTIONS(198),
    [anon_sym_caller] = ACTIONS(198),
    [anon_sym_adv] = ACTIONS(200),
    [anon_sym_exp] = ACTIONS(198),
    [anon_sym_u32assert] = ACTIONS(200),
    [anon_sym_add] = ACTIONS(198),
    [anon_sym_sub] = ACTIONS(198),
    [anon_sym_mul] = ACTIONS(198),
    [anon_sym_eq] = ACTIONS(200),
    [anon_sym_neq] = ACTIONS(198),
    [anon_sym_u32checked_add] = ACTIONS(198),
    [anon_sym_u32wrapping_add] = ACTIONS(200),
    [anon_sym_u32overflowing_add] = ACTIONS(200),
    [anon_sym_u32checked_sub] = ACTIONS(198),
    [anon_sym_u32wrapping_sub] = ACTIONS(198),
    [anon_sym_u32overflowing_sub] = ACTIONS(198),
    [anon_sym_u32checked_mul] = ACTIONS(198),
    [anon_sym_u32wrapping_mul] = ACTIONS(198),
    [anon_sym_u32overflowing_mul] = ACTIONS(198),
    [anon_sym_u32checked_div] = ACTIONS(200),
    [anon_sym_u32unchecked_div] = ACTIONS(200),
    [anon_sym_u32checked_mod] = ACTIONS(198),
    [anon_sym_u32unchecked_mod] = ACTIONS(198),
    [anon_sym_u32checked_divmod] = ACTIONS(198),
    [anon_sym_u32unchecked_divmod] = ACTIONS(198),
    [anon_sym_u32checked_shr] = ACTIONS(198),
    [anon_sym_u32unchecked_shr] = ACTIONS(198),
    [anon_sym_u32checked_shl] = ACTIONS(198),
    [anon_sym_u32unchecked_shl] = ACTIONS(198),
    [anon_sym_u32checked_rotr] = ACTIONS(198),
    [anon_sym_u32unchecked_rotr] = ACTIONS(198),
    [anon_sym_u32checked_rotl] = ACTIONS(198),
    [anon_sym_u32unchecked_rotl] = ACTIONS(198),
    [anon_sym_u32checked_eq] = ACTIONS(198),
    [anon_sym_u32checked_neq] = ACTIONS(198),
    [anon_sym_mem_load] = ACTIONS(200),
    [anon_sym_mem_loadw] = ACTIONS(198),
    [anon_sym_mem_store] = ACTIONS(200),
    [anon_sym_mem_storew] = ACTIONS(198),
    [anon_sym_if] = ACTIONS(198),
    [sym__else] = ACTIONS(198),
    [anon_sym_while] = ACTIONS(198),
    [anon_sym_repeat] = ACTIONS(198),
    [sym__end] = ACTIONS(198),
  },
  [36] = {
    [anon_sym_exec] = ACTIONS(202),
    [anon_sym_call] = ACTIONS(204),
    [anon_sym_syscall] = ACTIONS(202),
    [anon_sym_assert] = ACTIONS(204),
    [anon_sym_assertz] = ACTIONS(202),
    [anon_sym_assert_eq] = ACTIONS(202),
    [anon_sym_neg] = ACTIONS(202),
    [anon_sym_inv] = ACTIONS(202),
    [anon_sym_pow2] = ACTIONS(202),
    [anon_sym_not] = ACTIONS(202),
    [anon_sym_and] = ACTIONS(202),
    [anon_sym_or] = ACTIONS(202),
    [anon_sym_xor] = ACTIONS(202),
    [anon_sym_lt] = ACTIONS(204),
    [anon_sym_lte] = ACTIONS(202),
    [anon_sym_gt] = ACTIONS(204),
    [anon_sym_gte] = ACTIONS(202),
    [anon_sym_eqw] = ACTIONS(202),
    [anon_sym_ext2add] = ACTIONS(202),
    [anon_sym_ext2sub] = ACTIONS(202),
    [anon_sym_ext2mul] = ACTIONS(202),
    [anon_sym_ext2div] = ACTIONS(202),
    [anon_sym_ext2neg] = ACTIONS(202),
    [anon_sym_ext2inv] = ACTIONS(202),
    [anon_sym_u32test] = ACTIONS(204),
    [anon_sym_u32testw] = ACTIONS(202),
    [anon_sym_u32assertw] = ACTIONS(202),
    [anon_sym_u32cast] = ACTIONS(202),
    [anon_sym_u32split] = ACTIONS(202),
    [anon_sym_u32overflowing_add3] = ACTIONS(202),
    [anon_sym_u32wrapping_add3] = ACTIONS(202),
    [anon_sym_u32overflowing_madd] = ACTIONS(202),
    [anon_sym_u32wrapping_madd] = ACTIONS(202),
    [anon_sym_u32checked_and] = ACTIONS(202),
    [anon_sym_u32checked_or] = ACTIONS(202),
    [anon_sym_u32checked_xor] = ACTIONS(202),
    [anon_sym_u32checked_not] = ACTIONS(202),
    [anon_sym_u32checked_popcnt] = ACTIONS(202),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(202),
    [anon_sym_u32checked_lt] = ACTIONS(204),
    [anon_sym_u32unchecked_lt] = ACTIONS(204),
    [anon_sym_u32checked_lte] = ACTIONS(202),
    [anon_sym_u32unchecked_lte] = ACTIONS(202),
    [anon_sym_u32checked_gt] = ACTIONS(204),
    [anon_sym_u32unchecked_gt] = ACTIONS(204),
    [anon_sym_u32checked_gte] = ACTIONS(202),
    [anon_sym_u32unchecked_gte] = ACTIONS(202),
    [anon_sym_u32checked_min] = ACTIONS(202),
    [anon_sym_u32unchecked_min] = ACTIONS(202),
    [anon_sym_u32checked_max] = ACTIONS(202),
    [anon_sym_u32unchecked_max] = ACTIONS(202),
    [anon_sym_drop] = ACTIONS(204),
    [anon_sym_dropw] = ACTIONS(202),
    [anon_sym_padw] = ACTIONS(202),
    [anon_sym_swapdw] = ACTIONS(202),
    [anon_sym_cswap] = ACTIONS(204),
    [anon_sym_cswapw] = ACTIONS(202),
    [anon_sym_cdrop] = ACTIONS(204),
    [anon_sym_cdropw] = ACTIONS(202),
    [anon_sym_sdepth] = ACTIONS(202),
    [anon_sym_mem_stream] = ACTIONS(202),
    [anon_sym_adv_pipe] = ACTIONS(202),
    [anon_sym_adv_loadw] = ACTIONS(202),
    [anon_sym_rphash] = ACTIONS(202),
    [anon_sym_rpperm] = ACTIONS(202),
    [anon_sym_mtree_get] = ACTIONS(202),
    [anon_sym_mtree_set] = ACTIONS(202),
    [anon_sym_mtree_cwm] = ACTIONS(202),
    [anon_sym_caller] = ACTIONS(202),
    [anon_sym_adv] = ACTIONS(204),
    [anon_sym_exp] = ACTIONS(202),
    [anon_sym_u32assert] = ACTIONS(204),
    [anon_sym_add] = ACTIONS(202),
    [anon_sym_sub] = ACTIONS(202),
    [anon_sym_mul] = ACTIONS(202),
    [anon_sym_eq] = ACTIONS(204),
    [anon_sym_neq] = ACTIONS(202),
    [anon_sym_u32checked_add] = ACTIONS(202),
    [anon_sym_u32wrapping_add] = ACTIONS(204),
    [anon_sym_u32overflowing_add] = ACTIONS(204),
    [anon_sym_u32checked_sub] = ACTIONS(202),
    [anon_sym_u32wrapping_sub] = ACTIONS(202),
    [anon_sym_u32overflowing_sub] = ACTIONS(202),
    [anon_sym_u32checked_mul] = ACTIONS(202),
    [anon_sym_u32wrapping_mul] = ACTIONS(202),
    [anon_sym_u32overflowing_mul] = ACTIONS(202),
    [anon_sym_u32checked_div] = ACTIONS(204),
    [anon_sym_u32unchecked_div] = ACTIONS(204),
    [anon_sym_u32checked_mod] = ACTIONS(202),
    [anon_sym_u32unchecked_mod] = ACTIONS(202),
    [anon_sym_u32checked_divmod] = ACTIONS(202),
    [anon_sym_u32unchecked_divmod] = ACTIONS(202),
    [anon_sym_u32checked_shr] = ACTIONS(202),
    [anon_sym_u32unchecked_shr] = ACTIONS(202),
    [anon_sym_u32checked_shl] = ACTIONS(202),
    [anon_sym_u32unchecked_shl] = ACTIONS(202),
    [anon_sym_u32checked_rotr] = ACTIONS(202),
    [anon_sym_u32unchecked_rotr] = ACTIONS(202),
    [anon_sym_u32checked_rotl] = ACTIONS(202),
    [anon_sym_u32unchecked_rotl] = ACTIONS(202),
    [anon_sym_u32checked_eq] = ACTIONS(202),
    [anon_sym_u32checked_neq] = ACTIONS(202),
    [anon_sym_mem_load] = ACTIONS(204),
    [anon_sym_mem_loadw] = ACTIONS(202),
    [anon_sym_mem_store] = ACTIONS(204),
    [anon_sym_mem_storew] = ACTIONS(202),
    [anon_sym_if] = ACTIONS(202),
    [sym__else] = ACTIONS(202),
    [anon_sym_while] = ACTIONS(202),
    [anon_sym_repeat] = ACTIONS(202),
    [sym__end] = ACTIONS(202),
  },
  [37] = {
    [anon_sym_exec] = ACTIONS(206),
    [anon_sym_call] = ACTIONS(208),
    [anon_sym_syscall] = ACTIONS(206),
    [anon_sym_assert] = ACTIONS(208),
    [anon_sym_assertz] = ACTIONS(206),
    [anon_sym_assert_eq] = ACTIONS(206),
    [anon_sym_neg] = ACTIONS(206),
    [anon_sym_inv] = ACTIONS(206),
    [anon_sym_pow2] = ACTIONS(206),
    [anon_sym_not] = ACTIONS(206),
    [anon_sym_and] = ACTIONS(206),
    [anon_sym_or] = ACTIONS(206),
    [anon_sym_xor] = ACTIONS(206),
    [anon_sym_lt] = ACTIONS(208),
    [anon_sym_lte] = ACTIONS(206),
    [anon_sym_gt] = ACTIONS(208),
    [anon_sym_gte] = ACTIONS(206),
    [anon_sym_eqw] = ACTIONS(206),
    [anon_sym_ext2add] = ACTIONS(206),
    [anon_sym_ext2sub] = ACTIONS(206),
    [anon_sym_ext2mul] = ACTIONS(206),
    [anon_sym_ext2div] = ACTIONS(206),
    [anon_sym_ext2neg] = ACTIONS(206),
    [anon_sym_ext2inv] = ACTIONS(206),
    [anon_sym_u32test] = ACTIONS(208),
    [anon_sym_u32testw] = ACTIONS(206),
    [anon_sym_u32assertw] = ACTIONS(206),
    [anon_sym_u32cast] = ACTIONS(206),
    [anon_sym_u32split] = ACTIONS(206),
    [anon_sym_u32overflowing_add3] = ACTIONS(206),
    [anon_sym_u32wrapping_add3] = ACTIONS(206),
    [anon_sym_u32overflowing_madd] = ACTIONS(206),
    [anon_sym_u32wrapping_madd] = ACTIONS(206),
    [anon_sym_u32checked_and] = ACTIONS(206),
    [anon_sym_u32checked_or] = ACTIONS(206),
    [anon_sym_u32checked_xor] = ACTIONS(206),
    [anon_sym_u32checked_not] = ACTIONS(206),
    [anon_sym_u32checked_popcnt] = ACTIONS(206),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(206),
    [anon_sym_u32checked_lt] = ACTIONS(208),
    [anon_sym_u32unchecked_lt] = ACTIONS(208),
    [anon_sym_u32checked_lte] = ACTIONS(206),
    [anon_sym_u32unchecked_lte] = ACTIONS(206),
    [anon_sym_u32checked_gt] = ACTIONS(208),
    [anon_sym_u32unchecked_gt] = ACTIONS(208),
    [anon_sym_u32checked_gte] = ACTIONS(206),
    [anon_sym_u32unchecked_gte] = ACTIONS(206),
    [anon_sym_u32checked_min] = ACTIONS(206),
    [anon_sym_u32unchecked_min] = ACTIONS(206),
    [anon_sym_u32checked_max] = ACTIONS(206),
    [anon_sym_u32unchecked_max] = ACTIONS(206),
    [anon_sym_drop] = ACTIONS(208),
    [anon_sym_dropw] = ACTIONS(206),
    [anon_sym_padw] = ACTIONS(206),
    [anon_sym_swapdw] = ACTIONS(206),
    [anon_sym_cswap] = ACTIONS(208),
    [anon_sym_cswapw] = ACTIONS(206),
    [anon_sym_cdrop] = ACTIONS(208),
    [anon_sym_cdropw] = ACTIONS(206),
    [anon_sym_sdepth] = ACTIONS(206),
    [anon_sym_mem_stream] = ACTIONS(206),
    [anon_sym_adv_pipe] = ACTIONS(206),
    [anon_sym_adv_loadw] = ACTIONS(206),
    [anon_sym_rphash] = ACTIONS(206),
    [anon_sym_rpperm] = ACTIONS(206),
    [anon_sym_mtree_get] = ACTIONS(206),
    [anon_sym_mtree_set] = ACTIONS(206),
    [anon_sym_mtree_cwm] = ACTIONS(206),
    [anon_sym_caller] = ACTIONS(206),
    [anon_sym_adv] = ACTIONS(208),
    [anon_sym_exp] = ACTIONS(206),
    [anon_sym_u32assert] = ACTIONS(208),
    [anon_sym_add] = ACTIONS(206),
    [anon_sym_sub] = ACTIONS(206),
    [anon_sym_mul] = ACTIONS(206),
    [anon_sym_eq] = ACTIONS(208),
    [anon_sym_neq] = ACTIONS(206),
    [anon_sym_u32checked_add] = ACTIONS(206),
    [anon_sym_u32wrapping_add] = ACTIONS(208),
    [anon_sym_u32overflowing_add] = ACTIONS(208),
    [anon_sym_u32checked_sub] = ACTIONS(206),
    [anon_sym_u32wrapping_sub] = ACTIONS(206),
    [anon_sym_u32overflowing_sub] = ACTIONS(206),
    [anon_sym_u32checked_mul] = ACTIONS(206),
    [anon_sym_u32wrapping_mul] = ACTIONS(206),
    [anon_sym_u32overflowing_mul] = ACTIONS(206),
    [anon_sym_u32checked_div] = ACTIONS(208),
    [anon_sym_u32unchecked_div] = ACTIONS(208),
    [anon_sym_u32checked_mod] = ACTIONS(206),
    [anon_sym_u32unchecked_mod] = ACTIONS(206),
    [anon_sym_u32checked_divmod] = ACTIONS(206),
    [anon_sym_u32unchecked_divmod] = ACTIONS(206),
    [anon_sym_u32checked_shr] = ACTIONS(206),
    [anon_sym_u32unchecked_shr] = ACTIONS(206),
    [anon_sym_u32checked_shl] = ACTIONS(206),
    [anon_sym_u32unchecked_shl] = ACTIONS(206),
    [anon_sym_u32checked_rotr] = ACTIONS(206),
    [anon_sym_u32unchecked_rotr] = ACTIONS(206),
    [anon_sym_u32checked_rotl] = ACTIONS(206),
    [anon_sym_u32unchecked_rotl] = ACTIONS(206),
    [anon_sym_u32checked_eq] = ACTIONS(206),
    [anon_sym_u32checked_neq] = ACTIONS(206),
    [anon_sym_mem_load] = ACTIONS(208),
    [anon_sym_mem_loadw] = ACTIONS(206),
    [anon_sym_mem_store] = ACTIONS(208),
    [anon_sym_mem_storew] = ACTIONS(206),
    [anon_sym_if] = ACTIONS(206),
    [sym__else] = ACTIONS(206),
    [anon_sym_while] = ACTIONS(206),
    [anon_sym_repeat] = ACTIONS(206),
    [sym__end] = ACTIONS(206),
  },
  [38] = {
    [anon_sym_exec] = ACTIONS(210),
    [anon_sym_call] = ACTIONS(212),
    [anon_sym_syscall] = ACTIONS(210),
    [anon_sym_assert] = ACTIONS(212),
    [anon_sym_assertz] = ACTIONS(210),
    [anon_sym_assert_eq] = ACTIONS(210),
    [anon_sym_neg] = ACTIONS(210),
    [anon_sym_inv] = ACTIONS(210),
    [anon_sym_pow2] = ACTIONS(210),
    [anon_sym_not] = ACTIONS(210),
    [anon_sym_and] = ACTIONS(210),
    [anon_sym_or] = ACTIONS(210),
    [anon_sym_xor] = ACTIONS(210),
    [anon_sym_lt] = ACTIONS(212),
    [anon_sym_lte] = ACTIONS(210),
    [anon_sym_gt] = ACTIONS(212),
    [anon_sym_gte] = ACTIONS(210),
    [anon_sym_eqw] = ACTIONS(210),
    [anon_sym_ext2add] = ACTIONS(210),
    [anon_sym_ext2sub] = ACTIONS(210),
    [anon_sym_ext2mul] = ACTIONS(210),
    [anon_sym_ext2div] = ACTIONS(210),
    [anon_sym_ext2neg] = ACTIONS(210),
    [anon_sym_ext2inv] = ACTIONS(210),
    [anon_sym_u32test] = ACTIONS(212),
    [anon_sym_u32testw] = ACTIONS(210),
    [anon_sym_u32assertw] = ACTIONS(210),
    [anon_sym_u32cast] = ACTIONS(210),
    [anon_sym_u32split] = ACTIONS(210),
    [anon_sym_u32overflowing_add3] = ACTIONS(210),
    [anon_sym_u32wrapping_add3] = ACTIONS(210),
    [anon_sym_u32overflowing_madd] = ACTIONS(210),
    [anon_sym_u32wrapping_madd] = ACTIONS(210),
    [anon_sym_u32checked_and] = ACTIONS(210),
    [anon_sym_u32checked_or] = ACTIONS(210),
    [anon_sym_u32checked_xor] = ACTIONS(210),
    [anon_sym_u32checked_not] = ACTIONS(210),
    [anon_sym_u32checked_popcnt] = ACTIONS(210),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(210),
    [anon_sym_u32checked_lt] = ACTIONS(212),
    [anon_sym_u32unchecked_lt] = ACTIONS(212),
    [anon_sym_u32checked_lte] = ACTIONS(210),
    [anon_sym_u32unchecked_lte] = ACTIONS(210),
    [anon_sym_u32checked_gt] = ACTIONS(212),
    [anon_sym_u32unchecked_gt] = ACTIONS(212),
    [anon_sym_u32checked_gte] = ACTIONS(210),
    [anon_sym_u32unchecked_gte] = ACTIONS(210),
    [anon_sym_u32checked_min] = ACTIONS(210),
    [anon_sym_u32unchecked_min] = ACTIONS(210),
    [anon_sym_u32checked_max] = ACTIONS(210),
    [anon_sym_u32unchecked_max] = ACTIONS(210),
    [anon_sym_drop] = ACTIONS(212),
    [anon_sym_dropw] = ACTIONS(210),
    [anon_sym_padw] = ACTIONS(210),
    [anon_sym_swapdw] = ACTIONS(210),
    [anon_sym_cswap] = ACTIONS(212),
    [anon_sym_cswapw] = ACTIONS(210),
    [anon_sym_cdrop] = ACTIONS(212),
    [anon_sym_cdropw] = ACTIONS(210),
    [anon_sym_sdepth] = ACTIONS(210),
    [anon_sym_mem_stream] = ACTIONS(210),
    [anon_sym_adv_pipe] = ACTIONS(210),
    [anon_sym_adv_loadw] = ACTIONS(210),
    [anon_sym_rphash] = ACTIONS(210),
    [anon_sym_rpperm] = ACTIONS(210),
    [anon_sym_mtree_get] = ACTIONS(210),
    [anon_sym_mtree_set] = ACTIONS(210),
    [anon_sym_mtree_cwm] = ACTIONS(210),
    [anon_sym_caller] = ACTIONS(210),
    [anon_sym_adv] = ACTIONS(212),
    [anon_sym_exp] = ACTIONS(210),
    [anon_sym_u32assert] = ACTIONS(212),
    [anon_sym_add] = ACTIONS(210),
    [anon_sym_sub] = ACTIONS(210),
    [anon_sym_mul] = ACTIONS(210),
    [anon_sym_eq] = ACTIONS(212),
    [anon_sym_neq] = ACTIONS(210),
    [anon_sym_u32checked_add] = ACTIONS(210),
    [anon_sym_u32wrapping_add] = ACTIONS(212),
    [anon_sym_u32overflowing_add] = ACTIONS(212),
    [anon_sym_u32checked_sub] = ACTIONS(210),
    [anon_sym_u32wrapping_sub] = ACTIONS(210),
    [anon_sym_u32overflowing_sub] = ACTIONS(210),
    [anon_sym_u32checked_mul] = ACTIONS(210),
    [anon_sym_u32wrapping_mul] = ACTIONS(210),
    [anon_sym_u32overflowing_mul] = ACTIONS(210),
    [anon_sym_u32checked_div] = ACTIONS(212),
    [anon_sym_u32unchecked_div] = ACTIONS(212),
    [anon_sym_u32checked_mod] = ACTIONS(210),
    [anon_sym_u32unchecked_mod] = ACTIONS(210),
    [anon_sym_u32checked_divmod] = ACTIONS(210),
    [anon_sym_u32unchecked_divmod] = ACTIONS(210),
    [anon_sym_u32checked_shr] = ACTIONS(210),
    [anon_sym_u32unchecked_shr] = ACTIONS(210),
    [anon_sym_u32checked_shl] = ACTIONS(210),
    [anon_sym_u32unchecked_shl] = ACTIONS(210),
    [anon_sym_u32checked_rotr] = ACTIONS(210),
    [anon_sym_u32unchecked_rotr] = ACTIONS(210),
    [anon_sym_u32checked_rotl] = ACTIONS(210),
    [anon_sym_u32unchecked_rotl] = ACTIONS(210),
    [anon_sym_u32checked_eq] = ACTIONS(210),
    [anon_sym_u32checked_neq] = ACTIONS(210),
    [anon_sym_mem_load] = ACTIONS(212),
    [anon_sym_mem_loadw] = ACTIONS(210),
    [anon_sym_mem_store] = ACTIONS(212),
    [anon_sym_mem_storew] = ACTIONS(210),
    [anon_sym_if] = ACTIONS(210),
    [sym__else] = ACTIONS(210),
    [anon_sym_while] = ACTIONS(210),
    [anon_sym_repeat] = ACTIONS(210),
    [sym__end] = ACTIONS(210),
  },
  [39] = {
    [anon_sym_exec] = ACTIONS(214),
    [anon_sym_call] = ACTIONS(216),
    [anon_sym_syscall] = ACTIONS(214),
    [anon_sym_assert] = ACTIONS(216),
    [anon_sym_assertz] = ACTIONS(214),
    [anon_sym_assert_eq] = ACTIONS(214),
    [anon_sym_neg] = ACTIONS(214),
    [anon_sym_inv] = ACTIONS(214),
    [anon_sym_pow2] = ACTIONS(214),
    [anon_sym_not] = ACTIONS(214),
    [anon_sym_and] = ACTIONS(214),
    [anon_sym_or] = ACTIONS(214),
    [anon_sym_xor] = ACTIONS(214),
    [anon_sym_lt] = ACTIONS(216),
    [anon_sym_lte] = ACTIONS(214),
    [anon_sym_gt] = ACTIONS(216),
    [anon_sym_gte] = ACTIONS(214),
    [anon_sym_eqw] = ACTIONS(214),
    [anon_sym_ext2add] = ACTIONS(214),
    [anon_sym_ext2sub] = ACTIONS(214),
    [anon_sym_ext2mul] = ACTIONS(214),
    [anon_sym_ext2div] = ACTIONS(214),
    [anon_sym_ext2neg] = ACTIONS(214),
    [anon_sym_ext2inv] = ACTIONS(214),
    [anon_sym_u32test] = ACTIONS(216),
    [anon_sym_u32testw] = ACTIONS(214),
    [anon_sym_u32assertw] = ACTIONS(214),
    [anon_sym_u32cast] = ACTIONS(214),
    [anon_sym_u32split] = ACTIONS(214),
    [anon_sym_u32overflowing_add3] = ACTIONS(214),
    [anon_sym_u32wrapping_add3] = ACTIONS(214),
    [anon_sym_u32overflowing_madd] = ACTIONS(214),
    [anon_sym_u32wrapping_madd] = ACTIONS(214),
    [anon_sym_u32checked_and] = ACTIONS(214),
    [anon_sym_u32checked_or] = ACTIONS(214),
    [anon_sym_u32checked_xor] = ACTIONS(214),
    [anon_sym_u32checked_not] = ACTIONS(214),
    [anon_sym_u32checked_popcnt] = ACTIONS(214),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(214),
    [anon_sym_u32checked_lt] = ACTIONS(216),
    [anon_sym_u32unchecked_lt] = ACTIONS(216),
    [anon_sym_u32checked_lte] = ACTIONS(214),
    [anon_sym_u32unchecked_lte] = ACTIONS(214),
    [anon_sym_u32checked_gt] = ACTIONS(216),
    [anon_sym_u32unchecked_gt] = ACTIONS(216),
    [anon_sym_u32checked_gte] = ACTIONS(214),
    [anon_sym_u32unchecked_gte] = ACTIONS(214),
    [anon_sym_u32checked_min] = ACTIONS(214),
    [anon_sym_u32unchecked_min] = ACTIONS(214),
    [anon_sym_u32checked_max] = ACTIONS(214),
    [anon_sym_u32unchecked_max] = ACTIONS(214),
    [anon_sym_drop] = ACTIONS(216),
    [anon_sym_dropw] = ACTIONS(214),
    [anon_sym_padw] = ACTIONS(214),
    [anon_sym_swapdw] = ACTIONS(214),
    [anon_sym_cswap] = ACTIONS(216),
    [anon_sym_cswapw] = ACTIONS(214),
    [anon_sym_cdrop] = ACTIONS(216),
    [anon_sym_cdropw] = ACTIONS(214),
    [anon_sym_sdepth] = ACTIONS(214),
    [anon_sym_mem_stream] = ACTIONS(214),
    [anon_sym_adv_pipe] = ACTIONS(214),
    [anon_sym_adv_loadw] = ACTIONS(214),
    [anon_sym_rphash] = ACTIONS(214),
    [anon_sym_rpperm] = ACTIONS(214),
    [anon_sym_mtree_get] = ACTIONS(214),
    [anon_sym_mtree_set] = ACTIONS(214),
    [anon_sym_mtree_cwm] = ACTIONS(214),
    [anon_sym_caller] = ACTIONS(214),
    [anon_sym_adv] = ACTIONS(216),
    [anon_sym_exp] = ACTIONS(214),
    [anon_sym_u32assert] = ACTIONS(216),
    [anon_sym_add] = ACTIONS(214),
    [anon_sym_sub] = ACTIONS(214),
    [anon_sym_mul] = ACTIONS(214),
    [anon_sym_eq] = ACTIONS(216),
    [anon_sym_neq] = ACTIONS(214),
    [anon_sym_u32checked_add] = ACTIONS(214),
    [anon_sym_u32wrapping_add] = ACTIONS(216),
    [anon_sym_u32overflowing_add] = ACTIONS(216),
    [anon_sym_u32checked_sub] = ACTIONS(214),
    [anon_sym_u32wrapping_sub] = ACTIONS(214),
    [anon_sym_u32overflowing_sub] = ACTIONS(214),
    [anon_sym_u32checked_mul] = ACTIONS(214),
    [anon_sym_u32wrapping_mul] = ACTIONS(214),
    [anon_sym_u32overflowing_mul] = ACTIONS(214),
    [anon_sym_u32checked_div] = ACTIONS(216),
    [anon_sym_u32unchecked_div] = ACTIONS(216),
    [anon_sym_u32checked_mod] = ACTIONS(214),
    [anon_sym_u32unchecked_mod] = ACTIONS(214),
    [anon_sym_u32checked_divmod] = ACTIONS(214),
    [anon_sym_u32unchecked_divmod] = ACTIONS(214),
    [anon_sym_u32checked_shr] = ACTIONS(214),
    [anon_sym_u32unchecked_shr] = ACTIONS(214),
    [anon_sym_u32checked_shl] = ACTIONS(214),
    [anon_sym_u32unchecked_shl] = ACTIONS(214),
    [anon_sym_u32checked_rotr] = ACTIONS(214),
    [anon_sym_u32unchecked_rotr] = ACTIONS(214),
    [anon_sym_u32checked_rotl] = ACTIONS(214),
    [anon_sym_u32unchecked_rotl] = ACTIONS(214),
    [anon_sym_u32checked_eq] = ACTIONS(214),
    [anon_sym_u32checked_neq] = ACTIONS(214),
    [anon_sym_mem_load] = ACTIONS(216),
    [anon_sym_mem_loadw] = ACTIONS(214),
    [anon_sym_mem_store] = ACTIONS(216),
    [anon_sym_mem_storew] = ACTIONS(214),
    [anon_sym_if] = ACTIONS(214),
    [sym__else] = ACTIONS(214),
    [anon_sym_while] = ACTIONS(214),
    [anon_sym_repeat] = ACTIONS(214),
    [sym__end] = ACTIONS(214),
  },
  [40] = {
    [anon_sym_exec] = ACTIONS(218),
    [anon_sym_call] = ACTIONS(220),
    [anon_sym_syscall] = ACTIONS(218),
    [anon_sym_assert] = ACTIONS(220),
    [anon_sym_assertz] = ACTIONS(218),
    [anon_sym_assert_eq] = ACTIONS(218),
    [anon_sym_neg] = ACTIONS(218),
    [anon_sym_inv] = ACTIONS(218),
    [anon_sym_pow2] = ACTIONS(218),
    [anon_sym_not] = ACTIONS(218),
    [anon_sym_and] = ACTIONS(218),
    [anon_sym_or] = ACTIONS(218),
    [anon_sym_xor] = ACTIONS(218),
    [anon_sym_lt] = ACTIONS(220),
    [anon_sym_lte] = ACTIONS(218),
    [anon_sym_gt] = ACTIONS(220),
    [anon_sym_gte] = ACTIONS(218),
    [anon_sym_eqw] = ACTIONS(218),
    [anon_sym_ext2add] = ACTIONS(218),
    [anon_sym_ext2sub] = ACTIONS(218),
    [anon_sym_ext2mul] = ACTIONS(218),
    [anon_sym_ext2div] = ACTIONS(218),
    [anon_sym_ext2neg] = ACTIONS(218),
    [anon_sym_ext2inv] = ACTIONS(218),
    [anon_sym_u32test] = ACTIONS(220),
    [anon_sym_u32testw] = ACTIONS(218),
    [anon_sym_u32assertw] = ACTIONS(218),
    [anon_sym_u32cast] = ACTIONS(218),
    [anon_sym_u32split] = ACTIONS(218),
    [anon_sym_u32overflowing_add3] = ACTIONS(218),
    [anon_sym_u32wrapping_add3] = ACTIONS(218),
    [anon_sym_u32overflowing_madd] = ACTIONS(218),
    [anon_sym_u32wrapping_madd] = ACTIONS(218),
    [anon_sym_u32checked_and] = ACTIONS(218),
    [anon_sym_u32checked_or] = ACTIONS(218),
    [anon_sym_u32checked_xor] = ACTIONS(218),
    [anon_sym_u32checked_not] = ACTIONS(218),
    [anon_sym_u32checked_popcnt] = ACTIONS(218),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(218),
    [anon_sym_u32checked_lt] = ACTIONS(220),
    [anon_sym_u32unchecked_lt] = ACTIONS(220),
    [anon_sym_u32checked_lte] = ACTIONS(218),
    [anon_sym_u32unchecked_lte] = ACTIONS(218),
    [anon_sym_u32checked_gt] = ACTIONS(220),
    [anon_sym_u32unchecked_gt] = ACTIONS(220),
    [anon_sym_u32checked_gte] = ACTIONS(218),
    [anon_sym_u32unchecked_gte] = ACTIONS(218),
    [anon_sym_u32checked_min] = ACTIONS(218),
    [anon_sym_u32unchecked_min] = ACTIONS(218),
    [anon_sym_u32checked_max] = ACTIONS(218),
    [anon_sym_u32unchecked_max] = ACTIONS(218),
    [anon_sym_drop] = ACTIONS(220),
    [anon_sym_dropw] = ACTIONS(218),
    [anon_sym_padw] = ACTIONS(218),
    [anon_sym_swapdw] = ACTIONS(218),
    [anon_sym_cswap] = ACTIONS(220),
    [anon_sym_cswapw] = ACTIONS(218),
    [anon_sym_cdrop] = ACTIONS(220),
    [anon_sym_cdropw] = ACTIONS(218),
    [anon_sym_sdepth] = ACTIONS(218),
    [anon_sym_mem_stream] = ACTIONS(218),
    [anon_sym_adv_pipe] = ACTIONS(218),
    [anon_sym_adv_loadw] = ACTIONS(218),
    [anon_sym_rphash] = ACTIONS(218),
    [anon_sym_rpperm] = ACTIONS(218),
    [anon_sym_mtree_get] = ACTIONS(218),
    [anon_sym_mtree_set] = ACTIONS(218),
    [anon_sym_mtree_cwm] = ACTIONS(218),
    [anon_sym_caller] = ACTIONS(218),
    [anon_sym_adv] = ACTIONS(220),
    [anon_sym_exp] = ACTIONS(218),
    [anon_sym_u32assert] = ACTIONS(220),
    [anon_sym_add] = ACTIONS(218),
    [anon_sym_sub] = ACTIONS(218),
    [anon_sym_mul] = ACTIONS(218),
    [anon_sym_eq] = ACTIONS(220),
    [anon_sym_neq] = ACTIONS(218),
    [anon_sym_u32checked_add] = ACTIONS(218),
    [anon_sym_u32wrapping_add] = ACTIONS(220),
    [anon_sym_u32overflowing_add] = ACTIONS(220),
    [anon_sym_u32checked_sub] = ACTIONS(218),
    [anon_sym_u32wrapping_sub] = ACTIONS(218),
    [anon_sym_u32overflowing_sub] = ACTIONS(218),
    [anon_sym_u32checked_mul] = ACTIONS(218),
    [anon_sym_u32wrapping_mul] = ACTIONS(218),
    [anon_sym_u32overflowing_mul] = ACTIONS(218),
    [anon_sym_u32checked_div] = ACTIONS(220),
    [anon_sym_u32unchecked_div] = ACTIONS(220),
    [anon_sym_u32checked_mod] = ACTIONS(218),
    [anon_sym_u32unchecked_mod] = ACTIONS(218),
    [anon_sym_u32checked_divmod] = ACTIONS(218),
    [anon_sym_u32unchecked_divmod] = ACTIONS(218),
    [anon_sym_u32checked_shr] = ACTIONS(218),
    [anon_sym_u32unchecked_shr] = ACTIONS(218),
    [anon_sym_u32checked_shl] = ACTIONS(218),
    [anon_sym_u32unchecked_shl] = ACTIONS(218),
    [anon_sym_u32checked_rotr] = ACTIONS(218),
    [anon_sym_u32unchecked_rotr] = ACTIONS(218),
    [anon_sym_u32checked_rotl] = ACTIONS(218),
    [anon_sym_u32unchecked_rotl] = ACTIONS(218),
    [anon_sym_u32checked_eq] = ACTIONS(218),
    [anon_sym_u32checked_neq] = ACTIONS(218),
    [anon_sym_mem_load] = ACTIONS(220),
    [anon_sym_mem_loadw] = ACTIONS(218),
    [anon_sym_mem_store] = ACTIONS(220),
    [anon_sym_mem_storew] = ACTIONS(218),
    [anon_sym_if] = ACTIONS(218),
    [sym__else] = ACTIONS(218),
    [anon_sym_while] = ACTIONS(218),
    [anon_sym_repeat] = ACTIONS(218),
    [sym__end] = ACTIONS(218),
  },
  [41] = {
    [anon_sym_exec] = ACTIONS(222),
    [anon_sym_call] = ACTIONS(224),
    [anon_sym_syscall] = ACTIONS(222),
    [anon_sym_assert] = ACTIONS(224),
    [anon_sym_assertz] = ACTIONS(222),
    [anon_sym_assert_eq] = ACTIONS(222),
    [anon_sym_neg] = ACTIONS(222),
    [anon_sym_inv] = ACTIONS(222),
    [anon_sym_pow2] = ACTIONS(222),
    [anon_sym_not] = ACTIONS(222),
    [anon_sym_and] = ACTIONS(222),
    [anon_sym_or] = ACTIONS(222),
    [anon_sym_xor] = ACTIONS(222),
    [anon_sym_lt] = ACTIONS(224),
    [anon_sym_lte] = ACTIONS(222),
    [anon_sym_gt] = ACTIONS(224),
    [anon_sym_gte] = ACTIONS(222),
    [anon_sym_eqw] = ACTIONS(222),
    [anon_sym_ext2add] = ACTIONS(222),
    [anon_sym_ext2sub] = ACTIONS(222),
    [anon_sym_ext2mul] = ACTIONS(222),
    [anon_sym_ext2div] = ACTIONS(222),
    [anon_sym_ext2neg] = ACTIONS(222),
    [anon_sym_ext2inv] = ACTIONS(222),
    [anon_sym_u32test] = ACTIONS(224),
    [anon_sym_u32testw] = ACTIONS(222),
    [anon_sym_u32assertw] = ACTIONS(222),
    [anon_sym_u32cast] = ACTIONS(222),
    [anon_sym_u32split] = ACTIONS(222),
    [anon_sym_u32overflowing_add3] = ACTIONS(222),
    [anon_sym_u32wrapping_add3] = ACTIONS(222),
    [anon_sym_u32overflowing_madd] = ACTIONS(222),
    [anon_sym_u32wrapping_madd] = ACTIONS(222),
    [anon_sym_u32checked_and] = ACTIONS(222),
    [anon_sym_u32checked_or] = ACTIONS(222),
    [anon_sym_u32checked_xor] = ACTIONS(222),
    [anon_sym_u32checked_not] = ACTIONS(222),
    [anon_sym_u32checked_popcnt] = ACTIONS(222),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(222),
    [anon_sym_u32checked_lt] = ACTIONS(224),
    [anon_sym_u32unchecked_lt] = ACTIONS(224),
    [anon_sym_u32checked_lte] = ACTIONS(222),
    [anon_sym_u32unchecked_lte] = ACTIONS(222),
    [anon_sym_u32checked_gt] = ACTIONS(224),
    [anon_sym_u32unchecked_gt] = ACTIONS(224),
    [anon_sym_u32checked_gte] = ACTIONS(222),
    [anon_sym_u32unchecked_gte] = ACTIONS(222),
    [anon_sym_u32checked_min] = ACTIONS(222),
    [anon_sym_u32unchecked_min] = ACTIONS(222),
    [anon_sym_u32checked_max] = ACTIONS(222),
    [anon_sym_u32unchecked_max] = ACTIONS(222),
    [anon_sym_drop] = ACTIONS(224),
    [anon_sym_dropw] = ACTIONS(222),
    [anon_sym_padw] = ACTIONS(222),
    [anon_sym_swapdw] = ACTIONS(222),
    [anon_sym_cswap] = ACTIONS(224),
    [anon_sym_cswapw] = ACTIONS(222),
    [anon_sym_cdrop] = ACTIONS(224),
    [anon_sym_cdropw] = ACTIONS(222),
    [anon_sym_sdepth] = ACTIONS(222),
    [anon_sym_mem_stream] = ACTIONS(222),
    [anon_sym_adv_pipe] = ACTIONS(222),
    [anon_sym_adv_loadw] = ACTIONS(222),
    [anon_sym_rphash] = ACTIONS(222),
    [anon_sym_rpperm] = ACTIONS(222),
    [anon_sym_mtree_get] = ACTIONS(222),
    [anon_sym_mtree_set] = ACTIONS(222),
    [anon_sym_mtree_cwm] = ACTIONS(222),
    [anon_sym_caller] = ACTIONS(222),
    [anon_sym_adv] = ACTIONS(224),
    [anon_sym_exp] = ACTIONS(222),
    [anon_sym_u32assert] = ACTIONS(224),
    [anon_sym_add] = ACTIONS(222),
    [anon_sym_sub] = ACTIONS(222),
    [anon_sym_mul] = ACTIONS(222),
    [anon_sym_eq] = ACTIONS(224),
    [anon_sym_neq] = ACTIONS(222),
    [anon_sym_u32checked_add] = ACTIONS(222),
    [anon_sym_u32wrapping_add] = ACTIONS(224),
    [anon_sym_u32overflowing_add] = ACTIONS(224),
    [anon_sym_u32checked_sub] = ACTIONS(222),
    [anon_sym_u32wrapping_sub] = ACTIONS(222),
    [anon_sym_u32overflowing_sub] = ACTIONS(222),
    [anon_sym_u32checked_mul] = ACTIONS(222),
    [anon_sym_u32wrapping_mul] = ACTIONS(222),
    [anon_sym_u32overflowing_mul] = ACTIONS(222),
    [anon_sym_u32checked_div] = ACTIONS(224),
    [anon_sym_u32unchecked_div] = ACTIONS(224),
    [anon_sym_u32checked_mod] = ACTIONS(222),
    [anon_sym_u32unchecked_mod] = ACTIONS(222),
    [anon_sym_u32checked_divmod] = ACTIONS(222),
    [anon_sym_u32unchecked_divmod] = ACTIONS(222),
    [anon_sym_u32checked_shr] = ACTIONS(222),
    [anon_sym_u32unchecked_shr] = ACTIONS(222),
    [anon_sym_u32checked_shl] = ACTIONS(222),
    [anon_sym_u32unchecked_shl] = ACTIONS(222),
    [anon_sym_u32checked_rotr] = ACTIONS(222),
    [anon_sym_u32unchecked_rotr] = ACTIONS(222),
    [anon_sym_u32checked_rotl] = ACTIONS(222),
    [anon_sym_u32unchecked_rotl] = ACTIONS(222),
    [anon_sym_u32checked_eq] = ACTIONS(222),
    [anon_sym_u32checked_neq] = ACTIONS(222),
    [anon_sym_mem_load] = ACTIONS(224),
    [anon_sym_mem_loadw] = ACTIONS(222),
    [anon_sym_mem_store] = ACTIONS(224),
    [anon_sym_mem_storew] = ACTIONS(222),
    [anon_sym_if] = ACTIONS(222),
    [sym__else] = ACTIONS(222),
    [anon_sym_while] = ACTIONS(222),
    [anon_sym_repeat] = ACTIONS(222),
    [sym__end] = ACTIONS(222),
  },
  [42] = {
    [anon_sym_exec] = ACTIONS(226),
    [anon_sym_call] = ACTIONS(228),
    [anon_sym_syscall] = ACTIONS(226),
    [anon_sym_assert] = ACTIONS(228),
    [anon_sym_assertz] = ACTIONS(226),
    [anon_sym_assert_eq] = ACTIONS(226),
    [anon_sym_neg] = ACTIONS(226),
    [anon_sym_inv] = ACTIONS(226),
    [anon_sym_pow2] = ACTIONS(226),
    [anon_sym_not] = ACTIONS(226),
    [anon_sym_and] = ACTIONS(226),
    [anon_sym_or] = ACTIONS(226),
    [anon_sym_xor] = ACTIONS(226),
    [anon_sym_lt] = ACTIONS(228),
    [anon_sym_lte] = ACTIONS(226),
    [anon_sym_gt] = ACTIONS(228),
    [anon_sym_gte] = ACTIONS(226),
    [anon_sym_eqw] = ACTIONS(226),
    [anon_sym_ext2add] = ACTIONS(226),
    [anon_sym_ext2sub] = ACTIONS(226),
    [anon_sym_ext2mul] = ACTIONS(226),
    [anon_sym_ext2div] = ACTIONS(226),
    [anon_sym_ext2neg] = ACTIONS(226),
    [anon_sym_ext2inv] = ACTIONS(226),
    [anon_sym_u32test] = ACTIONS(228),
    [anon_sym_u32testw] = ACTIONS(226),
    [anon_sym_u32assertw] = ACTIONS(226),
    [anon_sym_u32cast] = ACTIONS(226),
    [anon_sym_u32split] = ACTIONS(226),
    [anon_sym_u32overflowing_add3] = ACTIONS(226),
    [anon_sym_u32wrapping_add3] = ACTIONS(226),
    [anon_sym_u32overflowing_madd] = ACTIONS(226),
    [anon_sym_u32wrapping_madd] = ACTIONS(226),
    [anon_sym_u32checked_and] = ACTIONS(226),
    [anon_sym_u32checked_or] = ACTIONS(226),
    [anon_sym_u32checked_xor] = ACTIONS(226),
    [anon_sym_u32checked_not] = ACTIONS(226),
    [anon_sym_u32checked_popcnt] = ACTIONS(226),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(226),
    [anon_sym_u32checked_lt] = ACTIONS(228),
    [anon_sym_u32unchecked_lt] = ACTIONS(228),
    [anon_sym_u32checked_lte] = ACTIONS(226),
    [anon_sym_u32unchecked_lte] = ACTIONS(226),
    [anon_sym_u32checked_gt] = ACTIONS(228),
    [anon_sym_u32unchecked_gt] = ACTIONS(228),
    [anon_sym_u32checked_gte] = ACTIONS(226),
    [anon_sym_u32unchecked_gte] = ACTIONS(226),
    [anon_sym_u32checked_min] = ACTIONS(226),
    [anon_sym_u32unchecked_min] = ACTIONS(226),
    [anon_sym_u32checked_max] = ACTIONS(226),
    [anon_sym_u32unchecked_max] = ACTIONS(226),
    [anon_sym_drop] = ACTIONS(228),
    [anon_sym_dropw] = ACTIONS(226),
    [anon_sym_padw] = ACTIONS(226),
    [anon_sym_swapdw] = ACTIONS(226),
    [anon_sym_cswap] = ACTIONS(228),
    [anon_sym_cswapw] = ACTIONS(226),
    [anon_sym_cdrop] = ACTIONS(228),
    [anon_sym_cdropw] = ACTIONS(226),
    [anon_sym_sdepth] = ACTIONS(226),
    [anon_sym_mem_stream] = ACTIONS(226),
    [anon_sym_adv_pipe] = ACTIONS(226),
    [anon_sym_adv_loadw] = ACTIONS(226),
    [anon_sym_rphash] = ACTIONS(226),
    [anon_sym_rpperm] = ACTIONS(226),
    [anon_sym_mtree_get] = ACTIONS(226),
    [anon_sym_mtree_set] = ACTIONS(226),
    [anon_sym_mtree_cwm] = ACTIONS(226),
    [anon_sym_caller] = ACTIONS(226),
    [anon_sym_adv] = ACTIONS(228),
    [anon_sym_exp] = ACTIONS(226),
    [anon_sym_u32assert] = ACTIONS(228),
    [anon_sym_add] = ACTIONS(226),
    [anon_sym_sub] = ACTIONS(226),
    [anon_sym_mul] = ACTIONS(226),
    [anon_sym_eq] = ACTIONS(228),
    [anon_sym_neq] = ACTIONS(226),
    [anon_sym_u32checked_add] = ACTIONS(226),
    [anon_sym_u32wrapping_add] = ACTIONS(228),
    [anon_sym_u32overflowing_add] = ACTIONS(228),
    [anon_sym_u32checked_sub] = ACTIONS(226),
    [anon_sym_u32wrapping_sub] = ACTIONS(226),
    [anon_sym_u32overflowing_sub] = ACTIONS(226),
    [anon_sym_u32checked_mul] = ACTIONS(226),
    [anon_sym_u32wrapping_mul] = ACTIONS(226),
    [anon_sym_u32overflowing_mul] = ACTIONS(226),
    [anon_sym_u32checked_div] = ACTIONS(228),
    [anon_sym_u32unchecked_div] = ACTIONS(228),
    [anon_sym_u32checked_mod] = ACTIONS(226),
    [anon_sym_u32unchecked_mod] = ACTIONS(226),
    [anon_sym_u32checked_divmod] = ACTIONS(226),
    [anon_sym_u32unchecked_divmod] = ACTIONS(226),
    [anon_sym_u32checked_shr] = ACTIONS(226),
    [anon_sym_u32unchecked_shr] = ACTIONS(226),
    [anon_sym_u32checked_shl] = ACTIONS(226),
    [anon_sym_u32unchecked_shl] = ACTIONS(226),
    [anon_sym_u32checked_rotr] = ACTIONS(226),
    [anon_sym_u32unchecked_rotr] = ACTIONS(226),
    [anon_sym_u32checked_rotl] = ACTIONS(226),
    [anon_sym_u32unchecked_rotl] = ACTIONS(226),
    [anon_sym_u32checked_eq] = ACTIONS(226),
    [anon_sym_u32checked_neq] = ACTIONS(226),
    [anon_sym_mem_load] = ACTIONS(228),
    [anon_sym_mem_loadw] = ACTIONS(226),
    [anon_sym_mem_store] = ACTIONS(228),
    [anon_sym_mem_storew] = ACTIONS(226),
    [anon_sym_if] = ACTIONS(226),
    [sym__else] = ACTIONS(226),
    [anon_sym_while] = ACTIONS(226),
    [anon_sym_repeat] = ACTIONS(226),
    [sym__end] = ACTIONS(226),
  },
  [43] = {
    [anon_sym_exec] = ACTIONS(230),
    [anon_sym_DOT] = ACTIONS(232),
    [anon_sym_call] = ACTIONS(234),
    [anon_sym_syscall] = ACTIONS(230),
    [anon_sym_assert] = ACTIONS(234),
    [anon_sym_assertz] = ACTIONS(230),
    [anon_sym_assert_eq] = ACTIONS(230),
    [anon_sym_neg] = ACTIONS(230),
    [anon_sym_inv] = ACTIONS(230),
    [anon_sym_pow2] = ACTIONS(230),
    [anon_sym_not] = ACTIONS(230),
    [anon_sym_and] = ACTIONS(230),
    [anon_sym_or] = ACTIONS(230),
    [anon_sym_xor] = ACTIONS(230),
    [anon_sym_lt] = ACTIONS(234),
    [anon_sym_lte] = ACTIONS(230),
    [anon_sym_gt] = ACTIONS(234),
    [anon_sym_gte] = ACTIONS(230),
    [anon_sym_eqw] = ACTIONS(230),
    [anon_sym_ext2add] = ACTIONS(230),
    [anon_sym_ext2sub] = ACTIONS(230),
    [anon_sym_ext2mul] = ACTIONS(230),
    [anon_sym_ext2div] = ACTIONS(230),
    [anon_sym_ext2neg] = ACTIONS(230),
    [anon_sym_ext2inv] = ACTIONS(230),
    [anon_sym_u32test] = ACTIONS(234),
    [anon_sym_u32testw] = ACTIONS(230),
    [anon_sym_u32assertw] = ACTIONS(230),
    [anon_sym_u32cast] = ACTIONS(230),
    [anon_sym_u32split] = ACTIONS(230),
    [anon_sym_u32overflowing_add3] = ACTIONS(230),
    [anon_sym_u32wrapping_add3] = ACTIONS(230),
    [anon_sym_u32overflowing_madd] = ACTIONS(230),
    [anon_sym_u32wrapping_madd] = ACTIONS(230),
    [anon_sym_u32checked_and] = ACTIONS(230),
    [anon_sym_u32checked_or] = ACTIONS(230),
    [anon_sym_u32checked_xor] = ACTIONS(230),
    [anon_sym_u32checked_not] = ACTIONS(230),
    [anon_sym_u32checked_popcnt] = ACTIONS(230),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(230),
    [anon_sym_u32checked_lt] = ACTIONS(234),
    [anon_sym_u32unchecked_lt] = ACTIONS(234),
    [anon_sym_u32checked_lte] = ACTIONS(230),
    [anon_sym_u32unchecked_lte] = ACTIONS(230),
    [anon_sym_u32checked_gt] = ACTIONS(234),
    [anon_sym_u32unchecked_gt] = ACTIONS(234),
    [anon_sym_u32checked_gte] = ACTIONS(230),
    [anon_sym_u32unchecked_gte] = ACTIONS(230),
    [anon_sym_u32checked_min] = ACTIONS(230),
    [anon_sym_u32unchecked_min] = ACTIONS(230),
    [anon_sym_u32checked_max] = ACTIONS(230),
    [anon_sym_u32unchecked_max] = ACTIONS(230),
    [anon_sym_drop] = ACTIONS(234),
    [anon_sym_dropw] = ACTIONS(230),
    [anon_sym_padw] = ACTIONS(230),
    [anon_sym_swapdw] = ACTIONS(230),
    [anon_sym_cswap] = ACTIONS(234),
    [anon_sym_cswapw] = ACTIONS(230),
    [anon_sym_cdrop] = ACTIONS(234),
    [anon_sym_cdropw] = ACTIONS(230),
    [anon_sym_sdepth] = ACTIONS(230),
    [anon_sym_mem_stream] = ACTIONS(230),
    [anon_sym_adv_pipe] = ACTIONS(230),
    [anon_sym_adv_loadw] = ACTIONS(230),
    [anon_sym_rphash] = ACTIONS(230),
    [anon_sym_rpperm] = ACTIONS(230),
    [anon_sym_mtree_get] = ACTIONS(230),
    [anon_sym_mtree_set] = ACTIONS(230),
    [anon_sym_mtree_cwm] = ACTIONS(230),
    [anon_sym_caller] = ACTIONS(230),
    [anon_sym_adv] = ACTIONS(234),
    [anon_sym_exp] = ACTIONS(230),
    [anon_sym_u32assert] = ACTIONS(234),
    [anon_sym_add] = ACTIONS(230),
    [anon_sym_sub] = ACTIONS(230),
    [anon_sym_mul] = ACTIONS(230),
    [anon_sym_eq] = ACTIONS(234),
    [anon_sym_neq] = ACTIONS(230),
    [anon_sym_u32checked_add] = ACTIONS(230),
    [anon_sym_u32wrapping_add] = ACTIONS(234),
    [anon_sym_u32overflowing_add] = ACTIONS(234),
    [anon_sym_u32checked_sub] = ACTIONS(230),
    [anon_sym_u32wrapping_sub] = ACTIONS(230),
    [anon_sym_u32overflowing_sub] = ACTIONS(230),
    [anon_sym_u32checked_mul] = ACTIONS(230),
    [anon_sym_u32wrapping_mul] = ACTIONS(230),
    [anon_sym_u32overflowing_mul] = ACTIONS(230),
    [anon_sym_u32checked_div] = ACTIONS(234),
    [anon_sym_u32unchecked_div] = ACTIONS(234),
    [anon_sym_u32checked_mod] = ACTIONS(230),
    [anon_sym_u32unchecked_mod] = ACTIONS(230),
    [anon_sym_u32checked_divmod] = ACTIONS(230),
    [anon_sym_u32unchecked_divmod] = ACTIONS(230),
    [anon_sym_u32checked_shr] = ACTIONS(230),
    [anon_sym_u32unchecked_shr] = ACTIONS(230),
    [anon_sym_u32checked_shl] = ACTIONS(230),
    [anon_sym_u32unchecked_shl] = ACTIONS(230),
    [anon_sym_u32checked_rotr] = ACTIONS(230),
    [anon_sym_u32unchecked_rotr] = ACTIONS(230),
    [anon_sym_u32checked_rotl] = ACTIONS(230),
    [anon_sym_u32unchecked_rotl] = ACTIONS(230),
    [anon_sym_u32checked_eq] = ACTIONS(230),
    [anon_sym_u32checked_neq] = ACTIONS(230),
    [anon_sym_mem_load] = ACTIONS(234),
    [anon_sym_mem_loadw] = ACTIONS(230),
    [anon_sym_mem_store] = ACTIONS(234),
    [anon_sym_mem_storew] = ACTIONS(230),
    [anon_sym_if] = ACTIONS(230),
    [anon_sym_while] = ACTIONS(230),
    [anon_sym_repeat] = ACTIONS(230),
    [sym__end] = ACTIONS(230),
  },
  [44] = {
    [anon_sym_exec] = ACTIONS(236),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_call] = ACTIONS(240),
    [anon_sym_syscall] = ACTIONS(236),
    [anon_sym_assert] = ACTIONS(240),
    [anon_sym_assertz] = ACTIONS(236),
    [anon_sym_assert_eq] = ACTIONS(236),
    [anon_sym_neg] = ACTIONS(236),
    [anon_sym_inv] = ACTIONS(236),
    [anon_sym_pow2] = ACTIONS(236),
    [anon_sym_not] = ACTIONS(236),
    [anon_sym_and] = ACTIONS(236),
    [anon_sym_or] = ACTIONS(236),
    [anon_sym_xor] = ACTIONS(236),
    [anon_sym_lt] = ACTIONS(240),
    [anon_sym_lte] = ACTIONS(236),
    [anon_sym_gt] = ACTIONS(240),
    [anon_sym_gte] = ACTIONS(236),
    [anon_sym_eqw] = ACTIONS(236),
    [anon_sym_ext2add] = ACTIONS(236),
    [anon_sym_ext2sub] = ACTIONS(236),
    [anon_sym_ext2mul] = ACTIONS(236),
    [anon_sym_ext2div] = ACTIONS(236),
    [anon_sym_ext2neg] = ACTIONS(236),
    [anon_sym_ext2inv] = ACTIONS(236),
    [anon_sym_u32test] = ACTIONS(240),
    [anon_sym_u32testw] = ACTIONS(236),
    [anon_sym_u32assertw] = ACTIONS(236),
    [anon_sym_u32cast] = ACTIONS(236),
    [anon_sym_u32split] = ACTIONS(236),
    [anon_sym_u32overflowing_add3] = ACTIONS(236),
    [anon_sym_u32wrapping_add3] = ACTIONS(236),
    [anon_sym_u32overflowing_madd] = ACTIONS(236),
    [anon_sym_u32wrapping_madd] = ACTIONS(236),
    [anon_sym_u32checked_and] = ACTIONS(236),
    [anon_sym_u32checked_or] = ACTIONS(236),
    [anon_sym_u32checked_xor] = ACTIONS(236),
    [anon_sym_u32checked_not] = ACTIONS(236),
    [anon_sym_u32checked_popcnt] = ACTIONS(236),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(236),
    [anon_sym_u32checked_lt] = ACTIONS(240),
    [anon_sym_u32unchecked_lt] = ACTIONS(240),
    [anon_sym_u32checked_lte] = ACTIONS(236),
    [anon_sym_u32unchecked_lte] = ACTIONS(236),
    [anon_sym_u32checked_gt] = ACTIONS(240),
    [anon_sym_u32unchecked_gt] = ACTIONS(240),
    [anon_sym_u32checked_gte] = ACTIONS(236),
    [anon_sym_u32unchecked_gte] = ACTIONS(236),
    [anon_sym_u32checked_min] = ACTIONS(236),
    [anon_sym_u32unchecked_min] = ACTIONS(236),
    [anon_sym_u32checked_max] = ACTIONS(236),
    [anon_sym_u32unchecked_max] = ACTIONS(236),
    [anon_sym_drop] = ACTIONS(240),
    [anon_sym_dropw] = ACTIONS(236),
    [anon_sym_padw] = ACTIONS(236),
    [anon_sym_swapdw] = ACTIONS(236),
    [anon_sym_cswap] = ACTIONS(240),
    [anon_sym_cswapw] = ACTIONS(236),
    [anon_sym_cdrop] = ACTIONS(240),
    [anon_sym_cdropw] = ACTIONS(236),
    [anon_sym_sdepth] = ACTIONS(236),
    [anon_sym_mem_stream] = ACTIONS(236),
    [anon_sym_adv_pipe] = ACTIONS(236),
    [anon_sym_adv_loadw] = ACTIONS(236),
    [anon_sym_rphash] = ACTIONS(236),
    [anon_sym_rpperm] = ACTIONS(236),
    [anon_sym_mtree_get] = ACTIONS(236),
    [anon_sym_mtree_set] = ACTIONS(236),
    [anon_sym_mtree_cwm] = ACTIONS(236),
    [anon_sym_caller] = ACTIONS(236),
    [anon_sym_adv] = ACTIONS(240),
    [anon_sym_exp] = ACTIONS(236),
    [anon_sym_u32assert] = ACTIONS(240),
    [anon_sym_add] = ACTIONS(236),
    [anon_sym_sub] = ACTIONS(236),
    [anon_sym_mul] = ACTIONS(236),
    [anon_sym_eq] = ACTIONS(240),
    [anon_sym_neq] = ACTIONS(236),
    [anon_sym_u32checked_add] = ACTIONS(236),
    [anon_sym_u32wrapping_add] = ACTIONS(240),
    [anon_sym_u32overflowing_add] = ACTIONS(240),
    [anon_sym_u32checked_sub] = ACTIONS(236),
    [anon_sym_u32wrapping_sub] = ACTIONS(236),
    [anon_sym_u32overflowing_sub] = ACTIONS(236),
    [anon_sym_u32checked_mul] = ACTIONS(236),
    [anon_sym_u32wrapping_mul] = ACTIONS(236),
    [anon_sym_u32overflowing_mul] = ACTIONS(236),
    [anon_sym_u32checked_div] = ACTIONS(240),
    [anon_sym_u32unchecked_div] = ACTIONS(240),
    [anon_sym_u32checked_mod] = ACTIONS(236),
    [anon_sym_u32unchecked_mod] = ACTIONS(236),
    [anon_sym_u32checked_divmod] = ACTIONS(236),
    [anon_sym_u32unchecked_divmod] = ACTIONS(236),
    [anon_sym_u32checked_shr] = ACTIONS(236),
    [anon_sym_u32unchecked_shr] = ACTIONS(236),
    [anon_sym_u32checked_shl] = ACTIONS(236),
    [anon_sym_u32unchecked_shl] = ACTIONS(236),
    [anon_sym_u32checked_rotr] = ACTIONS(236),
    [anon_sym_u32unchecked_rotr] = ACTIONS(236),
    [anon_sym_u32checked_rotl] = ACTIONS(236),
    [anon_sym_u32unchecked_rotl] = ACTIONS(236),
    [anon_sym_u32checked_eq] = ACTIONS(236),
    [anon_sym_u32checked_neq] = ACTIONS(236),
    [anon_sym_mem_load] = ACTIONS(240),
    [anon_sym_mem_loadw] = ACTIONS(236),
    [anon_sym_mem_store] = ACTIONS(240),
    [anon_sym_mem_storew] = ACTIONS(236),
    [anon_sym_if] = ACTIONS(236),
    [anon_sym_while] = ACTIONS(236),
    [anon_sym_repeat] = ACTIONS(236),
    [sym__end] = ACTIONS(236),
  },
  [45] = {
    [anon_sym_exec] = ACTIONS(242),
    [anon_sym_call] = ACTIONS(244),
    [anon_sym_syscall] = ACTIONS(242),
    [anon_sym_assert] = ACTIONS(244),
    [anon_sym_assertz] = ACTIONS(242),
    [anon_sym_assert_eq] = ACTIONS(242),
    [anon_sym_neg] = ACTIONS(242),
    [anon_sym_inv] = ACTIONS(242),
    [anon_sym_pow2] = ACTIONS(242),
    [anon_sym_not] = ACTIONS(242),
    [anon_sym_and] = ACTIONS(242),
    [anon_sym_or] = ACTIONS(242),
    [anon_sym_xor] = ACTIONS(242),
    [anon_sym_lt] = ACTIONS(244),
    [anon_sym_lte] = ACTIONS(242),
    [anon_sym_gt] = ACTIONS(244),
    [anon_sym_gte] = ACTIONS(242),
    [anon_sym_eqw] = ACTIONS(242),
    [anon_sym_ext2add] = ACTIONS(242),
    [anon_sym_ext2sub] = ACTIONS(242),
    [anon_sym_ext2mul] = ACTIONS(242),
    [anon_sym_ext2div] = ACTIONS(242),
    [anon_sym_ext2neg] = ACTIONS(242),
    [anon_sym_ext2inv] = ACTIONS(242),
    [anon_sym_u32test] = ACTIONS(244),
    [anon_sym_u32testw] = ACTIONS(242),
    [anon_sym_u32assertw] = ACTIONS(242),
    [anon_sym_u32cast] = ACTIONS(242),
    [anon_sym_u32split] = ACTIONS(242),
    [anon_sym_u32overflowing_add3] = ACTIONS(242),
    [anon_sym_u32wrapping_add3] = ACTIONS(242),
    [anon_sym_u32overflowing_madd] = ACTIONS(242),
    [anon_sym_u32wrapping_madd] = ACTIONS(242),
    [anon_sym_u32checked_and] = ACTIONS(242),
    [anon_sym_u32checked_or] = ACTIONS(242),
    [anon_sym_u32checked_xor] = ACTIONS(242),
    [anon_sym_u32checked_not] = ACTIONS(242),
    [anon_sym_u32checked_popcnt] = ACTIONS(242),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(242),
    [anon_sym_u32checked_lt] = ACTIONS(244),
    [anon_sym_u32unchecked_lt] = ACTIONS(244),
    [anon_sym_u32checked_lte] = ACTIONS(242),
    [anon_sym_u32unchecked_lte] = ACTIONS(242),
    [anon_sym_u32checked_gt] = ACTIONS(244),
    [anon_sym_u32unchecked_gt] = ACTIONS(244),
    [anon_sym_u32checked_gte] = ACTIONS(242),
    [anon_sym_u32unchecked_gte] = ACTIONS(242),
    [anon_sym_u32checked_min] = ACTIONS(242),
    [anon_sym_u32unchecked_min] = ACTIONS(242),
    [anon_sym_u32checked_max] = ACTIONS(242),
    [anon_sym_u32unchecked_max] = ACTIONS(242),
    [anon_sym_drop] = ACTIONS(244),
    [anon_sym_dropw] = ACTIONS(242),
    [anon_sym_padw] = ACTIONS(242),
    [anon_sym_swapdw] = ACTIONS(242),
    [anon_sym_cswap] = ACTIONS(244),
    [anon_sym_cswapw] = ACTIONS(242),
    [anon_sym_cdrop] = ACTIONS(244),
    [anon_sym_cdropw] = ACTIONS(242),
    [anon_sym_sdepth] = ACTIONS(242),
    [anon_sym_mem_stream] = ACTIONS(242),
    [anon_sym_adv_pipe] = ACTIONS(242),
    [anon_sym_adv_loadw] = ACTIONS(242),
    [anon_sym_rphash] = ACTIONS(242),
    [anon_sym_rpperm] = ACTIONS(242),
    [anon_sym_mtree_get] = ACTIONS(242),
    [anon_sym_mtree_set] = ACTIONS(242),
    [anon_sym_mtree_cwm] = ACTIONS(242),
    [anon_sym_caller] = ACTIONS(242),
    [anon_sym_adv] = ACTIONS(244),
    [anon_sym_exp] = ACTIONS(242),
    [anon_sym_u32assert] = ACTIONS(244),
    [anon_sym_add] = ACTIONS(242),
    [anon_sym_sub] = ACTIONS(242),
    [anon_sym_mul] = ACTIONS(242),
    [anon_sym_eq] = ACTIONS(244),
    [anon_sym_neq] = ACTIONS(242),
    [anon_sym_u32checked_add] = ACTIONS(242),
    [anon_sym_u32wrapping_add] = ACTIONS(244),
    [anon_sym_u32overflowing_add] = ACTIONS(244),
    [anon_sym_u32checked_sub] = ACTIONS(242),
    [anon_sym_u32wrapping_sub] = ACTIONS(242),
    [anon_sym_u32overflowing_sub] = ACTIONS(242),
    [anon_sym_u32checked_mul] = ACTIONS(242),
    [anon_sym_u32wrapping_mul] = ACTIONS(242),
    [anon_sym_u32overflowing_mul] = ACTIONS(242),
    [anon_sym_u32checked_div] = ACTIONS(244),
    [anon_sym_u32unchecked_div] = ACTIONS(244),
    [anon_sym_u32checked_mod] = ACTIONS(242),
    [anon_sym_u32unchecked_mod] = ACTIONS(242),
    [anon_sym_u32checked_divmod] = ACTIONS(242),
    [anon_sym_u32unchecked_divmod] = ACTIONS(242),
    [anon_sym_u32checked_shr] = ACTIONS(242),
    [anon_sym_u32unchecked_shr] = ACTIONS(242),
    [anon_sym_u32checked_shl] = ACTIONS(242),
    [anon_sym_u32unchecked_shl] = ACTIONS(242),
    [anon_sym_u32checked_rotr] = ACTIONS(242),
    [anon_sym_u32unchecked_rotr] = ACTIONS(242),
    [anon_sym_u32checked_rotl] = ACTIONS(242),
    [anon_sym_u32unchecked_rotl] = ACTIONS(242),
    [anon_sym_u32checked_eq] = ACTIONS(242),
    [anon_sym_u32checked_neq] = ACTIONS(242),
    [anon_sym_mem_load] = ACTIONS(244),
    [anon_sym_mem_loadw] = ACTIONS(242),
    [anon_sym_mem_store] = ACTIONS(244),
    [anon_sym_mem_storew] = ACTIONS(242),
    [anon_sym_if] = ACTIONS(242),
    [sym__else] = ACTIONS(242),
    [anon_sym_while] = ACTIONS(242),
    [anon_sym_repeat] = ACTIONS(242),
    [sym__end] = ACTIONS(242),
  },
  [46] = {
    [anon_sym_exec] = ACTIONS(246),
    [anon_sym_call] = ACTIONS(248),
    [anon_sym_syscall] = ACTIONS(246),
    [anon_sym_assert] = ACTIONS(248),
    [anon_sym_assertz] = ACTIONS(246),
    [anon_sym_assert_eq] = ACTIONS(246),
    [anon_sym_neg] = ACTIONS(246),
    [anon_sym_inv] = ACTIONS(246),
    [anon_sym_pow2] = ACTIONS(246),
    [anon_sym_not] = ACTIONS(246),
    [anon_sym_and] = ACTIONS(246),
    [anon_sym_or] = ACTIONS(246),
    [anon_sym_xor] = ACTIONS(246),
    [anon_sym_lt] = ACTIONS(248),
    [anon_sym_lte] = ACTIONS(246),
    [anon_sym_gt] = ACTIONS(248),
    [anon_sym_gte] = ACTIONS(246),
    [anon_sym_eqw] = ACTIONS(246),
    [anon_sym_ext2add] = ACTIONS(246),
    [anon_sym_ext2sub] = ACTIONS(246),
    [anon_sym_ext2mul] = ACTIONS(246),
    [anon_sym_ext2div] = ACTIONS(246),
    [anon_sym_ext2neg] = ACTIONS(246),
    [anon_sym_ext2inv] = ACTIONS(246),
    [anon_sym_u32test] = ACTIONS(248),
    [anon_sym_u32testw] = ACTIONS(246),
    [anon_sym_u32assertw] = ACTIONS(246),
    [anon_sym_u32cast] = ACTIONS(246),
    [anon_sym_u32split] = ACTIONS(246),
    [anon_sym_u32overflowing_add3] = ACTIONS(246),
    [anon_sym_u32wrapping_add3] = ACTIONS(246),
    [anon_sym_u32overflowing_madd] = ACTIONS(246),
    [anon_sym_u32wrapping_madd] = ACTIONS(246),
    [anon_sym_u32checked_and] = ACTIONS(246),
    [anon_sym_u32checked_or] = ACTIONS(246),
    [anon_sym_u32checked_xor] = ACTIONS(246),
    [anon_sym_u32checked_not] = ACTIONS(246),
    [anon_sym_u32checked_popcnt] = ACTIONS(246),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(246),
    [anon_sym_u32checked_lt] = ACTIONS(248),
    [anon_sym_u32unchecked_lt] = ACTIONS(248),
    [anon_sym_u32checked_lte] = ACTIONS(246),
    [anon_sym_u32unchecked_lte] = ACTIONS(246),
    [anon_sym_u32checked_gt] = ACTIONS(248),
    [anon_sym_u32unchecked_gt] = ACTIONS(248),
    [anon_sym_u32checked_gte] = ACTIONS(246),
    [anon_sym_u32unchecked_gte] = ACTIONS(246),
    [anon_sym_u32checked_min] = ACTIONS(246),
    [anon_sym_u32unchecked_min] = ACTIONS(246),
    [anon_sym_u32checked_max] = ACTIONS(246),
    [anon_sym_u32unchecked_max] = ACTIONS(246),
    [anon_sym_drop] = ACTIONS(248),
    [anon_sym_dropw] = ACTIONS(246),
    [anon_sym_padw] = ACTIONS(246),
    [anon_sym_swapdw] = ACTIONS(246),
    [anon_sym_cswap] = ACTIONS(248),
    [anon_sym_cswapw] = ACTIONS(246),
    [anon_sym_cdrop] = ACTIONS(248),
    [anon_sym_cdropw] = ACTIONS(246),
    [anon_sym_sdepth] = ACTIONS(246),
    [anon_sym_mem_stream] = ACTIONS(246),
    [anon_sym_adv_pipe] = ACTIONS(246),
    [anon_sym_adv_loadw] = ACTIONS(246),
    [anon_sym_rphash] = ACTIONS(246),
    [anon_sym_rpperm] = ACTIONS(246),
    [anon_sym_mtree_get] = ACTIONS(246),
    [anon_sym_mtree_set] = ACTIONS(246),
    [anon_sym_mtree_cwm] = ACTIONS(246),
    [anon_sym_caller] = ACTIONS(246),
    [anon_sym_adv] = ACTIONS(248),
    [anon_sym_exp] = ACTIONS(246),
    [anon_sym_u32assert] = ACTIONS(248),
    [anon_sym_add] = ACTIONS(246),
    [anon_sym_sub] = ACTIONS(246),
    [anon_sym_mul] = ACTIONS(246),
    [anon_sym_eq] = ACTIONS(248),
    [anon_sym_neq] = ACTIONS(246),
    [anon_sym_u32checked_add] = ACTIONS(246),
    [anon_sym_u32wrapping_add] = ACTIONS(248),
    [anon_sym_u32overflowing_add] = ACTIONS(248),
    [anon_sym_u32checked_sub] = ACTIONS(246),
    [anon_sym_u32wrapping_sub] = ACTIONS(246),
    [anon_sym_u32overflowing_sub] = ACTIONS(246),
    [anon_sym_u32checked_mul] = ACTIONS(246),
    [anon_sym_u32wrapping_mul] = ACTIONS(246),
    [anon_sym_u32overflowing_mul] = ACTIONS(246),
    [anon_sym_u32checked_div] = ACTIONS(248),
    [anon_sym_u32unchecked_div] = ACTIONS(248),
    [anon_sym_u32checked_mod] = ACTIONS(246),
    [anon_sym_u32unchecked_mod] = ACTIONS(246),
    [anon_sym_u32checked_divmod] = ACTIONS(246),
    [anon_sym_u32unchecked_divmod] = ACTIONS(246),
    [anon_sym_u32checked_shr] = ACTIONS(246),
    [anon_sym_u32unchecked_shr] = ACTIONS(246),
    [anon_sym_u32checked_shl] = ACTIONS(246),
    [anon_sym_u32unchecked_shl] = ACTIONS(246),
    [anon_sym_u32checked_rotr] = ACTIONS(246),
    [anon_sym_u32unchecked_rotr] = ACTIONS(246),
    [anon_sym_u32checked_rotl] = ACTIONS(246),
    [anon_sym_u32unchecked_rotl] = ACTIONS(246),
    [anon_sym_u32checked_eq] = ACTIONS(246),
    [anon_sym_u32checked_neq] = ACTIONS(246),
    [anon_sym_mem_load] = ACTIONS(248),
    [anon_sym_mem_loadw] = ACTIONS(246),
    [anon_sym_mem_store] = ACTIONS(248),
    [anon_sym_mem_storew] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(246),
    [sym__else] = ACTIONS(246),
    [anon_sym_while] = ACTIONS(246),
    [anon_sym_repeat] = ACTIONS(246),
    [sym__end] = ACTIONS(246),
  },
  [47] = {
    [anon_sym_exec] = ACTIONS(250),
    [anon_sym_call] = ACTIONS(252),
    [anon_sym_syscall] = ACTIONS(250),
    [anon_sym_assert] = ACTIONS(252),
    [anon_sym_assertz] = ACTIONS(250),
    [anon_sym_assert_eq] = ACTIONS(250),
    [anon_sym_neg] = ACTIONS(250),
    [anon_sym_inv] = ACTIONS(250),
    [anon_sym_pow2] = ACTIONS(250),
    [anon_sym_not] = ACTIONS(250),
    [anon_sym_and] = ACTIONS(250),
    [anon_sym_or] = ACTIONS(250),
    [anon_sym_xor] = ACTIONS(250),
    [anon_sym_lt] = ACTIONS(252),
    [anon_sym_lte] = ACTIONS(250),
    [anon_sym_gt] = ACTIONS(252),
    [anon_sym_gte] = ACTIONS(250),
    [anon_sym_eqw] = ACTIONS(250),
    [anon_sym_ext2add] = ACTIONS(250),
    [anon_sym_ext2sub] = ACTIONS(250),
    [anon_sym_ext2mul] = ACTIONS(250),
    [anon_sym_ext2div] = ACTIONS(250),
    [anon_sym_ext2neg] = ACTIONS(250),
    [anon_sym_ext2inv] = ACTIONS(250),
    [anon_sym_u32test] = ACTIONS(252),
    [anon_sym_u32testw] = ACTIONS(250),
    [anon_sym_u32assertw] = ACTIONS(250),
    [anon_sym_u32cast] = ACTIONS(250),
    [anon_sym_u32split] = ACTIONS(250),
    [anon_sym_u32overflowing_add3] = ACTIONS(250),
    [anon_sym_u32wrapping_add3] = ACTIONS(250),
    [anon_sym_u32overflowing_madd] = ACTIONS(250),
    [anon_sym_u32wrapping_madd] = ACTIONS(250),
    [anon_sym_u32checked_and] = ACTIONS(250),
    [anon_sym_u32checked_or] = ACTIONS(250),
    [anon_sym_u32checked_xor] = ACTIONS(250),
    [anon_sym_u32checked_not] = ACTIONS(250),
    [anon_sym_u32checked_popcnt] = ACTIONS(250),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(250),
    [anon_sym_u32checked_lt] = ACTIONS(252),
    [anon_sym_u32unchecked_lt] = ACTIONS(252),
    [anon_sym_u32checked_lte] = ACTIONS(250),
    [anon_sym_u32unchecked_lte] = ACTIONS(250),
    [anon_sym_u32checked_gt] = ACTIONS(252),
    [anon_sym_u32unchecked_gt] = ACTIONS(252),
    [anon_sym_u32checked_gte] = ACTIONS(250),
    [anon_sym_u32unchecked_gte] = ACTIONS(250),
    [anon_sym_u32checked_min] = ACTIONS(250),
    [anon_sym_u32unchecked_min] = ACTIONS(250),
    [anon_sym_u32checked_max] = ACTIONS(250),
    [anon_sym_u32unchecked_max] = ACTIONS(250),
    [anon_sym_drop] = ACTIONS(252),
    [anon_sym_dropw] = ACTIONS(250),
    [anon_sym_padw] = ACTIONS(250),
    [anon_sym_swapdw] = ACTIONS(250),
    [anon_sym_cswap] = ACTIONS(252),
    [anon_sym_cswapw] = ACTIONS(250),
    [anon_sym_cdrop] = ACTIONS(252),
    [anon_sym_cdropw] = ACTIONS(250),
    [anon_sym_sdepth] = ACTIONS(250),
    [anon_sym_mem_stream] = ACTIONS(250),
    [anon_sym_adv_pipe] = ACTIONS(250),
    [anon_sym_adv_loadw] = ACTIONS(250),
    [anon_sym_rphash] = ACTIONS(250),
    [anon_sym_rpperm] = ACTIONS(250),
    [anon_sym_mtree_get] = ACTIONS(250),
    [anon_sym_mtree_set] = ACTIONS(250),
    [anon_sym_mtree_cwm] = ACTIONS(250),
    [anon_sym_caller] = ACTIONS(250),
    [anon_sym_adv] = ACTIONS(252),
    [anon_sym_exp] = ACTIONS(250),
    [anon_sym_u32assert] = ACTIONS(252),
    [anon_sym_add] = ACTIONS(250),
    [anon_sym_sub] = ACTIONS(250),
    [anon_sym_mul] = ACTIONS(250),
    [anon_sym_eq] = ACTIONS(252),
    [anon_sym_neq] = ACTIONS(250),
    [anon_sym_u32checked_add] = ACTIONS(250),
    [anon_sym_u32wrapping_add] = ACTIONS(252),
    [anon_sym_u32overflowing_add] = ACTIONS(252),
    [anon_sym_u32checked_sub] = ACTIONS(250),
    [anon_sym_u32wrapping_sub] = ACTIONS(250),
    [anon_sym_u32overflowing_sub] = ACTIONS(250),
    [anon_sym_u32checked_mul] = ACTIONS(250),
    [anon_sym_u32wrapping_mul] = ACTIONS(250),
    [anon_sym_u32overflowing_mul] = ACTIONS(250),
    [anon_sym_u32checked_div] = ACTIONS(252),
    [anon_sym_u32unchecked_div] = ACTIONS(252),
    [anon_sym_u32checked_mod] = ACTIONS(250),
    [anon_sym_u32unchecked_mod] = ACTIONS(250),
    [anon_sym_u32checked_divmod] = ACTIONS(250),
    [anon_sym_u32unchecked_divmod] = ACTIONS(250),
    [anon_sym_u32checked_shr] = ACTIONS(250),
    [anon_sym_u32unchecked_shr] = ACTIONS(250),
    [anon_sym_u32checked_shl] = ACTIONS(250),
    [anon_sym_u32unchecked_shl] = ACTIONS(250),
    [anon_sym_u32checked_rotr] = ACTIONS(250),
    [anon_sym_u32unchecked_rotr] = ACTIONS(250),
    [anon_sym_u32checked_rotl] = ACTIONS(250),
    [anon_sym_u32unchecked_rotl] = ACTIONS(250),
    [anon_sym_u32checked_eq] = ACTIONS(250),
    [anon_sym_u32checked_neq] = ACTIONS(250),
    [anon_sym_mem_load] = ACTIONS(252),
    [anon_sym_mem_loadw] = ACTIONS(250),
    [anon_sym_mem_store] = ACTIONS(252),
    [anon_sym_mem_storew] = ACTIONS(250),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_while] = ACTIONS(250),
    [anon_sym_repeat] = ACTIONS(250),
    [sym__end] = ACTIONS(250),
  },
  [48] = {
    [anon_sym_exec] = ACTIONS(254),
    [anon_sym_call] = ACTIONS(256),
    [anon_sym_syscall] = ACTIONS(254),
    [anon_sym_assert] = ACTIONS(256),
    [anon_sym_assertz] = ACTIONS(254),
    [anon_sym_assert_eq] = ACTIONS(254),
    [anon_sym_neg] = ACTIONS(254),
    [anon_sym_inv] = ACTIONS(254),
    [anon_sym_pow2] = ACTIONS(254),
    [anon_sym_not] = ACTIONS(254),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_or] = ACTIONS(254),
    [anon_sym_xor] = ACTIONS(254),
    [anon_sym_lt] = ACTIONS(256),
    [anon_sym_lte] = ACTIONS(254),
    [anon_sym_gt] = ACTIONS(256),
    [anon_sym_gte] = ACTIONS(254),
    [anon_sym_eqw] = ACTIONS(254),
    [anon_sym_ext2add] = ACTIONS(254),
    [anon_sym_ext2sub] = ACTIONS(254),
    [anon_sym_ext2mul] = ACTIONS(254),
    [anon_sym_ext2div] = ACTIONS(254),
    [anon_sym_ext2neg] = ACTIONS(254),
    [anon_sym_ext2inv] = ACTIONS(254),
    [anon_sym_u32test] = ACTIONS(256),
    [anon_sym_u32testw] = ACTIONS(254),
    [anon_sym_u32assertw] = ACTIONS(254),
    [anon_sym_u32cast] = ACTIONS(254),
    [anon_sym_u32split] = ACTIONS(254),
    [anon_sym_u32overflowing_add3] = ACTIONS(254),
    [anon_sym_u32wrapping_add3] = ACTIONS(254),
    [anon_sym_u32overflowing_madd] = ACTIONS(254),
    [anon_sym_u32wrapping_madd] = ACTIONS(254),
    [anon_sym_u32checked_and] = ACTIONS(254),
    [anon_sym_u32checked_or] = ACTIONS(254),
    [anon_sym_u32checked_xor] = ACTIONS(254),
    [anon_sym_u32checked_not] = ACTIONS(254),
    [anon_sym_u32checked_popcnt] = ACTIONS(254),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(254),
    [anon_sym_u32checked_lt] = ACTIONS(256),
    [anon_sym_u32unchecked_lt] = ACTIONS(256),
    [anon_sym_u32checked_lte] = ACTIONS(254),
    [anon_sym_u32unchecked_lte] = ACTIONS(254),
    [anon_sym_u32checked_gt] = ACTIONS(256),
    [anon_sym_u32unchecked_gt] = ACTIONS(256),
    [anon_sym_u32checked_gte] = ACTIONS(254),
    [anon_sym_u32unchecked_gte] = ACTIONS(254),
    [anon_sym_u32checked_min] = ACTIONS(254),
    [anon_sym_u32unchecked_min] = ACTIONS(254),
    [anon_sym_u32checked_max] = ACTIONS(254),
    [anon_sym_u32unchecked_max] = ACTIONS(254),
    [anon_sym_drop] = ACTIONS(256),
    [anon_sym_dropw] = ACTIONS(254),
    [anon_sym_padw] = ACTIONS(254),
    [anon_sym_swapdw] = ACTIONS(254),
    [anon_sym_cswap] = ACTIONS(256),
    [anon_sym_cswapw] = ACTIONS(254),
    [anon_sym_cdrop] = ACTIONS(256),
    [anon_sym_cdropw] = ACTIONS(254),
    [anon_sym_sdepth] = ACTIONS(254),
    [anon_sym_mem_stream] = ACTIONS(254),
    [anon_sym_adv_pipe] = ACTIONS(254),
    [anon_sym_adv_loadw] = ACTIONS(254),
    [anon_sym_rphash] = ACTIONS(254),
    [anon_sym_rpperm] = ACTIONS(254),
    [anon_sym_mtree_get] = ACTIONS(254),
    [anon_sym_mtree_set] = ACTIONS(254),
    [anon_sym_mtree_cwm] = ACTIONS(254),
    [anon_sym_caller] = ACTIONS(254),
    [anon_sym_adv] = ACTIONS(256),
    [anon_sym_exp] = ACTIONS(254),
    [anon_sym_u32assert] = ACTIONS(256),
    [anon_sym_add] = ACTIONS(254),
    [anon_sym_sub] = ACTIONS(254),
    [anon_sym_mul] = ACTIONS(254),
    [anon_sym_eq] = ACTIONS(256),
    [anon_sym_neq] = ACTIONS(254),
    [anon_sym_u32checked_add] = ACTIONS(254),
    [anon_sym_u32wrapping_add] = ACTIONS(256),
    [anon_sym_u32overflowing_add] = ACTIONS(256),
    [anon_sym_u32checked_sub] = ACTIONS(254),
    [anon_sym_u32wrapping_sub] = ACTIONS(254),
    [anon_sym_u32overflowing_sub] = ACTIONS(254),
    [anon_sym_u32checked_mul] = ACTIONS(254),
    [anon_sym_u32wrapping_mul] = ACTIONS(254),
    [anon_sym_u32overflowing_mul] = ACTIONS(254),
    [anon_sym_u32checked_div] = ACTIONS(256),
    [anon_sym_u32unchecked_div] = ACTIONS(256),
    [anon_sym_u32checked_mod] = ACTIONS(254),
    [anon_sym_u32unchecked_mod] = ACTIONS(254),
    [anon_sym_u32checked_divmod] = ACTIONS(254),
    [anon_sym_u32unchecked_divmod] = ACTIONS(254),
    [anon_sym_u32checked_shr] = ACTIONS(254),
    [anon_sym_u32unchecked_shr] = ACTIONS(254),
    [anon_sym_u32checked_shl] = ACTIONS(254),
    [anon_sym_u32unchecked_shl] = ACTIONS(254),
    [anon_sym_u32checked_rotr] = ACTIONS(254),
    [anon_sym_u32unchecked_rotr] = ACTIONS(254),
    [anon_sym_u32checked_rotl] = ACTIONS(254),
    [anon_sym_u32unchecked_rotl] = ACTIONS(254),
    [anon_sym_u32checked_eq] = ACTIONS(254),
    [anon_sym_u32checked_neq] = ACTIONS(254),
    [anon_sym_mem_load] = ACTIONS(256),
    [anon_sym_mem_loadw] = ACTIONS(254),
    [anon_sym_mem_store] = ACTIONS(256),
    [anon_sym_mem_storew] = ACTIONS(254),
    [anon_sym_if] = ACTIONS(254),
    [anon_sym_while] = ACTIONS(254),
    [anon_sym_repeat] = ACTIONS(254),
    [sym__end] = ACTIONS(254),
  },
  [49] = {
    [anon_sym_exec] = ACTIONS(258),
    [anon_sym_call] = ACTIONS(260),
    [anon_sym_syscall] = ACTIONS(258),
    [anon_sym_assert] = ACTIONS(260),
    [anon_sym_assertz] = ACTIONS(258),
    [anon_sym_assert_eq] = ACTIONS(258),
    [anon_sym_neg] = ACTIONS(258),
    [anon_sym_inv] = ACTIONS(258),
    [anon_sym_pow2] = ACTIONS(258),
    [anon_sym_not] = ACTIONS(258),
    [anon_sym_and] = ACTIONS(258),
    [anon_sym_or] = ACTIONS(258),
    [anon_sym_xor] = ACTIONS(258),
    [anon_sym_lt] = ACTIONS(260),
    [anon_sym_lte] = ACTIONS(258),
    [anon_sym_gt] = ACTIONS(260),
    [anon_sym_gte] = ACTIONS(258),
    [anon_sym_eqw] = ACTIONS(258),
    [anon_sym_ext2add] = ACTIONS(258),
    [anon_sym_ext2sub] = ACTIONS(258),
    [anon_sym_ext2mul] = ACTIONS(258),
    [anon_sym_ext2div] = ACTIONS(258),
    [anon_sym_ext2neg] = ACTIONS(258),
    [anon_sym_ext2inv] = ACTIONS(258),
    [anon_sym_u32test] = ACTIONS(260),
    [anon_sym_u32testw] = ACTIONS(258),
    [anon_sym_u32assertw] = ACTIONS(258),
    [anon_sym_u32cast] = ACTIONS(258),
    [anon_sym_u32split] = ACTIONS(258),
    [anon_sym_u32overflowing_add3] = ACTIONS(258),
    [anon_sym_u32wrapping_add3] = ACTIONS(258),
    [anon_sym_u32overflowing_madd] = ACTIONS(258),
    [anon_sym_u32wrapping_madd] = ACTIONS(258),
    [anon_sym_u32checked_and] = ACTIONS(258),
    [anon_sym_u32checked_or] = ACTIONS(258),
    [anon_sym_u32checked_xor] = ACTIONS(258),
    [anon_sym_u32checked_not] = ACTIONS(258),
    [anon_sym_u32checked_popcnt] = ACTIONS(258),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(258),
    [anon_sym_u32checked_lt] = ACTIONS(260),
    [anon_sym_u32unchecked_lt] = ACTIONS(260),
    [anon_sym_u32checked_lte] = ACTIONS(258),
    [anon_sym_u32unchecked_lte] = ACTIONS(258),
    [anon_sym_u32checked_gt] = ACTIONS(260),
    [anon_sym_u32unchecked_gt] = ACTIONS(260),
    [anon_sym_u32checked_gte] = ACTIONS(258),
    [anon_sym_u32unchecked_gte] = ACTIONS(258),
    [anon_sym_u32checked_min] = ACTIONS(258),
    [anon_sym_u32unchecked_min] = ACTIONS(258),
    [anon_sym_u32checked_max] = ACTIONS(258),
    [anon_sym_u32unchecked_max] = ACTIONS(258),
    [anon_sym_drop] = ACTIONS(260),
    [anon_sym_dropw] = ACTIONS(258),
    [anon_sym_padw] = ACTIONS(258),
    [anon_sym_swapdw] = ACTIONS(258),
    [anon_sym_cswap] = ACTIONS(260),
    [anon_sym_cswapw] = ACTIONS(258),
    [anon_sym_cdrop] = ACTIONS(260),
    [anon_sym_cdropw] = ACTIONS(258),
    [anon_sym_sdepth] = ACTIONS(258),
    [anon_sym_mem_stream] = ACTIONS(258),
    [anon_sym_adv_pipe] = ACTIONS(258),
    [anon_sym_adv_loadw] = ACTIONS(258),
    [anon_sym_rphash] = ACTIONS(258),
    [anon_sym_rpperm] = ACTIONS(258),
    [anon_sym_mtree_get] = ACTIONS(258),
    [anon_sym_mtree_set] = ACTIONS(258),
    [anon_sym_mtree_cwm] = ACTIONS(258),
    [anon_sym_caller] = ACTIONS(258),
    [anon_sym_adv] = ACTIONS(260),
    [anon_sym_exp] = ACTIONS(258),
    [anon_sym_u32assert] = ACTIONS(260),
    [anon_sym_add] = ACTIONS(258),
    [anon_sym_sub] = ACTIONS(258),
    [anon_sym_mul] = ACTIONS(258),
    [anon_sym_eq] = ACTIONS(260),
    [anon_sym_neq] = ACTIONS(258),
    [anon_sym_u32checked_add] = ACTIONS(258),
    [anon_sym_u32wrapping_add] = ACTIONS(260),
    [anon_sym_u32overflowing_add] = ACTIONS(260),
    [anon_sym_u32checked_sub] = ACTIONS(258),
    [anon_sym_u32wrapping_sub] = ACTIONS(258),
    [anon_sym_u32overflowing_sub] = ACTIONS(258),
    [anon_sym_u32checked_mul] = ACTIONS(258),
    [anon_sym_u32wrapping_mul] = ACTIONS(258),
    [anon_sym_u32overflowing_mul] = ACTIONS(258),
    [anon_sym_u32checked_div] = ACTIONS(260),
    [anon_sym_u32unchecked_div] = ACTIONS(260),
    [anon_sym_u32checked_mod] = ACTIONS(258),
    [anon_sym_u32unchecked_mod] = ACTIONS(258),
    [anon_sym_u32checked_divmod] = ACTIONS(258),
    [anon_sym_u32unchecked_divmod] = ACTIONS(258),
    [anon_sym_u32checked_shr] = ACTIONS(258),
    [anon_sym_u32unchecked_shr] = ACTIONS(258),
    [anon_sym_u32checked_shl] = ACTIONS(258),
    [anon_sym_u32unchecked_shl] = ACTIONS(258),
    [anon_sym_u32checked_rotr] = ACTIONS(258),
    [anon_sym_u32unchecked_rotr] = ACTIONS(258),
    [anon_sym_u32checked_rotl] = ACTIONS(258),
    [anon_sym_u32unchecked_rotl] = ACTIONS(258),
    [anon_sym_u32checked_eq] = ACTIONS(258),
    [anon_sym_u32checked_neq] = ACTIONS(258),
    [anon_sym_mem_load] = ACTIONS(260),
    [anon_sym_mem_loadw] = ACTIONS(258),
    [anon_sym_mem_store] = ACTIONS(260),
    [anon_sym_mem_storew] = ACTIONS(258),
    [anon_sym_if] = ACTIONS(258),
    [anon_sym_while] = ACTIONS(258),
    [anon_sym_repeat] = ACTIONS(258),
    [sym__end] = ACTIONS(258),
  },
  [50] = {
    [anon_sym_exec] = ACTIONS(262),
    [anon_sym_call] = ACTIONS(264),
    [anon_sym_syscall] = ACTIONS(262),
    [anon_sym_assert] = ACTIONS(264),
    [anon_sym_assertz] = ACTIONS(262),
    [anon_sym_assert_eq] = ACTIONS(262),
    [anon_sym_neg] = ACTIONS(262),
    [anon_sym_inv] = ACTIONS(262),
    [anon_sym_pow2] = ACTIONS(262),
    [anon_sym_not] = ACTIONS(262),
    [anon_sym_and] = ACTIONS(262),
    [anon_sym_or] = ACTIONS(262),
    [anon_sym_xor] = ACTIONS(262),
    [anon_sym_lt] = ACTIONS(264),
    [anon_sym_lte] = ACTIONS(262),
    [anon_sym_gt] = ACTIONS(264),
    [anon_sym_gte] = ACTIONS(262),
    [anon_sym_eqw] = ACTIONS(262),
    [anon_sym_ext2add] = ACTIONS(262),
    [anon_sym_ext2sub] = ACTIONS(262),
    [anon_sym_ext2mul] = ACTIONS(262),
    [anon_sym_ext2div] = ACTIONS(262),
    [anon_sym_ext2neg] = ACTIONS(262),
    [anon_sym_ext2inv] = ACTIONS(262),
    [anon_sym_u32test] = ACTIONS(264),
    [anon_sym_u32testw] = ACTIONS(262),
    [anon_sym_u32assertw] = ACTIONS(262),
    [anon_sym_u32cast] = ACTIONS(262),
    [anon_sym_u32split] = ACTIONS(262),
    [anon_sym_u32overflowing_add3] = ACTIONS(262),
    [anon_sym_u32wrapping_add3] = ACTIONS(262),
    [anon_sym_u32overflowing_madd] = ACTIONS(262),
    [anon_sym_u32wrapping_madd] = ACTIONS(262),
    [anon_sym_u32checked_and] = ACTIONS(262),
    [anon_sym_u32checked_or] = ACTIONS(262),
    [anon_sym_u32checked_xor] = ACTIONS(262),
    [anon_sym_u32checked_not] = ACTIONS(262),
    [anon_sym_u32checked_popcnt] = ACTIONS(262),
    [anon_sym_u32unchecked_popcnt] = ACTIONS(262),
    [anon_sym_u32checked_lt] = ACTIONS(264),
    [anon_sym_u32unchecked_lt] = ACTIONS(264),
    [anon_sym_u32checked_lte] = ACTIONS(262),
    [anon_sym_u32unchecked_lte] = ACTIONS(262),
    [anon_sym_u32checked_gt] = ACTIONS(264),
    [anon_sym_u32unchecked_gt] = ACTIONS(264),
    [anon_sym_u32checked_gte] = ACTIONS(262),
    [anon_sym_u32unchecked_gte] = ACTIONS(262),
    [anon_sym_u32checked_min] = ACTIONS(262),
    [anon_sym_u32unchecked_min] = ACTIONS(262),
    [anon_sym_u32checked_max] = ACTIONS(262),
    [anon_sym_u32unchecked_max] = ACTIONS(262),
    [anon_sym_drop] = ACTIONS(264),
    [anon_sym_dropw] = ACTIONS(262),
    [anon_sym_padw] = ACTIONS(262),
    [anon_sym_swapdw] = ACTIONS(262),
    [anon_sym_cswap] = ACTIONS(264),
    [anon_sym_cswapw] = ACTIONS(262),
    [anon_sym_cdrop] = ACTIONS(264),
    [anon_sym_cdropw] = ACTIONS(262),
    [anon_sym_sdepth] = ACTIONS(262),
    [anon_sym_mem_stream] = ACTIONS(262),
    [anon_sym_adv_pipe] = ACTIONS(262),
    [anon_sym_adv_loadw] = ACTIONS(262),
    [anon_sym_rphash] = ACTIONS(262),
    [anon_sym_rpperm] = ACTIONS(262),
    [anon_sym_mtree_get] = ACTIONS(262),
    [anon_sym_mtree_set] = ACTIONS(262),
    [anon_sym_mtree_cwm] = ACTIONS(262),
    [anon_sym_caller] = ACTIONS(262),
    [anon_sym_adv] = ACTIONS(264),
    [anon_sym_exp] = ACTIONS(262),
    [anon_sym_u32assert] = ACTIONS(264),
    [anon_sym_add] = ACTIONS(262),
    [anon_sym_sub] = ACTIONS(262),
    [anon_sym_mul] = ACTIONS(262),
    [anon_sym_eq] = ACTIONS(264),
    [anon_sym_neq] = ACTIONS(262),
    [anon_sym_u32checked_add] = ACTIONS(262),
    [anon_sym_u32wrapping_add] = ACTIONS(264),
    [anon_sym_u32overflowing_add] = ACTIONS(264),
    [anon_sym_u32checked_sub] = ACTIONS(262),
    [anon_sym_u32wrapping_sub] = ACTIONS(262),
    [anon_sym_u32overflowing_sub] = ACTIONS(262),
    [anon_sym_u32checked_mul] = ACTIONS(262),
    [anon_sym_u32wrapping_mul] = ACTIONS(262),
    [anon_sym_u32overflowing_mul] = ACTIONS(262),
    [anon_sym_u32checked_div] = ACTIONS(264),
    [anon_sym_u32unchecked_div] = ACTIONS(264),
    [anon_sym_u32checked_mod] = ACTIONS(262),
    [anon_sym_u32unchecked_mod] = ACTIONS(262),
    [anon_sym_u32checked_divmod] = ACTIONS(262),
    [anon_sym_u32unchecked_divmod] = ACTIONS(262),
    [anon_sym_u32checked_shr] = ACTIONS(262),
    [anon_sym_u32unchecked_shr] = ACTIONS(262),
    [anon_sym_u32checked_shl] = ACTIONS(262),
    [anon_sym_u32unchecked_shl] = ACTIONS(262),
    [anon_sym_u32checked_rotr] = ACTIONS(262),
    [anon_sym_u32unchecked_rotr] = ACTIONS(262),
    [anon_sym_u32checked_rotl] = ACTIONS(262),
    [anon_sym_u32unchecked_rotl] = ACTIONS(262),
    [anon_sym_u32checked_eq] = ACTIONS(262),
    [anon_sym_u32checked_neq] = ACTIONS(262),
    [anon_sym_mem_load] = ACTIONS(264),
    [anon_sym_mem_loadw] = ACTIONS(262),
    [anon_sym_mem_store] = ACTIONS(264),
    [anon_sym_mem_storew] = ACTIONS(262),
    [anon_sym_if] = ACTIONS(262),
    [anon_sym_while] = ACTIONS(262),
    [anon_sym_repeat] = ACTIONS(262),
    [sym__end] = ACTIONS(262),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_use,
    ACTIONS(5), 1,
      anon_sym_proc,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      sym__begin,
    STATE(9), 1,
      sym__proc,
    STATE(10), 1,
      sym__export,
    STATE(86), 1,
      sym_main,
    STATE(56), 2,
      sym_use,
      aux_sym_source_file_repeat1,
    STATE(53), 3,
      sym_export,
      sym_proc,
      aux_sym_source_file_repeat2,
  [31] = 7,
    ACTIONS(5), 1,
      anon_sym_proc,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      sym__begin,
    STATE(9), 1,
      sym__proc,
    STATE(10), 1,
      sym__export,
    STATE(86), 1,
      sym_main,
    STATE(54), 3,
      sym_export,
      sym_proc,
      aux_sym_source_file_repeat2,
  [55] = 7,
    ACTIONS(5), 1,
      anon_sym_proc,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      sym__begin,
    STATE(9), 1,
      sym__proc,
    STATE(10), 1,
      sym__export,
    STATE(73), 1,
      sym_main,
    STATE(54), 3,
      sym_export,
      sym_proc,
      aux_sym_source_file_repeat2,
  [79] = 6,
    ACTIONS(266), 1,
      anon_sym_proc,
    ACTIONS(269), 1,
      anon_sym_export,
    ACTIONS(272), 1,
      sym__begin,
    STATE(9), 1,
      sym__proc,
    STATE(10), 1,
      sym__export,
    STATE(54), 3,
      sym_export,
      sym_proc,
      aux_sym_source_file_repeat2,
  [100] = 3,
    ACTIONS(276), 1,
      anon_sym_COLON_COLON,
    STATE(57), 1,
      aux_sym__path_repeat1,
    ACTIONS(274), 4,
      anon_sym_use,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [113] = 3,
    ACTIONS(278), 1,
      anon_sym_use,
    STATE(56), 2,
      sym_use,
      aux_sym_source_file_repeat1,
    ACTIONS(281), 3,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [126] = 3,
    ACTIONS(285), 1,
      anon_sym_COLON_COLON,
    STATE(57), 1,
      aux_sym__path_repeat1,
    ACTIONS(283), 4,
      anon_sym_use,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [139] = 2,
    ACTIONS(290), 1,
      anon_sym_mem,
    ACTIONS(288), 4,
      anon_sym_ext2inv,
      anon_sym_u64div,
      anon_sym_keyval,
      anon_sym_ext2intt,
  [149] = 1,
    ACTIONS(283), 5,
      anon_sym_use,
      anon_sym_COLON_COLON,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [157] = 1,
    ACTIONS(292), 4,
      anon_sym_use,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [164] = 1,
    ACTIONS(294), 3,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [170] = 1,
    ACTIONS(296), 3,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [176] = 1,
    ACTIONS(298), 3,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [182] = 1,
    ACTIONS(300), 3,
      anon_sym_proc,
      anon_sym_export,
      sym__begin,
  [188] = 2,
    ACTIONS(276), 1,
      anon_sym_COLON_COLON,
    STATE(55), 1,
      aux_sym__path_repeat1,
  [195] = 1,
    ACTIONS(302), 2,
      anon_sym_1,
      anon_sym_2,
  [200] = 2,
    ACTIONS(304), 1,
      sym__label,
    STATE(60), 1,
      sym__path,
  [207] = 1,
    ACTIONS(306), 1,
      anon_sym_DOT,
  [211] = 1,
    ACTIONS(308), 1,
      anon_sym_true,
  [215] = 1,
    ACTIONS(310), 1,
      sym__u16,
  [219] = 1,
    ACTIONS(312), 1,
      sym__u16,
  [223] = 1,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
  [227] = 1,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
  [231] = 1,
    ACTIONS(318), 1,
      sym__u16,
  [235] = 1,
    ACTIONS(320), 1,
      anon_sym_DOT,
  [239] = 1,
    ACTIONS(322), 1,
      anon_sym_DOT,
  [243] = 1,
    ACTIONS(324), 1,
      sym__u8,
  [247] = 1,
    ACTIONS(326), 1,
      anon_sym_true,
  [251] = 1,
    ACTIONS(328), 1,
      sym__u32,
  [255] = 1,
    ACTIONS(330), 1,
      sym__felt,
  [259] = 1,
    ACTIONS(332), 1,
      anon_sym_u,
  [263] = 1,
    ACTIONS(334), 1,
      sym__label,
  [267] = 1,
    ACTIONS(336), 1,
      sym__label,
  [271] = 1,
    ACTIONS(338), 1,
      sym__label,
  [275] = 1,
    ACTIONS(340), 1,
      sym__label,
  [279] = 1,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
  [283] = 1,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
  [287] = 1,
    ACTIONS(346), 1,
      anon_sym_DOT,
  [291] = 1,
    ACTIONS(348), 1,
      anon_sym_DOT,
  [295] = 1,
    ACTIONS(350), 1,
      anon_sym_DOT,
  [299] = 1,
    ACTIONS(352), 1,
      anon_sym_DOT,
  [303] = 1,
    ACTIONS(354), 1,
      sym__label,
  [307] = 1,
    ACTIONS(356), 1,
      sym__label,
  [311] = 1,
    ACTIONS(358), 1,
      sym__label,
  [315] = 1,
    ACTIONS(360), 1,
      sym__u32,
  [319] = 1,
    ACTIONS(362), 1,
      anon_sym_DOT,
  [323] = 1,
    ACTIONS(364), 1,
      anon_sym_DOT,
  [327] = 1,
    ACTIONS(366), 1,
      anon_sym_DOT,
  [331] = 1,
    ACTIONS(368), 1,
      sym__proc_name,
  [335] = 1,
    ACTIONS(370), 1,
      sym__proc_name,
  [339] = 1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
  [343] = 1,
    ACTIONS(374), 1,
      sym__u32,
  [347] = 1,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
  [351] = 1,
    ACTIONS(378), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(51)] = 0,
  [SMALL_STATE(52)] = 31,
  [SMALL_STATE(53)] = 55,
  [SMALL_STATE(54)] = 79,
  [SMALL_STATE(55)] = 100,
  [SMALL_STATE(56)] = 113,
  [SMALL_STATE(57)] = 126,
  [SMALL_STATE(58)] = 139,
  [SMALL_STATE(59)] = 149,
  [SMALL_STATE(60)] = 157,
  [SMALL_STATE(61)] = 164,
  [SMALL_STATE(62)] = 170,
  [SMALL_STATE(63)] = 176,
  [SMALL_STATE(64)] = 182,
  [SMALL_STATE(65)] = 188,
  [SMALL_STATE(66)] = 195,
  [SMALL_STATE(67)] = 200,
  [SMALL_STATE(68)] = 207,
  [SMALL_STATE(69)] = 211,
  [SMALL_STATE(70)] = 215,
  [SMALL_STATE(71)] = 219,
  [SMALL_STATE(72)] = 223,
  [SMALL_STATE(73)] = 227,
  [SMALL_STATE(74)] = 231,
  [SMALL_STATE(75)] = 235,
  [SMALL_STATE(76)] = 239,
  [SMALL_STATE(77)] = 243,
  [SMALL_STATE(78)] = 247,
  [SMALL_STATE(79)] = 251,
  [SMALL_STATE(80)] = 255,
  [SMALL_STATE(81)] = 259,
  [SMALL_STATE(82)] = 263,
  [SMALL_STATE(83)] = 267,
  [SMALL_STATE(84)] = 271,
  [SMALL_STATE(85)] = 275,
  [SMALL_STATE(86)] = 279,
  [SMALL_STATE(87)] = 283,
  [SMALL_STATE(88)] = 287,
  [SMALL_STATE(89)] = 291,
  [SMALL_STATE(90)] = 295,
  [SMALL_STATE(91)] = 299,
  [SMALL_STATE(92)] = 303,
  [SMALL_STATE(93)] = 307,
  [SMALL_STATE(94)] = 311,
  [SMALL_STATE(95)] = 315,
  [SMALL_STATE(96)] = 319,
  [SMALL_STATE(97)] = 323,
  [SMALL_STATE(98)] = 327,
  [SMALL_STATE(99)] = 331,
  [SMALL_STATE(100)] = 335,
  [SMALL_STATE(101)] = 339,
  [SMALL_STATE(102)] = 343,
  [SMALL_STATE(103)] = 347,
  [SMALL_STATE(104)] = 351,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(98),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(97),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(96),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(33),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(33),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(91),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(22),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(90),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(23),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(23),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(24),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(24),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(89),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(88),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(68),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syscall, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__felt_inst, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__felt_inst, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__u32_inst, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__u32_inst, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assert, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assert, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__felt_inst, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__felt_inst, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adv_mem, 6),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__adv_mem, 6),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else, 5),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall, 5),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syscall, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adv_inst, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__adv_inst, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__u32_inst, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__u32_inst, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proc, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__proc, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__export, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_else, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_else, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__while, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__while, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__repeat, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__proc, 5),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__proc, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export, 5),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__export, 5),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(75),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(104),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2), SHIFT_REPEAT(85),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [376] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
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
