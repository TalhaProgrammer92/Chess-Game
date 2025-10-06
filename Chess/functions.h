#pragma once

#include <iostream>
#include "../Chess/misc.h"

namespace Misc
{
	// Function - Print a character n times
	void print_n_times(char& ch, int n, bool line_break = true)
	{
		for (int i = 0; i < n; i++)
			std::cout << ch;

		if (line_break) std::cout << std::endl;
	}
	void print_n_times(Menu::Decorator& decor, int n, bool line_break = true)
	{
		for (int i = 0; i < n; i++)
			decor.display();
		
		if (line_break) std::cout << std::endl;
	}
}
