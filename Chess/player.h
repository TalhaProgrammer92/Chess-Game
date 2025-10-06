#pragma once

#include <iostream>

#include "name.h"
#include "score.h"
#include "message.h"

namespace player
{
	class Player
	{
		// Attribute
		Name *name;
		Score *score;

	public:
		// Constructor
		Player(const std::string& n) 
		{ 
			name = new Name(n); 
			score = new Score(); 
		}

		// Destructor
		~Player() 
		{ 
			delete name; 
			delete score; 
		}
		
		// Getter
		std::string getName() const { return name->getName(); }
		unsigned int getScore() const { return score->getScore(); }
		
		// Method - Increment score
		void incrementScore(const unsigned int& s = 1) { score->increment(s); }
		
		// Method - Reset score
		void resetScore() { score->reset(); }

		// Method - Check if names are equal
		bool isNameEqual(Name& other) const { return (*name == other); }

		// Method - Display player info
		void display()
		{ 
			std::string info = "Player: " + getName() + " | Score: " + std::to_string(getScore());
			UI::MSG::Info(info);
		}
	};
}
