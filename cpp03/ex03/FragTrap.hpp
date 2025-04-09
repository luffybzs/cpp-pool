/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:47:17 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/08 15:48:00 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"
#include <string>
class FragTrap : virtual public ClapTrap 
{
    
    public:
    FragTrap(void);
    FragTrap(std::string Name);
    FragTrap(const FragTrap &FragTrap);
    FragTrap &operator=(const FragTrap &FragTrap);
    ~FragTrap(void);
    void highFivesGuys(void);
};




#endif