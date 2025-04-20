/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:41:29 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/19 15:41:30 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>
Ice::Ice(void) : AMateria()
{
	type = "ice";
	std::cout << "Ice default constructor has been called" << std::endl;
	return;
}

Ice::Ice(const Ice &Ice_cpy) : AMateria(Ice_cpy)
{
	std::cout << "Ice copy constructor has been called" << std::endl;
}

Ice &Ice::operator=(const Ice &Ice_aff)
{
	std::cout << "Cure Affectation operation has been called" << std::endl;
	if (this != &Ice_aff) 
		this->type  = Ice_aff.type;
	return *this;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor has been called" << std::endl;
	return;
}

AMateria *Ice::clone() const
{
	std::cout << "Ice clone method has been called" << std::endl;
	return new Ice(*this);
}
void Ice::use(ICharacter& target) 
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}