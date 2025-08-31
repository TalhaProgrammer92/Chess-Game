#include <iostream>
#include "position.h"
#include "../UI/messages.h"

using namespace std;
using namespace Misc;
using namespace UI;

// * Constructor
Position::Position() : row(0), column(0) {}
Position::Position(int row, int column) : row(row), column(column) {}

// * Getters
int Position::get_row() const
{
    return row;
}

int Position::get_column() const
{
    return column;
}

// * Setters
void Position::set_row(const int &row)
{
    if (row >= 0 && row < 8)
        this->row = row;
}

void Position::set_column(const int &column)
{
    if (column >= 0 && column < 8)
        this->column = column;
}

// * Methods - Comparison
bool Position::operator==(const Position &other) const
{
    return (row == other.row && column == other.column);
}

bool Position::operator!=(const Position &other) const
{
    return !(*this == other);
}

// * Methods - Arithmetic
Position Position::operator+(const Position &other) const
{
    return Position(row + other.row, column + other.column);
}

Position Position::operator-(const Position &other) const
{
    return Position(row - other.row, column - other.column);
}

// * Method - Get Absolute Difference
Position Position::abs_diff(const Position &position2) const
{
    return Position(abs(row - position2.row), abs(column - position2.column));
}

// * Method - Display Position
void Position::display()
{
    Messages::info("Position - Row: " + to_string(row) + ", Column: " + to_string(column));
}

// * Function - Labeled -> Position
Position labeled_to_position(const std::string &labeled_position)
{
    int column = tolower(labeled_position[0]) - 'a';
    int row = labeled_position[1] - '1';
    return Position(row, column);
}
