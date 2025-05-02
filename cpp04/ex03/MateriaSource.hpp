/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:59:08 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/20 18:08:32 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "AMateria.hpp"
#include "IAMateria.hpp"


class MateriaSource : public IMateriaSource
{
	private:
	 AMateria *library[4];
	 void ft_init_library(void);
	 void ft_clear_library(void);
	 void ft_cpy_library(const MateriaSource &MateriaSource_cpy);
	public:
	 MateriaSource(void);
	 MateriaSource(const MateriaSource &MateriaSource_cpy);
	 MateriaSource &operator=(const MateriaSource &MateriaSource_aff);
	 ~MateriaSource(void);
	 
	 virtual void learnMateria(AMateria* );
	 virtual AMateria* createMateria(std::string const & type);
};