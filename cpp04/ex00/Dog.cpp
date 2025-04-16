/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:47 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/12 21:49:53 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>
Dog::Dog(void) : Animal()
{
    type = "Dog";
    std::cout << "Dog default constructor has been called" << std::endl;
    return;
}

Dog::Dog(const Dog &Dog_cpy) : Animal()
{
    *this = Dog_cpy;
    std::cout << "Dog Copy operator has been called" << std::endl;
    return;
}

Dog &Dog::operator=(const Dog &Dog_aff)
{
    type = Dog_aff.type;
    std::cout << "Dog Affectation operator has been called" << std::endl;
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor has been called" << std::endl;
    return;
}

void Dog::MakeSound(void) const
{
    std::cout << type << " WOOF" << std::endl;
    return;
}
