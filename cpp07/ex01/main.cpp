#include <cstdlib>
#include <iostream>
template <typename T>
void ft_print(T &type)
{
	std::cout << " le type {"<< type << "}"<< std::endl;
}
template <typename T>
void ft_multiplyByTwo(T &x) 
{
    x = x * 2;
}

#include "iter.hpp"


int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    size_t intSize = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Original integers:\n";
    iter(numbers, intSize, ft_print);
    iter(numbers, intSize, ft_multiplyByTwo);
    std::cout << "After multiply by 2:\n";
    iter(numbers, intSize, ft_print);
    std::string words[] = {"hello", "world", "42"};
    size_t strSize = sizeof(words) / sizeof(words[0]);
    std::cout << "\nOriginal strings:\n";
	iter(words, strSize, ft_print);

    return 0;
}