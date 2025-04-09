/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:10:16 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/08 15:48:26 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap :virtual public ClapTrap {

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