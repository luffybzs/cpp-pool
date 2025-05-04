


#include "Base.hpp"
#include <ctime>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>  


Base* generate()
{

    srand(std::time(0));
    int r = rand() % 3;

    if (r == 0)
    {
        std::cout << "Generated: A" << std::endl;
        return new A;
    }
    else if (r == 1)
    {
        std::cout << "Generated: B" << std::endl;
        return new B;
    }
    else
    {
        std::cout << "Generated: C" << std::endl;
        return new C;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Identified: A (by pointer)" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Identified: B (by pointer)" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Identified: C (by pointer)" << std::endl;
    else
        std::cout << "Identified: Unknown type (by pointer)" << std::endl;
}

void identify(Base &p) 
{
    std::cout << "--- IDENTIFY BY REFERENCE ---" << std::endl;
    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "Identified: A (by reference)" << std::endl;
		(void) a;
        return;
    } catch (std::exception& e) {}

    try {
        B &b = dynamic_cast<B&>(p);
        std::cout << "Identified: B (by reference)" << std::endl;
		(void) b;
        return;
    } catch (std::exception& e) {}

    try {
        C &c = dynamic_cast<C&>(p);
        std::cout << "Identified: C (by reference)" << std::endl;
		(void) c;
        return;
    } catch (std::exception& e) {}

    std::cout << "Type not recognized (by reference)" << std::endl;
}

