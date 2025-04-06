/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:18:05 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/05 18:57:50 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
int main()
{
    ClapTrap  player("ayoub");
    ClapTrap player1;

    player1 = player;
    player1.attack("weapon");
    player1.takeDamage(5);
    player1.beRepaired(5);
  
    return 0;
}