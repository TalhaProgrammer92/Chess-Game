#ifndef PIECE_H
#define PIECE_H

#include "../Misc/position.h"
#include "../UI/messages.h"
#include <vector>

namespace Piece
{
    // ? Base class for all pieces
    class PieceBase
    {
    public:
        // * Attributes
        std::vector<Misc::Position> possible_absolute_moves;
        Misc::Position position;
        int group;

        // * Constructor
        PieceBase(Misc::Position position, int group);

        // * Method - Get possible moves
        virtual void get_possible_moves() = 0;

        // * Method - Display piece information
        void display_info();

        // * Method - Display piece
        // void display();

        // * Destructor
        ~PieceBase();
    };
}

#endif