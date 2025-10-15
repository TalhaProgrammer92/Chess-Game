#include <iostream>

#include "../Chess/score.h"
#include "../Chess/name.h"
#include "../Chess/player.h"

#include "../Chess/text.h"
#include "../Chess/color.h"
#include "../Chess/style.h"

#include "../Chess/position.h"
#include "../Chess/symbols.h"

#include "../Chess/misc.h"
#include "../Chess/menu.h"

using namespace std;

int main()
{
	/*player::Score score(10);
	score.increment();
	score.increment(4);
	cout << "Score: " << score.getScore() << endl;

	player::Name name1("Alice"), name2("alike");
	cout << "Status: " << (name1 == name2 ? "Equal" : "Not Equal") << endl;*/

	/*player::Player player("Bob");
	player.incrementScore(5);
	player.display();*/

	/*UI::Text text(
		"Talha Ahmad",
		new UI::Color(UI::ForegroundColor::Red, UI::BackgroundColor::White),
		new UI::Style(UI::TextStyle::Bold)
	);
	text.display(true);*/

	/*Misc::Position pos(2, 3);
	pos.display();*/

	/*string label_pos = "a1";
	label_pos[0]--; label_pos[1]--;
	for (int i = 0; i < 8; i++)
	{
		label_pos[0]++;
		label_pos[1] = '0';
		for (int j = 0; j < 8; j++)
		{
			label_pos[1]++;
			Misc::label_to_position(label_pos).display();
		}
	}*/

	/*cout << Misc::Piece::White::KING << endl;
	cout << Misc::Piece::Black::KING << endl;
	cout << Misc::get_empty_cell(Misc::Position(1, 2)) << endl;*/

	/*Menu::Decorator decor(
		"#", new UI::Color(
			UI::ForegroundColor::BrightRed, UI::BackgroundColor::White
		), new UI::Style(UI::TextStyle::Bold)
	);
	decor.display();*/

	/*Menu::OptionsList options(
		new UI::Color(UI::ForegroundColor::BrightYellow, UI::BackgroundColor::None),
		new UI::Style(UI::TextStyle::Bold)
	);
	for (int i = 0; i < 5; i++)
		options.add_option("Option " + to_string(i + 1));
	options.display_all();*/

	//Menu::MenuBase menu(
	//	// Header
	//	new UI::Text(
	//		"Main Menu",
	//		new UI::Color(UI::ForegroundColor::BrightCyan, UI::BackgroundColor::None),
	//		new UI::Style(UI::TextStyle::Bold)
	//	),
	//	// Header Decorator
	//	new Menu::Decorator(
	//		"*", new UI::Color(UI::ForegroundColor::BrightMagenta, UI::BackgroundColor::None),
	//		new UI::Style(UI::TextStyle::Bold)
	//	),
	//	// Options Property
	//	new Menu::OptionsList(
	//		new UI::Color(UI::ForegroundColor::BrightGreen, UI::BackgroundColor::None),
	//		new UI::Style(UI::TextStyle::Bold)
	//	)
	//);
	//menu.add_option("Start Game");
	//menu.add_option("Load Game");
	//menu.add_option("Settings");
	//menu.add_option("Help");
	//menu.add_option("Exit");
	//menu.display();

	Menu::MainMenu main_menu;
	main_menu.display_menu();
	cout << "Option Selected: " << main_menu.track_option_selection() << endl;
}