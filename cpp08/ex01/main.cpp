#include <iostream>
#include <cstdlib>      // pour atoi
#include "Span.hpp"

int main(int argc, char** argv)
{
    if (argc < 3) {
        std::cerr << "ERROR: ./span num1 num2 num3 ...}" << std::endl;
        return 1;
    }
    try {
        Span sp(argc - 1);
        for (int i = 1; i < argc; ++i) {
            int value = std::atoi(argv[i]);
            sp.addNumber(value);
        }
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
        return 1;
    }
    return 0;
}

/*
int main()
{
    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- Test avec un gros range ---" << std::endl;

    try {
        Span big(10000);
        std::vector<int> vec;
        for (int i = 0; i < 10000; ++i)
            vec.push_back(i * 3);

        big.addNumber(vec.begin(), vec.end());

        std::cout << "Shortest span: " << big.shortestSpan() << std::endl;
        std::cout << "Longest span: " << big.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- Test d'exception (trop d'ajouts) ---" << std::endl;

    try {
        Span s(2);
        s.addNumber(1);
        s.addNumber(2);
        s.addNumber(3); 
    } catch (std::exception& e) {
        std::cerr << "Exception attrapée : " << e.what() << std::endl;
    }

    return 0;
}
*/