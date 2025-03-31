/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:01:39 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/31 21:09:26 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
    return;
}


Fixed::Fixed(const Fixed &src)
{
	*this = src;
    return;
}

Fixed::Fixed(const int n)
{
	value = n * (1 << b);
    return;
}

Fixed::Fixed(const float f)
{
	value = f * (1 << b);
    return;
}

Fixed::~Fixed(void)
{
    return;
}

float Fixed::toFloat(void) const
{
	return (float)value / (1 << b);
}

int Fixed::toInt(void) const
{
	return (roundf(toFloat()));
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

const Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::operator=(const Fixed &oth)
{
	if (this != &oth)
		this->value = oth.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed &oth) const
{
	return (value > oth.value);
}

bool Fixed::operator<=(const Fixed &oth) const
{
	return (value <= oth.value);
}

bool Fixed::operator>(const Fixed &oth) const
{
	return (value > oth.value);
}

bool Fixed::operator>=(const Fixed &oth) const
{
	return (value >= oth.value);
}

bool Fixed::operator==(const Fixed &oth) const
{
	return (value == oth.value);
}

bool Fixed::operator!=(const Fixed &oth) const
{
	return value != oth.value;
}

Fixed Fixed::operator+(const Fixed &oth)
{
	value += oth.value;
	return *this;
}

Fixed Fixed::operator-(const Fixed &oth)
{
	value -= oth.value;
	return *this;
}

Fixed Fixed::operator/(const Fixed &oth)
{
	value /= oth.value / (1 << b);
	return *this;
}

Fixed Fixed::operator*(const Fixed &oth)
{
	value *= oth.value / (1 << b);
	return *this;
}

Fixed &Fixed::operator++()
{
	value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	++*this;
	return temp;
}

Fixed &Fixed::operator--()
{
	value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	--*this;
	return tmp;
}
