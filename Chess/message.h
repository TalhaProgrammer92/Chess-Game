#pragma once

#include "text.h"

namespace UI
{
    class Message : public Text
    {
    public:
        // * Constructor
		Message(Text& other) : Text(other) {}
		Message(string text, Color* color, Style* style) : Text(text, color, style) {}

        // * Method - Display the message with a prefix
        void display_with_prefix(const string& prefix)
        {
            cout << prefix + " ";
            display(true);
        }
        void display_with_prefix(Text prefix)
        {
            prefix.text += " ";
            prefix.display();

            display(true);
        }
    };

    namespace MSG
    {
        // Predefined text
        const Text INFO_TEXT("[INFO]", new Color(ForegroundColor::BrightBlue, BackgroundColor::None), new Style(TextStyle::Bold));
        const Text WARNING_TEXT("[WARNING]", new Color(ForegroundColor::BrightYellow, BackgroundColor::None), new Style(TextStyle::Bold));
        const Text ERROR_TEXT("[ERROR]", new Color(ForegroundColor::BrightRed, BackgroundColor::None), new Style(TextStyle::Bold));

		// Predefined functions to display messages
        void Info(const string& message)
        {
            Message msg(message, new Color(), new Style());
            msg.display_with_prefix(UI::MSG::INFO_TEXT);
        }

        void Warning(const string& message)
        {
            Message msg(message, new Color(), new Style());
            msg.display_with_prefix(UI::MSG::WARNING_TEXT);
        }

        void Error(const string& message)
        {
            Message msg(message, new Color(), new Style());
            msg.display_with_prefix(UI::MSG::ERROR_TEXT);
        }
    }
}
