/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:25:32 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/19 16:05:54 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <string>

class BitcoinExchange
{
  private:
	std::map<std::string, float> data_btc;
	bool ft_is_Valid_Date(const std::string &data);

  public:
	int ft_check_digit(std::string &year_str, std::string &month_str,
		std::string &day_str);
	void ft_check_input(const std::string &filename);
	void ft_check_data_btc(const std::string &filename);
	int ft_is_Valid_Price(const std::string &valueStr, float &value);
	std::string ft_trim(const std::string &str);
	BitcoinExchange(void){};
	~BitcoinExchange(void){};
};