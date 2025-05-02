/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:41:21 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/20 20:06:00 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#pragma once 

class Cure :public  AMateria
{
	public:
	Cure();

	Cure(const Cure &Cure_cpy);
	~Cure();
	Cure &operator=(Cure const &Cure_aff);
	Cure* clone() const;
	virtual void use(ICharacter& target);

};