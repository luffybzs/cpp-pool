/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:41:53 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/20 21:15:02 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <cstddef>
#include <iostream>
#include <string>

Character::Character(void) : Name("NO_ID")
{
    ft_init_stuff();
	std::cout << "Character default constructor has been called" << std::endl;
	return ;
}

Character::Character(std::string _name) : Name(_name)
{
	ft_init_stuff();
	std::cout << "Character personalized construtor has been called" << std::endl;
	return ;
}

Character::Character(const Character &Character_cpy)
{
	Name = Character_cpy.Name;
	ft_init_stuff();
    ft_cpy_stuff(Character_cpy);
	std::cout << "Character copy constructor has been called" << std::endl;
	return ;
}
Character &Character::operator=(const Character &Character_aff)
{
	std::cout << "Character Affectation operator has been called" << std::endl;
	if (this == &Character_aff)
			return (*this);
	Name = Character_aff.Name;
	ft_clear_stuff();
	ft_cpy_stuff(Character_aff);
	return (*this);
}
Character::~Character(void)
{
	std::cout << "Character destructor has been called" << std::endl;
	ft_clear_stuff();
	return;
}

void Character::display_inventory()
{
	std::cout << "===============================================" << std::endl;
	std::cout << "Inventory of " << Name << ":" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->stuff[i] == NULL)
			std::cout << i << ". Empty" << std::endl;
		else
			std::cout << i << ". " << this->stuff[i]->GetType() << std::endl;
	}
	std::cout << "===============================================" << std::endl;
}


void Character::empty_inventory()
{
	for (int i = 0; i < 4; i++)
		this->unequip(i);
}

std::string const & Character::getName() const 
{
	return (Name);
}
void Character::ft_init_stuff(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		stuff[i] = NULL;
		i++;
	}
	return ;
}

void Character::ft_clear_stuff(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (stuff[i] != NULL)
            delete stuff[i];
		stuff[i] = NULL;
		i++;
	}
	return ;
}
void Character::ft_cpy_stuff(const Character &Character_cpy) {
    for (int i = 0; i < 4; i++) {
        if (Character_cpy.stuff[i] != NULL)
            stuff[i] = Character_cpy.stuff[i]->clone();
        else
            stuff[i] = NULL;
    }
}

void Character::equip(AMateria* m)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (stuff[i] == NULL)
		{
			stuff[i] = m;
			std::cout << Name << " equipped in " << m->GetType() << " inventory." << std::endl;
			return;
		}
		i++;
	}
	std::cout << Name << " Inventory full !" << std::endl;
	return;
}


void Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "index is not good" << std::endl;
		return;
	}
	if (stuff[idx] == NULL)
	{
		std::cout << Name << " tries to remove an item from an empty location" << std::endl;
		return;
	}
	else 
	{
		std::cout << Name << " drop one item of type" << stuff[idx]->GetType() << std::endl;
		stuff[idx] = NULL;
		return;
	} 
}
void Character::use(int idx, ICharacter& target) 
{
	if (idx < 0 || idx >= 4) 
	{
		std::cout << "Index is not good" << std::endl;
		return;
	}
	if (stuff[idx] == NULL) 
	{
		std::cout << "this emplacement of the array is empty" << std::endl;
		return;
	}
	stuff[idx]->use(target);
}
AMateria* Character::getMateria(int idx) const {
    if (idx >= 0 && idx < 4) {
        return stuff[idx];
    }
    return NULL;
}