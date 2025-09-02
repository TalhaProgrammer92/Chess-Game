#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>
#include "../UI/text.h"
#include "../Misc/position.h"

namespace Misc
{
    // ? Unicode symbols
    namespace Unicode
    {
        namespace Piece
        {
            namespace White
            {
                const std::string KING = "\u2654"; // ♔
                const std::string QUEEN = "\u2655"; // ♕
                const std::string ROOK = "\u2656"; // ♖
                const std::string BISHOP = "\u2657"; // ♗
                const std::string KNIGHT = "\u2658"; // ♘
                const std::string PAWN = "\u2659"; // ♙
            }

            namespace Black
            {
                const std::string KING = "\u265A"; // ♚
                const std::string QUEEN = "\u265B"; // ♛
                const std::string ROOK = "\u265C"; // ♜
                const std::string BISHOP = "\u265D"; // ♝
                const std::string KNIGHT = "\u265E"; // ♞
                const std::string PAWN = "\u265F"; // ♟
            }
        }

        namespace EmptyCell
        {
            const std::string WHITE = "\u25FB"; // ◻
            const std::string BLACK = "\u25FC"; // ◼
        }

        namespace Special
        {
            const std::string CHECK_MARK = "\u2713"; // ✓
            const std::string CROSS_MARK = "\u2717"; // ✗
            const std::string RIGHT_ARROW = "\u2192"; // →
            const std::string LEFT_ARROW = "\u2190"; // ←
            const std::string UP_ARROW = "\u2191"; // ↑
            const std::string DOWN_ARROW = "\u2193"; // ↓
            const std::string BULLET = "\u2022"; // •
            const std::string STAR = "\u2605"; // ★
            const std::string HEART = "\u2665"; // ♥
        }
    }

    // ? Symbol class for colored characters
    class Symbol : private UI::Text
    {
    public:
        // * Constructor
        Symbol();
        Symbol(std::string character, UI::Color color);

        // * Getter
        std::string get() const;

        // * Setter
        void set(std::string character);

        // * Method - Display symbol with color
        void display();

        // * Destructor
        ~Symbol();
    };

    // * Get empty cell based on position
    Symbol get_empty_cell(Position &pos);
}

#endif