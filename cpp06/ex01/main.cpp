

#include "Data.hpp"
#include "Serializer.hpp"

#include <iostream>
#include <ostream>
#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main() 
{
    Data data;
    data.id = 42;
    data.name = "Ayoub";
    data.role = "Student";

    std::cout << "Address: " << &data << std::endl;
    std::cout << "ID     : " << data.id << std::endl;
    std::cout << "Name   : " << data.name << std::endl;
    std::cout << "Role   : " << data.role << std::endl;

    uintptr_t raw = Serializer::serialize(&data);
    Data* deserialized = Serializer::deserialize(raw);

    std::cout << "apres deserialized" << std::endl;
    std::cout << "Address: " << deserialized << std::endl;
    std::cout << "ID     : " << deserialized->id << std::endl;
    std::cout << "Name   : " << deserialized->name << std::endl;
    std::cout << "Role   : " << deserialized->role << std::endl;
    return 0;
}
