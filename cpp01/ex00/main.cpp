/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:16:07 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/15 21:15:49 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main()
{
    Zombie *test1;
   
    test1 = ft_newzombie("ayoub le goat");
    test1->announce();
    RandomChump("younes le goat");

    delete test1;
 
    return EXIT_SUCCESS;
}