/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:15:56 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/15 21:17:01 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

void RandomChump(std::string name )
{
    Zombie tmp;

    tmp.SetName(name);
    tmp.announce();
    return;
}