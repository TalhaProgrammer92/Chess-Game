#include <iostream>
#include "messages.h"
#include "text.h"

using namespace std;

// * Method - Display an info message
void UI::Messages::info(const string& message)
{
    Message msg(message, new Color(), new Style(TextStyle::Bold));
    msg.display_with_prefix(UI::INFO_TEXT);
}

// * Method - Display a warning message
void UI::Messages::warning(const string& message)
{
    Message msg(message, new Color(), new Style(TextStyle::Bold));
    msg.display_with_prefix(UI::WARNING_TEXT);
}

// * Method - Display an error message
void UI::Messages::error(const string& message)
{
    Message msg(message, new Color(), new Style(TextStyle::Bold));
    msg.display_with_prefix(UI::ERROR_TEXT);
}
