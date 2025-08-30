#ifndef MESSAGE_H
#define MESSAGE_H

#include "text.h"

namespace UI
{
    class Message : public Text
    {
    public:
        // * Constructor
        Message(Text &other);
        Message(string text, Color *color, Style *style);

        // * Method - Display the message with a prefix
        void display_with_prefix(const string& prefix);
        void display_with_prefix(Text prefix);
    };
}

#endif