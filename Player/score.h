#ifndef SCORE_H
#define SCORE_H

namespace Player
{
    class Score
    {
        // * Attributes
        unsigned int score;

    public:
        // * Constructor
        Score();
        Score(const unsigned int &score);

        // * Getter
        unsigned int get() const;

        // * Method - Increase score
        void increment(const unsigned int &value = 1);

        // * Method - Reset score
        void reset();
    };
}

#endif