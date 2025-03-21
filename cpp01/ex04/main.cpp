/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:31:43 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/21 00:10:20 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"
#include <cstdlib>
#include <iostream>
#include <string>



int main(int ac, char **av)
{
	FileReplace tmp;
	if (ac != 4)
		return std::cerr << "TOO MANY ARGUMENT OR NOT ENOUGH" << std::endl,EXIT_FAILURE;
	if (tmp.ft_check_infile(av) == EXIT_FAILURE)
		return EXIT_FAILURE;
	tmp.ft_convert_file_in_string();
	return EXIT_SUCCESS;
}