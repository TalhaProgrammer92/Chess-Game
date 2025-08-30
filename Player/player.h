#ifndef PLAYER_H
#define PLAYER_H

#include "name.h"
#include "score.h"

namespace Player
{
    class GamePlayer
    {
    public:
        // * Attributes
        Name *name; Score *score;

        // * Constructor
        GamePlayer(const Name &name, const Score &score);

        // * Method - Display info
        void display_info();
    };
}

#endif