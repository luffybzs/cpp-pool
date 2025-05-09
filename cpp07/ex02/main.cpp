#include <iostream>
#include "Array.hpp"

int main() {
    try {
        std::cout << "--- Test: constructeur par défaut ---" << std::endl;
        Array<int> a;
        std::cout << "a.size() = " << a.size() << std::endl;

        std::cout << "\n--- Test: constructeur avec taille ---" << std::endl;
        Array<int> b(5);
        for (unsigned int i = 0; i < b.size(); i++)
            b[i] = i * 10;
        for (unsigned int i = 0; i < b.size(); i++)
            std::cout << "b[" << i << "] = " << b[i] << std::endl;

        std::cout << "\n--- Test: constructeur de copie ---" << std::endl;
        Array<int> c(b);
        for (unsigned int i = 0; i < c.size(); i++)
            std::cout << "c[" << i << "] = " << c[i] << std::endl;

        std::cout << "\n--- Test: opérateur d'assignation ---" << std::endl;
        Array<int> d;
        d = b;
        for (unsigned int i = 0; i < d.size(); i++)
            std::cout << "d[" << i << "] = " << d[i] << std::endl;

        std::cout << "\n--- Test: modification indépendante ---" << std::endl;
        b[0] = 999;
        std::cout << "b[0] = " << b[0] << " (modifié)" << std::endl;
        std::cout << "c[0] = " << c[0] << " (doit rester inchangé)" << std::endl;

        std::cout << "\n--- Test: exception hors limite ---" << std::endl;
        std::cout << b[42] << std::endl; // Doit lancer une exception

    } catch (const std::exception& e) {
        std::cerr << "Exception attrapée : " << e.what() << std::endl;
    }

    return 0;
}
