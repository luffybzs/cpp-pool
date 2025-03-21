/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:34:57 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/18 16:11:18 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <cstddef>
#include <iostream>

HumanB::HumanB(std::string name) : name(name){   
    return;
}

HumanB::~HumanB(){
    return;
}

void HumanB::setWeapon(Weapon &new_weapon){
    weapon = &new_weapon;
}

void HumanB::attack(void){
    if (weapon != NULL)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl ;
    else 
        std::cout << name << " No Weapon" << std::endl;
}