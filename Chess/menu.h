#pragma once

#include "../Chess/text.h"
#include "../Chess/misc.h"
#include <vector>

namespace Menu
{
	class MenuBase
	{
	protected:
		// Attributes
		UI::Text *header;
		Menu::Decorator *decorator;
		Menu::OptionsList *options;

	public:
		// Constructor
		MenuBase()	// Default
			: header(nullptr), decorator(nullptr), options(nullptr) { }
		MenuBase(UI::Text *header, Menu::Decorator *decorator, Menu::OptionsList* options)	// Parameterized
			: header(header), decorator(decorator), options(options) { }
		MenuBase(const MenuBase &other)	// Copy
			: header(new UI::Text(*other.header)), decorator(new Menu::Decorator(*other.decorator)), options(new Menu::OptionsList(*other.options)) { }

		// Method - Add an option
		void add_option(const std::string& option)
		{
			options->add_option(option);
		}

		// Destructor
		~MenuBase()
		{
			delete header;
			delete decorator;
			delete options;
		}
	};
}
