/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:41:21 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/19 15:41:22 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 

#include "AMateria.hpp"
class Cure :public  AMateria
{
	public:
	Cure();
	Cure(const Cure &Cure_cpy);
	~Cure();
	Cure &operator=(Cure const &Cure_aff);
	AMateria* clone() const;
	virtual void use(ICharacter& target);

};