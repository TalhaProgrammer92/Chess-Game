#include <iostream>
#include "text.h"

using namespace std;

// * Constructor
UI::Text::Text() : color(nullptr), style(nullptr) {}
UI::Text::Text(string text, Color *color, Style *style) : text(text), color(color), style(style) {}
// UI::Text::Text(UI::Text other) : text(other.text), color(other.color), style(other.style) {}

// * Display methods
void UI::Text::display()
{
    string color_code = (color != nullptr) ? color->to_ansi() : "";
    string style_code = (style != nullptr) ? style->to_ansi() : "";
    cout << color_code + style_code + text + "\033[0m";
}
void UI::Text::display_ln()
{
    display(); cout << endl;
}

// * Destructor
UI::Text::~Text()
{
    delete color;
    delete style;
}
