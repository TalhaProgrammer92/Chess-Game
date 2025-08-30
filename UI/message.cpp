#include <iostream>
#include "message.h"
#include "text.h"

using namespace std;

// * Constructor
UI::Message::Message(Text &other) : Text(other) {}
UI::Message::Message(string text, Color *color, Style *style) : Text(text, color, style) {}

// * Method - Display the message with a prefix
void UI::Message::display_with_prefix(const string& prefix)
{
    cout << prefix + " ";
    display_ln();
}

void UI::Message::display_with_prefix(Text prefix)
{
    prefix.text += " ";
    prefix.display();
    display_ln();
}
