/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:10:37 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/09 18:27:05 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include <cstdlib>


int main(void)
{
    std::cout << "--- Création de clapTrap ---" << std::endl;
    ClapTrap ayoub("ayoub");
    ayoub.attack("gun");
    ayoub.takeDamage(10);
    ayoub.beRepaired(9);
    std::cout << "--- Destruction de FragTrap ---" << std::endl;
    std::cout << "--- Création de ScavTrap ---" << std::endl;
    ScavTrap mini_ayoub("mini_ayoub");
    mini_ayoub.attack("sword");
    mini_ayoub.takeDamage(20);
    mini_ayoub.guardGate();
    std::cout << "--- Destruction de ScavTrap ---" << std::endl;
    std::cout << "--- Création de FragTrap ---" << std::endl;
    FragTrap wassim("Wassim");
    wassim.attack("club");
    wassim.takeDamage(90);
    wassim.beRepaired(90);
    wassim.highFivesGuys();
    std::cout << "--- Création de DiamondTrap ---" << std::endl;
    DiamondTrap mini_wassim("Diamondy");
    mini_wassim.attack("opponent");
    mini_wassim.takeDamage(60);
    mini_wassim.beRepaired(30);
    mini_wassim.guardGate();    // Inherited from ScavTrap
    mini_wassim.highFivesGuys(); // Inherited from FragTrap
    mini_wassim.whoAmI();        // Unique to DiamondTrap
    std::cout << "--- Destruction de DiamondTrap ---" << std::endl;

    return EXIT_SUCCESS;
}

/*
int main(void) {

    // Test avec ScavTrap
    std::cout << "--- Création de ScavTrap ---" << std::endl;
    ScavTrap scav("Scavvy");
    scav.attack("target");
    scav.takeDamage(40);
    scav.beRepaired(15);
    scav.guardGate();
    std::cout << "--- Destruction de ScavTrap ---" << std::endl;

    std::cout << std::endl;

    // Test avec FragTrap
    std::cout << "--- Création de FragTrap ---" << std::endl;
    FragTrap frag("Fraggy");
    frag.attack("enemy");
    frag.takeDamage(50);
    frag.beRepaired(20);
    frag.highFivesGuys();
    std::cout << "--- Destruction de FragTrap ---" << std::endl;

    std::cout << std::endl;

    // Test avec DiamondTrap
    std::cout << "--- Création de DiamondTrap ---" << std::endl;
    DiamondTrap diamond("Diamondy");
    diamond.attack("opponent");
    diamond.takeDamage(60);
    diamond.beRepaired(30);
    diamond.guardGate();    // Inherited from ScavTrap
    diamond.highFivesGuys(); // Inherited from FragTrap
    diamond.whoAmI();        // Unique to DiamondTrap
    std::cout << "--- Destruction de DiamondTrap ---" << std::endl;

    return 0;
}

*/