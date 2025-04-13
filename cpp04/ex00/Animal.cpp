/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:26:41 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/12 21:40:42 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Animal")
{
    std::cout << "Animal default constructor has been called" << std::endl;
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
void Animal::MakeSound(void) const
{
    std::cout << "Animal make sound" << std::endl;
    return;
}
std::string Animal::GetType(void) const
{
    return type;
}