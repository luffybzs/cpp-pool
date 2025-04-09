/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:07:57 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/08 15:41:06 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define  DIAMONDTRAP_HPP

#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
    std::string _Name;
    public:
    DiamondTrap(void);
    DiamondTrap(std::string Name);
    DiamondTrap(const DiamondTrap &diamond_cpy);
    DiamondTrap &operator=(const DiamondTrap &DiamondTrap);
    ~DiamondTrap(void);
    void whoAmI();
};


#endif 