
#include "AMateria.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(void)
{
	type = "No TYPE";
	std::cout << "AMateria Default constructor has been called" << std::endl;
	return; 
}
AMateria::AMateria(std::string _type) : type(_type)
{
	std::cout << "AMateria Personalized constructor has been called" << std::endl;
	return;
}

AMateria::AMateria(const AMateria &AMateria_cpy)
{
	this->type = AMateria_cpy.type;
	std::cout << "AMateria Copy constructor has been called" << std::endl;
	return;
}

AMateria &AMateria::operator=(const AMateria &AMateria_aff)
{
	type = AMateria_aff.type;
	std::cout << "AMateria Affectation operator has been called" << std::endl;
	return *this;
}
AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor has been called" << std::endl;
	return;
}
std::string const &AMateria::GetType() const 
{
	return (this->type);
}

/*void AMateria::use(ICharacter& target) 
{
	std::cout << "Default AMateria use member function !!" << std::endl << "Nothing to " << target.GetName() << std::endl;
}
*/