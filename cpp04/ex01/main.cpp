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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	std::cout << "\n=== Polymorphic array test ===\n";
	{
		const int size = 4;
		Animal *animals[size];

		for (int i = 0; i < size; i++) {
			if (i < 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		Dog* dog0 = dynamic_cast<Dog*>(animals[0]);
		Cat* cat2 = dynamic_cast<Cat*>(animals[2]);

		if (dog0)
			dog0->Fill_Idea("Je veux courir après les balles", 0);
		if (cat2)
			cat2->Fill_Idea("Je suis le maître du monde", 0);
		if (dog0)
			std::cout << "Dog0 idea: " << dog0->GetIdeas(0) << std::endl;
		if (cat2)
			std::cout << "Cat2 idea: " << cat2->GetIdeas(0) << std::endl;

		for (int i = 0; i < size; i++) {
			delete animals[i];
		}
	}

	std::cout << "\n=== Deep copy test (Dog) ===\n";
	{
		Dog dog1;
		dog1.Fill_Idea("Manger des croquettes", 0);

		Dog dog2 = dog1; 

		std::cout << "Dog1 idea: " << dog1.GetIdeas(0) << std::endl;
		std::cout << "Dog2 idea: " << dog2.GetIdeas(0) << std::endl;

		dog2.Fill_Idea("Dormir toute la journée", 0);

		std::cout << "Dog1 idea after dog2 changes: " << dog1.GetIdeas(0) << std::endl;
		std::cout << "Dog2 idea after change: " << dog2.GetIdeas(0) << std::endl;
	}
	
	std::cout << "\n=== Deep copy test (Cat) ===\n";
	{
		Cat cat1;
		cat1.Fill_Idea("Mon plan pour dominer le monde", 0);

		Cat cat2 = cat1;

		std::cout << "Cat1 idea: " << cat1.GetIdeas(0) << std::endl;
		std::cout << "Cat2 idea: " << cat2.GetIdeas(0) << std::endl;

		cat2.Fill_Idea("Faire tomber un verre d’eau", 0);

		std::cout << "Cat1 idea after cat2 changes: " << cat1.GetIdeas(0) << std::endl;
		std::cout << "Cat2 idea after change: " << cat2.GetIdeas(0) << std::endl;
	}

	std::cout << "\n=== Fin des tests ===\n";
	return 0;
}
