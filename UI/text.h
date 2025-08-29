#ifndef TEXT_H
#define TEXT_H

#include <string>

using namespace std;

namespace UI
{
    class Text
    {
    public:
        // * Attributes
        string text;
        
        // * Constructor
        Text();
        Text(string text);

        // * Method - Display the text
        void display();     // ? Single line
        void display_ln();  // ? With line break
    };
}

#endif