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

void testDivider(const std::string& title) {
    std::cout << "\n\n=== " << title << " ===\n";
}

int main() {
    Bureaucrat  high("Master Chief", 1);
    Bureaucrat  medium("Gordon Freeman", 45);
    Bureaucrat  low("Mario", 150);

    // ================== SHRUBBERY TEST ==================
    {
        testDivider("SHRUBBERY CREATION FORM");
        ShrubberyCreationForm shrub("Home");

        // Test non signé
        try {
            shrub.execute(high);
        } catch (const std::exception& e) {
            std::cerr << "❌ " << e.what() << "\n";
        }

        // Signature
        low.signForm(shrub);  // Échec
        high.signForm(shrub); // Succès

        // Exécution
        low.executeForm(shrub);  // Grade trop bas
        medium.executeForm(shrub); // Succès
        std::cout << "🌳 Vérifier la création de Home_shrubbery\n";
    }

    // ================== ROBOTOMY TEST ==================
    {
        testDivider("ROBOTOMY REQUEST FORM");
        RobotomyRequestForm robot("Bender");
        
        high.signForm(robot);
        
        // Test réussi (50% de chance)
        std::cout << "\nPremière tentative :\n";
        high.executeForm(robot);
        
        std::cout << "\nDeuxième tentative :\n";
        high.executeForm(robot); // Peut échouer

        // Test grade insuffisant
        try {
            robot.execute(medium);
        } catch (const std::exception& e) {
            std::cerr << "❌ " << e.what() << "\n";
        }
    }

    // ================== PRESIDENTIAL TEST ==================
    {
        testDivider("PRESIDENTIAL PARDON FORM");
        PresidentialPardonForm pardon("Zorg");
        
        // Test non signé
        try {
            pardon.execute(high);
        } catch (const std::exception& e) {
            std::cerr << "❌ " << e.what() << "\n";
        }
        
        medium.signForm(pardon); // Échec signature
        high.signForm(pardon);   // Succès
        
        // Exécution
        medium.executeForm(pardon); // Grade insuffisant
        high.executeForm(pardon);   // Succès
    }

    // ================== COPY TEST ==================
    {
        testDivider("DEEP COPY TEST");
        PresidentialPardonForm original("Clone");
        high.signForm(original);
        
        PresidentialPardonForm copy = original;
        copy.execute(high); // Doit fonctionner
    }

    return 0;
}