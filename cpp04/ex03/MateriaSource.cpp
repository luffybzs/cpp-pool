/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:58:59 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/20 20:41:21 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <cstddef>
#include <iostream>

MateriaSource::MateriaSource(void)
{
	ft_init_library();
	std::cout << "MateriaSource default constructor has been called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &MateriaSource_cpy)
{
	ft_init_library();
	ft_cpy_library(MateriaSource_cpy);
	std::cout << "MateriaSource copy constructor has been called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &MateriaSource_aff)
{
	std::cout << "MateraiSource Affectation operator has been called" << std::endl;
	if (this != &MateriaSource_aff)
	{
		ft_clear_library();
		ft_cpy_library(MateriaSource_aff);
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor has been called" << std::endl;
    ft_clear_library();
	return ;
}

void MateriaSource::ft_init_library(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		library[i] = NULL;
		i++;
	}
	return ;
}
void MateriaSource::ft_clear_library(void)
{
	int	i;
    
	i = 0;
	while (i < 4)
	{
        if (library[i] != NULL)
            delete library[i];
		library[i] = NULL;
		i++;
	}
	return ;
}
void MateriaSource::ft_cpy_library(const MateriaSource &MateriaSource_cpy) {
    for (int i = 0; i < 4; i++) {
        if (MateriaSource_cpy.library[i] != NULL)
            library[i] = MateriaSource_cpy.library[i]->clone(); // Copie profonde
        else
            library[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* to_stock) {
	for (int i = 0; i < 4; i++) {
		if (library[i] == NULL) {
			library[i] = to_stock->clone();
			std::cout << "Learned a new Materia -> " << library[i]->GetType() << std::endl;
			return;
		}
	}
	std::cout << "Can't learn a new Materia!! Inventory full." << std::endl;
}


AMateria* MateriaSource::createMateria(std::string const &type) 
{
	int i = 0;
	
	while (i < 4) 
    {
		if (this->library[i] != NULL) 
        {
			if (this->library[i]->GetType() == type) 
            {
				std::cout << "createMateria create a Materia with type " << type << std::endl;
				return this->library[i]->clone();
			}
		}
		i++;
	}
	std::cout << "createMateria can't create a Materia with type " << type << "!! Not learn." << std::endl;
	return NULL;
}