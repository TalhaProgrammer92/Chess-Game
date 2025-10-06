#pragma once

#include "color.h"
#include "style.h"
#include <string>
#include <iostream>

using namespace std;

namespace UI
{
    class Text
    {
    public:
        // Attributes
        string text;
        Color* color;
        Style* style;

        // Constructor
		Text() : color(nullptr), style(nullptr) {}
		Text(string text, Color *color, Style *style) : text(text), color(color), style(style) {}
		Text(const Text& other) : text(other.text), color(new Color(*other.color)), style(new Style(*other.style)) {}

        // Method - Display the text
        void display(bool line_break = false)
        {
            string color_code = (color != nullptr) ? color->to_ansi() : "";
            string style_code = (style != nullptr) ? style->to_ansi() : "";
            cout << color_code + style_code + text + "\033[0m";
			if (line_break) cout << endl;
        }

        // Destructor
        ~Text()
        {
			delete color;
			delete style;
        }
    };
}
