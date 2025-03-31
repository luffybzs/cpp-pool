/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:27:35 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/25 16:11:13 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  private:
    int _value; 
    static int const _bits = 8; 

  public:
  int getRawBits(void) const; 
  void setRawBits(int const raw); 
  Fixed &operator=(Fixed &to_copy); 
  Fixed(void);   
  Fixed(Fixed &to_copy); 
  ~Fixed(void);
};

#endif