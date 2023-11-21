#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_file_token1 = 1,
  anon_sym_EQ = 2,
  anon_sym_COLON = 3,
  anon_sym_DOT = 4,
  anon_sym_LBRACK = 5,
  aux_sym__index_token1 = 6,
  anon_sym_RBRACK = 7,
  anon_sym_DOLLAR_LBRACE = 8,
  anon_sym_RBRACE = 9,
  aux_sym_escape_token1 = 10,
  aux_sym_escape_token2 = 11,
  sym_comment = 12,
  anon_sym_BSLASH = 13,
  sym__space = 14,
  aux_sym__char_token1 = 15,
  sym_file = 16,
  sym_property = 17,
  sym_key = 18,
  sym__index = 19,
  sym_value = 20,
  sym_substitution = 21,
  sym__default = 22,
  sym_escape = 23,
  sym__linebreak = 24,
  sym__char = 25,
  aux_sym_file_repeat1 = 26,
  aux_sym_key_repeat1 = 27,
  aux_sym_value_repeat1 = 28,
  aux_sym_substitution_repeat1 = 29,
  aux_sym__default_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_file_token1] = "file_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [aux_sym__index_token1] = "index",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [aux_sym_escape_token1] = "escape_token1",
  [aux_sym_escape_token2] = "escape_token2",
  [sym_comment] = "comment",
  [anon_sym_BSLASH] = "\\",
  [sym__space] = "_space",
  [aux_sym__char_token1] = "_char_token1",
  [sym_file] = "file",
  [sym_property] = "property",
  [sym_key] = "key",
  [sym__index] = "_index",
  [sym_value] = "value",
  [sym_substitution] = "substitution",
  [sym__default] = "_default",
  [sym_escape] = "escape",
  [sym__linebreak] = "_linebreak",
  [sym__char] = "_char",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_key_repeat1] = "key_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_substitution_repeat1] = "substitution_repeat1",
  [aux_sym__default_repeat1] = "_default_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_file_token1] = aux_sym_file_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym__index_token1] = aux_sym__index_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_escape_token1] = aux_sym_escape_token1,
  [aux_sym_escape_token2] = aux_sym_escape_token2,
  [sym_comment] = sym_comment,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym__space] = sym__space,
  [aux_sym__char_token1] = aux_sym__char_token1,
  [sym_file] = sym_file,
  [sym_property] = sym_property,
  [sym_key] = sym_key,
  [sym__index] = sym__index,
  [sym_value] = sym_value,
  [sym_substitution] = sym_substitution,
  [sym__default] = sym__default,
  [sym_escape] = sym_escape,
  [sym__linebreak] = sym__linebreak,
  [sym__char] = sym__char,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_key_repeat1] = aux_sym_key_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_substitution_repeat1] = aux_sym_substitution_repeat1,
  [aux_sym__default_repeat1] = aux_sym__default_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__index_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym__index] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym__default] = {
    .visible = false,
    .named = true,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym__linebreak] = {
    .visible = false,
    .named = true,
  },
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_substitution_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_default = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default] = "default",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_default, 1},
  [1] =
    {field_default, 2, .inherited = true},
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
  [4] = 3,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 9,
  [21] = 10,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 25,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 24,
  [35] = 25,
  [36] = 32,
  [37] = 37,
  [38] = 31,
  [39] = 25,
  [40] = 31,
  [41] = 32,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 49,
  [51] = 45,
  [52] = 52,
  [53] = 45,
  [54] = 54,
  [55] = 55,
  [56] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if (lookahead == '\n') ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_escape_token2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__char_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '{') ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_file_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym__index_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_escape_token1] = ACTIONS(1),
    [aux_sym_escape_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [aux_sym__char_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(52),
    [sym_property] = STATE(55),
    [sym_key] = STATE(8),
    [sym__index] = STATE(9),
    [sym_escape] = STATE(9),
    [sym__char] = STATE(9),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym_key_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_file_token1] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_escape_token1] = ACTIONS(11),
    [aux_sym_escape_token2] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__space] = ACTIONS(17),
    [aux_sym__char_token1] = ACTIONS(19),
  },
  [2] = {
    [sym_property] = STATE(55),
    [sym_key] = STATE(8),
    [sym__index] = STATE(9),
    [sym_escape] = STATE(9),
    [sym__char] = STATE(9),
    [aux_sym_file_repeat1] = STATE(6),
    [aux_sym_key_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_file_token1] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_escape_token1] = ACTIONS(11),
    [aux_sym_escape_token2] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym__space] = ACTIONS(17),
    [aux_sym__char_token1] = ACTIONS(19),
  },
  [3] = {
    [sym_key] = STATE(7),
    [sym__index] = STATE(20),
    [sym_substitution] = STATE(7),
    [sym__default] = STATE(45),
    [sym_escape] = STATE(20),
    [sym__char] = STATE(20),
    [aux_sym_key_repeat1] = STATE(20),
    [aux_sym_substitution_repeat1] = STATE(7),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(33),
    [aux_sym_escape_token1] = ACTIONS(35),
    [aux_sym_escape_token2] = ACTIONS(37),
    [aux_sym__char_token1] = ACTIONS(39),
  },
  [4] = {
    [sym_key] = STATE(7),
    [sym__index] = STATE(20),
    [sym_substitution] = STATE(7),
    [sym__default] = STATE(53),
    [sym_escape] = STATE(20),
    [sym__char] = STATE(20),
    [aux_sym_key_repeat1] = STATE(20),
    [aux_sym_substitution_repeat1] = STATE(7),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(41),
    [aux_sym_escape_token1] = ACTIONS(35),
    [aux_sym_escape_token2] = ACTIONS(37),
    [aux_sym__char_token1] = ACTIONS(39),
  },
  [5] = {
    [sym_key] = STATE(7),
    [sym__index] = STATE(20),
    [sym_substitution] = STATE(7),
    [sym__default] = STATE(51),
    [sym_escape] = STATE(20),
    [sym__char] = STATE(20),
    [aux_sym_key_repeat1] = STATE(20),
    [aux_sym_substitution_repeat1] = STATE(7),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(43),
    [aux_sym_escape_token1] = ACTIONS(35),
    [aux_sym_escape_token2] = ACTIONS(37),
    [aux_sym__char_token1] = ACTIONS(39),
  },
  [6] = {
    [sym_property] = STATE(55),
    [sym_key] = STATE(8),
    [sym__index] = STATE(9),
    [sym_escape] = STATE(9),
    [sym__char] = STATE(9),
    [aux_sym_file_repeat1] = STATE(6),
    [aux_sym_key_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(45),
    [aux_sym_file_token1] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(53),
    [aux_sym_escape_token1] = ACTIONS(56),
    [aux_sym_escape_token2] = ACTIONS(59),
    [sym_comment] = ACTIONS(62),
    [sym__space] = ACTIONS(65),
    [aux_sym__char_token1] = ACTIONS(68),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      aux_sym_escape_token1,
    ACTIONS(85), 1,
      aux_sym_escape_token2,
    ACTIONS(88), 1,
      aux_sym__char_token1,
    ACTIONS(71), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    STATE(7), 3,
      sym_key,
      sym_substitution,
      aux_sym_substitution_repeat1,
    STATE(20), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [34] = 10,
    ACTIONS(91), 1,
      aux_sym_file_token1,
    ACTIONS(95), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(97), 1,
      aux_sym_escape_token1,
    ACTIONS(99), 1,
      aux_sym_escape_token2,
    ACTIONS(101), 1,
      anon_sym_BSLASH,
    ACTIONS(103), 1,
      sym__space,
    ACTIONS(105), 1,
      aux_sym__char_token1,
    STATE(47), 1,
      sym_value,
    ACTIONS(93), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(23), 5,
      sym_substitution,
      sym_escape,
      sym__linebreak,
      sym__char,
      aux_sym_value_repeat1,
  [70] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_escape_token1,
    ACTIONS(13), 1,
      aux_sym_escape_token2,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(113), 1,
      aux_sym__char_token1,
    STATE(10), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
    ACTIONS(107), 5,
      aux_sym_file_token1,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
  [102] = 8,
    ACTIONS(117), 1,
      anon_sym_DOT,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      aux_sym_escape_token1,
    ACTIONS(126), 1,
      aux_sym_escape_token2,
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      aux_sym__char_token1,
    STATE(10), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
    ACTIONS(115), 5,
      aux_sym_file_token1,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
  [134] = 10,
    ACTIONS(95), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(97), 1,
      aux_sym_escape_token1,
    ACTIONS(99), 1,
      aux_sym_escape_token2,
    ACTIONS(101), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      aux_sym__char_token1,
    ACTIONS(134), 1,
      aux_sym_file_token1,
    ACTIONS(138), 1,
      sym__space,
    STATE(48), 1,
      sym_value,
    ACTIONS(136), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(23), 5,
      sym_substitution,
      sym_escape,
      sym__linebreak,
      sym__char,
      aux_sym_value_repeat1,
  [170] = 10,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_escape_token1,
    ACTIONS(13), 1,
      aux_sym_escape_token2,
    ACTIONS(19), 1,
      aux_sym__char_token1,
    ACTIONS(140), 1,
      aux_sym_file_token1,
    ACTIONS(142), 1,
      sym_comment,
    STATE(8), 1,
      sym_key,
    STATE(46), 1,
      sym_property,
    STATE(9), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [204] = 9,
    ACTIONS(95), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(97), 1,
      aux_sym_escape_token1,
    ACTIONS(99), 1,
      aux_sym_escape_token2,
    ACTIONS(101), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      aux_sym__char_token1,
    ACTIONS(134), 1,
      aux_sym_file_token1,
    ACTIONS(138), 1,
      sym__space,
    STATE(48), 1,
      sym_value,
    STATE(23), 5,
      sym_substitution,
      sym_escape,
      sym__linebreak,
      sym__char,
      aux_sym_value_repeat1,
  [236] = 8,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(35), 1,
      aux_sym_escape_token1,
    ACTIONS(37), 1,
      aux_sym_escape_token2,
    ACTIONS(39), 1,
      aux_sym__char_token1,
    STATE(3), 3,
      sym_key,
      sym_substitution,
      aux_sym_substitution_repeat1,
    STATE(20), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [266] = 8,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(35), 1,
      aux_sym_escape_token1,
    ACTIONS(37), 1,
      aux_sym_escape_token2,
    ACTIONS(39), 1,
      aux_sym__char_token1,
    STATE(4), 3,
      sym_key,
      sym_substitution,
      aux_sym_substitution_repeat1,
    STATE(20), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [296] = 9,
    ACTIONS(95), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(97), 1,
      aux_sym_escape_token1,
    ACTIONS(99), 1,
      aux_sym_escape_token2,
    ACTIONS(101), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      aux_sym__char_token1,
    ACTIONS(144), 1,
      aux_sym_file_token1,
    ACTIONS(146), 1,
      sym__space,
    STATE(44), 1,
      sym_value,
    STATE(23), 5,
      sym_substitution,
      sym_escape,
      sym__linebreak,
      sym__char,
      aux_sym_value_repeat1,
  [328] = 8,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(35), 1,
      aux_sym_escape_token1,
    ACTIONS(37), 1,
      aux_sym_escape_token2,
    ACTIONS(39), 1,
      aux_sym__char_token1,
    STATE(5), 3,
      sym_key,
      sym_substitution,
      aux_sym_substitution_repeat1,
    STATE(20), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [358] = 8,
    ACTIONS(95), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(97), 1,
      aux_sym_escape_token1,
    ACTIONS(99), 1,
      aux_sym_escape_token2,
    ACTIONS(101), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      aux_sym__char_token1,
    ACTIONS(148), 1,
      aux_sym_file_token1,
    STATE(43), 1,
      sym_value,
    STATE(23), 5,
      sym_substitution,
      sym_escape,
      sym__linebreak,
      sym__char,
      aux_sym_value_repeat1,
  [387] = 8,
    ACTIONS(95), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(97), 1,
      aux_sym_escape_token1,
    ACTIONS(99), 1,
      aux_sym_escape_token2,
    ACTIONS(101), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      aux_sym__char_token1,
    ACTIONS(144), 1,
      aux_sym_file_token1,
    STATE(44), 1,
      sym_value,
    STATE(23), 5,
      sym_substitution,
      sym_escape,
      sym__linebreak,
      sym__char,
      aux_sym_value_repeat1,
  [416] = 7,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      aux_sym_escape_token1,
    ACTIONS(37), 1,
      aux_sym_escape_token2,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(152), 1,
      aux_sym__char_token1,
    ACTIONS(107), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
    STATE(21), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [443] = 7,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      aux_sym_escape_token1,
    ACTIONS(163), 1,
      aux_sym_escape_token2,
    ACTIONS(166), 1,
      aux_sym__char_token1,
    ACTIONS(115), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
    STATE(21), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [470] = 7,
    ACTIONS(169), 1,
      aux_sym_file_token1,
    ACTIONS(171), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(174), 1,
      aux_sym_escape_token1,
    ACTIONS(177), 1,
      aux_sym_escape_token2,
    ACTIONS(180), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      aux_sym__char_token1,
    STATE(22), 5,
      sym_substitution,
      sym_escape,
      sym__linebreak,
      sym__char,
      aux_sym_value_repeat1,
  [496] = 7,
    ACTIONS(95), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(97), 1,
      aux_sym_escape_token1,
    ACTIONS(99), 1,
      aux_sym_escape_token2,
    ACTIONS(101), 1,
      anon_sym_BSLASH,
    ACTIONS(186), 1,
      aux_sym_file_token1,
    ACTIONS(188), 1,
      aux_sym__char_token1,
    STATE(22), 5,
      sym_substitution,
      sym_escape,
      sym__linebreak,
      sym__char,
      aux_sym_value_repeat1,
  [522] = 2,
    ACTIONS(192), 3,
      aux_sym_escape_token1,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(190), 8,
      aux_sym_file_token1,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
      sym__space,
  [538] = 2,
    ACTIONS(196), 3,
      aux_sym_escape_token1,
      anon_sym_BSLASH,
      aux_sym__char_token1,
    ACTIONS(194), 8,
      aux_sym_file_token1,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
      sym__space,
  [554] = 6,
    ACTIONS(198), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      aux_sym_escape_token1,
    ACTIONS(204), 1,
      aux_sym_escape_token2,
    ACTIONS(206), 1,
      aux_sym__char_token1,
    STATE(29), 4,
      sym_substitution,
      sym_escape,
      sym__char,
      aux_sym__default_repeat1,
  [576] = 2,
    ACTIONS(210), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      anon_sym_DOT,
      anon_sym_LBRACK,
      aux_sym_escape_token2,
      sym_comment,
      sym__space,
  [590] = 2,
    ACTIONS(212), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      anon_sym_DOT,
      anon_sym_LBRACK,
      aux_sym_escape_token2,
      sym_comment,
      sym__space,
  [604] = 6,
    ACTIONS(214), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      aux_sym_escape_token1,
    ACTIONS(222), 1,
      aux_sym_escape_token2,
    ACTIONS(225), 1,
      aux_sym__char_token1,
    STATE(29), 4,
      sym_substitution,
      sym_escape,
      sym__char,
      aux_sym__default_repeat1,
  [626] = 2,
    ACTIONS(196), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(194), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [639] = 2,
    ACTIONS(230), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(228), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [652] = 2,
    ACTIONS(234), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(232), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [665] = 5,
    ACTIONS(198), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(202), 1,
      aux_sym_escape_token1,
    ACTIONS(204), 1,
      aux_sym_escape_token2,
    ACTIONS(236), 1,
      aux_sym__char_token1,
    STATE(26), 4,
      sym_substitution,
      sym_escape,
      sym__char,
      aux_sym__default_repeat1,
  [684] = 2,
    ACTIONS(192), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(190), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [697] = 2,
    ACTIONS(194), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
    ACTIONS(196), 3,
      aux_sym_escape_token1,
      anon_sym_BSLASH,
      aux_sym__char_token1,
  [708] = 2,
    ACTIONS(232), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
    ACTIONS(234), 3,
      aux_sym_escape_token1,
      anon_sym_BSLASH,
      aux_sym__char_token1,
  [719] = 2,
    ACTIONS(238), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
    ACTIONS(240), 3,
      aux_sym_escape_token1,
      anon_sym_BSLASH,
      aux_sym__char_token1,
  [730] = 2,
    ACTIONS(228), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
    ACTIONS(230), 3,
      aux_sym_escape_token1,
      anon_sym_BSLASH,
      aux_sym__char_token1,
  [741] = 2,
    ACTIONS(196), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(194), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [751] = 2,
    ACTIONS(230), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(228), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [761] = 2,
    ACTIONS(234), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(232), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [771] = 1,
    ACTIONS(242), 1,
      aux_sym_file_token1,
  [775] = 1,
    ACTIONS(244), 1,
      aux_sym_file_token1,
  [779] = 1,
    ACTIONS(148), 1,
      aux_sym_file_token1,
  [783] = 1,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
  [787] = 1,
    ACTIONS(248), 1,
      aux_sym_file_token1,
  [791] = 1,
    ACTIONS(134), 1,
      aux_sym_file_token1,
  [795] = 1,
    ACTIONS(144), 1,
      aux_sym_file_token1,
  [799] = 1,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
  [803] = 1,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
  [807] = 1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
  [811] = 1,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
  [815] = 1,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
  [819] = 1,
    ACTIONS(260), 1,
      aux_sym__index_token1,
  [823] = 1,
    ACTIONS(140), 1,
      aux_sym_file_token1,
  [827] = 1,
    ACTIONS(262), 1,
      aux_sym__index_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 34,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 134,
  [SMALL_STATE(12)] = 170,
  [SMALL_STATE(13)] = 204,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 266,
  [SMALL_STATE(16)] = 296,
  [SMALL_STATE(17)] = 328,
  [SMALL_STATE(18)] = 358,
  [SMALL_STATE(19)] = 387,
  [SMALL_STATE(20)] = 416,
  [SMALL_STATE(21)] = 443,
  [SMALL_STATE(22)] = 470,
  [SMALL_STATE(23)] = 496,
  [SMALL_STATE(24)] = 522,
  [SMALL_STATE(25)] = 538,
  [SMALL_STATE(26)] = 554,
  [SMALL_STATE(27)] = 576,
  [SMALL_STATE(28)] = 590,
  [SMALL_STATE(29)] = 604,
  [SMALL_STATE(30)] = 626,
  [SMALL_STATE(31)] = 639,
  [SMALL_STATE(32)] = 652,
  [SMALL_STATE(33)] = 665,
  [SMALL_STATE(34)] = 684,
  [SMALL_STATE(35)] = 697,
  [SMALL_STATE(36)] = 708,
  [SMALL_STATE(37)] = 719,
  [SMALL_STATE(38)] = 730,
  [SMALL_STATE(39)] = 741,
  [SMALL_STATE(40)] = 751,
  [SMALL_STATE(41)] = 761,
  [SMALL_STATE(42)] = 771,
  [SMALL_STATE(43)] = 775,
  [SMALL_STATE(44)] = 779,
  [SMALL_STATE(45)] = 783,
  [SMALL_STATE(46)] = 787,
  [SMALL_STATE(47)] = 791,
  [SMALL_STATE(48)] = 795,
  [SMALL_STATE(49)] = 799,
  [SMALL_STATE(50)] = 803,
  [SMALL_STATE(51)] = 807,
  [SMALL_STATE(52)] = 811,
  [SMALL_STATE(53)] = 815,
  [SMALL_STATE(54)] = 819,
  [SMALL_STATE(55)] = 823,
  [SMALL_STATE(56)] = 827,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(56),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(25),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(25),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(55),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(12),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_substitution_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(20),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(54),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(17),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(30),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(30),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(20),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(10),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(56),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(25),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(25),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(10),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(21),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(54),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(30),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(30),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(21),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(14),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(35),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(35),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(42),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(22),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__index, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default, 2, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_repeat1, 2), SHIFT_REPEAT(15),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__default_repeat1, 2), SHIFT_REPEAT(39),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_repeat1, 2), SHIFT_REPEAT(39),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__default_repeat1, 2), SHIFT_REPEAT(29),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 4, .production_id = 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 4, .production_id = 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__linebreak, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__linebreak, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [256] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_properties(void) {
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
