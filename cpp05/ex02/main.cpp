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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

void testDivider(const std::string &title) 
{
    std::cout << "\n\n=== " << title << " ===\n";
    return;
}

int main() 
{
    Bureaucrat  high("Master LUFFY", 1);
    Bureaucrat  medium("VICE ZORO", 45);
    Bureaucrat  low("USSOP", 150);

    //SHRUBBERY TEST
    {
        testDivider("SHRUBBERY CREATION FORM");
        ShrubberyCreationForm shrub("TEST");

        try {
            shrub.execute(high);
        } catch (const std::exception& e) {
            std::cerr << "ERROR : {" << e.what() << "}"<< "\n";
        }

        low.signForm(shrub); 
        high.signForm(shrub);

        low.executeForm(shrub); 
        medium.executeForm(shrub); 
    }
    //ROBOTOMY TEST
    {
        testDivider("ROBOTOMY REQUEST FORM");
        RobotomyRequestForm robot("C-17");
        
        high.signForm(robot);
        
        std::cout << "\nPremière tentative :\n";
        high.executeForm(robot);
        
        std::cout << "\nDeuxième tentative :\n";
        high.executeForm(robot); 
        try {
            robot.execute(medium);
        } catch (const std::exception& e) {
            std::cerr << "ERROR : {" << e.what() << "}"<< "\n";
        }
    }
    //PRESIDENTIAL TEST
    {
        testDivider("PRESIDENTIAL PARDON FORM");
        PresidentialPardonForm pardon("AYOUB");
        
        try {
            pardon.execute(high);
        } catch (const std::exception& e) {
            std::cerr << "ERROR : {" << e.what() << "}"<< "\n";
        }
        
        medium.signForm(pardon);
        high.signForm(pardon);  
        
        medium.executeForm(pardon);
        high.executeForm(pardon);   
    }
    //COPY TEST
    {
        testDivider("DEEP COPY TEST");
        PresidentialPardonForm original("Clone");
        high.signForm(original);
        
        PresidentialPardonForm copy = original;
        copy.execute(high); 
    }
    return 0;
}