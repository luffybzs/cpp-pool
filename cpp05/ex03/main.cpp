/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:27:00 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/24 21:27:01 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstddef>
#include <iostream>

void testDivider(const std::string& title) 
{
    std::cout << "\n\n=== " << title << " ===\n";
}

int main() 
{
    Intern tmp_intern;

    Bureaucrat boss("ayoub", 1);

    AForm* form1;
    AForm* form2;
    AForm* form3;
    AForm* unknownForm;

    std::cout << "\nIntern's makeForm()\n" << std::endl;

    try {
        form1 = tmp_intern.makeForm("shrubbery creation", "formulaire1");
        std::cout << "\nForm created: " << form1->getName() << std::endl;
        boss.signForm(*form1);
        boss.executeForm(*form1);
        delete form1;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        form2 = tmp_intern.makeForm("robotomy request", "Bender");
        std::cout << "\nForm created: " << form2->getName() << std::endl;
        boss.signForm(*form2);
        boss.executeForm(*form2);
        delete form2;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        form3 = tmp_intern.makeForm("presidential pardon", "ayarab");
        std::cout << "\nForm created: " << form3->getName() << std::endl;
        boss.signForm(*form3);
        boss.executeForm(*form3);
        delete form3;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        unknownForm = tmp_intern.makeForm("unknown form", "Unknown");
        if (unknownForm == NULL)
            delete unknownForm;
    } catch (std::exception &e) {
        std::cerr << "\nError: " << e.what() << std::endl;
    }
    return 0;
}