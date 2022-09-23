#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__blankline_token1 = 1,
  sym__whitespace = 2,
  sym_word = 3,
  sym_source_file = 4,
  sym_final_paragraph = 5,
  sym_paragraph = 6,
  sym__blankline = 7,
  sym_line = 8,
  aux_sym_source_file_repeat1 = 9,
  aux_sym_final_paragraph_repeat1 = 10,
  aux_sym_paragraph_repeat1 = 11,
  aux_sym_line_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blankline_token1] = "_blankline_token1",
  [sym__whitespace] = "_whitespace",
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym_final_paragraph] = "final_paragraph",
  [sym_paragraph] = "paragraph",
  [sym__blankline] = "_blankline",
  [sym_line] = "line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_final_paragraph_repeat1] = "final_paragraph_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__blankline_token1] = aux_sym__blankline_token1,
  [sym__whitespace] = sym__whitespace,
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym_final_paragraph] = sym_final_paragraph,
  [sym_paragraph] = sym_paragraph,
  [sym__blankline] = sym__blankline,
  [sym_line] = sym_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_final_paragraph_repeat1] = aux_sym_final_paragraph_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__blankline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_final_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym__blankline] = {
    .visible = false,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_final_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym__blankline_token1);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(4);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__blankline_token1] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym_final_paragraph] = STATE(13),
    [sym_paragraph] = STATE(3),
    [sym_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_final_paragraph_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(9),
    [sym__whitespace] = ACTIONS(3),
    [sym_word] = ACTIONS(3),
  },
  [2] = {
    [sym__blankline] = STATE(7),
    [sym_line] = STATE(6),
    [aux_sym_final_paragraph_repeat1] = STATE(6),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [aux_sym_line_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__blankline_token1] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_word] = ACTIONS(3),
  },
  [3] = {
    [sym_final_paragraph] = STATE(14),
    [sym_paragraph] = STATE(5),
    [sym_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_final_paragraph_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(9),
    [sym__whitespace] = ACTIONS(3),
    [sym_word] = ACTIONS(3),
  },
  [4] = {
    [sym__blankline] = STATE(7),
    [sym_line] = STATE(6),
    [aux_sym_final_paragraph_repeat1] = STATE(6),
    [aux_sym_paragraph_repeat1] = STATE(7),
    [aux_sym_line_repeat1] = STATE(9),
    [aux_sym__blankline_token1] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_word] = ACTIONS(3),
  },
  [5] = {
    [sym_paragraph] = STATE(5),
    [sym_line] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_final_paragraph_repeat1] = STATE(4),
    [aux_sym_line_repeat1] = STATE(9),
    [sym__whitespace] = ACTIONS(9),
    [sym_word] = ACTIONS(9),
  },
  [6] = {
    [sym_line] = STATE(6),
    [aux_sym_final_paragraph_repeat1] = STATE(6),
    [aux_sym_line_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(12),
    [aux_sym__blankline_token1] = ACTIONS(12),
    [sym__whitespace] = ACTIONS(14),
    [sym_word] = ACTIONS(14),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(17), 1,
      aux_sym__blankline_token1,
    ACTIONS(19), 2,
      sym__whitespace,
      sym_word,
    STATE(8), 2,
      sym__blankline,
      aux_sym_paragraph_repeat1,
  [12] = 3,
    ACTIONS(21), 1,
      aux_sym__blankline_token1,
    ACTIONS(24), 2,
      sym__whitespace,
      sym_word,
    STATE(8), 2,
      sym__blankline,
      aux_sym_paragraph_repeat1,
  [24] = 3,
    ACTIONS(26), 1,
      aux_sym__blankline_token1,
    STATE(11), 1,
      aux_sym_line_repeat1,
    ACTIONS(28), 2,
      sym__whitespace,
      sym_word,
  [35] = 1,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      aux_sym__blankline_token1,
      sym__whitespace,
      sym_word,
  [42] = 3,
    ACTIONS(32), 1,
      aux_sym__blankline_token1,
    STATE(11), 1,
      aux_sym_line_repeat1,
    ACTIONS(34), 2,
      sym__whitespace,
      sym_word,
  [53] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [57] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [61] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 12,
  [SMALL_STATE(9)] = 24,
  [SMALL_STATE(10)] = 35,
  [SMALL_STATE(11)] = 42,
  [SMALL_STATE(12)] = 53,
  [SMALL_STATE(13)] = 57,
  [SMALL_STATE(14)] = 61,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_final_paragraph, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_final_paragraph_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_final_paragraph_repeat1, 2), SHIFT_REPEAT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(8),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(11),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_text(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
