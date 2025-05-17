/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:25:22 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/17 20:24:05 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <istream>
int main(int ac,char **av)
{
    BitcoinExchange exchange;
    
    exchange.ft_check_data_btc("data.csv");
    return EXIT_SUCCESS;
}