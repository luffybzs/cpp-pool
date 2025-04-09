/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:46:25 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/07 17:04:56 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "./ScavTrap.hpp"
#include "./ClapTrap.hpp"
#include <string>

FragTrap::FragTrap(void) : ClapTrap("NO ID", 100, 100, 30)
{
    std::cout << "FragTrap default constructor has been called" << std::endl;
    return;
}
FragTrap::FragTrap(std::string Name): ClapTrap(Name, 100, 100, 30)
{
    std::cout << "FragTrap personalized constructor has been called" << std::endl;
    return;
}
FragTrap::FragTrap(const FragTrap &FragTrap_cpy)
{
    *this = FragTrap_cpy;
    std::cout << "FragTrap copy constructor has been called" << std::endl;
    return;
}

FragTrap &FragTrap::operator=(const FragTrap &FragTrap)
{
    if (this == &FragTrap)
    {
        std::cout << "Warning {FragTrap Affectation operator has been called} but for the same memorie adress" << std::endl;
        return *this;
    }
	_Name = FragTrap._Name;
	hit_point = FragTrap.hit_point;
	energy_point = FragTrap.energy_point;
	attack_damage = FragTrap.attack_damage;
    std::cout << "FragTrap Affectation operator has been called" << std::endl;
	return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor has been called" << std::endl;
    return;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "This FragTrap is request to you a high five !!" << std::endl;
    return;
}