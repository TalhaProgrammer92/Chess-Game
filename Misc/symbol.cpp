#include <iostream>
#include "symbol.h"
#include "../UI/text.h"

using namespace std;

// * Constructor
Misc::Symbol::Symbol() : UI::Text() {}
Misc::Symbol::Symbol(string character, UI::Color color) : UI::Text(character, new UI::Color(color), nullptr) {}

// * Getter
string Misc::Symbol::get() const
{
    return text;
}

// * Setter
void Misc::Symbol::set(string character)
{
    if (character.length()) text = character;
}

// * Display method
void Misc::Symbol::display()
{
    UI::Text::display();
}

// * Destructor
Misc::Symbol::~Symbol()
{
    delete color;
    delete style;
}

// * Get empty cell based on position
Misc::Symbol Misc::get_empty_cell(Position &pos)
{
    int rem = (pos.get_row() + pos.get_column()) % 2;

    string cell_symbol = (rem) ? Misc::Unicode::EmptyCell::BLACK : Misc::Unicode::EmptyCell::WHITE;
    UI::Color *cell_color = (rem) ? new UI::Color(UI::ForegroundColor::Red, UI::BackgroundColor::None)
                                  : new UI::Color(UI::ForegroundColor::Blue, UI::BackgroundColor::None);

    return Misc::Symbol(cell_symbol, *cell_color);
}
