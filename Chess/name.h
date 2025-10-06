#pragma once

#include <string>

namespace player
{
	class Name
	{
		// Attribute
		std::string name;

	public:
		// Constructor
		Name(const std::string& n) { setName(n); }

		// Getter
		std::string getName() const { return name; }

		// Setter
		void setName(const std::string& n) { if (n.length() >= 3) name = n; }

		// Method Overload - Check if names are equal
		bool operator==(const Name& other) const
		{
			// Check if both names have the same length
			if (name.length() != other.name.length())
				return false;

			// Compare each character in a case-insensitive manner
			for (int i = 0; i < name.length(); ++i)
			{
				if (tolower(name[i]) != tolower(other.name[i]))
					return false;
			}
			return true;
		}
		bool operator!=(const Name& other) const
		{
			return !(*this == other);
		}
	};
}
