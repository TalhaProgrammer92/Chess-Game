#pragma once

namespace player
{
	class Score
	{
		// Attribute
		unsigned int score;

	public:
		// Constructor
		Score() : score(0) {}
		Score(unsigned int s) : score(s) {}

		// Getter
		unsigned int getScore() const { return score; }

		// Method - Increment score
		void increment(const unsigned int& s = 1) { score += s; }

		// Method - Reset score
		void reset() { score = 0; }
	};
}
