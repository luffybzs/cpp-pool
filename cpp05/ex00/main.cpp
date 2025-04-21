/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:37:30 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/21 18:23:15 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cstdlib>
#include <iostream>
int main() {
    try {
        Bureaucrat valid("Alice", 2);
        std::cout << valid << std::endl;
        valid.incrementGrade(); // Grade = 1 (OK)
        std::cout << valid << std::endl;
        valid.incrementGrade(); // Lance GradeTooHighException
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}