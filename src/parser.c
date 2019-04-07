#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 55
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym__comment = 1,
  anon_sym_ = 2,
  anon_sym_LF = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_2 = 6,
  anon_sym_DOT = 7,
  sym_bin_op_0 = 8,
  sym_bin_op_1 = 9,
  sym_bin_op_2 = 10,
  sym_number = 11,
  anon_sym_3 = 12,
  anon_sym_4 = 13,
  sym_identifier = 14,
  sym_program = 15,
  sym_assignment = 16,
  sym__term = 17,
  sym_paren_term = 18,
  sym_abstraction = 19,
  sym_application = 20,
  sym_variable = 21,
  sym_bin_op = 22,
  sym_boolean = 23,
  aux_sym_program_repeat1 = 24,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__comment] = "_comment",
  [anon_sym_] = "≔",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_2] = "λ",
  [anon_sym_DOT] = ".",
  [sym_bin_op_0] = "bin_op_0",
  [sym_bin_op_1] = "bin_op_1",
  [sym_bin_op_2] = "bin_op_2",
  [sym_number] = "number",
  [anon_sym_3] = "⊤",
  [anon_sym_4] = "⊥",
  [sym_identifier] = "identifier",
  [sym_program] = "program",
  [sym_assignment] = "assignment",
  [sym__term] = "_term",
  [sym_paren_term] = "paren_term",
  [sym_abstraction] = "abstraction",
  [sym_application] = "application",
  [sym_variable] = "variable",
  [sym_bin_op] = "bin_op",
  [sym_boolean] = "boolean",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_bin_op_0] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_op_1] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_op_2] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_paren_term] = {
    .visible = true,
    .named = true,
  },
  [sym_abstraction] = {
    .visible = true,
    .named = true,
  },
  [sym_application] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_bin_op] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == 955)
        ADVANCE(5);
      if (lookahead == 8213)
        ADVANCE(6);
      if (lookahead == 8788)
        ADVANCE(7);
      if (lookahead == 8868)
        ADVANCE(8);
      if (lookahead == 8869)
        ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(11);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_bin_op_1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_bin_op_2);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_bin_op_0);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == 955)
        ADVANCE(5);
      if (lookahead == 8213)
        ADVANCE(6);
      if (lookahead == 8868)
        ADVANCE(8);
      if (lookahead == 8869)
        ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(11);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == 955)
        ADVANCE(5);
      if (lookahead == 8213)
        ADVANCE(6);
      if (lookahead == 8788)
        ADVANCE(7);
      if (lookahead == 8868)
        ADVANCE(8);
      if (lookahead == 8869)
        ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(11);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == 955)
        ADVANCE(5);
      if (lookahead == 8213)
        ADVANCE(6);
      if (lookahead == 8788)
        ADVANCE(7);
      if (lookahead == 8868)
        ADVANCE(8);
      if (lookahead == 8869)
        ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(11);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == 8213)
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '\n')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == 955)
        ADVANCE(5);
      if (lookahead == 8213)
        ADVANCE(6);
      if (lookahead == 8868)
        ADVANCE(8);
      if (lookahead == 8869)
        ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (lookahead == '/' ||
          lookahead == 183)
        ADVANCE(11);
      if (lookahead == 8743 ||
          lookahead == 8744)
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_bin_op_2] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [sym_bin_op_1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_bin_op_0] = ACTIONS(1),
  },
  [1] = {
    [sym_paren_term] = STATE(9),
    [sym_abstraction] = STATE(9),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_program] = STATE(7),
    [sym_application] = STATE(9),
    [sym_variable] = STATE(8),
    [sym_assignment] = STATE(6),
    [sym__term] = STATE(9),
    [sym_bin_op] = STATE(9),
    [sym_boolean] = STATE(9),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
  },
  [2] = {
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_bin_op_2] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [anon_sym_4] = ACTIONS(15),
    [anon_sym_3] = ACTIONS(15),
    [sym_bin_op_1] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
    [sym_bin_op_0] = ACTIONS(15),
  },
  [3] = {
    [sym_variable] = STATE(11),
    [sym_paren_term] = STATE(11),
    [sym_abstraction] = STATE(11),
    [sym__term] = STATE(11),
    [sym_bin_op] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_application] = STATE(11),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_identifier] = ACTIONS(13),
  },
  [4] = {
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(21),
  },
  [5] = {
    [anon_sym_RPAREN] = ACTIONS(23),
    [sym_bin_op_2] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [anon_sym_4] = ACTIONS(23),
    [anon_sym_] = ACTIONS(23),
    [anon_sym_3] = ACTIONS(23),
    [sym_bin_op_1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
    [sym_bin_op_0] = ACTIONS(23),
  },
  [6] = {
    [sym_paren_term] = STATE(14),
    [sym_abstraction] = STATE(14),
    [aux_sym_program_repeat1] = STATE(13),
    [sym_application] = STATE(14),
    [sym_variable] = STATE(8),
    [sym_assignment] = STATE(13),
    [sym__term] = STATE(14),
    [sym_bin_op] = STATE(14),
    [sym_boolean] = STATE(14),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(9),
    [sym_number] = ACTIONS(25),
    [sym_identifier] = ACTIONS(13),
  },
  [7] = {
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(27),
  },
  [8] = {
    [sym_bin_op_2] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(29),
    [anon_sym_] = ACTIONS(31),
    [anon_sym_3] = ACTIONS(29),
    [sym_bin_op_1] = ACTIONS(29),
    [sym_identifier] = ACTIONS(29),
    [sym_bin_op_0] = ACTIONS(29),
  },
  [9] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [sym_bin_op_2] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(9),
    [sym_number] = ACTIONS(37),
    [anon_sym_4] = ACTIONS(5),
    [anon_sym_3] = ACTIONS(5),
    [sym_bin_op_1] = ACTIONS(39),
    [sym_identifier] = ACTIONS(13),
    [sym_bin_op_0] = ACTIONS(41),
  },
  [10] = {
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
  },
  [11] = {
    [sym_variable] = STATE(25),
    [sym_paren_term] = STATE(25),
    [sym_abstraction] = STATE(25),
    [sym__term] = STATE(25),
    [sym_bin_op] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_application] = STATE(25),
    [anon_sym_RPAREN] = ACTIONS(45),
    [sym_bin_op_2] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(17),
    [sym_number] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(5),
    [anon_sym_3] = ACTIONS(5),
    [sym_bin_op_1] = ACTIONS(51),
    [sym_identifier] = ACTIONS(13),
    [sym_bin_op_0] = ACTIONS(53),
  },
  [12] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(55),
  },
  [13] = {
    [sym_variable] = STATE(27),
    [sym_assignment] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [anon_sym_4] = ACTIONS(57),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_3] = ACTIONS(57),
    [anon_sym_2] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
  },
  [14] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [sym_bin_op_2] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(9),
    [sym_number] = ACTIONS(37),
    [anon_sym_4] = ACTIONS(5),
    [anon_sym_3] = ACTIONS(5),
    [sym_bin_op_1] = ACTIONS(39),
    [sym_identifier] = ACTIONS(13),
    [sym_bin_op_0] = ACTIONS(41),
  },
  [15] = {
    [sym_variable] = STATE(32),
    [sym_paren_term] = STATE(32),
    [sym_abstraction] = STATE(32),
    [sym__term] = STATE(32),
    [sym_bin_op] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_application] = STATE(32),
    [anon_sym_4] = ACTIONS(64),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_2] = ACTIONS(68),
    [sym_number] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
  },
  [16] = {
    [sym_variable] = STATE(33),
    [sym_paren_term] = STATE(33),
    [sym_abstraction] = STATE(33),
    [sym__term] = STATE(33),
    [sym_bin_op] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_application] = STATE(33),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(9),
    [sym_number] = ACTIONS(74),
    [sym_identifier] = ACTIONS(13),
  },
  [17] = {
    [sym_variable] = STATE(34),
    [sym_paren_term] = STATE(34),
    [sym_abstraction] = STATE(34),
    [sym__term] = STATE(34),
    [sym_bin_op] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_application] = STATE(34),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(9),
    [sym_number] = ACTIONS(76),
    [sym_identifier] = ACTIONS(13),
  },
  [18] = {
    [sym_variable] = STATE(35),
    [sym_paren_term] = STATE(35),
    [sym_abstraction] = STATE(35),
    [sym__term] = STATE(35),
    [sym_bin_op] = STATE(35),
    [sym_boolean] = STATE(35),
    [sym_application] = STATE(35),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(9),
    [sym_number] = ACTIONS(78),
    [sym_identifier] = ACTIONS(13),
  },
  [19] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [sym_bin_op_2] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(80),
    [sym_number] = ACTIONS(80),
    [anon_sym_4] = ACTIONS(80),
    [anon_sym_3] = ACTIONS(80),
    [sym_bin_op_1] = ACTIONS(39),
    [sym_identifier] = ACTIONS(80),
    [sym_bin_op_0] = ACTIONS(41),
  },
  [20] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(82),
  },
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(84),
    [sym_bin_op_2] = ACTIONS(84),
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(84),
    [sym_number] = ACTIONS(84),
    [anon_sym_4] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [sym_bin_op_1] = ACTIONS(84),
    [sym_identifier] = ACTIONS(84),
    [sym_bin_op_0] = ACTIONS(84),
  },
  [22] = {
    [sym_variable] = STATE(37),
    [sym_paren_term] = STATE(37),
    [sym_abstraction] = STATE(37),
    [sym__term] = STATE(37),
    [sym_bin_op] = STATE(37),
    [sym_boolean] = STATE(37),
    [sym_application] = STATE(37),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(17),
    [sym_number] = ACTIONS(86),
    [sym_identifier] = ACTIONS(13),
  },
  [23] = {
    [sym_variable] = STATE(38),
    [sym_paren_term] = STATE(38),
    [sym_abstraction] = STATE(38),
    [sym__term] = STATE(38),
    [sym_bin_op] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_application] = STATE(38),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(17),
    [sym_number] = ACTIONS(88),
    [sym_identifier] = ACTIONS(13),
  },
  [24] = {
    [sym_variable] = STATE(39),
    [sym_paren_term] = STATE(39),
    [sym_abstraction] = STATE(39),
    [sym__term] = STATE(39),
    [sym_bin_op] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_application] = STATE(39),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(17),
    [sym_number] = ACTIONS(90),
    [sym_identifier] = ACTIONS(13),
  },
  [25] = {
    [sym_variable] = STATE(25),
    [sym_paren_term] = STATE(25),
    [sym_abstraction] = STATE(25),
    [sym__term] = STATE(25),
    [sym_bin_op] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_application] = STATE(25),
    [anon_sym_RPAREN] = ACTIONS(80),
    [sym_bin_op_2] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(80),
    [sym_number] = ACTIONS(80),
    [anon_sym_4] = ACTIONS(80),
    [anon_sym_3] = ACTIONS(80),
    [sym_bin_op_1] = ACTIONS(51),
    [sym_identifier] = ACTIONS(80),
    [sym_bin_op_0] = ACTIONS(53),
  },
  [26] = {
    [sym_variable] = STATE(40),
    [sym_paren_term] = STATE(40),
    [sym_abstraction] = STATE(40),
    [sym__term] = STATE(40),
    [sym_bin_op] = STATE(40),
    [sym_boolean] = STATE(40),
    [sym_application] = STATE(40),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(9),
    [sym_number] = ACTIONS(92),
    [sym_identifier] = ACTIONS(13),
  },
  [27] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_] = ACTIONS(31),
  },
  [28] = {
    [sym_bin_op_2] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [sym__comment] = ACTIONS(96),
    [anon_sym_2] = ACTIONS(94),
    [sym_number] = ACTIONS(94),
    [anon_sym_4] = ACTIONS(94),
    [anon_sym_3] = ACTIONS(94),
    [sym_bin_op_1] = ACTIONS(94),
    [sym_identifier] = ACTIONS(94),
    [anon_sym_LF] = ACTIONS(15),
    [sym_bin_op_0] = ACTIONS(94),
  },
  [29] = {
    [sym_variable] = STATE(41),
    [sym_paren_term] = STATE(41),
    [sym_abstraction] = STATE(41),
    [sym__term] = STATE(41),
    [sym_bin_op] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_application] = STATE(41),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(17),
    [sym_number] = ACTIONS(98),
    [sym_identifier] = ACTIONS(13),
  },
  [30] = {
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(100),
  },
  [31] = {
    [sym_bin_op_2] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(102),
    [sym__comment] = ACTIONS(96),
    [anon_sym_2] = ACTIONS(102),
    [sym_number] = ACTIONS(102),
    [anon_sym_4] = ACTIONS(102),
    [anon_sym_3] = ACTIONS(102),
    [sym_bin_op_1] = ACTIONS(102),
    [sym_identifier] = ACTIONS(102),
    [anon_sym_LF] = ACTIONS(23),
    [sym_bin_op_0] = ACTIONS(102),
  },
  [32] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [sym_bin_op_2] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(106),
    [sym__comment] = ACTIONS(96),
    [anon_sym_2] = ACTIONS(108),
    [sym_number] = ACTIONS(110),
    [anon_sym_4] = ACTIONS(112),
    [anon_sym_3] = ACTIONS(112),
    [sym_bin_op_1] = ACTIONS(114),
    [sym_identifier] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(118),
    [sym_bin_op_0] = ACTIONS(120),
  },
  [33] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [sym_bin_op_2] = ACTIONS(122),
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
    [anon_sym_4] = ACTIONS(122),
    [anon_sym_3] = ACTIONS(122),
    [sym_bin_op_1] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [sym_bin_op_0] = ACTIONS(122),
  },
  [34] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [sym_bin_op_2] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
    [anon_sym_4] = ACTIONS(122),
    [anon_sym_3] = ACTIONS(122),
    [sym_bin_op_1] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [sym_bin_op_0] = ACTIONS(122),
  },
  [35] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [sym_bin_op_2] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
    [anon_sym_4] = ACTIONS(122),
    [anon_sym_3] = ACTIONS(122),
    [sym_bin_op_1] = ACTIONS(39),
    [sym_identifier] = ACTIONS(122),
    [sym_bin_op_0] = ACTIONS(122),
  },
  [36] = {
    [sym_variable] = STATE(48),
    [sym_paren_term] = STATE(48),
    [sym_abstraction] = STATE(48),
    [sym__term] = STATE(48),
    [sym_bin_op] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym_application] = STATE(48),
    [anon_sym_4] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(17),
    [sym_number] = ACTIONS(124),
    [sym_identifier] = ACTIONS(13),
  },
  [37] = {
    [sym_variable] = STATE(25),
    [sym_paren_term] = STATE(25),
    [sym_abstraction] = STATE(25),
    [sym__term] = STATE(25),
    [sym_bin_op] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_application] = STATE(25),
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_bin_op_2] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
    [anon_sym_4] = ACTIONS(122),
    [anon_sym_3] = ACTIONS(122),
    [sym_bin_op_1] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [sym_bin_op_0] = ACTIONS(122),
  },
  [38] = {
    [sym_variable] = STATE(25),
    [sym_paren_term] = STATE(25),
    [sym_abstraction] = STATE(25),
    [sym__term] = STATE(25),
    [sym_bin_op] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_application] = STATE(25),
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_bin_op_2] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
    [anon_sym_4] = ACTIONS(122),
    [anon_sym_3] = ACTIONS(122),
    [sym_bin_op_1] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [sym_bin_op_0] = ACTIONS(122),
  },
  [39] = {
    [sym_variable] = STATE(25),
    [sym_paren_term] = STATE(25),
    [sym_abstraction] = STATE(25),
    [sym__term] = STATE(25),
    [sym_bin_op] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_application] = STATE(25),
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_bin_op_2] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
    [anon_sym_4] = ACTIONS(122),
    [anon_sym_3] = ACTIONS(122),
    [sym_bin_op_1] = ACTIONS(51),
    [sym_identifier] = ACTIONS(122),
    [sym_bin_op_0] = ACTIONS(122),
  },
  [40] = {
    [sym_variable] = STATE(19),
    [sym_paren_term] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym__term] = STATE(19),
    [sym_bin_op] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_application] = STATE(19),
    [sym_bin_op_2] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(9),
    [sym_number] = ACTIONS(37),
    [anon_sym_4] = ACTIONS(5),
    [anon_sym_3] = ACTIONS(5),
    [sym_bin_op_1] = ACTIONS(39),
    [sym_identifier] = ACTIONS(13),
    [sym_bin_op_0] = ACTIONS(41),
  },
  [41] = {
    [sym_variable] = STATE(25),
    [sym_paren_term] = STATE(25),
    [sym_abstraction] = STATE(25),
    [sym__term] = STATE(25),
    [sym_bin_op] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_application] = STATE(25),
    [anon_sym_RPAREN] = ACTIONS(128),
    [sym_bin_op_2] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(17),
    [sym_number] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(5),
    [anon_sym_3] = ACTIONS(5),
    [sym_bin_op_1] = ACTIONS(51),
    [sym_identifier] = ACTIONS(13),
    [sym_bin_op_0] = ACTIONS(53),
  },
  [42] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(130),
  },
  [43] = {
    [sym_variable] = STATE(51),
    [sym_paren_term] = STATE(51),
    [sym_abstraction] = STATE(51),
    [sym__term] = STATE(51),
    [sym_bin_op] = STATE(51),
    [sym_boolean] = STATE(51),
    [sym_application] = STATE(51),
    [anon_sym_4] = ACTIONS(64),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_2] = ACTIONS(68),
    [sym_number] = ACTIONS(132),
    [sym_identifier] = ACTIONS(72),
  },
  [44] = {
    [sym_variable] = STATE(52),
    [sym_paren_term] = STATE(52),
    [sym_abstraction] = STATE(52),
    [sym__term] = STATE(52),
    [sym_bin_op] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_application] = STATE(52),
    [anon_sym_4] = ACTIONS(64),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_2] = ACTIONS(68),
    [sym_number] = ACTIONS(134),
    [sym_identifier] = ACTIONS(72),
  },
  [45] = {
    [anon_sym_4] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_3] = ACTIONS(136),
    [anon_sym_2] = ACTIONS(136),
    [sym_number] = ACTIONS(136),
    [sym_identifier] = ACTIONS(136),
  },
  [46] = {
    [sym_variable] = STATE(53),
    [sym_paren_term] = STATE(53),
    [sym_abstraction] = STATE(53),
    [sym__term] = STATE(53),
    [sym_bin_op] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym_application] = STATE(53),
    [anon_sym_4] = ACTIONS(64),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_2] = ACTIONS(68),
    [sym_number] = ACTIONS(138),
    [sym_identifier] = ACTIONS(72),
  },
  [47] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [sym_bin_op_2] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym__comment] = ACTIONS(96),
    [anon_sym_2] = ACTIONS(140),
    [sym_number] = ACTIONS(140),
    [anon_sym_4] = ACTIONS(140),
    [anon_sym_3] = ACTIONS(140),
    [sym_bin_op_1] = ACTIONS(114),
    [sym_identifier] = ACTIONS(140),
    [anon_sym_LF] = ACTIONS(80),
    [sym_bin_op_0] = ACTIONS(120),
  },
  [48] = {
    [sym_variable] = STATE(25),
    [sym_paren_term] = STATE(25),
    [sym_abstraction] = STATE(25),
    [sym__term] = STATE(25),
    [sym_bin_op] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_application] = STATE(25),
    [anon_sym_RPAREN] = ACTIONS(126),
    [sym_bin_op_2] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(17),
    [sym_number] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(5),
    [anon_sym_3] = ACTIONS(5),
    [sym_bin_op_1] = ACTIONS(51),
    [sym_identifier] = ACTIONS(13),
    [sym_bin_op_0] = ACTIONS(53),
  },
  [49] = {
    [sym_bin_op_2] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(142),
    [sym__comment] = ACTIONS(96),
    [anon_sym_2] = ACTIONS(142),
    [sym_number] = ACTIONS(142),
    [anon_sym_4] = ACTIONS(142),
    [anon_sym_3] = ACTIONS(142),
    [sym_bin_op_1] = ACTIONS(142),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_LF] = ACTIONS(84),
    [sym_bin_op_0] = ACTIONS(142),
  },
  [50] = {
    [sym_variable] = STATE(54),
    [sym_paren_term] = STATE(54),
    [sym_abstraction] = STATE(54),
    [sym__term] = STATE(54),
    [sym_bin_op] = STATE(54),
    [sym_boolean] = STATE(54),
    [sym_application] = STATE(54),
    [anon_sym_4] = ACTIONS(64),
    [sym__comment] = ACTIONS(3),
    [anon_sym_3] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_2] = ACTIONS(68),
    [sym_number] = ACTIONS(144),
    [sym_identifier] = ACTIONS(72),
  },
  [51] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [sym_bin_op_2] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(146),
    [sym__comment] = ACTIONS(96),
    [anon_sym_2] = ACTIONS(146),
    [sym_number] = ACTIONS(146),
    [anon_sym_4] = ACTIONS(146),
    [anon_sym_3] = ACTIONS(146),
    [sym_bin_op_1] = ACTIONS(146),
    [sym_identifier] = ACTIONS(146),
    [anon_sym_LF] = ACTIONS(122),
    [sym_bin_op_0] = ACTIONS(146),
  },
  [52] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [sym_bin_op_2] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(146),
    [sym__comment] = ACTIONS(96),
    [anon_sym_2] = ACTIONS(146),
    [sym_number] = ACTIONS(146),
    [anon_sym_4] = ACTIONS(146),
    [anon_sym_3] = ACTIONS(146),
    [sym_bin_op_1] = ACTIONS(146),
    [sym_identifier] = ACTIONS(146),
    [anon_sym_LF] = ACTIONS(122),
    [sym_bin_op_0] = ACTIONS(146),
  },
  [53] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [sym_bin_op_2] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(146),
    [sym__comment] = ACTIONS(96),
    [anon_sym_2] = ACTIONS(146),
    [sym_number] = ACTIONS(146),
    [anon_sym_4] = ACTIONS(146),
    [anon_sym_3] = ACTIONS(146),
    [sym_bin_op_1] = ACTIONS(114),
    [sym_identifier] = ACTIONS(146),
    [anon_sym_LF] = ACTIONS(122),
    [sym_bin_op_0] = ACTIONS(146),
  },
  [54] = {
    [sym_variable] = STATE(47),
    [sym_paren_term] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym__term] = STATE(47),
    [sym_bin_op] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_application] = STATE(47),
    [sym_bin_op_2] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(106),
    [sym__comment] = ACTIONS(96),
    [anon_sym_2] = ACTIONS(108),
    [sym_number] = ACTIONS(110),
    [anon_sym_4] = ACTIONS(112),
    [anon_sym_3] = ACTIONS(112),
    [sym_bin_op_1] = ACTIONS(114),
    [sym_identifier] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(126),
    [sym_bin_op_0] = ACTIONS(120),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(9),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym__term, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(19),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = true}, SHIFT(21),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, SHIFT(25),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(24),
  [55] = {.count = 1, .reusable = true}, SHIFT(26),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_program, 2),
  [64] = {.count = 1, .reusable = true}, SHIFT(28),
  [66] = {.count = 1, .reusable = true}, SHIFT(29),
  [68] = {.count = 1, .reusable = true}, SHIFT(30),
  [70] = {.count = 1, .reusable = true}, SHIFT(32),
  [72] = {.count = 1, .reusable = true}, SHIFT(31),
  [74] = {.count = 1, .reusable = true}, SHIFT(33),
  [76] = {.count = 1, .reusable = true}, SHIFT(34),
  [78] = {.count = 1, .reusable = true}, SHIFT(35),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_application, 2),
  [82] = {.count = 1, .reusable = true}, SHIFT(36),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_paren_term, 3),
  [86] = {.count = 1, .reusable = true}, SHIFT(37),
  [88] = {.count = 1, .reusable = true}, SHIFT(38),
  [90] = {.count = 1, .reusable = true}, SHIFT(39),
  [92] = {.count = 1, .reusable = true}, SHIFT(40),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [96] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [98] = {.count = 1, .reusable = true}, SHIFT(41),
  [100] = {.count = 1, .reusable = true}, SHIFT(42),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [104] = {.count = 1, .reusable = false}, SHIFT(43),
  [106] = {.count = 1, .reusable = false}, SHIFT(29),
  [108] = {.count = 1, .reusable = false}, SHIFT(30),
  [110] = {.count = 1, .reusable = false}, SHIFT(47),
  [112] = {.count = 1, .reusable = false}, SHIFT(28),
  [114] = {.count = 1, .reusable = false}, SHIFT(44),
  [116] = {.count = 1, .reusable = false}, SHIFT(31),
  [118] = {.count = 1, .reusable = true}, SHIFT(45),
  [120] = {.count = 1, .reusable = false}, SHIFT(46),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_bin_op, 3),
  [124] = {.count = 1, .reusable = true}, SHIFT(48),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_abstraction, 4),
  [128] = {.count = 1, .reusable = true}, SHIFT(49),
  [130] = {.count = 1, .reusable = true}, SHIFT(50),
  [132] = {.count = 1, .reusable = true}, SHIFT(51),
  [134] = {.count = 1, .reusable = true}, SHIFT(52),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_assignment, 4),
  [138] = {.count = 1, .reusable = true}, SHIFT(53),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_application, 2),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_paren_term, 3),
  [144] = {.count = 1, .reusable = true}, SHIFT(54),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_bin_op, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_demoniclambda(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
