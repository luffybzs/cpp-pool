#pragma once


#include "Data.hpp"
#include <cstdint>
class Serializer {
	public:
		static uintptr_t serialize(data* ptr);
		static data* deserialize(uintptr_t raw);
	private:
		Serializer();
	};
	