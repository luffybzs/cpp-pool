/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:52:17 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/17 21:57:04 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstddef>
#include <fstream>
#include <ios>
#include <iostream>
#include <istream>
#include <sstream>
#include <string>

void BitcoinExchange::ft_check_data_btc(const std::string &data_csv)
{
	float	price;

	std::ifstream file_data(data_csv.c_str());
	std::string tmp;
	if (!file_data.is_open())
	{
		std::cerr << "FAIL OPEN" << std::endl;
		return ;
	}
	std::getline(file_data, tmp);
	while (std::getline(file_data, tmp))
	{
		std::stringstream ss(tmp);
		std::string date;
		std::string priceStr;
		if (!std::getline(ss, date, ',') || !std::getline(ss, priceStr))
		{
			std::cerr << "Error: bad line in data file => " << tmp << std::endl;
			continue ;
		}
		price = std::atof(priceStr.c_str());
		data_btc[date] = price;
	}
	file_data.close();
	// for (std::map<std::string,
	// float>::iterator it = data_btc.begin(); it != data_btc.end(); ++it) {
	// std::cout << it->first << " => " << it->second << std::endl;}
}

void BitcoinExchange::ft_check_input(const std::string &input)
{
	std::ifstream file_input(input.c_str());
	std::string tmp;
	if (!file_input.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return ;
	}
	std::getline(file_input, tmp);
	while (std::getline(file_input, tmp))
	{
		if (tmp.empty())
			continue ;
		std::size_t pos = tmp.find("|");
		if (pos == std::string::npos)
		{
			std::cerr << "Error: bad input => " << tmp << std::endl;
			continue ;
		}
		std::string date = tmp.substr(0, pos);
		std::string valueStr = tmp.substr(pos + 3);
		float value = std::atof(valueStr.c_str());
		if (value < 0)
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue ;
		}
		if (value > 1000)
		{
			std::cerr << "Error: too large a number." << std::endl;
			continue ;
		}
	}
}