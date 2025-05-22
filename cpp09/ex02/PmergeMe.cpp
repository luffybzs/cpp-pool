/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:45:20 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/22 14:44:23 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstddef>
#include <cstdlib>
#include <iostream>

#include <limits>
#include <sstream>
#include <vector>

PmergeMe::PmergeMe(void)
{
	return ;
}

PmergeMe::~PmergeMe(void)
{
	return ;
}

PmergeMe::PmergeMe(int ac, char **av)
{
	int	value;

	for (int i = 1; i < ac; i++)
	{
		value = atoi(av[i]);
		vct.push_back(value);
		dq.push_back(value);
	}
	return ;
}

std::vector<int> PmergeMe::ft_sort_vector(std::vector<int> &vct)
{
	std::vector<int> min;
	std::vector<int> max;
	if (vct.size() == 1)
		return (vct);
	for (size_t i = 0; i < vct.size(); i += 2)
	{
		if (i + 1 >= vct.size())
			min.push_back(vct[i]);
		else
		{
			if (vct[i] > vct[i + 1])
			{
				min.push_back(vct[i + 1]);
				max.push_back(vct[i]);
			}
			else
			{
				max.push_back(vct[i + 1]);
				min.push_back(vct[i]);
			}
		}
	}
	std::cout << "vector: ";
	for (std::vector<int>::iterator it = vct.begin(); it != vct.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "mini: ";
	for (std::vector<int>::iterator it = min.begin(); it != min.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "maxi: ";
	for (std::vector<int>::iterator it = max.begin(); it != max.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
    if (min.size() == 1 && !max.empty())
    {
        min.push_back(max[0]);
        vct = min;
        return min;
    }
	max = ft_sort_vector(max); // fjjjjjjjjjjjjjjjjjjjjjjj
	std::cout << "vector: ";
	for (std::vector<int>::iterator it = vct.begin(); it != vct.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "mini: ";
	for (std::vector<int>::iterator it = min.begin(); it != min.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "maxi: ";
	for (std::vector<int>::iterator it = max.begin(); it != max.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	return (max);
}

void PmergeMe::sorter()
{
	ft_sort_vector(vct);

	return ;
}

int ft_is_Valid_Number(const std::string& str)
{
	std::size_t i = 0;

	if (str.empty())
		return EXIT_FAILURE;

	while (i < str.length())
	{
		if (!std::isdigit(str[i]))
			return EXIT_FAILURE;
		i++;
	}
	return EXIT_SUCCESS;
}

void PmergeMe::ft_pars_Input(int ac, char **av)
{
	int i = 1;
	std::istringstream iss;
	std::string token;
	long number;

	while (i < ac)
	{
		std::string arg(av[i]);

		// Gère les cas où les arguments sont groupés ("3 4 5")
		std::istringstream iss(arg);
		while (iss >> token)
		{
			if (ft_is_Valid_Number(token) == EXIT_FAILURE)
			{
				std::cerr << "Error: invalid token => " << token << std::endl;
				exit(EXIT_FAILURE);
			}

			std::istringstream(token) >> number;

			if (number > std::numeric_limits<int>::max())
			{
				std::cerr << "Error: number too large => " << token << std::endl;
				exit(EXIT_FAILURE);
			}

			vct.push_back(static_cast<int>(number));
			dq.push_back(static_cast<int>(number));
		}
		i++;
	}
}