/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:41:12 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/20 20:32:54 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>
Cure::Cure(void) : AMateria()
{
	type = "cure";
	std::cout << "Cure default constructor has been called" << std::endl;
	return;
}

Cure::Cure(const Cure &Cure_cpy) : AMateria(Cure_cpy)
{
	std::cout << "Cure copy constructor has been called" << std::endl;
}

Cure &Cure::operator=(const Cure &Cure_aff)
{
	std::cout << "Cure Affectation operation has been called" << std::endl;
	if (this != &Cure_aff) 
		this->type  = Cure_aff.type;
	return *this;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor has been called" << std::endl;
	return;
}

Cure *Cure::clone() const
{
	std::cout << "Cure clone method has been called" << std::endl;
	return new Cure(*this);
}

void Cure::use(ICharacter& target) 
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}
