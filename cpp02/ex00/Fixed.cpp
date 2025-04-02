/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:27:26 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/02 19:25:14 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) 
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void) 
{
	std::cout << "Destructor called" << std::endl;
	return;
}


Fixed::Fixed(Fixed &to_copy) /*: _value(to_copy._value)*/ 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = to_copy;
	return;
}

Fixed &Fixed::operator=(Fixed &to_copy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &to_copy)
		this->_value = to_copy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw) 
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
