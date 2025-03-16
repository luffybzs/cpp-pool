/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:35:07 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/16 17:41:10 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>


class Weapon {
    private:
        std::string _type;
    public:
        std::string getType(void);
        void setType(std::string type);
    Weapon(std::string type);
    ~Weapon(void);
};




#endif