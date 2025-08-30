#ifndef STYLE_H
#define STYLE_H

#include <string>

namespace UI
{
    // * Text style ANSI codes
    enum class TextStyle {
        Bold          = 1,
        Dim           = 2,
        Italic        = 3,
        Underline     = 4,
        Blink         = 5,
        Reverse       = 7,
        Hidden        = 8,
        Strikethrough = 9
    };

    // * Function to get ANSI code for a style
    inline std::string get_ansi(TextStyle style) {
        return "\033[" + std::to_string(static_cast<int>(style)) + "m";
    }

    class Style
    {
    public:
        // * Attributes
        TextStyle style;

        // * Constructor
        Style(TextStyle style);

        // * Method - Get ANSI code string
        std::string to_ansi() const;
    };
}

#endif