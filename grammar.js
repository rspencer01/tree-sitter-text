module.exports = grammar({
  name: 'text',

  rules: {
    source_file : $ => seq(repeat($.paragraph), $.final_paragraph),

    final_paragraph : $ => repeat1($.line),

    paragraph : $ => seq(repeat1($.line), repeat1($._blankline)),

    _blankline : $ => /[\n\r]/,

    line : $ => seq(repeat1(choice($._whitespace, $.word)), /[\n\r]/),

    _whitespace : $ => /[\t ]/,

    word : $ => /[^\s]+/,
  },
  extras : $ => [],
});
