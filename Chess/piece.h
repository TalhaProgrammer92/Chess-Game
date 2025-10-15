#pragma once

#include "../Chess/symbol.h"
#include "../Chess/position.h"

#include <vector>

namespace Piece
{
	enum Group
	{
		White = 0,
		Black = 1
	};

	class ChessPiece
	{
	protected:
		// Attributes
		Misc::Symbol *symbol;
		Misc::Position *position;
		std::vector<Misc::Position> valid_positions;
		Group group;
		bool alive;

		// Method - Generate valid positions for the piece
		void virtual generate_valid_positions() = 0;

	public:
		// Constructor
		ChessPiece()
			: symbol(nullptr), position(nullptr), alive(false), group(Group::White) {}
		ChessPiece(Misc::Symbol symbol, Misc::Position position, Group group, bool alive = true)
			: symbol(new Misc::Symbol(symbol)), position(new Misc::Position(position)), group(group), alive(alive) {}

		// Method - Move the piece
		void virtual move(const Misc::Position& position) = 0;

		// Destructor
		~ChessPiece()
		{
			delete symbol;
			delete position;
			valid_positions.clear();
		}
	};
}
