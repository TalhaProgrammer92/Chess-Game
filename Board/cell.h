#ifndef CELL_H
#define CELL_H

#include "../Misc/position.h"

namespace Board
{
    // * Structure - Stores information about a piece on the board
    struct PieceInfo
    {
        int type, index; // ? Type - Type of the piece (e.g., pawn, knight, etc.), Index - Unique identifier for the piece
        bool is_active; // ? is_active - Whether the piece is currently active on the board
    };

    // * PieceInfo related functions
    bool ContainsPawn(PieceInfo* piece_info);
    bool ContainsKnight(PieceInfo* piece_info);
    bool ContainsBishop(PieceInfo* piece_info);
    bool ContainsRook(PieceInfo* piece_info);
    bool ContainsQueen(PieceInfo* piece_info);
    bool ContainsKing(PieceInfo* piece_info);
    bool ContainsPiece(PieceInfo* piece_info);
    bool IsBlack(PieceInfo* piece_info);
    bool IsWhite(PieceInfo* piece_info);

    // ? Class - Represents a cell on the board
    class Cell
    {
        // * Attributes
        Misc::Position* position;
    
    public:
        PieceInfo* piece_info;
    
        // * Constructor & Destructor
        Cell();
        Cell(Misc::Position position);
        Cell(Misc::Position position, PieceInfo piece_info);

        // * Getter
        Misc::Position get_position() const;

        // * Method - Check if cell is empty
        bool is_empty() const;

        // * Method - Display cell information
        void display_info();

        // * Method - Display cell
        void display();

        // * Destructor
        ~Cell();
    };
}

#endif