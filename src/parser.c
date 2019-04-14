#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 56
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  anon_sym_3 = 8,
  anon_sym_4 = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_5 = 12,
  anon_sym_SLASH = 13,
  sym_number = 14,
  anon_sym_6 = 15,
  anon_sym_7 = 16,
  sym__identifier = 17,
  sym_program = 18,
  sym_assignment = 19,
  sym__term = 20,
  sym_paren_term = 21,
  sym_abstraction = 22,
  sym_application = 23,
  sym_binding = 24,
  sym_variable = 25,
  sym_bin_op = 26,
  sym_boolean = 27,
  aux_sym_program_repeat1 = 28,
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
  [anon_sym_3] = "∧",
  [anon_sym_4] = "∨",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_5] = "·",
  [anon_sym_SLASH] = "/",
  [sym_number] = "number",
  [anon_sym_6] = "⊤",
  [anon_sym_7] = "⊥",
  [sym__identifier] = "_identifier",
  [sym_program] = "program",
  [sym_assignment] = "assignment",
  [sym__term] = "_term",
  [sym_paren_term] = "paren_term",
  [sym_abstraction] = "abstraction",
  [sym_application] = "application",
  [sym_binding] = "binding",
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
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
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
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
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
  [sym_binding] = {
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
      if (lookahead == 8213)
        ADVANCE(10);
      if (lookahead == 8743)
        ADVANCE(11);
      if (lookahead == 8744)
        ADVANCE(12);
      if (lookahead == 8788)
        ADVANCE(13);
      if (lookahead == 8868)
        ADVANCE(14);
      if (lookahead == 8869)
        ADVANCE(15);
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
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101))
        ADVANCE(17);
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
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 954) ||
          (956 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101))
        ADVANCE(17);
      END_STATE();
    case 18:
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
      if (lookahead == 8213)
        ADVANCE(10);
      if (lookahead == 8743)
        ADVANCE(11);
      if (lookahead == 8744)
        ADVANCE(12);
      if (lookahead == 8868)
        ADVANCE(14);
      if (lookahead == 8869)
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101))
        ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(2);
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
      if (lookahead == 8213)
        ADVANCE(10);
      if (lookahead == 8743)
        ADVANCE(11);
      if (lookahead == 8744)
        ADVANCE(12);
      if (lookahead == 8788)
        ADVANCE(13);
      if (lookahead == 8868)
        ADVANCE(14);
      if (lookahead == 8869)
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101))
        ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == 8213)
        ADVANCE(10);
      if (lookahead == 8788)
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == 8213)
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '\n')
        ADVANCE(23);
      if (lookahead == '(')
        ADVANCE(2);
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
      if (lookahead == 8213)
        ADVANCE(10);
      if (lookahead == 8743)
        ADVANCE(11);
      if (lookahead == 8744)
        ADVANCE(12);
      if (lookahead == 8868)
        ADVANCE(14);
      if (lookahead == 8869)
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (890 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2237) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3333 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          lookahead == 3635 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3763 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5873 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6276) ||
          (6279 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8473 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8493) ||
          (8495 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          lookahead == 8579 ||
          lookahead == 8580 ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          lookahead == 11823 ||
          lookahead == 12293 ||
          lookahead == 12294 ||
          (12337 <= lookahead && lookahead <= 12341) ||
          lookahead == 12347 ||
          lookahead == 12348 ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12730) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19893) ||
          (19968 <= lookahead && lookahead <= 40943) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42725) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42950) ||
          (42999 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43879) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65019) ||
          (65136 <= lookahead && lookahead <= 65140) ||
          (65142 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66368) ||
          (66370 <= lookahead && lookahead <= 66377) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          lookahead == 70751 ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          lookahead == 71935 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101106) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173782) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101))
        ADVANCE(17);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 22},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_paren_term] = STATE(9),
    [sym_abstraction] = STATE(9),
    [sym_boolean] = STATE(9),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_program] = STATE(7),
    [sym_application] = STATE(9),
    [sym_binding] = STATE(8),
    [sym_assignment] = STATE(6),
    [sym__term] = STATE(9),
    [sym_variable] = STATE(9),
    [sym_bin_op] = STATE(9),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_7] = ACTIONS(5),
  },
  [2] = {
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_6] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(15),
    [anon_sym_5] = ACTIONS(15),
    [anon_sym_4] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [anon_sym_3] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__identifier] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_7] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
  },
  [3] = {
    [sym_paren_term] = STATE(12),
    [sym_abstraction] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__term] = STATE(12),
    [sym_variable] = STATE(12),
    [sym_bin_op] = STATE(12),
    [sym_application] = STATE(12),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_7] = ACTIONS(5),
  },
  [4] = {
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_6] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_5] = ACTIONS(23),
    [anon_sym_4] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [anon_sym_3] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__identifier] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_7] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_] = ACTIONS(25),
  },
  [5] = {
    [sym_binding] = STATE(14),
    [sym__identifier] = ACTIONS(27),
    [sym__comment] = ACTIONS(3),
  },
  [6] = {
    [sym_paren_term] = STATE(16),
    [sym_abstraction] = STATE(16),
    [sym_boolean] = STATE(16),
    [aux_sym_program_repeat1] = STATE(15),
    [sym_application] = STATE(16),
    [sym_binding] = STATE(8),
    [sym_assignment] = STATE(15),
    [sym__term] = STATE(16),
    [sym_variable] = STATE(16),
    [sym_bin_op] = STATE(16),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [sym_number] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_7] = ACTIONS(5),
  },
  [7] = {
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(31),
  },
  [8] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_] = ACTIONS(33),
  },
  [9] = {
    [sym_paren_term] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__term] = STATE(21),
    [sym_variable] = STATE(21),
    [sym_bin_op] = STATE(21),
    [sym_application] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_7] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(39),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(39),
    [anon_sym_4] = ACTIONS(41),
    [sym_number] = ACTIONS(43),
    [anon_sym_3] = ACTIONS(41),
  },
  [10] = {
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_6] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(23),
    [anon_sym_5] = ACTIONS(23),
    [anon_sym_4] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [anon_sym_3] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__identifier] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_7] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
  },
  [11] = {
    [sym_binding] = STATE(22),
    [sym__identifier] = ACTIONS(27),
    [sym__comment] = ACTIONS(3),
  },
  [12] = {
    [sym_paren_term] = STATE(27),
    [sym_abstraction] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym__term] = STATE(27),
    [sym_variable] = STATE(27),
    [sym_bin_op] = STATE(27),
    [sym_application] = STATE(27),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_7] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(51),
  },
  [13] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(25),
  },
  [14] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(55),
  },
  [15] = {
    [sym_binding] = STATE(8),
    [aux_sym_program_repeat1] = STATE(15),
    [sym_assignment] = STATE(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(57),
    [sym__identifier] = ACTIONS(59),
    [anon_sym_2] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [anon_sym_7] = ACTIONS(57),
  },
  [16] = {
    [sym_paren_term] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__term] = STATE(21),
    [sym_variable] = STATE(21),
    [sym_bin_op] = STATE(21),
    [sym_application] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_7] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(39),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(39),
    [anon_sym_4] = ACTIONS(41),
    [sym_number] = ACTIONS(43),
    [anon_sym_3] = ACTIONS(41),
  },
  [17] = {
    [sym_paren_term] = STATE(33),
    [sym_abstraction] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym__term] = STATE(33),
    [sym_variable] = STATE(33),
    [sym_bin_op] = STATE(33),
    [sym_application] = STATE(33),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__identifier] = ACTIONS(68),
    [sym_number] = ACTIONS(70),
    [anon_sym_2] = ACTIONS(72),
    [anon_sym_7] = ACTIONS(64),
  },
  [18] = {
    [sym_paren_term] = STATE(34),
    [sym_abstraction] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym__term] = STATE(34),
    [sym_variable] = STATE(34),
    [sym_bin_op] = STATE(34),
    [sym_application] = STATE(34),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(74),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_7] = ACTIONS(5),
  },
  [19] = {
    [sym_paren_term] = STATE(35),
    [sym_abstraction] = STATE(35),
    [sym_boolean] = STATE(35),
    [sym__term] = STATE(35),
    [sym_variable] = STATE(35),
    [sym_bin_op] = STATE(35),
    [sym_application] = STATE(35),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(76),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_7] = ACTIONS(5),
  },
  [20] = {
    [sym_paren_term] = STATE(36),
    [sym_abstraction] = STATE(36),
    [sym_boolean] = STATE(36),
    [sym__term] = STATE(36),
    [sym_variable] = STATE(36),
    [sym_bin_op] = STATE(36),
    [sym_application] = STATE(36),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(78),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_7] = ACTIONS(5),
  },
  [21] = {
    [sym_paren_term] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__term] = STATE(21),
    [sym_variable] = STATE(21),
    [sym_bin_op] = STATE(21),
    [sym_application] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_6] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym__identifier] = ACTIONS(80),
    [anon_sym_2] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_7] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(39),
    [anon_sym_4] = ACTIONS(41),
    [sym_number] = ACTIONS(80),
    [anon_sym_3] = ACTIONS(41),
  },
  [22] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(82),
  },
  [23] = {
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_6] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym__comment] = ACTIONS(3),
    [anon_sym_2] = ACTIONS(84),
    [anon_sym_5] = ACTIONS(84),
    [anon_sym_4] = ACTIONS(84),
    [sym_number] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym__identifier] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_7] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
  },
  [24] = {
    [sym_paren_term] = STATE(38),
    [sym_abstraction] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym__term] = STATE(38),
    [sym_variable] = STATE(38),
    [sym_bin_op] = STATE(38),
    [sym_application] = STATE(38),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(86),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_7] = ACTIONS(5),
  },
  [25] = {
    [sym_paren_term] = STATE(39),
    [sym_abstraction] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym__term] = STATE(39),
    [sym_variable] = STATE(39),
    [sym_bin_op] = STATE(39),
    [sym_application] = STATE(39),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(88),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_7] = ACTIONS(5),
  },
  [26] = {
    [sym_paren_term] = STATE(40),
    [sym_abstraction] = STATE(40),
    [sym_boolean] = STATE(40),
    [sym__term] = STATE(40),
    [sym_variable] = STATE(40),
    [sym_bin_op] = STATE(40),
    [sym_application] = STATE(40),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(90),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_7] = ACTIONS(5),
  },
  [27] = {
    [sym_paren_term] = STATE(27),
    [sym_abstraction] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym__term] = STATE(27),
    [sym_variable] = STATE(27),
    [sym_bin_op] = STATE(27),
    [sym_application] = STATE(27),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_6] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym__identifier] = ACTIONS(80),
    [anon_sym_2] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_7] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(51),
    [sym_number] = ACTIONS(80),
    [anon_sym_3] = ACTIONS(51),
  },
  [28] = {
    [sym_paren_term] = STATE(41),
    [sym_abstraction] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym__term] = STATE(41),
    [sym_variable] = STATE(41),
    [sym_bin_op] = STATE(41),
    [sym_application] = STATE(41),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(92),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_7] = ACTIONS(5),
  },
  [29] = {
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_6] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [sym__identifier] = ACTIONS(94),
    [anon_sym_2] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_7] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [sym__comment] = ACTIONS(96),
    [anon_sym_5] = ACTIONS(94),
    [anon_sym_4] = ACTIONS(94),
    [sym_number] = ACTIONS(94),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_3] = ACTIONS(94),
  },
  [30] = {
    [sym_paren_term] = STATE(42),
    [sym_abstraction] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym__term] = STATE(42),
    [sym_variable] = STATE(42),
    [sym_bin_op] = STATE(42),
    [sym_application] = STATE(42),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(98),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_7] = ACTIONS(5),
  },
  [31] = {
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_6] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [sym__identifier] = ACTIONS(100),
    [anon_sym_2] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_7] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(100),
    [sym__comment] = ACTIONS(96),
    [anon_sym_5] = ACTIONS(100),
    [anon_sym_4] = ACTIONS(100),
    [sym_number] = ACTIONS(100),
    [anon_sym_LF] = ACTIONS(23),
    [anon_sym_3] = ACTIONS(100),
  },
  [32] = {
    [sym_binding] = STATE(43),
    [sym__identifier] = ACTIONS(27),
    [sym__comment] = ACTIONS(3),
  },
  [33] = {
    [sym_paren_term] = STATE(48),
    [sym_abstraction] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__term] = STATE(48),
    [sym_variable] = STATE(48),
    [sym_bin_op] = STATE(48),
    [sym_application] = STATE(48),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_6] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(106),
    [sym__identifier] = ACTIONS(108),
    [anon_sym_2] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_7] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(112),
    [sym__comment] = ACTIONS(96),
    [anon_sym_5] = ACTIONS(112),
    [anon_sym_4] = ACTIONS(114),
    [sym_number] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(118),
    [anon_sym_3] = ACTIONS(114),
  },
  [34] = {
    [sym_paren_term] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__term] = STATE(21),
    [sym_variable] = STATE(21),
    [sym_bin_op] = STATE(21),
    [sym_application] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [sym__identifier] = ACTIONS(120),
    [anon_sym_2] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(39),
    [anon_sym_4] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(120),
  },
  [35] = {
    [sym_paren_term] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__term] = STATE(21),
    [sym_variable] = STATE(21),
    [sym_bin_op] = STATE(21),
    [sym_application] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [sym__identifier] = ACTIONS(120),
    [anon_sym_2] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(120),
    [anon_sym_4] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(120),
  },
  [36] = {
    [sym_paren_term] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__term] = STATE(21),
    [sym_variable] = STATE(21),
    [sym_bin_op] = STATE(21),
    [sym_application] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [sym__identifier] = ACTIONS(120),
    [anon_sym_2] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(39),
    [anon_sym_4] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(120),
  },
  [37] = {
    [sym_paren_term] = STATE(49),
    [sym_abstraction] = STATE(49),
    [sym_boolean] = STATE(49),
    [sym__term] = STATE(49),
    [sym_variable] = STATE(49),
    [sym_bin_op] = STATE(49),
    [sym_application] = STATE(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [sym_number] = ACTIONS(122),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_7] = ACTIONS(5),
  },
  [38] = {
    [sym_paren_term] = STATE(27),
    [sym_abstraction] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym__term] = STATE(27),
    [sym_variable] = STATE(27),
    [sym_bin_op] = STATE(27),
    [sym_application] = STATE(27),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [sym__identifier] = ACTIONS(120),
    [anon_sym_2] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(120),
  },
  [39] = {
    [sym_paren_term] = STATE(27),
    [sym_abstraction] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym__term] = STATE(27),
    [sym_variable] = STATE(27),
    [sym_bin_op] = STATE(27),
    [sym_application] = STATE(27),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [sym__identifier] = ACTIONS(120),
    [anon_sym_2] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(120),
    [anon_sym_4] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(120),
  },
  [40] = {
    [sym_paren_term] = STATE(27),
    [sym_abstraction] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym__term] = STATE(27),
    [sym_variable] = STATE(27),
    [sym_bin_op] = STATE(27),
    [sym_application] = STATE(27),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_6] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [sym__identifier] = ACTIONS(120),
    [anon_sym_2] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_7] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(120),
  },
  [41] = {
    [sym_paren_term] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__term] = STATE(21),
    [sym_variable] = STATE(21),
    [sym_bin_op] = STATE(21),
    [sym_application] = STATE(21),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [anon_sym_2] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_7] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(39),
    [anon_sym_4] = ACTIONS(41),
    [sym_number] = ACTIONS(43),
    [anon_sym_3] = ACTIONS(41),
  },
  [42] = {
    [sym_paren_term] = STATE(27),
    [sym_abstraction] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym__term] = STATE(27),
    [sym_variable] = STATE(27),
    [sym_bin_op] = STATE(27),
    [sym_application] = STATE(27),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_7] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(51),
  },
  [43] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(128),
  },
  [44] = {
    [sym_paren_term] = STATE(52),
    [sym_abstraction] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym__term] = STATE(52),
    [sym_variable] = STATE(52),
    [sym_bin_op] = STATE(52),
    [sym_application] = STATE(52),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__identifier] = ACTIONS(68),
    [sym_number] = ACTIONS(130),
    [anon_sym_2] = ACTIONS(72),
    [anon_sym_7] = ACTIONS(64),
  },
  [45] = {
    [sym_paren_term] = STATE(53),
    [sym_abstraction] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym__term] = STATE(53),
    [sym_variable] = STATE(53),
    [sym_bin_op] = STATE(53),
    [sym_application] = STATE(53),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__identifier] = ACTIONS(68),
    [sym_number] = ACTIONS(132),
    [anon_sym_2] = ACTIONS(72),
    [anon_sym_7] = ACTIONS(64),
  },
  [46] = {
    [sym_paren_term] = STATE(54),
    [sym_abstraction] = STATE(54),
    [sym_boolean] = STATE(54),
    [sym__term] = STATE(54),
    [sym_variable] = STATE(54),
    [sym_bin_op] = STATE(54),
    [sym_application] = STATE(54),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__identifier] = ACTIONS(68),
    [sym_number] = ACTIONS(134),
    [anon_sym_2] = ACTIONS(72),
    [anon_sym_7] = ACTIONS(64),
  },
  [47] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym__identifier] = ACTIONS(136),
    [anon_sym_2] = ACTIONS(136),
    [sym_number] = ACTIONS(136),
    [anon_sym_7] = ACTIONS(136),
  },
  [48] = {
    [sym_paren_term] = STATE(48),
    [sym_abstraction] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__term] = STATE(48),
    [sym_variable] = STATE(48),
    [sym_bin_op] = STATE(48),
    [sym_application] = STATE(48),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_6] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym__identifier] = ACTIONS(138),
    [anon_sym_2] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_7] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(112),
    [sym__comment] = ACTIONS(96),
    [anon_sym_5] = ACTIONS(112),
    [anon_sym_4] = ACTIONS(114),
    [sym_number] = ACTIONS(138),
    [anon_sym_LF] = ACTIONS(80),
    [anon_sym_3] = ACTIONS(114),
  },
  [49] = {
    [sym_paren_term] = STATE(27),
    [sym_abstraction] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym__term] = STATE(27),
    [sym_variable] = STATE(27),
    [sym_bin_op] = STATE(27),
    [sym_application] = STATE(27),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym__identifier] = ACTIONS(17),
    [anon_sym_2] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_7] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_4] = ACTIONS(51),
    [sym_number] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(51),
  },
  [50] = {
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_6] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(140),
    [sym__identifier] = ACTIONS(140),
    [anon_sym_2] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_7] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [sym__comment] = ACTIONS(96),
    [anon_sym_5] = ACTIONS(140),
    [anon_sym_4] = ACTIONS(140),
    [sym_number] = ACTIONS(140),
    [anon_sym_LF] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(140),
  },
  [51] = {
    [sym_paren_term] = STATE(55),
    [sym_abstraction] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym__term] = STATE(55),
    [sym_variable] = STATE(55),
    [sym_bin_op] = STATE(55),
    [sym_application] = STATE(55),
    [sym__comment] = ACTIONS(3),
    [anon_sym_6] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__identifier] = ACTIONS(68),
    [sym_number] = ACTIONS(142),
    [anon_sym_2] = ACTIONS(72),
    [anon_sym_7] = ACTIONS(64),
  },
  [52] = {
    [sym_paren_term] = STATE(48),
    [sym_abstraction] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__term] = STATE(48),
    [sym_variable] = STATE(48),
    [sym_bin_op] = STATE(48),
    [sym_application] = STATE(48),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_6] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(144),
    [sym__identifier] = ACTIONS(144),
    [anon_sym_2] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym_7] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(112),
    [sym__comment] = ACTIONS(96),
    [anon_sym_5] = ACTIONS(112),
    [anon_sym_4] = ACTIONS(144),
    [sym_number] = ACTIONS(144),
    [anon_sym_LF] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(144),
  },
  [53] = {
    [sym_paren_term] = STATE(48),
    [sym_abstraction] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__term] = STATE(48),
    [sym_variable] = STATE(48),
    [sym_bin_op] = STATE(48),
    [sym_application] = STATE(48),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_6] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(144),
    [sym__identifier] = ACTIONS(144),
    [anon_sym_2] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym_7] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(144),
    [sym__comment] = ACTIONS(96),
    [anon_sym_5] = ACTIONS(144),
    [anon_sym_4] = ACTIONS(144),
    [sym_number] = ACTIONS(144),
    [anon_sym_LF] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(144),
  },
  [54] = {
    [sym_paren_term] = STATE(48),
    [sym_abstraction] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__term] = STATE(48),
    [sym_variable] = STATE(48),
    [sym_bin_op] = STATE(48),
    [sym_application] = STATE(48),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_6] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(144),
    [sym__identifier] = ACTIONS(144),
    [anon_sym_2] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_7] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(112),
    [sym__comment] = ACTIONS(96),
    [anon_sym_5] = ACTIONS(112),
    [anon_sym_4] = ACTIONS(144),
    [sym_number] = ACTIONS(144),
    [anon_sym_LF] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(144),
  },
  [55] = {
    [sym_paren_term] = STATE(48),
    [sym_abstraction] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__term] = STATE(48),
    [sym_variable] = STATE(48),
    [sym_bin_op] = STATE(48),
    [sym_application] = STATE(48),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_6] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(106),
    [sym__identifier] = ACTIONS(108),
    [anon_sym_2] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_7] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(112),
    [sym__comment] = ACTIONS(96),
    [anon_sym_5] = ACTIONS(112),
    [anon_sym_4] = ACTIONS(114),
    [sym_number] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(124),
    [anon_sym_3] = ACTIONS(114),
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
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_binding, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(13),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
  [41] = {.count = 1, .reusable = true}, SHIFT(20),
  [43] = {.count = 1, .reusable = true}, SHIFT(21),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, SHIFT(24),
  [49] = {.count = 1, .reusable = true}, SHIFT(25),
  [51] = {.count = 1, .reusable = true}, SHIFT(26),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, SHIFT(28),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_program, 2),
  [64] = {.count = 1, .reusable = true}, SHIFT(29),
  [66] = {.count = 1, .reusable = true}, SHIFT(30),
  [68] = {.count = 1, .reusable = true}, SHIFT(31),
  [70] = {.count = 1, .reusable = true}, SHIFT(33),
  [72] = {.count = 1, .reusable = true}, SHIFT(32),
  [74] = {.count = 1, .reusable = true}, SHIFT(34),
  [76] = {.count = 1, .reusable = true}, SHIFT(35),
  [78] = {.count = 1, .reusable = true}, SHIFT(36),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_application, 2),
  [82] = {.count = 1, .reusable = true}, SHIFT(37),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_paren_term, 3),
  [86] = {.count = 1, .reusable = true}, SHIFT(38),
  [88] = {.count = 1, .reusable = true}, SHIFT(39),
  [90] = {.count = 1, .reusable = true}, SHIFT(40),
  [92] = {.count = 1, .reusable = true}, SHIFT(41),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [96] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [98] = {.count = 1, .reusable = true}, SHIFT(42),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [102] = {.count = 1, .reusable = false}, SHIFT(44),
  [104] = {.count = 1, .reusable = false}, SHIFT(29),
  [106] = {.count = 1, .reusable = false}, SHIFT(30),
  [108] = {.count = 1, .reusable = false}, SHIFT(31),
  [110] = {.count = 1, .reusable = false}, SHIFT(32),
  [112] = {.count = 1, .reusable = false}, SHIFT(45),
  [114] = {.count = 1, .reusable = false}, SHIFT(46),
  [116] = {.count = 1, .reusable = false}, SHIFT(48),
  [118] = {.count = 1, .reusable = true}, SHIFT(47),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_bin_op, 3),
  [122] = {.count = 1, .reusable = true}, SHIFT(49),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_abstraction, 4),
  [126] = {.count = 1, .reusable = true}, SHIFT(50),
  [128] = {.count = 1, .reusable = true}, SHIFT(51),
  [130] = {.count = 1, .reusable = true}, SHIFT(52),
  [132] = {.count = 1, .reusable = true}, SHIFT(53),
  [134] = {.count = 1, .reusable = true}, SHIFT(54),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_assignment, 4),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_application, 2),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_paren_term, 3),
  [142] = {.count = 1, .reusable = true}, SHIFT(55),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_bin_op, 3),
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
