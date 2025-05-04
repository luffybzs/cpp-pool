





#include <cstdlib>
#include <iostream>
#include "ScalarConverte.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./convert <literal>" << std::endl;
        return 1;
    }

    ScalarConverte::convert(argv[1]);
    return 0;
}
