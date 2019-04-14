const rewritePattern = require('regexpu-core');

module.exports = grammar({
  name: 'demoniclambda',

  extras: $ => [
    $._comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  rules: {
    program: $ => seq(
        repeat($.assignment),
        $._term
    ),

    _comment: $ => token(
      seq('―', /.*/)
    ),

    assignment: $ => seq(
        $.binding,
        '≔',
        $._term,
        '\n'
    ),

    _term: $ => choice(
      $.paren_term,
      $.abstraction,
      $.application,
      $.bin_op,
      $.variable,
      $.number,
      $.boolean
    ),

    paren_term : $ => seq(
        '(',
        $._term,
        ')'
    ),

    abstraction : $ => seq(
      'λ',
      $.binding,
      '.',
      $._term
    ),

    application : $ => prec.left(
      2,
      seq(
        $._term,
        $._term
      )
    ),

    binding: $ => $._identifier,

    variable: $ => $._identifier,

    bin_op: $ => choice(
        prec.left(
            3,
            seq(
                $._term,
                choice('∧', '∨'),
                $._term
            )
        ),
        prec.left(
            4,
            seq(
                $._term,
                choice('+', '-'),
                $._term
            )
        ),
        prec.left(
            5,
            seq(
                $._term,
                choice('·', '/'),
                $._term
            )
        )
    ),

    number: $ => /\d+/,

    boolean : $ => choice(
      '⊤',
      '⊥'
    ),

    _identifier: $ => new RegExp(rewritePattern('[^\\P{L}λ]+', 'u', {
      'unicodePropertyEscape': true,
      'useUnicodeFlag': true
    }), 'u'),
  }
});
