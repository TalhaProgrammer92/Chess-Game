#include <iostream>
#include "UI/text.h"

using namespace std;

// * Constructor
UI::Text::Text() {}
UI::Text::Text(string text) : text(text) {}

// * Display methods
void UI::Text::display()
{
    cout << text;
}
void UI::Text::display_ln()
{
    display(); cout << endl;
}
