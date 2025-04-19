#pragma once 

#include "AMateria.hpp"
class Cure :public  AMateria
{
	public:
	Cure();
	Cure(const Cure &Cure_cpy);
	~Cure();
	Cure &operator=(Cure const &Cure_aff);
	AMateria* clone() const;
	//virtual void use(ICharacter& target);

};