#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 1
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_COLON = 2,
  anon_sym_DOT = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_DOLLAR_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_BSLASH = 8,
  aux_sym_escape_token1 = 9,
  aux_sym_escape_token2 = 10,
  sym_comment = 11,
  sym__space = 12,
  aux_sym__char_token1 = 13,
  sym__eol = 14,
  sym__eof = 15,
  sym_file = 16,
  sym_property = 17,
  sym_key = 18,
  sym__index = 19,
  sym_value = 20,
  sym_substitution = 21,
  sym__default = 22,
  sym__linebreak = 23,
  sym_escape = 24,
  sym__char = 25,
  aux_sym_file_repeat1 = 26,
  aux_sym_key_repeat1 = 27,
  aux_sym__index_repeat1 = 28,
  aux_sym_value_repeat1 = 29,
  aux_sym_substitution_repeat1 = 30,
  aux_sym__default_repeat1 = 31,
  alias_sym_index = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_token1] = "escape_token1",
  [aux_sym_escape_token2] = "escape_token2",
  [sym_comment] = "comment",
  [sym__space] = "_space",
  [aux_sym__char_token1] = "_char_token1",
  [sym__eol] = "_eol",
  [sym__eof] = "_eof",
  [sym_file] = "file",
  [sym_property] = "property",
  [sym_key] = "key",
  [sym__index] = "_index",
  [sym_value] = "value",
  [sym_substitution] = "substitution",
  [sym__default] = "_default",
  [sym__linebreak] = "_linebreak",
  [sym_escape] = "escape",
  [sym__char] = "_char",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_key_repeat1] = "key_repeat1",
  [aux_sym__index_repeat1] = "_index_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_substitution_repeat1] = "substitution_repeat1",
  [aux_sym__default_repeat1] = "_default_repeat1",
  [alias_sym_index] = "index",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_token1] = aux_sym_escape_token1,
  [aux_sym_escape_token2] = aux_sym_escape_token2,
  [sym_comment] = sym_comment,
  [sym__space] = sym__space,
  [aux_sym__char_token1] = aux_sym__char_token1,
  [sym__eol] = sym__eol,
  [sym__eof] = sym__eof,
  [sym_file] = sym_file,
  [sym_property] = sym_property,
  [sym_key] = sym_key,
  [sym__index] = sym__index,
  [sym_value] = sym_value,
  [sym_substitution] = sym_substitution,
  [sym__default] = sym__default,
  [sym__linebreak] = sym__linebreak,
  [sym_escape] = sym_escape,
  [sym__char] = sym__char,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_key_repeat1] = aux_sym_key_repeat1,
  [aux_sym__index_repeat1] = aux_sym__index_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_substitution_repeat1] = aux_sym_substitution_repeat1,
  [aux_sym__default_repeat1] = aux_sym__default_repeat1,
  [alias_sym_index] = alias_sym_index,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_BSLASH] = {
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
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
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
  [sym__linebreak] = {
    .visible = false,
    .named = true,
  },
  [sym_escape] = {
    .visible = true,
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
  [aux_sym__index_repeat1] = {
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
  [alias_sym_index] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_default = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default] = "default",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_default, 1},
  [1] =
    {field_default, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_index,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__index_repeat1, 2,
    aux_sym__index_repeat1,
    alias_sym_index,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 15,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 9,
  [26] = 8,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 21,
  [32] = 32,
  [33] = 33,
  [34] = 24,
  [35] = 35,
  [36] = 22,
  [37] = 37,
  [38] = 33,
  [39] = 32,
  [40] = 21,
  [41] = 32,
  [42] = 33,
  [43] = 21,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 45,
  [48] = 44,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 56,
  [60] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(28);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '#') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_escape_token2);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__char_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '\n') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__char_token1);
      if (lookahead == '{') ADVANCE(22);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 15, .external_lex_state = 1},
  [2] = {.lex_state = 15, .external_lex_state = 1},
  [3] = {.lex_state = 15, .external_lex_state = 1},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 2, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 2, .external_lex_state = 1},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 5, .external_lex_state = 1},
  [13] = {.lex_state = 3, .external_lex_state = 1},
  [14] = {.lex_state = 3, .external_lex_state = 1},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 4, .external_lex_state = 1},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 4, .external_lex_state = 1},
  [20] = {.lex_state = 4, .external_lex_state = 1},
  [21] = {.lex_state = 1, .external_lex_state = 1},
  [22] = {.lex_state = 1, .external_lex_state = 1},
  [23] = {.lex_state = 4, .external_lex_state = 1},
  [24] = {.lex_state = 1, .external_lex_state = 1},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 15, .external_lex_state = 1},
  [28] = {.lex_state = 15, .external_lex_state = 1},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 4, .external_lex_state = 1},
  [38] = {.lex_state = 4, .external_lex_state = 1},
  [39] = {.lex_state = 4, .external_lex_state = 1},
  [40] = {.lex_state = 4, .external_lex_state = 1},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 6, .external_lex_state = 1},
  [50] = {.lex_state = 6, .external_lex_state = 1},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 6, .external_lex_state = 1},
  [53] = {.lex_state = 6, .external_lex_state = 1},
  [54] = {.lex_state = 6, .external_lex_state = 1},
  [55] = {.lex_state = 6, .external_lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_escape_token1] = ACTIONS(1),
    [aux_sym_escape_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [aux_sym__char_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(58),
    [sym_property] = STATE(55),
    [sym_key] = STATE(7),
    [sym__index] = STATE(8),
    [sym_escape] = STATE(8),
    [sym__char] = STATE(8),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym_key_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_escape_token1] = ACTIONS(9),
    [aux_sym_escape_token2] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__space] = ACTIONS(15),
    [aux_sym__char_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__eof] = ACTIONS(21),
  },
  [2] = {
    [sym_property] = STATE(55),
    [sym_key] = STATE(7),
    [sym__index] = STATE(8),
    [sym_escape] = STATE(8),
    [sym__char] = STATE(8),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym_key_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_escape_token1] = ACTIONS(9),
    [aux_sym_escape_token2] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__space] = ACTIONS(15),
    [aux_sym__char_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(25),
    [sym__eof] = ACTIONS(27),
  },
  [3] = {
    [sym_property] = STATE(55),
    [sym_key] = STATE(7),
    [sym__index] = STATE(8),
    [sym_escape] = STATE(8),
    [sym__char] = STATE(8),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym_key_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(34),
    [aux_sym_escape_token1] = ACTIONS(37),
    [aux_sym_escape_token2] = ACTIONS(40),
    [sym_comment] = ACTIONS(43),
    [sym__space] = ACTIONS(46),
    [aux_sym__char_token1] = ACTIONS(49),
    [sym__eol] = ACTIONS(52),
    [sym__eof] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(58), 1,
      anon_sym_COLON,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      aux_sym_escape_token1,
    ACTIONS(70), 1,
      aux_sym_escape_token2,
    ACTIONS(72), 1,
      aux_sym__char_token1,
    STATE(56), 1,
      sym__default,
    STATE(11), 3,
      sym_key,
      sym_substitution,
      aux_sym_substitution_repeat1,
    STATE(26), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [39] = 11,
    ACTIONS(58), 1,
      anon_sym_COLON,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(68), 1,
      aux_sym_escape_token1,
    ACTIONS(70), 1,
      aux_sym_escape_token2,
    ACTIONS(72), 1,
      aux_sym__char_token1,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym__default,
    STATE(11), 3,
      sym_key,
      sym_substitution,
      aux_sym_substitution_repeat1,
    STATE(26), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [78] = 11,
    ACTIONS(58), 1,
      anon_sym_COLON,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(68), 1,
      aux_sym_escape_token1,
    ACTIONS(70), 1,
      aux_sym_escape_token2,
    ACTIONS(72), 1,
      aux_sym__char_token1,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym__default,
    STATE(11), 3,
      sym_key,
      sym_substitution,
      aux_sym_substitution_repeat1,
    STATE(26), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [117] = 11,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      aux_sym_escape_token1,
    ACTIONS(86), 1,
      aux_sym_escape_token2,
    ACTIONS(88), 1,
      sym__space,
    ACTIONS(90), 1,
      aux_sym__char_token1,
    ACTIONS(92), 1,
      sym__eol,
    ACTIONS(94), 1,
      sym__eof,
    STATE(54), 1,
      sym_value,
    ACTIONS(78), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(23), 5,
      sym_substitution,
      sym__linebreak,
      sym_escape,
      sym__char,
      aux_sym_value_repeat1,
  [156] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      aux_sym_escape_token1,
    ACTIONS(11), 1,
      aux_sym_escape_token2,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(102), 1,
      aux_sym__char_token1,
    ACTIONS(100), 2,
      anon_sym_BSLASH,
      sym__eol,
    STATE(9), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
    ACTIONS(96), 5,
      sym__eof,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
  [189] = 8,
    ACTIONS(106), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      aux_sym_escape_token1,
    ACTIONS(117), 1,
      aux_sym_escape_token2,
    ACTIONS(120), 1,
      aux_sym__char_token1,
    ACTIONS(112), 2,
      anon_sym_BSLASH,
      sym__eol,
    STATE(9), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
    ACTIONS(104), 5,
      sym__eof,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_LBRACE,
      sym__space,
  [222] = 11,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      aux_sym_escape_token1,
    ACTIONS(86), 1,
      aux_sym_escape_token2,
    ACTIONS(90), 1,
      aux_sym__char_token1,
    ACTIONS(125), 1,
      sym__space,
    ACTIONS(127), 1,
      sym__eol,
    ACTIONS(129), 1,
      sym__eof,
    STATE(53), 1,
      sym_value,
    ACTIONS(123), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(23), 5,
      sym_substitution,
      sym__linebreak,
      sym_escape,
      sym__char,
      aux_sym_value_repeat1,
  [261] = 9,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(142), 1,
      aux_sym_escape_token1,
    ACTIONS(145), 1,
      aux_sym_escape_token2,
    ACTIONS(148), 1,
      aux_sym__char_token1,
    ACTIONS(131), 2,
      anon_sym_COLON,
      anon_sym_RBRACE,
    STATE(11), 3,
      sym_key,
      sym_substitution,
      aux_sym_substitution_repeat1,
    STATE(26), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [295] = 11,
    ACTIONS(5), 1,
      anon_sym_DOT,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      aux_sym_escape_token1,
    ACTIONS(11), 1,
      aux_sym_escape_token2,
    ACTIONS(17), 1,
      aux_sym__char_token1,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym__eol,
    ACTIONS(155), 1,
      sym__eof,
    STATE(7), 1,
      sym_key,
    STATE(49), 1,
      sym_property,
    STATE(8), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [332] = 10,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      aux_sym_escape_token1,
    ACTIONS(86), 1,
      aux_sym_escape_token2,
    ACTIONS(90), 1,
      aux_sym__char_token1,
    ACTIONS(125), 1,
      sym__space,
    ACTIONS(127), 1,
      sym__eol,
    ACTIONS(129), 1,
      sym__eof,
    STATE(53), 1,
      sym_value,
    STATE(23), 5,
      sym_substitution,
      sym__linebreak,
      sym_escape,
      sym__char,
      aux_sym_value_repeat1,
  [367] = 10,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      aux_sym_escape_token1,
    ACTIONS(86), 1,
      aux_sym_escape_token2,
    ACTIONS(90), 1,
      aux_sym__char_token1,
    ACTIONS(157), 1,
      sym__space,
    ACTIONS(159), 1,
      sym__eol,
    ACTIONS(161), 1,
      sym__eof,
    STATE(52), 1,
      sym_value,
    STATE(23), 5,
      sym_substitution,
      sym__linebreak,
      sym_escape,
      sym__char,
      aux_sym_value_repeat1,
  [402] = 8,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(68), 1,
      aux_sym_escape_token1,
    ACTIONS(70), 1,
      aux_sym_escape_token2,
    ACTIONS(72), 1,
      aux_sym__char_token1,
    STATE(5), 3,
      sym_key,
      sym_substitution,
      aux_sym_substitution_repeat1,
    STATE(26), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [432] = 8,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(68), 1,
      aux_sym_escape_token1,
    ACTIONS(70), 1,
      aux_sym_escape_token2,
    ACTIONS(72), 1,
      aux_sym__char_token1,
    STATE(6), 3,
      sym_key,
      sym_substitution,
      aux_sym_substitution_repeat1,
    STATE(26), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [462] = 9,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      aux_sym_escape_token1,
    ACTIONS(86), 1,
      aux_sym_escape_token2,
    ACTIONS(90), 1,
      aux_sym__char_token1,
    ACTIONS(163), 1,
      sym__eol,
    ACTIONS(165), 1,
      sym__eof,
    STATE(50), 1,
      sym_value,
    STATE(23), 5,
      sym_substitution,
      sym__linebreak,
      sym_escape,
      sym__char,
      aux_sym_value_repeat1,
  [494] = 8,
    ACTIONS(60), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(68), 1,
      aux_sym_escape_token1,
    ACTIONS(70), 1,
      aux_sym_escape_token2,
    ACTIONS(72), 1,
      aux_sym__char_token1,
    STATE(4), 3,
      sym_key,
      sym_substitution,
      aux_sym_substitution_repeat1,
    STATE(26), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [524] = 9,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      aux_sym_escape_token1,
    ACTIONS(86), 1,
      aux_sym_escape_token2,
    ACTIONS(90), 1,
      aux_sym__char_token1,
    ACTIONS(159), 1,
      sym__eol,
    ACTIONS(161), 1,
      sym__eof,
    STATE(52), 1,
      sym_value,
    STATE(23), 5,
      sym_substitution,
      sym__linebreak,
      sym_escape,
      sym__char,
      aux_sym_value_repeat1,
  [556] = 8,
    ACTIONS(167), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(170), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      aux_sym_escape_token1,
    ACTIONS(176), 1,
      aux_sym_escape_token2,
    ACTIONS(179), 1,
      aux_sym__char_token1,
    ACTIONS(182), 1,
      sym__eol,
    ACTIONS(184), 1,
      sym__eof,
    STATE(20), 5,
      sym_substitution,
      sym__linebreak,
      sym_escape,
      sym__char,
      aux_sym_value_repeat1,
  [585] = 2,
    ACTIONS(188), 4,
      anon_sym_BSLASH,
      aux_sym_escape_token1,
      aux_sym__char_token1,
      sym__eol,
    ACTIONS(186), 8,
      sym__eof,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
      sym__space,
  [602] = 2,
    ACTIONS(192), 4,
      anon_sym_BSLASH,
      aux_sym_escape_token1,
      aux_sym__char_token1,
      sym__eol,
    ACTIONS(190), 8,
      sym__eof,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
      sym__space,
  [619] = 8,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      aux_sym_escape_token1,
    ACTIONS(86), 1,
      aux_sym_escape_token2,
    ACTIONS(194), 1,
      aux_sym__char_token1,
    ACTIONS(196), 1,
      sym__eol,
    ACTIONS(198), 1,
      sym__eof,
    STATE(20), 5,
      sym_substitution,
      sym__linebreak,
      sym_escape,
      sym__char,
      aux_sym_value_repeat1,
  [648] = 2,
    ACTIONS(202), 4,
      anon_sym_BSLASH,
      aux_sym_escape_token1,
      aux_sym__char_token1,
      sym__eol,
    ACTIONS(200), 8,
      sym__eof,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
      sym__space,
  [665] = 7,
    ACTIONS(204), 1,
      anon_sym_DOT,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      aux_sym_escape_token1,
    ACTIONS(213), 1,
      aux_sym_escape_token2,
    ACTIONS(216), 1,
      aux_sym__char_token1,
    ACTIONS(104), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
    STATE(25), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [692] = 7,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      aux_sym_escape_token1,
    ACTIONS(70), 1,
      aux_sym_escape_token2,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(221), 1,
      aux_sym__char_token1,
    ACTIONS(96), 3,
      anon_sym_COLON,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
    STATE(25), 4,
      sym__index,
      sym_escape,
      sym__char,
      aux_sym_key_repeat1,
  [719] = 2,
    ACTIONS(223), 3,
      aux_sym_escape_token1,
      aux_sym__char_token1,
      sym__eol,
    ACTIONS(29), 7,
      sym__eof,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACK,
      aux_sym_escape_token2,
      sym_comment,
      sym__space,
  [734] = 2,
    ACTIONS(227), 3,
      aux_sym_escape_token1,
      aux_sym__char_token1,
      sym__eol,
    ACTIONS(225), 7,
      sym__eof,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LBRACK,
      aux_sym_escape_token2,
      sym_comment,
      sym__space,
  [749] = 6,
    ACTIONS(229), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(234), 1,
      aux_sym_escape_token1,
    ACTIONS(237), 1,
      aux_sym_escape_token2,
    ACTIONS(240), 1,
      aux_sym__char_token1,
    STATE(29), 4,
      sym_substitution,
      sym_escape,
      sym__char,
      aux_sym__default_repeat1,
  [771] = 6,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      aux_sym_escape_token1,
    ACTIONS(249), 1,
      aux_sym_escape_token2,
    ACTIONS(251), 1,
      aux_sym__char_token1,
    STATE(29), 4,
      sym_substitution,
      sym_escape,
      sym__char,
      aux_sym__default_repeat1,
  [793] = 2,
    ACTIONS(188), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(186), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [806] = 2,
    ACTIONS(255), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(253), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [819] = 2,
    ACTIONS(259), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(257), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [832] = 2,
    ACTIONS(202), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(200), 6,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [845] = 5,
    ACTIONS(243), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(247), 1,
      aux_sym_escape_token1,
    ACTIONS(249), 1,
      aux_sym_escape_token2,
    ACTIONS(261), 1,
      aux_sym__char_token1,
    STATE(30), 4,
      sym_substitution,
      sym_escape,
      sym__char,
      aux_sym__default_repeat1,
  [864] = 2,
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
  [877] = 2,
    ACTIONS(263), 3,
      sym__eof,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
    ACTIONS(265), 4,
      anon_sym_BSLASH,
      aux_sym_escape_token1,
      aux_sym__char_token1,
      sym__eol,
  [889] = 2,
    ACTIONS(257), 3,
      sym__eof,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
    ACTIONS(259), 4,
      anon_sym_BSLASH,
      aux_sym_escape_token1,
      aux_sym__char_token1,
      sym__eol,
  [901] = 2,
    ACTIONS(253), 3,
      sym__eof,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
    ACTIONS(255), 4,
      anon_sym_BSLASH,
      aux_sym_escape_token1,
      aux_sym__char_token1,
      sym__eol,
  [913] = 2,
    ACTIONS(186), 3,
      sym__eof,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_escape_token2,
    ACTIONS(188), 4,
      anon_sym_BSLASH,
      aux_sym_escape_token1,
      aux_sym__char_token1,
      sym__eol,
  [925] = 2,
    ACTIONS(255), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(253), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [935] = 2,
    ACTIONS(259), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(257), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [945] = 2,
    ACTIONS(188), 2,
      aux_sym_escape_token1,
      aux_sym__char_token1,
    ACTIONS(186), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      aux_sym_escape_token2,
  [955] = 4,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    ACTIONS(269), 1,
      aux_sym__char_token1,
    STATE(46), 1,
      aux_sym__index_repeat1,
    STATE(51), 1,
      sym__char,
  [968] = 4,
    ACTIONS(269), 1,
      aux_sym__char_token1,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym__index_repeat1,
    STATE(51), 1,
      sym__char,
  [981] = 4,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    ACTIONS(275), 1,
      aux_sym__char_token1,
    STATE(46), 1,
      aux_sym__index_repeat1,
    STATE(51), 1,
      sym__char,
  [994] = 4,
    ACTIONS(269), 1,
      aux_sym__char_token1,
    ACTIONS(278), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym__index_repeat1,
    STATE(51), 1,
      sym__char,
  [1007] = 4,
    ACTIONS(269), 1,
      aux_sym__char_token1,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym__index_repeat1,
    STATE(51), 1,
      sym__char,
  [1020] = 1,
    ACTIONS(282), 2,
      sym__eof,
      sym__eol,
  [1025] = 1,
    ACTIONS(284), 2,
      sym__eof,
      sym__eol,
  [1030] = 2,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    ACTIONS(288), 1,
      aux_sym__char_token1,
  [1037] = 1,
    ACTIONS(165), 2,
      sym__eof,
      sym__eol,
  [1042] = 1,
    ACTIONS(161), 2,
      sym__eof,
      sym__eol,
  [1047] = 1,
    ACTIONS(129), 2,
      sym__eof,
      sym__eol,
  [1052] = 1,
    ACTIONS(155), 2,
      sym__eof,
      sym__eol,
  [1057] = 1,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
  [1061] = 1,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
  [1065] = 1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
  [1069] = 1,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
  [1073] = 1,
    ACTIONS(298), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 261,
  [SMALL_STATE(12)] = 295,
  [SMALL_STATE(13)] = 332,
  [SMALL_STATE(14)] = 367,
  [SMALL_STATE(15)] = 402,
  [SMALL_STATE(16)] = 432,
  [SMALL_STATE(17)] = 462,
  [SMALL_STATE(18)] = 494,
  [SMALL_STATE(19)] = 524,
  [SMALL_STATE(20)] = 556,
  [SMALL_STATE(21)] = 585,
  [SMALL_STATE(22)] = 602,
  [SMALL_STATE(23)] = 619,
  [SMALL_STATE(24)] = 648,
  [SMALL_STATE(25)] = 665,
  [SMALL_STATE(26)] = 692,
  [SMALL_STATE(27)] = 719,
  [SMALL_STATE(28)] = 734,
  [SMALL_STATE(29)] = 749,
  [SMALL_STATE(30)] = 771,
  [SMALL_STATE(31)] = 793,
  [SMALL_STATE(32)] = 806,
  [SMALL_STATE(33)] = 819,
  [SMALL_STATE(34)] = 832,
  [SMALL_STATE(35)] = 845,
  [SMALL_STATE(36)] = 864,
  [SMALL_STATE(37)] = 877,
  [SMALL_STATE(38)] = 889,
  [SMALL_STATE(39)] = 901,
  [SMALL_STATE(40)] = 913,
  [SMALL_STATE(41)] = 925,
  [SMALL_STATE(42)] = 935,
  [SMALL_STATE(43)] = 945,
  [SMALL_STATE(44)] = 955,
  [SMALL_STATE(45)] = 968,
  [SMALL_STATE(46)] = 981,
  [SMALL_STATE(47)] = 994,
  [SMALL_STATE(48)] = 1007,
  [SMALL_STATE(49)] = 1020,
  [SMALL_STATE(50)] = 1025,
  [SMALL_STATE(51)] = 1030,
  [SMALL_STATE(52)] = 1037,
  [SMALL_STATE(53)] = 1042,
  [SMALL_STATE(54)] = 1047,
  [SMALL_STATE(55)] = 1052,
  [SMALL_STATE(56)] = 1057,
  [SMALL_STATE(57)] = 1061,
  [SMALL_STATE(58)] = 1065,
  [SMALL_STATE(59)] = 1069,
  [SMALL_STATE(60)] = 1073,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(45),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(21),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(21),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(55),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(12),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(9),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(45),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(21),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(21),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(9),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_substitution_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(26),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(47),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(16),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(31),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(31),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_substitution_repeat1, 2), SHIFT_REPEAT(26),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(18),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(60),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(40),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(40),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(20),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__index, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index, 3, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__index, 3, .production_id = 1),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(25),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(47),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(31),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(31),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(25),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 3),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_repeat1, 2), SHIFT_REPEAT(15),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__default_repeat1, 2), SHIFT_REPEAT(43),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_repeat1, 2), SHIFT_REPEAT(43),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__default_repeat1, 2), SHIFT_REPEAT(29),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default, 2, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 4, .production_id = 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 4, .production_id = 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__linebreak, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__linebreak, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__index_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__index_repeat1, 2), SHIFT_REPEAT(51),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__index_repeat1, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__index_repeat1, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [294] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__eof = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_properties_external_scanner_create(void);
void tree_sitter_properties_external_scanner_destroy(void *);
bool tree_sitter_properties_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_properties_external_scanner_serialize(void *, char *);
void tree_sitter_properties_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_properties_external_scanner_create,
      tree_sitter_properties_external_scanner_destroy,
      tree_sitter_properties_external_scanner_scan,
      tree_sitter_properties_external_scanner_serialize,
      tree_sitter_properties_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
