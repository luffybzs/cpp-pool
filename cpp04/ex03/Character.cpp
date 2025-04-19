/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:41:53 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/19 21:16:39 by ayarab           ###   ########.fr       */
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
	std::cout << "Character personalized construtor has been called" << std::endl;
	return ;
}

Character::Character(const Character &Character_cpy)
{
	Name = Character_cpy.Name;
    ft_cpy_stuff(Character_cpy);
	std::cout << "Character copy constructor has been called" << std::endl;
	return ;
}
Character &Character::operator=(const Character &Character_aff)
{
	std::cout << "Character Affectation operator has been called" << std::endl;
	Name = Character_aff.Name;
	return (*this);
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
void Character::ft_cpy_stuff(const Character &Character_cpy)
{
	int i;

	i = 0;
    ft_clear_stuff();
	while (i < 4)
	{
		if (Character_cpy.stuff[i] != NULL)
			stuff[i] = Character_cpy.stuff[i]->clone();
		else
			stuff[i] = NULL;
	}
	return ;
}