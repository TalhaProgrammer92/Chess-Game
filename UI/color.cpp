#include <iostream>
#include "color.h"

using namespace std;

// * Constructor
UI::Color::Color() : fg(ForegroundColor::None), bg(BackgroundColor::None) {}
UI::Color::Color(ForegroundColor fg, BackgroundColor bg) : fg(fg), bg(bg) {}

// * Method - Get ANSI code string
string UI::Color::to_ansi() const
{
    return UI::to_ansi_code(fg, bg);
}
