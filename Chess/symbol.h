#pragma once

#include "../Chess/text.h"

namespace Misc
{
	class Symbol : protected UI::Text
	{
	public:
		// Constructor
		Symbol() : Text() {}
		
		Symbol(string symbol, UI::Color* color, UI::Style* style)
			: Text(symbol, color, style) {}
	};

	class PieceSymbol : public Symbol
	{
	public:
		// Constructor
		PieceSymbol() : Symbol() {}
		PieceSymbol(string symbol, UI::Color* color)
			: Symbol(symbol, color, new UI::Style(UI::TextStyle::Bold)) {}
		
		// Method - Display the piece symbol
		void display()
		{
			Text::display();
		}
	};
}
