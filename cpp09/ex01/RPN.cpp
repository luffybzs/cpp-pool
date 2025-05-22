/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:48:04 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/22 14:12:39 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <cstdlib>

int	ft_is_operator(char c)
{
	if (c == OPERATOR_PLUS || c == OPERATOR_MOINS || c == OPERATOR_MULTI
		|| c == OPERATOR_DIVI)
		return (1);
	return (0);
}

long long	ft_operation(std::stack<int> &pile, char ope)
{
	long long	b;
	long long	a;

	if (pile.size() < 2)
	{
		std::cerr << "Error: not enough operator !" << std::endl;
		exit(EXIT_FAILURE);
	}
	b = pile.top();
	pile.pop();
	a = pile.top();
	pile.pop();
	if (ope == '+')
		return (a + b);
	if (ope == '-')
		return (a - b);
	if (ope == '*')
		return (a * b);
	if (ope == '/')
	{
		if (b == 0)
		{
			std::cerr << "Error: division by zero !" << std::endl;
			exit(EXIT_FAILURE);
		}
		return (a / b);
	}
	return (0);
}

int	ft_pars_and_exec(const std::string &input, std::stack<int> &pile)
{
	std::size_t i = 0;
	while (i < input.size())
	{
		if (std::isdigit(input[i]))
		{
			pile.push(input[i] - '0');
		}
		else if (ft_is_operator(input[i]))
		{
			if (pile.size() < 2)
			{
				std::cerr << "Error: not enough operator !" << std::endl;
				return (EXIT_FAILURE);
			}
			long long result = ft_operation(pile, input[i]);
			if (result > 2147483647 || result < -2147483648)
				{
					std::cerr << "Warning this value risk overflow" << std::endl;
					return (EXIT_FAILURE);
				}
			pile.push(result);
		}
		else if (input[i] != ' ')
		{
			std::cerr << "Error: invalid char => {" << input[i] << "}" << std::endl;
			return (EXIT_FAILURE);
		}
		i++;
	}
	if (pile.size() != 1)
	{
		std::cerr << "Error: invalid expression" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}