/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:01:45 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/31 21:17:31 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& fx)
{
    os << fx.toFloat();
    return os;
}
int main( void ) 
{
  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  
  std::cout << a << std::endl;
  
  std::cout << b << std::endl;
  
  std::cout << Fixed::max( a, b ) << std::endl;
  return 0;
}