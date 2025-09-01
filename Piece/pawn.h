#ifndef PAWN_H
#define PAWN_H

#include "piece.h"

namespace Piece
{
    class Pawn : public PieceBase
    {
    public:
        // * Constructor
        Pawn(Misc::Position position, int group);

        // * Method - Get possible moves
        void get_possible_moves() override;

        // * Destructor
        ~Pawn();
    };
}

#endif