#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 35
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_ = 3,
  anon_sym_DOT = 4,
  anon_sym_PLUS = 5,
  anon_sym_2 = 6,
  anon_sym_DASH = 7,
  anon_sym_SLASH = 8,
  sym_number = 9,
  anon_sym_3 = 10,
  anon_sym_4 = 11,
  sym__identifier = 12,
  sym_program = 13,
  sym__term = 14,
  sym_abstraction = 15,
  sym_application = 16,
  sym_variable = 17,
  sym__expression = 18,
  sym_plus = 19,
  sym_times = 20,
  sym_minus = 21,
  sym_divide = 22,
  sym_boolean = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_] = "λ",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS] = "+",
  [anon_sym_2] = "·",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_number] = "number",
  [anon_sym_3] = "⊤",
  [anon_sym_4] = "⊥",
  [sym__identifier] = "_identifier",
  [sym_program] = "program",
  [sym__term] = "_term",
  [sym_abstraction] = "abstraction",
  [sym_application] = "application",
  [sym_variable] = "variable",
  [sym__expression] = "_expression",
  [sym_plus] = "plus",
  [sym_times] = "times",
  [sym_minus] = "minus",
  [sym_divide] = "divide",
  [sym_boolean] = "boolean",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_times] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_divide] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
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
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == 183)
        ADVANCE(8);
      if (lookahead == 955)
        ADVANCE(9);
      if (lookahead == 8868)
        ADVANCE(10);
      if (lookahead == 8869)
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
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
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == 183)
        ADVANCE(8);
      if (lookahead == 955)
        ADVANCE(9);
      if (lookahead == 8868)
        ADVANCE(10);
      if (lookahead == 8869)
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(15);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_application] = STATE(7),
    [sym_variable] = STATE(7),
    [sym_divide] = STATE(7),
    [sym_boolean] = STATE(7),
    [sym_program] = STATE(6),
    [sym__expression] = STATE(7),
    [sym_plus] = STATE(7),
    [sym__term] = STATE(7),
    [sym_abstraction] = STATE(7),
    [sym_times] = STATE(7),
    [sym_minus] = STATE(7),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_4] = ACTIONS(3),
  },
  [2] = {
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_3] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_4] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [sym__identifier] = ACTIONS(13),
    [sym_number] = ACTIONS(13),
    [anon_sym_] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
  },
  [3] = {
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_3] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_2] = ACTIONS(15),
    [anon_sym_4] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [sym__identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
  },
  [4] = {
    [sym_application] = STATE(9),
    [sym_variable] = STATE(9),
    [sym_divide] = STATE(9),
    [sym_boolean] = STATE(9),
    [sym__expression] = STATE(9),
    [sym_plus] = STATE(9),
    [sym__term] = STATE(9),
    [sym_abstraction] = STATE(9),
    [sym_times] = STATE(9),
    [sym_minus] = STATE(9),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_4] = ACTIONS(3),
  },
  [5] = {
    [sym__identifier] = ACTIONS(21),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [7] = {
    [sym_application] = STATE(15),
    [sym_variable] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_plus] = STATE(15),
    [sym__term] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_times] = STATE(15),
    [sym_minus] = STATE(15),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(31),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(33),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(35),
  },
  [8] = {
    [sym__identifier] = ACTIONS(37),
  },
  [9] = {
    [sym_application] = STATE(22),
    [sym_variable] = STATE(22),
    [sym_divide] = STATE(22),
    [sym_boolean] = STATE(22),
    [sym__expression] = STATE(22),
    [sym_plus] = STATE(22),
    [sym__term] = STATE(22),
    [sym_abstraction] = STATE(22),
    [sym_times] = STATE(22),
    [sym_minus] = STATE(22),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_3] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_2] = ACTIONS(41),
    [anon_sym_4] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(47),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(49),
  },
  [10] = {
    [anon_sym_DOT] = ACTIONS(51),
  },
  [11] = {
    [sym_application] = STATE(24),
    [sym_variable] = STATE(24),
    [sym_divide] = STATE(24),
    [sym_boolean] = STATE(24),
    [sym__expression] = STATE(24),
    [sym_plus] = STATE(24),
    [sym__term] = STATE(24),
    [sym_abstraction] = STATE(24),
    [sym_times] = STATE(24),
    [sym_minus] = STATE(24),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_4] = ACTIONS(3),
  },
  [12] = {
    [sym_application] = STATE(25),
    [sym_variable] = STATE(25),
    [sym_divide] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym__expression] = STATE(25),
    [sym_plus] = STATE(25),
    [sym__term] = STATE(25),
    [sym_abstraction] = STATE(25),
    [sym_times] = STATE(25),
    [sym_minus] = STATE(25),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_4] = ACTIONS(3),
  },
  [13] = {
    [sym_application] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_divide] = STATE(26),
    [sym_boolean] = STATE(26),
    [sym__expression] = STATE(26),
    [sym_plus] = STATE(26),
    [sym__term] = STATE(26),
    [sym_abstraction] = STATE(26),
    [sym_times] = STATE(26),
    [sym_minus] = STATE(26),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_4] = ACTIONS(3),
  },
  [14] = {
    [sym_application] = STATE(27),
    [sym_variable] = STATE(27),
    [sym_divide] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym__expression] = STATE(27),
    [sym_plus] = STATE(27),
    [sym__term] = STATE(27),
    [sym_abstraction] = STATE(27),
    [sym_times] = STATE(27),
    [sym_minus] = STATE(27),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_4] = ACTIONS(3),
  },
  [15] = {
    [sym_application] = STATE(15),
    [sym_variable] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_plus] = STATE(15),
    [sym__term] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_times] = STATE(15),
    [sym_minus] = STATE(15),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(31),
    [sym__identifier] = ACTIONS(61),
    [sym_number] = ACTIONS(61),
    [anon_sym_] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(35),
  },
  [16] = {
    [anon_sym_DOT] = ACTIONS(63),
  },
  [17] = {
    [sym_application] = STATE(29),
    [sym_variable] = STATE(29),
    [sym_divide] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym__expression] = STATE(29),
    [sym_plus] = STATE(29),
    [sym__term] = STATE(29),
    [sym_abstraction] = STATE(29),
    [sym_times] = STATE(29),
    [sym_minus] = STATE(29),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_4] = ACTIONS(3),
  },
  [18] = {
    [sym_application] = STATE(30),
    [sym_variable] = STATE(30),
    [sym_divide] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym__expression] = STATE(30),
    [sym_plus] = STATE(30),
    [sym__term] = STATE(30),
    [sym_abstraction] = STATE(30),
    [sym_times] = STATE(30),
    [sym_minus] = STATE(30),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_4] = ACTIONS(3),
  },
  [19] = {
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_3] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_2] = ACTIONS(69),
    [anon_sym_4] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [sym__identifier] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
    [anon_sym_] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(69),
  },
  [20] = {
    [sym_application] = STATE(31),
    [sym_variable] = STATE(31),
    [sym_divide] = STATE(31),
    [sym_boolean] = STATE(31),
    [sym__expression] = STATE(31),
    [sym_plus] = STATE(31),
    [sym__term] = STATE(31),
    [sym_abstraction] = STATE(31),
    [sym_times] = STATE(31),
    [sym_minus] = STATE(31),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_4] = ACTIONS(3),
  },
  [21] = {
    [sym_application] = STATE(32),
    [sym_variable] = STATE(32),
    [sym_divide] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym__expression] = STATE(32),
    [sym_plus] = STATE(32),
    [sym__term] = STATE(32),
    [sym_abstraction] = STATE(32),
    [sym_times] = STATE(32),
    [sym_minus] = STATE(32),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_4] = ACTIONS(3),
  },
  [22] = {
    [sym_application] = STATE(22),
    [sym_variable] = STATE(22),
    [sym_divide] = STATE(22),
    [sym_boolean] = STATE(22),
    [sym__expression] = STATE(22),
    [sym_plus] = STATE(22),
    [sym__term] = STATE(22),
    [sym_abstraction] = STATE(22),
    [sym_times] = STATE(22),
    [sym_minus] = STATE(22),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_3] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_2] = ACTIONS(41),
    [anon_sym_4] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(45),
    [sym__identifier] = ACTIONS(61),
    [sym_number] = ACTIONS(61),
    [anon_sym_] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(49),
  },
  [23] = {
    [sym_application] = STATE(33),
    [sym_variable] = STATE(33),
    [sym_divide] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym__expression] = STATE(33),
    [sym_plus] = STATE(33),
    [sym__term] = STATE(33),
    [sym_abstraction] = STATE(33),
    [sym_times] = STATE(33),
    [sym_minus] = STATE(33),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_4] = ACTIONS(3),
  },
  [24] = {
    [sym_application] = STATE(15),
    [sym_variable] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_plus] = STATE(15),
    [sym__term] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_times] = STATE(15),
    [sym_minus] = STATE(15),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [sym__identifier] = ACTIONS(77),
    [sym_number] = ACTIONS(77),
    [anon_sym_] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(35),
  },
  [25] = {
    [sym_application] = STATE(15),
    [sym_variable] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_plus] = STATE(15),
    [sym__term] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_times] = STATE(15),
    [sym_minus] = STATE(15),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_3] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_2] = ACTIONS(79),
    [anon_sym_4] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [sym__identifier] = ACTIONS(79),
    [sym_number] = ACTIONS(79),
    [anon_sym_] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
  },
  [26] = {
    [sym_application] = STATE(15),
    [sym_variable] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_plus] = STATE(15),
    [sym__term] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_times] = STATE(15),
    [sym_minus] = STATE(15),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [sym__identifier] = ACTIONS(81),
    [sym_number] = ACTIONS(81),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(35),
  },
  [27] = {
    [sym_application] = STATE(15),
    [sym_variable] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_plus] = STATE(15),
    [sym__term] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_times] = STATE(15),
    [sym_minus] = STATE(15),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_3] = ACTIONS(83),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_2] = ACTIONS(83),
    [anon_sym_4] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [sym__identifier] = ACTIONS(83),
    [sym_number] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
  },
  [28] = {
    [sym_application] = STATE(34),
    [sym_variable] = STATE(34),
    [sym_divide] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym__expression] = STATE(34),
    [sym_plus] = STATE(34),
    [sym__term] = STATE(34),
    [sym_abstraction] = STATE(34),
    [sym_times] = STATE(34),
    [sym_minus] = STATE(34),
    [anon_sym_3] = ACTIONS(3),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_4] = ACTIONS(3),
  },
  [29] = {
    [sym_application] = STATE(22),
    [sym_variable] = STATE(22),
    [sym_divide] = STATE(22),
    [sym_boolean] = STATE(22),
    [sym__expression] = STATE(22),
    [sym_plus] = STATE(22),
    [sym__term] = STATE(22),
    [sym_abstraction] = STATE(22),
    [sym_times] = STATE(22),
    [sym_minus] = STATE(22),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_3] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_2] = ACTIONS(41),
    [anon_sym_4] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [sym__identifier] = ACTIONS(77),
    [sym_number] = ACTIONS(77),
    [anon_sym_] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(49),
  },
  [30] = {
    [sym_application] = STATE(22),
    [sym_variable] = STATE(22),
    [sym_divide] = STATE(22),
    [sym_boolean] = STATE(22),
    [sym__expression] = STATE(22),
    [sym_plus] = STATE(22),
    [sym__term] = STATE(22),
    [sym_abstraction] = STATE(22),
    [sym_times] = STATE(22),
    [sym_minus] = STATE(22),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_3] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_2] = ACTIONS(79),
    [anon_sym_4] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [sym__identifier] = ACTIONS(79),
    [sym_number] = ACTIONS(79),
    [anon_sym_] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
  },
  [31] = {
    [sym_application] = STATE(22),
    [sym_variable] = STATE(22),
    [sym_divide] = STATE(22),
    [sym_boolean] = STATE(22),
    [sym__expression] = STATE(22),
    [sym_plus] = STATE(22),
    [sym__term] = STATE(22),
    [sym_abstraction] = STATE(22),
    [sym_times] = STATE(22),
    [sym_minus] = STATE(22),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(41),
    [anon_sym_4] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [sym__identifier] = ACTIONS(81),
    [sym_number] = ACTIONS(81),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(49),
  },
  [32] = {
    [sym_application] = STATE(22),
    [sym_variable] = STATE(22),
    [sym_divide] = STATE(22),
    [sym_boolean] = STATE(22),
    [sym__expression] = STATE(22),
    [sym_plus] = STATE(22),
    [sym__term] = STATE(22),
    [sym_abstraction] = STATE(22),
    [sym_times] = STATE(22),
    [sym_minus] = STATE(22),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_3] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_2] = ACTIONS(83),
    [anon_sym_4] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [sym__identifier] = ACTIONS(83),
    [sym_number] = ACTIONS(83),
    [anon_sym_] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
  },
  [33] = {
    [sym_application] = STATE(15),
    [sym_variable] = STATE(15),
    [sym_divide] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__expression] = STATE(15),
    [sym_plus] = STATE(15),
    [sym__term] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_times] = STATE(15),
    [sym_minus] = STATE(15),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_2] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(31),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(33),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(35),
  },
  [34] = {
    [sym_application] = STATE(22),
    [sym_variable] = STATE(22),
    [sym_divide] = STATE(22),
    [sym_boolean] = STATE(22),
    [sym__expression] = STATE(22),
    [sym_plus] = STATE(22),
    [sym__term] = STATE(22),
    [sym_abstraction] = STATE(22),
    [sym_times] = STATE(22),
    [sym_minus] = STATE(22),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_3] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_2] = ACTIONS(41),
    [anon_sym_4] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(45),
    [sym__identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(47),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(49),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(24),
  [55] = {.count = 1, .reusable = true}, SHIFT(25),
  [57] = {.count = 1, .reusable = true}, SHIFT(26),
  [59] = {.count = 1, .reusable = true}, SHIFT(27),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_application, 2),
  [63] = {.count = 1, .reusable = true}, SHIFT(28),
  [65] = {.count = 1, .reusable = true}, SHIFT(29),
  [67] = {.count = 1, .reusable = true}, SHIFT(30),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__term, 3),
  [71] = {.count = 1, .reusable = true}, SHIFT(31),
  [73] = {.count = 1, .reusable = true}, SHIFT(32),
  [75] = {.count = 1, .reusable = true}, SHIFT(33),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_plus, 3),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_times, 3),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_minus, 3),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_divide, 3),
  [85] = {.count = 1, .reusable = true}, SHIFT(34),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_abstraction, 4),
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
