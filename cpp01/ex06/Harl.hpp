/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:10:23 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/21 20:22:30 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
public:
    Harl();
    ~Harl();
    void complain(std::string level);
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    int levelToInt(std::string level);
};

#endif