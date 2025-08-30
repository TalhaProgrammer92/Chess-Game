#include <iostream>
#include "UI/text.h"
#include "UI/color.h"
#include "UI/style.h"
#include "UI/message.h"
#include "UI/messages.h"

using namespace std;

int main()
{
    // UI::Style style(UI::TextStyle::Bold);
    // UI::Color color(UI::ForegroundColor::Green, UI::BackgroundColor::None);
    // UI::Text text("Hello, World!", &color, &style);
    // // text.display_ln();
    // UI::Message msg(text);
    // msg.display_with_prefix("[INFO]");
    UI::Messages::info("This is an info message.");
    UI::Messages::warning("This is a warning message.");
    UI::Messages::error("This is an error message.");
}
