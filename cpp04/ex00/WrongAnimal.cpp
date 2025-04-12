/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 21:41:23 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/12 21:51:59 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor has been called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &to_copy)
 {
	*this = to_copy;
	std::cout << "WrongAnimal copy constructor has been called" << std::endl;
    return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &to_affect) 
{
    std::cout << "WrongAnimal Affectation operator has been called" << std::endl;
	this->type = to_affect.type;
	return *this;
}
WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal destructor has been called" << std::endl;
    return;
}

void WrongAnimal::makeSound(void) const 
{
	std::cout << "WrongAnimal make sound" << std::endl;
    return;
}

std::string WrongAnimal::getType(void) const 
{
	return this->type;
}