/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:47 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/17 19:14:23 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(void) : Animal()
{
    type = "Dog";
    Dog_Brain = new Brain();
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
    Dog_Brain = new Brain(*Dog_aff.Dog_Brain);
    if (!Dog_Brain)
      std::cout << "Error for brain affectation" << std::endl;
    std::cout << "Dog Affectation operator has been called" << std::endl;
    return *this;
}

Dog::~Dog(void)
{
    delete Dog_Brain;
    std::cout << "Dog destructor has been called" << std::endl;
    return;
}

void Dog::MakeSound(void) const
{
    std::cout << type << " WOOF" << std::endl;
    return;
}

std::string Dog::GetIdeas(int i) 
{
    return Dog_Brain->GetIdeas(i);
}

void Dog::Fill_Idea(std::string idea, int i) 
{
    Dog_Brain->Fill_Idea(idea,i);
    return;
}