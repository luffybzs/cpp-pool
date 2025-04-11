/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:26:53 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/11 17:08:39 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>


class Animal {
    protected:
    std::string type;
    public:
    Animal(void);
    Animal(std::string _type);
    Animal(const Animal &Animal_cpy);
    ~Animal(void);
    Animal &operator=(const Animal &animal_aff);
    
};





#endif