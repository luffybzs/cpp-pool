/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:25:22 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/19 15:51:48 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <iostream>
#include <istream>

int main(int ac, char **av)
{
    BitcoinExchange exchange;
    
    exchange.ft_check_data_btc("data.csv");
    if (ac != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return EXIT_FAILURE;
    }
    exchange.ft_check_input(av[1]);
    return EXIT_SUCCESS;
}