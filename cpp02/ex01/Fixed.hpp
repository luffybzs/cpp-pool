/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:34:57 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/02 19:52:54 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <cmath>

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
	Fixed &operator=(const Fixed &oth);
	int toInt(void) const;
	float toFloat(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif