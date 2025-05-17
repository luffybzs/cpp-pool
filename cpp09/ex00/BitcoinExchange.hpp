/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:25:32 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/17 20:54:23 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <string>

class BitcoinExchange
{
  private:
	std::map<std::string, float> data_btc;

  public:
	void ft_check_input(const std::string &filename);
	void ft_check_data_btc(const std::string &filename);
	BitcoinExchange(void) {};
	~BitcoinExchange(void) {};
};