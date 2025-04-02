/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:34:51 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/02 15:58:39 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
	return ;
}
Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int n)
{
	value = n * (1 << bit);
	return ;
}

Fixed::Fixed(const float f)
{
	value = f * (1 << bit);
	return ;
}

Fixed &Fixed::operator=(const Fixed &oth)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &oth)
		this->value = oth.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

float Fixed::toFloat(void) const
{
	return (float)value / (1 << bit);
}

int Fixed::toInt(void) const
{
	return (roundf(toFloat()));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
	return ;
}