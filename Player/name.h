#ifndef NAME_H
#define NAME_H

#include <string>
using namespace std;

namespace Player
{
    class Name
    {
        // * Attributes
        string name;

    public:
        // * Constructor
        Name(const string &name);

        // * Getter
        string get() const;

        // * Methods - Compare two names
        bool operator==(const Name &other);
        bool operator!=(const Name &other);
    };
}

#endif