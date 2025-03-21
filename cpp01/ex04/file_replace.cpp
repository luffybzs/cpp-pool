/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_replace.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:25:09 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/20 16:26:48 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"
#include <cstdlib>
#include <iostream>
#include <string>




FileReplace::FileReplace(void)
{
	return; 
}

FileReplace::~FileReplace(void)
{
	return;
}


void FileReplace::ft_convert_file_in_string()
{
	char c;

	while (infile.get(c)) {
		file_in_string.push_back(c);
	}
	std::cout << file_in_string << std::endl;
}

int FileReplace::ft_check_infile(char **av)
{
	infile.open(av[1]);
	if (infile.fail())
	{
		std::cerr << "FAIL OPEN INFILE" << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}