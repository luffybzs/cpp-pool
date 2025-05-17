/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:48:22 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/13 19:51:57 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Span.hpp"
#include <cstdlib>     
#include <ctime>     

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
    std::cout << "Test des 10000" << std::endl;
    try {
        Span big(10000);
        std::vector<int> vec;
        for (int i = 0; i < 10000; ++i)
            vec.push_back(i * 2);
        big.addNumber(vec.begin(), vec.end());
        std::cout << "Shortest span: " << big.shortestSpan() << std::endl;
        std::cout << "Longest span: " << big.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Test d'exception" << std::endl;
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
