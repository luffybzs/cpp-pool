/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:52:17 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/20 14:35:47 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <ios>
#include <iostream>
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
	return ;
}
void BitcoinExchange::ft_check_input(const std::string &input)
{
	float	value;
	float	rate;
	float	result;

	std::ifstream file_input(input.c_str());
	std::string tmp;
	std::string date;
	std::string valueStr;
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
		if (valueStr.find('|') != std::string::npos)
		{
			std::cerr << "Error: bad input => " << tmp << std::endl;
			continue ;
		}
		date = ft_trim(tmp.substr(0, pos));
		valueStr = ft_trim(tmp.substr(pos + 1));
		if (valueStr.empty())
		{
			std::cerr << "Error: no value provided." << std::endl;
			continue ;
		}
		value = std::atof(valueStr.c_str());
		if (ft_is_Valid_Date(date) == false)
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue ;
		}
		if (ft_is_Valid_Price(valueStr, value) == EXIT_FAILURE)
		{
			
			continue ;
		}
		std::map<std::string, float>::iterator it = data_btc.lower_bound(date);
		if (it == data_btc.end() || it->first != date)
		{
			if (it == data_btc.begin())
			{
				std::cerr << "Error: date too early => " << date << std::endl;
				continue ;
			}
			--it;
		}
		rate = it->second;
		result = rate * value;
		std::cout << date << " => " << value << " = " << result << std::endl;
	}
	file_input.close();
	return ;
}

bool BitcoinExchange::ft_is_Valid_Date(const std::string &date)
{
	int		year;
	int		month;
	int		day;
	bool	isLeapYear;

	std::string year_str;
	std::string month_str;
	std::string day_str;
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return (false);
	year_str = date.substr(0, 4);
	month_str = date.substr(5, 2);
	day_str = date.substr(8, 2);
	if (ft_check_digit(year_str, month_str, day_str) == EXIT_FAILURE)
		return (false);
	year = std::atoi(year_str.c_str());
	month = std::atoi(month_str.c_str());
	day = std::atoi(day_str.c_str());
	if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
		return (false);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (false);
	if (month == 2)
	{
		isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		if (day > 29 || (day == 29 && !isLeapYear))
			return (false);
	}
	return (true);
}

int BitcoinExchange::ft_check_digit(std::string &year_str,
	std::string &month_str, std::string &day_str)
{
	for (std::size_t i = 0; i < year_str.length(); i++)
	{
		if (!std::isdigit(year_str[i]))
			return (EXIT_FAILURE);
	}
	for (std::size_t i = 0; i < month_str.length(); i++)
	{
		if (!std::isdigit(month_str[i]))
			return (EXIT_FAILURE);
	}
	for (std::size_t i = 0; i < day_str.length(); i++)
	{
		if (!std::isdigit(day_str[i]))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
std::string BitcoinExchange::ft_trim(const std::string &str)
{
	std::string result;
	std::size_t start;
	std::size_t end;
	if (str.empty())
		return ("");
	start = 0;
	while (start < str.length() && (str[start] == ' ' || str[start] == '\t'))
		start++;
	end = str.length() - 1;
	while (end > start && (str[end] == ' ' || str[end] == '\t'))
		end--;
	result = str.substr(start, end - start + 1);
	return (result);
}

int BitcoinExchange::ft_is_Valid_Price(const std::string &valueStr,
	float &value)
{
	std::size_t i;
	if (valueStr.empty())
		return (false);
	int p = 0;
	for (i = 0; i < valueStr.length(); i++)
	{
		if (!std::isdigit(valueStr[i]))
		{
			if (valueStr[i] == '.' && p == 0)
				p++;
			else
			{
				std::cerr << "Error: bad input => " << valueStr << std::endl;
				return (EXIT_FAILURE);
			}
		}
	}
	value = std::atof(valueStr.c_str());
	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (EXIT_FAILURE);
	}
	if (value > 10000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}