#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {

	public:
	ScavTrap(void);
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap &ScavTrap_cpy);
	ScavTrap &operator=(const ScavTrap &ScavTrap);
	~ScavTrap(void);
	void guardGate(void);
	void attack(const std:: string& target);
};







#endif