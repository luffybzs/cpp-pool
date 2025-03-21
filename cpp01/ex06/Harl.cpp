/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:10:26 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/21 20:36:15 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl() {
    return;
}
Harl::~Harl() {
    return;
}

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::levelToInt(std::string level) {
    if (level == "DEBUG") 
        return 0;
    if (level == "INFO") 
        return 1;
    if (level == "WARNING") 
        return 2;
    if (level == "ERROR") 
        return 3;
    return -1;
}

void Harl::complain(std::string level) {
    int levelInt = levelToInt(level);
    switch (levelInt) {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Unrecognized level ]" << std::endl;
            std::cout << "The provided level is not valid. Please try another one." << std::endl;
            std::cout << "Exiting..." << std::endl;
            break;
    }
}