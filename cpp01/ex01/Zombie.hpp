/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 20:54:02 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/15 21:19:41 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

#include <cstdlib>
#include <iostream>


class Zombie
{
  private:
  std::string name;
  
  public:
  void SetName(std::string name);
  std::string GetName(void);
  void announce(void);
 
  Zombie();
  ~Zombie();
  
};


Zombie* zombieHorde( int N, std::string name);

#endif