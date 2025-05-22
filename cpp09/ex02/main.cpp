/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:45:14 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/22 14:41:21 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstdlib>
#include <iostream>
int main(int ac, char **av)
{
    if (ac < 1)
    {
        std::cerr << "Error: not enough argument" << std::endl;
            return EXIT_FAILURE;
    }
    PmergeMe test(ac, av);
    test.sorter();
    return EXIT_SUCCESS;
}