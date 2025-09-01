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

    int direction = (group == 0) ? 1 : -1; // ? Group 0 moves "down", Group 1 moves "up"
    int start_row = (group == 0) ? 1 : 6;  // ? Starting row for each group

    // ? Move forward one square
    possible_absolute_moves.push_back(Misc::Position(position.get_row() + direction, position.get_column()));

    // ? Move forward two squares from starting position
    if (position.get_row() == start_row)
    {
        possible_absolute_moves.push_back(Misc::Position(position.get_row() + 2 * direction, position.get_column()));
    }

    // ? Capture diagonally
    possible_absolute_moves.push_back(Misc::Position(position.get_row() + direction, position.get_column() - 1));
    possible_absolute_moves.push_back(Misc::Position(position.get_row() + direction, position.get_column() + 1));
}
