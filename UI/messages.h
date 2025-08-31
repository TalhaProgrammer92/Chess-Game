#ifndef MESSAGES_H
#define MESSAGES_H

#include "message.h"
// #include "text.h"

namespace UI
{
    // * Predefined text
    const Text INFO_TEXT("[INFO]", new Color(ForegroundColor::BrightBlue, BackgroundColor::None), new Style(TextStyle::Bold));
    const Text WARNING_TEXT("[WARNING]", new Color(ForegroundColor::BrightYellow, BackgroundColor::None), new Style(TextStyle::Bold));
    const Text ERROR_TEXT("[ERROR]", new Color(ForegroundColor::BrightRed, BackgroundColor::None), new Style(TextStyle::Bold));

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