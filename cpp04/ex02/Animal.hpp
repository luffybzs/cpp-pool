/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:26:53 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/12 21:47:31 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>


class Animal {
    protected:
    std::string type;
    public:
    Animal(void);
    Animal(const Animal &Animal_cpy);
    Animal &operator=(const Animal &animal_aff);
    virtual ~Animal(void);
    virtual void MakeSound(void) const = 0;
    virtual std::string GetType(void) const;
};





#endif