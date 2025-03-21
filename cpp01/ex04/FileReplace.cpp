/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:25:09 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/21 18:22:30 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <ios>
#include <iostream>
#include <ostream>
#include <string>
#include <variant>




FileReplace::FileReplace(void)
{
	return; 
}

FileReplace::~FileReplace(void)
{
	if (infile.is_open())
		infile.close();
	if (outfile.is_open())
		outfile.close();
	return;
}

int FileReplace::ft_strlen_s2(char *s2)
{
	int i = 0;
	if (s2)
	{
		while (s2[i]) {
			i++;
		}
		len_s2 = i;
		return i;
	}
	return -1;
}

void FileReplace::ft_convert_file_in_string()
{
	char c;

	while (infile.get(c)) {
		file_in_string.push_back(c);
	}
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

int FileReplace::ft_check_outfile(char **av)
{
	std::string tmp(av[1]);
	tmp.append(".replace");
	outfile.open(tmp.c_str(), std::ios::out);
	if (outfile.fail())
		return std::cerr << "FAIL OPEN " << std::endl, EXIT_FAILURE;
	return EXIT_SUCCESS;	
}

void FileReplace::ft_replace_file(char **av)
{
	std::string buffer = file_in_string;
	std::string tmp;
	int index;
	if (strcmp(av[2], av[3]) == 0)
	{
		outfile << buffer;
		return; 
	}
	while (1) 
	{
		index = buffer.find(av[2]);
		if ((size_t)index == std::string::npos) {
			break;
		}
		tmp = buffer.substr(index + len_s2);
		buffer.erase(index);
		buffer.append(av[3]);
		buffer.append(tmp);
	}
	outfile << buffer;
}