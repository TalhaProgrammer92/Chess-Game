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

		void display()
		{
			Text::display();
		}
	};
}
