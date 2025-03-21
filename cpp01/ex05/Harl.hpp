/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:39:22 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/21 20:37:58 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
class Harl{
    private:
    void debug(void);
    void warning(void);
    void info(void);
    void error(void);
    public:
    void complain(std::string level);
    void (Harl:: *level[4])(void);
    Harl(void);
    ~Harl(void);
};



#endif