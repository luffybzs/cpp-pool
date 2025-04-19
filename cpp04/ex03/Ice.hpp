#pragma once


#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	Ice();
	Ice(const Ice &Ice_cpy);
	~Ice();
	Ice &operator=(Ice const &Ice_aff);
	AMateria* clone() const;
	//virtual void use(ICharacter& target);

};