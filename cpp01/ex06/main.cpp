/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:10:19 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/21 20:26:28 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv) {
    Harl harl;

    if (argc == 2) {
        harl.complain(argv[1]);
    } else {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
    }
    return 0;
}
