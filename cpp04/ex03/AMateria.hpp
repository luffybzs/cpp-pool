#pragma once


#include "ICharacter.hpp"
#include <string>
class AMateria {
	protected:
		std::string type;
	public:
		AMateria(void);
		AMateria(std::string _type);
		AMateria(const AMateria &AMateria_cpy);
		AMateria &operator=(const AMateria &AMateria_aff);
		virtual ~AMateria(void);
		std::string const &GetType() const;
		virtual AMateria* clone() const = 0;
		void use(ICharacter& target);
};