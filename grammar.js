/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 */

module.exports = grammar({
  name: 'properties',

  extras: _ => [],

  externals: $ => [
    $._eof
  ],

  rules: {
    file: $ => repeat(seq(
      optional($._space),
      optional(choice(
        $.property,
        $.comment
      )),
      choice($._eol, $._eof)
    )),

    property: $ => seq(
      $.key,
      optional($._space),
      optional(choice('=', ':')),
      optional($._space),
      optional($.value)
    ),

    key: $ => prec.right(
      repeat1(
        choice(
          '.',
          $._char,
          $.escape,
          $._index
        )
      )
    ),

    _index: $ => seq(
      '[', alias(repeat($._char), $.index), ']'
    ),

    value: $ => repeat1(choice(
      $._char,
      $.escape,
      $.substitution,
      $._linebreak
    )),

    substitution: $ => seq(
      '${',
      repeat1(choice(
        $.key,
        $.substitution
      )),
      optional($._default),
      '}'
    ),

    _default: $ => seq(
      ':',
      field(
        'default',
        repeat1(choice(
          $._char,
          $.escape,
          $.substitution
        )),
      )
    ),

    _linebreak: $ => seq('\\', $._eol),

    escape: _ => choice(
      /\\[^\r\n]/, /\\u[0-9a-fA-F]{4}/
    ),

    comment: _ => /[#!].*/,

    _space: _ => /[ \t\f]/,

    _char: _ => prec(-1, /./),

    _eol: _ => /[\r\n]|\r\n/
  }
});
