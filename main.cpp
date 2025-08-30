#include <iostream>
#include "UI/text.h"
#include "UI/color.h"
#include "UI/style.h"

using namespace std;

int main()
{
    UI::Style style(UI::TextStyle::Bold);
    UI::Color color(UI::ForegroundColor::Black, UI::BackgroundColor::Magenta);
    UI::Text text("Hello, World!", &color, &style);
    text.display_ln();
}
