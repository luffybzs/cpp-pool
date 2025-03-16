/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:34:57 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/16 17:41:57 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
HumanB::HumanB(std::string name) : name(name){
    return;
}

HumanB::~HumanB()
{
    return;
}

void HumanB::setWeapon(Weapon &new_weapon){
    weapon = &new_weapon;
}

void HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl ;
}