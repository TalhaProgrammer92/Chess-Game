#pragma once

#include "../Chess/text.h"
#include "../Chess/misc.h"
#include "../Chess/functions.h"
#include "../Chess/message.h"
#include <vector>
#include <math.h>
#include <conio.h>

namespace Menu
{
	struct Padding
	{
		unsigned int left, right;

		void reset()
		{
			left = right = 0;
		}

		void apply_left()
		{
			for (unsigned int i = 0; i < left; i++)
				cout << ' ';
		}

		void apply_right()
		{
			for (unsigned int i = 0; i < right; i++)
				cout << ' ';
		}
	};

	class MenuBase
	{
	protected:
		// Attributes
		UI::Text *header;
		Menu::Decorator *decorator;
		Menu::OptionsList *options;

		// Method - Find the longest option
		int longest_option_length() const
		{
			int max_length = header->text.length();
			
			for (unsigned int i = 0; i < options->get_size(); i++)
			{
				int length = options->get_option(i).text.length();
				
				if (length > max_length)
					max_length = length;
			}
			
			return max_length;
		}

		// Method - Display the header
		void display_header()
		{
			const int longest_length = longest_option_length() + 4;
			Misc::print_n_times(*decorator, longest_length);

			decorator->display();
			
			// Calculating padding to make the header centered
			Padding padding;
			padding.left = (longest_length - (header->text.length() + 2)) / 2;
			padding.right = longest_length - (header->text.length() + 2) - padding.left;

			padding.apply_left();

			header->display();

			padding.apply_right();

			decorator->display(true);

			Misc::print_n_times(*decorator, longest_length);
		}

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

		// Method - Display the menu
		void display()
		{
			if (options->get_size() > 0)
			{
				// Header
				display_header();

				// Display Options
				options->display_all();
			}
			else
			{
				UI::MSG::Error("No options available to display the menu.");
			}
		}

		// Method - Make an option selection
		int option_selection() const
		{
			int choice = 0;

			do
			{
				choice = _getch() - '0';	// Convert char to int

				if (choice < 1 || choice > options->get_size())
					UI::MSG::Error("Invalid choice. Please select a valid option.");
			} while (choice < 1 || choice > options->get_size());

			return choice;
		}

		// Destructor
		~MenuBase()
		{
			delete header;
			delete decorator;
			delete options;
		}
	};

	class MainMenu : private MenuBase
	{
		public:
		// Constructor
		MainMenu()	// Default
			: MenuBase(
				new UI::Text(
					"Main Menu",
					new UI::Color(UI::ForegroundColor::BrightCyan, UI::BackgroundColor::None),
					new UI::Style(UI::TextStyle::Bold)
				),
				new Menu::Decorator(
					"*",
					new UI::Color(UI::ForegroundColor::BrightCyan, UI::BackgroundColor::None),
					new UI::Style(UI::TextStyle::Bold)
				),
				new Menu::OptionsList(
					new UI::Color(UI::ForegroundColor::BrightYellow, UI::BackgroundColor::None),
					new UI::Style(UI::TextStyle::Bold)
				)
			) 
		{
			// Add options
			add_option("Start New Game");
			add_option("Load Game");
			add_option("Settings");
			add_option("Exit");
		}

		// Method - Display the menu
		void display_menu()
		{
			MenuBase::display();
		}

		// Method - Make an option selection
		int option_selection() const
		{
			return MenuBase::option_selection();
		}
	};
}
