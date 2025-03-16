/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:16:13 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/15 18:08:01 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie *ft_newzombie(std::string name)
{
    Zombie *tmp;

    tmp = new Zombie();
    tmp->SetName(name);
    return tmp;
}
