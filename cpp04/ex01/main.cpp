/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:39 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/17 20:03:42 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>
#include <iostream>

int	main(void)
{
	std::cout << "=== Polymorphic array test ===\n";
	{
		int size = 4;
		Animal *animals[size];

		for (int i = 0; i < size; i++)
		{
			if (i < 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}

		for (int i = 0; i < size; i++)
		{
			delete animals[i];
		}
	}
	std::cout << "\n=== Deep copy test ===\n";
	{
		Dog dog1;
		dog1.Fill_Idea("", 0);
		Dog dog2 = dog1;

		std::cout << "Dog1 idea: " << dog1.GetIdeas(0) << std::endl;
		std::cout << "Dog2 idea: " << dog2.GetIdeas(0) << std::endl;

		dog2.Fill_Idea("Dormir", 0);
		std::cout << "Dog1 idea after dog2 changes: " << dog1.GetIdeas(0) << std::endl;
		std::cout << "Dog2 idea after change: " << dog2.GetIdeas(0) << std::endl;
	}

	std::cout << "\n=== End of tests ===\n";
	return (0);
}