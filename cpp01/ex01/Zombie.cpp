/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 20:53:59 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/22 15:29:40 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie::Zombie()
{
    return;
}

Zombie::~Zombie()
{
    std::cout << name << " : M.O.R.T T'ES MORT LE ZOMBIE" << std::endl; 
    return;
}

std::string Zombie::GetName()
{
    return name;
}


void Zombie::SetName(std::string name_zombie)
{
    name = name_zombie;
    return;
}

void Zombie::announce(void)
{
    std::cout << name;
    std::cout << " : BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}