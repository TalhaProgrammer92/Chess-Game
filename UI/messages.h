#ifndef MESSAGES_H
#define MESSAGES_H

#include "message.h"
// #include "text.h"

namespace UI
{
    // * Predefined text
    const Text INFO_TEXT("[INFO]", new Color(ForegroundColor::Blue, BackgroundColor::None), new Style(TextStyle::Bold));
    const Text WARNING_TEXT("[WARNING]", new Color(ForegroundColor::Yellow, BackgroundColor::None), new Style(TextStyle::Bold));
    const Text ERROR_TEXT("[ERROR]", new Color(ForegroundColor::Red, BackgroundColor::None), new Style(TextStyle::Bold));

    class Messages
    {
    public:
        // * Method - Display an info message
        static void info(const string& message);
        static void warning(const string& message);
        static void error(const string& message);
    };
}

#endif