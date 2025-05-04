
#include "Serializer.hpp"
#include "Data.hpp"
uintptr_t Serializer::serialize(data* ptr) 
{
	return reinterpret_cast<uintptr_t>(ptr);
}

data* Serializer::deserialize(uintptr_t raw) 
{
	return reinterpret_cast<data *>(raw);
}