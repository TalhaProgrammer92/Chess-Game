#pragma once

namespace Misc
{
    namespace Piece
    {
        const char KING = 'K';
        const char QUEEN = 'Q';
        const char ROOK = 'R';
        const char BISHOP = 'B';
        const char KNIGHT = 'K';
        const char PAWN = 'P';
    }

    const char EMPTY_CELL = 'o';

    namespace Label
    {
        const char ROW[8] = {
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'
        };
        const char COLUMN[8] = {
            '1', '2', '3', '4', '5', '6', '7', '8'
        };
    }

    namespace Separator
    {
        const char PIPE = '|';
        const string LINE = string(33, '=');
    }
}