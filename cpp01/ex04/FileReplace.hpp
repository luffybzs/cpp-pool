/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:22:49 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/21 17:37:38 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP

#include <fstream>
#include <string>



class FileReplace{
	private:
	std::ifstream infile;
	std::ofstream outfile;
	std::string file_in_string;
	int len_s2;
	public:
	int ft_strlen_s2(char *s2);
	int ft_check_infile(char **av);
	void ft_convert_file_in_string(void);
	int ft_check_outfile(char **av);
	void ft_replace_file(char **av);
	FileReplace(void);
	~FileReplace(void);
};


#endif


