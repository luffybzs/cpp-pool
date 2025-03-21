/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 19:40:18 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/21 20:05:13 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>
#include <iostream>

int	main(void)
{
	Harl harl;

	std::cout << "Testing DEBUG level:" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\nTesting INFO level:" << std::endl;
	harl.complain("INFO");

	std::cout << "\nTesting WARNING level:" << std::endl;
	harl.complain("WARNING");

	std::cout << "\nTesting ERROR level:" << std::endl;
	harl.complain("ERROR");

	std::cout << "\nTesting an unknown level:" << std::endl;
	harl.complain("UNKNOWN");
	return EXIT_SUCCESS;
}
