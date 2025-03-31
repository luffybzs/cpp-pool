/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:40:17 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/14 15:42:59 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Contact.hpp"
#include "./PhoneBook.hpp"

Phone_Book::~Phone_Book(void)
{
	return;
}

Phone_Book::Phone_Book(void)
{
	return;
}

void Phone_Book::ft_init_value(void)
{
	nb_user = 0;
	all_user = 0;
	return;
}

int Phone_Book::ft_fill_name(Phone_Book *phone_book, std::string input)
{
	(void) phone_book;
	if (nb_user == 8)
		nb_user = 0;
	std::cout << "ADD YOUR FIRST NAME :" << std::endl;
	std:: getline(std::cin, input);
	if (input.empty())
		return std::cout << "ERROR EMPTY VALUE" << std:: endl, EXIT_FAILURE;
	reperoire[nb_user].SetName(input);
	std::cout << "ADD YOUR LAST NAME :" << std::endl;
	std:: getline(std::cin, input);
	if (input.empty())
		return std::cout << "ERROR EMPTY VALUE" << std:: endl, EXIT_FAILURE;
	reperoire[nb_user].SetLastName(input);
	std::cout << "ADD YOUR NICKNAME :" << std::endl;
	std:: getline(std::cin, input);
	if (input.empty())
		return std::cout << "ERROR EMPTY VALUE" << std:: endl, EXIT_FAILURE;
	reperoire[nb_user].SetNickName(input);
	return EXIT_SUCCESS;
}

int Phone_Book::ft_fill_num_and_secret(Phone_Book *phone_book, std::string input)
{
	(void) phone_book;
	std::cout << "ADD YOUR PHONE NUMBER :" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
		return std::cout << "ERROR EMPTY VALUE" << std:: endl, EXIT_FAILURE;
	for (int i = 0; input[i] != '\0'; i++) 
	{
		if (input[i] < '0' || input[i] > '9')
			return (std::cerr << "PLEASE ENTRE ONLY NUMBER" << std::endl, EXIT_FAILURE);
		if (i > 9)
			return (std::cerr << "THE LENGTH OF THE NUMBER DOES NOT MATCH" << std::endl, EXIT_FAILURE); 
	}
	reperoire[nb_user].SetPhoneNumber(input);
	std::cout << "ADD YOUR DARKEST SECRET :" << std::endl;
	std:: getline(std::cin, input);
	if (input.empty())
		return std::cout << "ERROR EMPTY VALUE" << std:: endl, EXIT_FAILURE;
	reperoire[nb_user].SetDarkestSecret(input);
	if (all_user < 8)
		all_user++;
	nb_user++;
	return  EXIT_SUCCESS;
}
