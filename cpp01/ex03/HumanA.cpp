/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:34:51 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/16 17:41:51 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>


HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) 
{
    return;
}

HumanA::~HumanA(void){
    return;
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl ;
}