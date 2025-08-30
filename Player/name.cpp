#include <string>
#include "name.h"

using namespace std;

// * Constructor
Player::Name::Name(const string &name) : name(name) {}

// * Getter
string Player::Name::get() const
{
    return name;
}

// * Methods - Compare two names
bool Player::Name::operator==(const Name &other)
{
    if (name.length() != other.get().length()) return false;

    for (int i = 0; i < name.length(); i++)
        if (tolower(name[i]) != tolower(other.get()[i]))
            return false;

    return true;
}

bool Player::Name::operator!=(const Name &other)
{
    if (name.length() != other.get().length()) return true;

    for (int i = 0; i < name.length(); i++)
        if (tolower(name[i]) == tolower(other.get()[i]))
            return false;

    return true;
}
