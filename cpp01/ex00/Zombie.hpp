/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:16:03 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/15 21:16:40 by ayarab           ###   ########.fr       */
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
  void ft_print_name(void);
  void announce(void);
  Zombie();
  ~Zombie();
  
};
Zombie *ft_newzombie(std::string name);
void RandomChump(std::string name);
#endif