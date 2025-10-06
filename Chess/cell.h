#pragma once

#include "../Chess/symbol.h"

namespace Board
{
	class Cell
	{
	public:
		Misc::Symbol *symbol;
		
		// Constructor
		Cell() : symbol(nullptr) {}
		Cell(Misc::Symbol* symbol) : symbol(symbol) {}
		
		// Method - Display the cell symbol
		void display()
		{
			if (symbol != nullptr)
				symbol->display();
			else
				cout << " ";
		}
	};
}
