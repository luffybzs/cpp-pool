/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:10:23 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/07 13:10:24 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap {
    protected:
    std::string _Name;
    int hit_point;
    int energy_point;
    int attack_damage;
	ClapTrap(std::string Name, int life, int eng, int att);
    public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap(void);
    ClapTrap(const ClapTrap &to_copy);
    ClapTrap &operator=(ClapTrap &claptrap);
    void attack(const std:: string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};


#endif