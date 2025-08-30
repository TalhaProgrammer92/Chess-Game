#include <iostream>
#include "player.h"
#include "name.h"
#include "score.h"

using namespace std;
using namespace Player;

// * Constructor
GamePlayer::GamePlayer(const Name &name, const Score &score)
{
    this->name = new Name(name);
    this->score = new Score(score);
}

// * Method - Display Info
void GamePlayer::display_info()
{
    cout << "Name:\t" << name->get() << endl;
    cout << "Score:\t" << score->get() << endl;
}
