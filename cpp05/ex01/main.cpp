/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:37:30 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/24 21:01:24 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    std::cout << "Test 1: Form Creation" << std::endl;
    try {
        Form basicForm("Basic", 50, 25);
        std::cout << basicForm << std::endl;
        Form invalidForm("Invalid", 0, 200);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\nTest 2: Bureaucrat Signing" << std::endl;
    try {
        Bureaucrat boss("ayoub le chef", 1);
        Bureaucrat intern("wassim le sous chef", 150);
        Form importantForm("Important", 1, 1);
        
        std::cout << importantForm << std::endl;
        boss.signForm(importantForm);
        std::cout << importantForm << std::endl;
        
        intern.signForm(importantForm);

    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
    }
    return 0;
}