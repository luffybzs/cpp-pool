/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:45 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/12 21:38:53 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
class Dog : public Animal{
    public:
    Dog(void);
    Dog(const Dog &Dog_cpy);
    Dog &operator=(const Dog &Dog_aff);
    ~Dog(void);
    void MakeSound(void);
};