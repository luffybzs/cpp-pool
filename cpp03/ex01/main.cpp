/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:10:37 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/07 14:32:57 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include <cstdlib>


int main(void)
{
    ClapTrap ayoub("ayoub");
    ScavTrap mini_ayoub("mini_ayoub");
    ScavTrap tmp_ayoub(mini_ayoub);
    //mini_ayoub = tmp_ayoub;
    ayoub.attack("gun");
    ayoub.takeDamage(10);
    ayoub.beRepaired(9);
    mini_ayoub.attack("sword");
    mini_ayoub.takeDamage(20);
    mini_ayoub.guardGate();
    tmp_ayoub.attack("katana");
    tmp_ayoub.takeDamage(50);
    tmp_ayoub.guardGate();
    return EXIT_SUCCESS;
}