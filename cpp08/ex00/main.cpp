#include "easyfind.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>
#include <vector>



int main()
{
	std::vector<int> tab;

	tab.push_back(1);
	tab.push_back(2);
	tab.push_back(3);
	tab.push_back(4);

	try {
		std::vector<int>::iterator it = easyfind(tab, 3);
		std::cout << "VALUE FOUND -> " << *it << std::endl;
	
	} catch (std::exception &e) {
		std::cout << e.what();
	}
	try {
		std::vector<int>::iterator it = easyfind(tab, 42);
		std::cout << "VALUE FOUND -> " << *it << std::endl;
	
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return EXIT_SUCCESS;

}