/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:41:50 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/20 21:28:33 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
  private:
	std::string Name;
	AMateria *stuff[4];
    void ft_init_stuff(void);
    void ft_clear_stuff(void);
    void ft_cpy_stuff(const Character &Character);
  public:
	Character(void);
	Character(std::string _name);
	Character(const Character &Character_cpy);
	Character &operator=(const Character &Character_aff);
	~Character(void);
	AMateria* getMateria(int idx) const;

	virtual void display_inventory();
	virtual void empty_inventory();
	virtual std::string const &getName(void) const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};