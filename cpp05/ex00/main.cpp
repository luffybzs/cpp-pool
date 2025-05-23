/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:37:30 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/21 20:13:03 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>
int main() 
{
    Bureaucrat test("ayoub", 150);
    Bureaucrat valid("Wassim", 2);
    try{
        std::cout << test << std::endl;
        test.decrementGrade();
        std::cout << test << std::endl;

    } catch(std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    try {
        std::cout << valid << std::endl;
        valid.incrementGrade(); 
        std::cout << valid << std::endl;
        valid.incrementGrade(); 
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}