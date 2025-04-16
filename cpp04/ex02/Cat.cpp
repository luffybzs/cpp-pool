/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:52 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/12 21:49:42 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>
#include <string>


Cat::Cat(void) : Animal()
{
    type = "Cat";
    Cat_Brain = new Brain();
    std::cout << "Cat Default constructor has been called" << std::endl;
    return; 
}


Cat::Cat(const Cat &Cat_cpy) : Animal()
{
    *this = Cat_cpy;
    std::cout << "Cat Copy operator has been called" << std::endl;
    return; 
}
Cat &Cat::operator=(const Cat &Cat_aff)
{
    type = Cat_aff.type;
    Cat_Brain = new Brain(*Cat_aff.Cat_Brain);
    if (!Cat_Brain)
      std::cout << "Error for brain affectation" << std::endl;
    std::cout << "Cat Affectation operator has been called" << std::endl;
    return *this;
}

Cat::~Cat(void)
{
    delete Cat_Brain;
    std::cout << "Cat destructor has been called" << std::endl;
    return;
}

void Cat::MakeSound(void) const
{
    std::cout << type << " MEOWWW" << std::endl;
    return;
}

std::string Cat::GetIdeas(int i) 
{
    return Cat_Brain->GetIdeas(i);
}

void Cat::Fill_Idea(std::string idea, int i) 
{
    Cat_Brain->Fill_Idea(idea,i);
    return;
}