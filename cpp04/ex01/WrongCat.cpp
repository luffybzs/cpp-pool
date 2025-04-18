/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 21:41:26 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/14 14:37:03 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor has been called" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &WrongCat_cpy): WrongAnimal()
{
	*this = WrongCat_cpy;
	std::cout << "WrongCat copy constructor has been called" << std::endl;
	return;
}

WrongCat &WrongCat::operator=(const WrongCat &WrongCat_aff)
{
	type = WrongCat_aff.type;
    std::cout << "WrongCat Affectation operator has been called" << std::endl;
	return  *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor has been called" << std::endl;
	return;
}

void WrongCat::MakeSound(void) const
{
	std::cout << type << " make sound" << std::endl;
	return;
}
