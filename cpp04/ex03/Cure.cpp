

#include "Cure.hpp"
#include <iostream>
Cure::Cure(void) : AMateria()
{
	type = "Cure";
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

AMateria *Cure::clone() const
{
	std::cout << "Cure clone method has been called" << std::endl;
	return new Cure(*this);
}