#pragma once

#include <string>
#include <vector>

#include "../Chess/color.h"
#include "../Chess/style.h"
#include "../Chess/text.h"

namespace Menu
{
	class Decorator
	{
		// Attributes
		std::string symbol;
	public:
		UI::Color* color;
		UI::Style* style;

		// Constructor
		Decorator()		// Default
			: style(nullptr), color(nullptr) { }
		Decorator(const std::string &symbol, UI::Color* color, UI::Style* style)	// Parameterized
			: symbol(symbol), color(color), style(style) { }
		Decorator(const Decorator *other)	// Copy
			: symbol(other->symbol), color(new UI::Color(*other->color)), style(new UI::Style(*other->style)) { }

		// Getter & Setter
		std::string get_symbol() const { return symbol; }
		void set_symbol(std::string symbol) { if (symbol.length() == 1) this->symbol = symbol; }

		// Method - Display
		void display()
		{
			UI::Text(
				symbol, new UI::Color(*color), new UI::Style(*style)
			).display();
		}

		// Destructor
		~Decorator()
		{
			delete color;
			delete style;
		}
	};

	class OptionsList
	{
		// Attributes
		UI::Color* color;
		UI::Style* style;
		std::vector<UI::Text> options;

	public:
		// Constructor
		OptionsList()	// Default
			: color(nullptr), style(nullptr) { }
		OptionsList(UI::Color *color, UI::Style *style)	// Parameterized
			: color(color), style(style) { }
		OptionsList(const OptionsList &other)	// Copy
			: color(new UI::Color(*other.color)), style(new UI::Style(*other.style)), options(options) { }

		// Getter
		UI::Text get_option(const unsigned int& index) const
		{
			return options.at(index);
		}

		// Method - Add an option
		void add_option(const std::string& option)
		{
			options.push_back(UI::Text(
				option, new UI::Color(*color), new UI::Style(*style)
			));
		}

		// Method - Print all options - Debugging purpose
		void display_all()
		{
			for (auto &option : options)
				option.display(true);
		}

		// Destructor
		~OptionsList()
		{
			delete color;
			delete style;
			options.clear();
		}
	};
}

