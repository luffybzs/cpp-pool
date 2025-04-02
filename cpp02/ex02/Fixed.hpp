/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:01:42 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/02 18:01:37 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <cmath>
# include <iostream>
# include <string>

class Fixed
{
  private:
	int value;
	static const int bits = 8;

  public:
	Fixed(void);
	Fixed(const Fixed &src);
	Fixed(const int n);
	Fixed(const float f);
	~Fixed(void);
	bool operator>=(const Fixed &oth) const;
	bool operator<=(const Fixed &oth) const;
	bool operator==(const Fixed &oth) const;
	bool operator<(const Fixed &oth) const;
	bool operator>(const Fixed &oth) const;
	bool operator!=(const Fixed &oth) const;
	Fixed &operator=(const Fixed &oth);
	Fixed operator+(const Fixed &oth);
	Fixed operator-(const Fixed &oth);
	Fixed operator/(const Fixed &oth);
	Fixed operator*(const Fixed &oth);
	Fixed &operator--();
	Fixed operator--(int);
	Fixed &operator++();
	Fixed operator++(int);
	int toInt(void) const;
	float toFloat(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	static Fixed min(Fixed &a, Fixed &b);
	static const Fixed min(const Fixed &a, const Fixed &b);
	static Fixed max(Fixed &a, Fixed &b);
	static const Fixed max(const Fixed &a, const Fixed &b);
};

#endif