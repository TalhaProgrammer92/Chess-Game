#include <iostream>
#include <vector>
#include "piece.h"
#include "../Misc/position.h"
#include "../UI/messages.h"

using namespace std;
using namespace Piece;
using namespace Misc;
using namespace UI;

// * Constructor
PieceBase::PieceBase(Position position, int group)
{
    this->position = position;
    this->group = group;
}

// * Method - Display piece information
void PieceBase::display_info()
{
    string group = (this->group == 0) ? "White" : "Black";
    string info = "Piece Type: " + group + ", Position: (" + to_string(this->position.get_row()) + ", " + to_string(this->position.get_column()) + ")";
    Messages::info(info);
}

// * Destructor
PieceBase::~PieceBase()
{
    this->possible_absolute_moves.clear();
}
