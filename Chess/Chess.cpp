#include <iostream>

#include "../Chess/score.h"
#include "../Chess/name.h"
#include "../Chess/player.h"

#include "../Chess/text.h"
#include "../Chess/color.h"
#include "../Chess/style.h"

#include "../Chess/position.h"
#include "../Chess/unicode.h"

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

	cout << Misc::Piece::White::KING << endl;
	cout << Misc::Piece::Black::KING << endl;
	cout << Misc::get_empty_cell(Misc::Position(1, 2)) << endl;
}