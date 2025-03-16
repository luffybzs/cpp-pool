/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:35:05 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/16 17:41:33 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::~Weapon()
{
    return;
}

Weapon::Weapon(std::string type) : _type(type)
{
    return;
}

void Weapon::setType(std::string weapon_type)
{
    _type = weapon_type;
    return;
}


std::string Weapon::getType(void)
{
    return _type;
}

