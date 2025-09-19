#pragma once

namespace Misc
{
    namespace Piece
    {
        namespace White
        {
            //const std::string KING = "\u2654"; // ♔
            //const std::string QUEEN = "\u2655"; // ♕
            //const std::string ROOK = "\u2656"; // ♖
            //const std::string BISHOP = "\u2657"; // ♗
            //const std::string KNIGHT = "\u2658"; // ♘
            //const std::string PAWN = "\u2659"; // ♙
            const char KING = 'K';
            const char QUEEN = 'Q';
            const char ROOK = 'R';
            const char BISHOP = 'B';
            const char KNIGHT = 'K';
            const char PAWN = 'P';
        }

        namespace Black
        {
            //const std::string KING = "\u265A"; // ♚
            //const std::string QUEEN = "\u265B"; // ♛
            //const std::string ROOK = "\u265C"; // ♜
            //const std::string BISHOP = "\u265D"; // ♝
            //const std::string KNIGHT = "\u265E"; // ♞
            //const std::string PAWN = "\u265F"; // ♟
            const char KING = 'k';
            const char QUEEN = 'q';
            const char ROOK = 'r';
            const char BISHOP = 'b';
            const char KNIGHT = 'k';
            const char PAWN = 'p';
        }
    }

    namespace EmptyCell
    {
        //const std::string WHITE = "\u25FB"; // ◻
        //const std::string BLACK = "\u25FC"; // ◼
		const char WHITE = 'o';
		const char BLACK = 'O';
    }

    char get_empty_cell(const Position& pos)
    {
		return (pos.getRow() + pos.getColumn()) % 2 ? EmptyCell::BLACK : EmptyCell::WHITE;
    }

    //namespace Label
    //{
    //    namespace Numbers
    //    {
    //        const std::string ONE = "\u2460"; // ①
    //        const std::string TWO = "\u2461"; // ②
    //        const std::string THREE = "\u2462"; // ③
    //        const std::string FOUR = "\u2463"; // ④
    //        const std::string FIVE = "\u2464"; // ⑤
    //        const std::string SIX = "\u2465"; // ⑥
    //        const std::string SEVEN = "\u2466"; // ⑦
    //        const std::string EIGHT = "\u2467"; // ⑧
    //    }

    //    namespace Letters
    //    {
    //        const std::string A = "\u24B6"; // Ⓐ
    //        const std::string B = "\u24B7"; // Ⓑ
    //        const std::string C = "\u24B8"; // Ⓒ
    //        const std::string D = "\u24B9"; // Ⓓ
    //        const std::string E = "\u24BA"; // Ⓔ
    //        const std::string F = "\u24BB"; // Ⓕ
    //        const std::string G = "\u24BC"; // Ⓖ
    //        const std::string H = "\u24BD"; // Ⓗ
    //    }
    //}

    //namespace Special
    //{
    //    const std::string CHECK_MARK = "\u2713"; // ✓
    //    const std::string CROSS_MARK = "\u2717"; // ✗

    //    const std::string RIGHT_ARROW = "\u2192"; // →
    //    const std::string LEFT_ARROW = "\u2190"; // ←
    //    const std::string UP_ARROW = "\u2191"; // ↑
    //    const std::string DOWN_ARROW = "\u2193"; // ↓
    //    
    //    const std::string BULLET = "\u2022"; // •
    //    const std::string STAR = "\u2605"; // ★
    //    const std::string HEART = "\u2665"; // ♥
    //}
}