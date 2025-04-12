/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:50 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/12 21:38:38 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Animal.hpp"
class Cat : public Animal
{
    public:
    Cat(void);
    Cat(const Cat &cat_cpy);
    Cat &operator=(const Cat &cat_aff);
    ~Cat(void);
    void MakeSound(void);
        
};
