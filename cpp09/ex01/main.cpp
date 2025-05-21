/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:48:01 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/21 18:44:43 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <string>


int	main(int ac, char **av)
{
	if (ac != 2 || std::strlen(av[1]) == 0)
	{
		std::cerr << "Usage: ./RPN \"expression\"" << std::endl;
		return (EXIT_FAILURE);
	}
	std::stack<int> test;
	std::string expr = av[1];
	if (ft_pars_and_exec(expr, test) == EXIT_SUCCESS)
	{
		std::cout << test.top() << std::endl;
	}
	return (EXIT_SUCCESS);
}
