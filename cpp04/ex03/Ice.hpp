/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:41:36 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/20 20:08:51 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once


#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	Ice();
	Ice(const Ice &Ice_cpy);
	~Ice();
	Ice &operator=(Ice const &Ice_aff);
	Ice* clone() const;
	virtual void use(ICharacter& target);

};