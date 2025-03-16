/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:34:54 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/16 17:29:33 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
    
    private:
        std::string name;
        Weapon &weapon;
    public:
    void attack(void);
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);
    
};




#endif