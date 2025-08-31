#ifndef POSITION_H
#define POSITION_H

namespace Misc
{
    class Position
    {
        // * Attributes
        int row, column;
        
    public:
        // * Constructor
        Position();
        Position(int row, int column);

        // * Getters
        int get_row() const;
        int get_column() const;

        // * Setters
        void set_row(const int &row);
        void set_column(const int &column);

        // * Methods - Comparison
        bool operator==(const Position &other) const;
        bool operator!=(const Position &other) const;

        // * Methods - Arithmetic
        Position operator+(const Position &other) const;
        Position operator-(const Position &other) const;

        // * Method - Get Absolute Difference
        Position abs_diff(const Position &position2) const;

        // * Method - Display position
        void display();
    };

    // * Function - Convert labeled position to actual position
    Position labeled_to_position(const std::string &labeled_position);
}

#endif