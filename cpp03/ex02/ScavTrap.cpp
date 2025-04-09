/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:10:08 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/07 14:41:29 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>


ScavTrap::ScavTrap(void) : ClapTrap("luffy", 100, 50, 20)
{
	std::cout << "ScavTrap Default constructor has been called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Name constructor has been called" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor has been called" << std::endl;
	return;
}
ScavTrap::ScavTrap(const ScavTrap &ScavTrap_cpy)
{
	std::cout << "ScavTrap Copy constructor has been called" << std::endl;
	*this = ScavTrap_cpy;
	return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ScavTrap)
{
	
	if (this == &ScavTrap)
    {
        std::cout << "Warning {ScavTrap Affectation operator has been called} but for the same memorie address" << std::endl;
        return *this;
    }
	_Name = ScavTrap._Name;
	hit_point = ScavTrap.hit_point;
	energy_point = ScavTrap.energy_point;
	attack_damage = ScavTrap.attack_damage;
	std::cout << "ScavTrap Affectation operator has been called" << std::endl;
	return *this;
}

void ScavTrap::guardGate(void) 
{
	std::cout << "This ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (hit_point <= 0 || energy_point <= 0)
	{
		std::cout << "no energy or no Pv" << std::endl;
		return;
	}
	std::cout << _Name << " attacks " << target << ", causing " 
              << attack_damage
              << " point of damage !" << std::endl;
    energy_point -= 1;

	return;
}