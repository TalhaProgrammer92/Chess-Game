#pragma once

#include <string>

namespace UI
{
    // * Text style ANSI codes
    enum class TextStyle {
        None = -1,
        Bold = 1,
        Dim = 2,
        Italic = 3,
        Underline = 4,
        Blink = 5,
        Reverse = 7,
        Hidden = 8,
        Strikethrough = 9
    };

    // * Function to get ANSI code for a style
    inline std::string get_ansi(TextStyle style) {
        return (style != TextStyle::None) ? "\033[" + std::to_string(static_cast<int>(style)) + "m" : "";
    }

    class Style
    {
    public:
        // * Attributes
        TextStyle style;

        // * Constructor
		Style() : style(TextStyle::None) {}
		Style(TextStyle style) : style(style) {}

        // * Method - Get ANSI code string
        std::string to_ansi() const
        {
			return UI::get_ansi(style);
        }
    };
}
