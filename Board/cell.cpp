#include <iostream>
#include "cell.h"
#include "../Misc/position.h"
#include "../UI/messages.h"

using namespace std;
using namespace Board;
using namespace Misc;
using namespace UI;

// * PieceInfo related functions
bool ContainsPawn(PieceInfo* piece_info)
{
    return piece_info != nullptr && piece_info->type == 1;
}

bool ContainsKnight(PieceInfo* piece_info)
{
    return piece_info != nullptr && piece_info->type == 2;
}

bool ContainsBishop(PieceInfo* piece_info)
{
    return piece_info != nullptr && piece_info->type == 3;
}

bool ContainsRook(PieceInfo* piece_info)
{
    return piece_info != nullptr && piece_info->type == 4;
}

bool ContainsQueen(PieceInfo* piece_info)
{
    return piece_info != nullptr && piece_info->type == 5;
}

bool ContainsKing(PieceInfo* piece_info)
{
    return piece_info != nullptr && piece_info->type == 6;
}

bool ContainsPiece(PieceInfo* piece_info)
{
    return piece_info != nullptr && piece_info->is_active;
}

bool IsBlack(PieceInfo* piece_info)
{
    return piece_info != nullptr && piece_info->index % 2 == 1;
}

bool IsWhite(PieceInfo* piece_info)
{
    return piece_info != nullptr && piece_info->index % 2 == 0;
}

// * Constructor & Destructor
Cell::Cell()
{
    this->position = new Position();
    this->piece_info = nullptr;
}

Cell::Cell(Position position)
{
    this->position = new Position(position);
    this->piece_info = nullptr;
}

Cell::Cell(Position position, PieceInfo piece_info)
{
    this->position = new Position(position);
    this->piece_info = new PieceInfo(piece_info);
}

// * Getter
Position Cell::get_position() const
{
    return *(this->position);
}

// * Method - Check if cell is empty
bool Cell::is_empty() const
{
    return this->piece_info == nullptr || this->piece_info->is_active;
}

// * Method - Display cell information
void Cell::display_info()
{
    string info = "Cell Position: (" + to_string(this->position->get_row()) + ", " + to_string(this->position->get_column()) + "), ";
    if (this->piece_info != nullptr)
    {
        info += "Piece Type: " + to_string(this->piece_info->type) + ", Piece Index: " + to_string(this->piece_info->index) + ", Active: " + (this->piece_info->is_active ? "Yes" : "No");
    }

    Messages::info(info);
}

// * Method - Display cell
void Cell::display() {} // ! Undefined yet
