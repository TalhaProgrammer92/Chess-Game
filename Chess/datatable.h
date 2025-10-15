#pragma once

#include <unordered_map>

namespace Data
{
	template <class KType, class VType>
	class CSVDataMap
	{
		// Attributes
		std::unordered_map<Ktype, VType> data_map;
	};
}
