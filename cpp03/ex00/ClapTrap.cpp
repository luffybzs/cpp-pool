/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:18:02 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/05 18:52:35 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include <iostream>
#include <ostream>
#include <type_traits>

ClapTrap::ClapTrap(void) : _Name("NO ID"), hit_point(10), energy_point(10), attack_damage(0)
{
    std::cout << "ClapTrap default constructor has been called" << std::endl;   
}

ClapTrap::ClapTrap(std::string name) : _Name(name), hit_point(10), energy_point(10), attack_damage(0) 
{   
    std::cout << "ClapTrap Name constructor has been called" <<std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor has been called" << std::endl;
	return ;
}
ClapTrap::ClapTrap(ClapTrap &to_copy): _Name(to_copy._Name), hit_point(to_copy.hit_point), energy_point(to_copy.energy_point), attack_damage(to_copy.attack_damage) 
{
	std::cout << "ClapTrap Copy constructor has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &claptrap) 
{
	attack_damage = claptrap.attack_damage;
	_Name = claptrap._Name;
	energy_point = claptrap.energy_point;
	hit_point = claptrap.hit_point;
	return *this;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_point <= 0)
    {
        std::cout << _Name << " is dead" << std::endl;
        return;
    }
    hit_point -= amount;
    std::cout << _Name << " take " << amount << " damage" << std::endl;
    if (hit_point <= 0)
    {
        std::cout << _Name << " is dead" << std::endl;
        return;
    }
    std::cout << _Name << " life now " << hit_point << std::endl;
    return;
}


void ClapTrap::attack(const std::string &target)
{
    if (hit_point <= 0 || energy_point <= 0)
	{
		std::cout << "no energy or no Pv" << std::endl;
		return ;
	}
	std::cout << _Name << " attacks " << target << ", causing " 
              << attack_damage
              << " point of damage !" << std::endl;
    energy_point -= 1;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_point <= 0)
    {
        std::cout << "i don't have energy point" << std::endl;
        return;
    }
    if (hit_point <= 0)
    {
        std::cout << _Name << "i am died" << std::endl;
        return;
    }
    energy_point -= 1;
    std::cout << "you receive " << amount << " of health" << std::endl;
    hit_point += amount;
    std::cout << _Name << " your HIT POINT now " << hit_point << std::endl;
    return;
}
