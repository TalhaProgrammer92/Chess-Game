#include <iostream>

// #include "UI/text.h"
// #include "UI/color.h"
// #include "UI/style.h"
// #include "UI/message.h"
// #include "UI/messages.h"

#include "Player/score.h"
#include "Player/name.h"
#include "Player/player.h"

#include "Misc/position.h"

using namespace std;

int main()
{
    // UI::Style style(UI::TextStyle::Bold);
    // UI::Color color(UI::ForegroundColor::Green, UI::BackgroundColor::None);
    // UI::Text text("Hello, World!", &color, &style);
    // // text.display_ln();
    // UI::Message msg(text);
    // msg.display_with_prefix("[INFO]");
    // UI::Messages::info("This is an info message.");
    // UI::Messages::warning("This is a warning message.");
    // UI::Messages::error("This is an error message.");

    // Player::Score score(5);
    // score.increment();
    // cout << score.get() << endl;

    // Player::Name name1("Talha"), name2("Ahmad");
//     cout << "Player1:\t" << name1.get() << "\nPlayer2:\t" << name2.get() << endl;
    // cout << "Equal:\t\t" << (name1 == name2) << endl;

    Player::GamePlayer player(
        Player::Name("Talha Ahmad"),
        Player::Score(5)
    );
    player.display_info();

    Misc::Position pos1(1, 2);
    pos1.display();
}
