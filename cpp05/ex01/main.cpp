/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:37:30 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/21 18:43:52 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstdlib>
#include <iostream>
int main() 
{
    Bureaucrat test("ayoub", 151);
    try{
        
    }
    try {
        Bureaucrat valid("Wassim", 2);
        std::cout << valid << std::endl;
        valid.incrementGrade(); 
        std::cout << valid << std::endl;
        valid.incrementGrade(); 
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}