#pragma once

#include "../Chess/message.h"

namespace Misc
{
	class Position
	{
		// Attributes
		int row, column;

	public:
		// Constructor
		Position() : row(0), column(0) {}
		Position(int r, int c) : row(r), column(c) {}

		// Getters
		int getRow() const { return row; }
		int getColumn() const { return column; }

		// Setters
		void setRow(int r) { if (row >= 0 && row < 8) row = r; }
		void setColumn(int c) { if (column >= 0 && column < 8) column = c; }

		// Method to display the position
		void display()
		{
			UI::MSG::Info("Position: (" + std::to_string(row) + ", " + std::to_string(column) + ")");
		}
	};

	// Function - Convert labeled position to actual position
	Position label_to_position(const std::string &pos)
	{
		Position position;

		if (pos.length() != 2)
			return position;

		// Alphabet part
		if (std::isalpha(pos[0]))
			position.setColumn(std::tolower(pos[0]) - 'a');

		// Numeric part
		if (std::isdigit(pos[1]))
			position.setRow(pos[1] - '1');

		return position;
	}
}
