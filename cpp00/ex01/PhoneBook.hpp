/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:47:20 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/14 15:43:32 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <cerrno>
#include <cstdlib>
#include <endian.h>
#include <string>
#include "./Contact.hpp"
#include <cstdlib>

class Phone_Book {
	private:
	Contact reperoire[8];
	int nb_user;
	int all_user;

	public:
	void ft_add_contact(void);
	void ft_init_value(void);
	int ft_add_info(Phone_Book *phone_book,std::string input);
	int ft_fill_num_and_secret(Phone_Book *phone_book, std::string input);
	int ft_fill_name(Phone_Book *phone_book, std::string input);
	void ft_print_tab(void);
	int ft_print_phone_book(void);
	int ft_interface_phone_book(Phone_Book *phone_book);
	void ft_print_index(int index);

	
	Phone_Book();
	~Phone_Book();
	
};

#endif