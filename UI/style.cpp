#include <iostream>
#include "style.h"

using namespace std;

// * Constructor
UI::Style::Style() : style(TextStyle::None) {}
UI::Style::Style(TextStyle style) : style(style) {}

// * Method - Get ANSI code string
string UI::Style::to_ansi() const
{
    return UI::get_ansi(style);
}
