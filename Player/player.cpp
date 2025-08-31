#include <iostream>
#include "player.h"
#include "name.h"
#include "score.h"
#include "../UI/messages.h"

using namespace std;
using namespace Player;
using namespace UI;

// * Constructor
GamePlayer::GamePlayer(const Name &name, const Score &score)
{
    this->name = new Name(name);
    this->score = new Score(score);
}

// * Method - Display Info
void GamePlayer::display_info()
{
    Messages::info("Player - Name: " + name->get() + ", Score: " + to_string(score->get()));
}
