/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:26:41 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/11 16:53:20 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("No_Type")
{
    std::cout << "Animal default constructor has been called" << std::endl;
    return;
}

Animal::Animal(std::string _type) : type(_type)
{
    std::cout << "Animal personalized constructor has been called" << std::endl;
    return;
}

Animal::Animal(const Animal &animal_cpy)
{
    *this = animal_cpy;
    std::cout << "Animal Copy constructor has been called" << std::endl;
    return;
}

Animal &Animal::operator=(const Animal &animal_aff)
{
    type = animal_aff.type;
    std::cout << "Animal Affectation operator has been called" << std::endl;
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor has been called" << std::endl;
    return;
}