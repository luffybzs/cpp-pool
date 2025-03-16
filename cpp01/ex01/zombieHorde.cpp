/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 20:54:04 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/15 21:41:11 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>


Zombie* zombieHorde( int N, std::string name)
{
    Zombie *dest = new Zombie[N]();
	for (int i = 0; i < N; i++) {
		dest[i].SetName(name);
	}
	return (dest);
}