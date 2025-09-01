#include <iostream>
#include "pawn.h"
#include "piece.h"

using namespace std;
using namespace Piece;

// * Constructor
Pawn::Pawn(Misc::Position position, int group) : PieceBase(position, group) {}

// * Method - Get possible moves
void Pawn::get_possible_moves()
{
    possible_absolute_moves.clear();

    // ? Capture diagonally
    possible_absolute_moves.push_back(Misc::Position(2, 0));
    possible_absolute_moves.push_back(Misc::Position(1, 0));
    possible_absolute_moves.push_back(Misc::Position(1, 1));
}

// * Destructor
Pawn::~Pawn()
{
    this->possible_absolute_moves.clear();
}
