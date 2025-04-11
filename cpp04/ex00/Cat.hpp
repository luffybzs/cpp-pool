/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:23:50 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/11 17:17:59 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Animal.hpp"
class Cat : public Animal
{
    Cat(void);
    Cat(std::string _type);
    Cat(const Cat &cta)    
};
