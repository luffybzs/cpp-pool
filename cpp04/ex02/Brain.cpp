/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:58:46 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/17 19:57:01 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>


Brain::Brain(void)
{
    std::cout << "Brain default constructor has been called" << std::endl;
    return;
}

Brain::Brain(const Brain &brain_cpy)
{
    *this = brain_cpy;
    std::cout << "Brain copy constructor has been called" << std::endl;
    return;
}

Brain &Brain::operator=(const Brain &Brain_aff)
{
    int i = 0;
    while (i < 100) {
        ideas[i] = Brain_aff.ideas[i];
        i++;
    }
    std::cout << "Brain Affectation operator has been called" << std::endl;
    return *this;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor has been called" << std::endl;
    return;
}

std::string Brain::GetIdeas(int i) 
{
    if (i > 99 || i < 0)
        return NULL;
    return ideas[i];
}

void Brain::Fill_Idea(std::string idea, int i)
{
    if (i > 99 || i < 0) 
      return ;
    this->ideas[i] = idea;
}