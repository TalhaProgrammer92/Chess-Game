#include <iostream>
#include "score.h"

using namespace std;

// * Constructor
Player::Score::Score() : score(0) {}
Player::Score::Score(const unsigned int &score) : score(score) {}

// * Getter
unsigned int Player::Score::get() const
{
    return score;
}

// * Method - Increase score
void Player::Score::increment(const unsigned int &value)
{
    score += value;
}

// * Method - Reset Score
void Player::Score::reset()
{
    score = 0;
}
