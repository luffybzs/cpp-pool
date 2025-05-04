#include "Base.hpp"



#include <cstdlib>
#include <ctime>

Base* generate();
void identify(Base *p);
void identify(Base &p);

int main()
{
    Base* obj = generate();
    identify(obj);
    identify(*obj);
    delete obj;
    return 0;
}
