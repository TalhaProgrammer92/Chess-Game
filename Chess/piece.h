#pragma once

#include "../Chess/symbol.h"
#include "../Chess/symbols.h"
#include "../Chess/position.h"
#include "../Chess/enums.h"

#include <vector>

namespace Piece
{
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
		// Constructors
		ChessPiece()
			: symbol(nullptr), position(nullptr), alive(false), group(Group::White) {}
		ChessPiece(Misc::Symbol symbol, Misc::Position position, Group group, bool alive = true)
			: symbol(new Misc::Symbol(symbol)), position(new Misc::Position(position)), group(group), alive(alive) {}

		// Getters
		bool is_white() { return group == Group::White; }
		bool is_black() { return group == Group::Black; }
		bool is_alive() { return alive; }

		// Method - Move the piece
		void virtual move(const Misc::Position& position) = 0;

		// Method - Generate path
		std::vector<Misc::Position> virtual generate_path(Misc::Position& initial_position, Misc::Position& final_position) = 0;

		// Method - Kill the piece
		void kill()
		{
			alive = false;
		}

		// Destructor
		~ChessPiece()
		{
			delete symbol;
			delete position;
			valid_positions.clear();
		}
	};

	class Pawn : public ChessPiece
	{
		// Attributes
		bool moved, can_enpassant;

		// Method - Generate valid positions for the piece
		void generate_valid_positions() override
		{
			Misc::Position normal_position(1, 0),
				special_position(2, 0),
				enpassant_position(1, 1);
			
			valid_positions.push_back(normal_position);
			valid_positions.push_back(special_position);
			valid_positions.push_back(enpassant_position);
		}

	public:
		// Constructors
		Pawn() 
			: ChessPiece() {}
		Pawn(Misc::Position position, Group group)
		{
			this->group = group;
			
			/*UI::Color color = (is_white()) ?
				new UI::Color(UI::ForegroundColor::BrightBlue, UI::BackgroundColor::None)
				:
				new UI::Color(UI::ForegroundColor::BrightRed, UI::BackgroundColor::None);*/

			/*symbol = new Misc::Symbol(
				Misc::Piece::PAWN,
				color,
				new UI::Style(UI::TextStyle::Bold)
			);*/
		}
	};
}
