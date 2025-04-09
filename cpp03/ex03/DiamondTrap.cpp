/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:08:00 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/09 18:20:28 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


DiamondTrap::DiamondTrap(void) : ClapTrap("NO_ID_ClapTrap") ,ScavTrap(), FragTrap() 
{
    _Name = "NO_ID";
	hit_point = FragTrap::hit_point;
	energy_point = ScavTrap::energy_point;
	attack_damage = FragTrap::attack_damage;
    std::cout << "DiamondTrap default constructor has been called";
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name.append("_ClapTrap")), ScavTrap(), FragTrap()
{
    _Name = name;
    hit_point = FragTrap::hit_point;
	energy_point = ScavTrap::energy_point;
	attack_damage = FragTrap::attack_damage;
    std::cout << "DiamondTrap personlized constructor has been called";
    return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap) 
{
    *this = DiamondTrap;
    return;    
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &DiamondTrap)
{
    if (this == &DiamondTrap)
    {
        std::cout << "Warning {DiamondTrap Affectation operator has been called} but for the same memorie adress" << std::endl;
        return *this;
    }
	_Name = DiamondTrap._Name;
	hit_point = DiamondTrap.hit_point;
	energy_point = DiamondTrap.energy_point;
	attack_damage = DiamondTrap.attack_damage;
    std::cout << "DiamondTrap Affectation operator has been called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor has been called" << std::endl; 
    return;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My Name "<< _Name << std::endl;
    std::cout << "My ClapTrap name is " << ClapTrap::_Name << std::endl;   
    return;
}