#ifndef TEXT_H
#define TEXT_H

#include "color.h"
#include "style.h"
#include <string>

using namespace std;

namespace UI
{
    class Text
    {
    public:
        // * Attributes
        string text;
        Color* color;
        Style* style;

        // * Constructor
        Text();
        Text(string text, Color *color, Style *style);
        // Text(UI::Text other);

        // * Method - Display the text
        void display();     // ? Single line
        void display_ln();  // ? With line break

        // * Destructor
        ~Text();
    };
}

#endif