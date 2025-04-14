/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:45 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/14 16:31:17 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal{
    private:
        Brain Dog_Brain;
    public:
    Dog(void);
    Dog(const Dog &Dog_cpy);
    Dog &operator=(const Dog &Dog_aff);
    ~Dog(void);
    void MakeSound(void)const; 
};