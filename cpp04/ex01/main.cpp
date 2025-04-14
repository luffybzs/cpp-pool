/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:39 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/14 14:29:27 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>
#include <iostream>

int	main(void)
{
	const Animal *meta = new Animal();
	 Animal *j = new Dog();
	 Animal *i = new Cat();
	std::cout << j->GetType() << " " << std::endl;
	std::cout << i->GetType() << " " << std::endl;
	i->MakeSound(); // will output the cat sound!
	j->MakeSound();
	meta->MakeSound();
    delete meta;
    delete j;
    delete i;
	return (0);
}