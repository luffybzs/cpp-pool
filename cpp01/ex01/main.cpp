/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 20:53:53 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/15 21:44:24 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Zombie.hpp"

int main()
{
    int nb = 10;
    int i = 0;
    Zombie *Foo = zombieHorde(nb, "ayoub");
    while (i < nb) 
    {
		Foo[i].announce();
        i++;    
    }
    delete []Foo;

 
    return EXIT_SUCCESS;
}