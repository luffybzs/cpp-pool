/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:50 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/14 16:30:43 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain Cat_Brain;
    public:
    Cat(void);
    Cat(const Cat &cat_cpy);
    Cat &operator=(const Cat &cat_aff);
    ~Cat(void);
    void MakeSound(void)const;
        
};
