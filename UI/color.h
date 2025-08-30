#ifndef COLOR_H
#define COLOR_H

#include <string>
using namespace std;

namespace UI
{
    // * Foreground color ANSI codes
    enum class ForegroundColor {
        None         = -1,
        Black        = 30,
        Red          = 31,
        Green        = 32,
        Yellow       = 33,
        Blue         = 34,
        Magenta      = 35,
        Cyan         = 36,
        White        = 37,
        BrightBlack  = 90,
        BrightRed    = 91,
        BrightGreen  = 92,
        BrightYellow = 93,
        BrightBlue   = 94,
        BrightMagenta= 95,
        BrightCyan   = 96,
        BrightWhite  = 97
    };

    // * Background color ANSI codes
    enum class BackgroundColor {
        None         = -1,
        Black        = 40,
        Red          = 41,
        Green        = 42,
        Yellow       = 43,
        Blue         = 44,
        Magenta      = 45,
        Cyan         = 46,
        White        = 47,
        BrightBlack  = 100,
        BrightRed    = 101,
        BrightGreen  = 102,
        BrightYellow = 103,
        BrightBlue   = 104,
        BrightMagenta= 105,
        BrightCyan   = 106,
        BrightWhite  = 107
    };

    // * Function to convert color enum to ANSI code string
    inline string to_ansi_code(ForegroundColor fg, BackgroundColor bg) {
        string prefix = "\033[", suffix = "m";
        string fg_code = (fg != ForegroundColor::None) ? prefix + to_string(static_cast<int>(fg)) : "";
        string bg_code = (bg != BackgroundColor::None) ? to_string(static_cast<int>(bg)) + suffix : "";
        
        if (fg_code.empty() && bg_code.empty()) return "";
        else if (fg_code.empty()) return prefix + bg_code;
        else if (bg_code.empty()) return fg_code + suffix;
        return fg_code + ";" + bg_code;
        // return "\033[" + to_string(static_cast<int>(fg)) + ";" + to_string(static_cast<int>(bg)) + "m";
    }

    class Color
    {
    public:
        // * Attributes
        ForegroundColor fg;
        BackgroundColor bg;

        // * Constructor
        Color();
        Color(ForegroundColor fg, BackgroundColor bg);

        // * Method - Get ANSI code string
        string to_ansi() const;
    };
}

#endif