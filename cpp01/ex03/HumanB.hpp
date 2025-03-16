/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:35:00 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/16 17:28:29 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
class HumanB{
    private :
        std::string name;
        Weapon *weapon;
    public:
        void setWeapon(Weapon &weapon);
        void attack();
        HumanB(std::string name);
        ~HumanB();
};





#endif