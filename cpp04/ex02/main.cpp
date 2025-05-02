/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:39 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/20 14:56:08 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//Animal *a = new Animal();
	Animal *test_dog = new Dog();
	Animal *test_cat = new Cat();
	
	test_cat->MakeSound();
	test_dog->MakeSound();

	delete test_dog;
	delete test_cat;
	return 0;
}
