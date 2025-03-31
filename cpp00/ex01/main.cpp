/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:10:45 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/14 15:40:29 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include "./PhoneBook.hpp"
#include <cstdlib>




void print_norm_Format(std::string str) 
{
	if (str.length() > 10) 
	{
		for (int i = 0; i < 9; i++) 
		{
			std::cout << str[i];
		}
		std::cout << ".";
	} else 
	{
		int rest = 10 - str.length();
		for (int i = 0; i < rest; i++) 
		{
			std::cout << " ";
		}
		std::cout << str;
	}
}

int Phone_Book::ft_print_phone_book(void)
{
    if (nb_user == 0)
    {
        std::cout << "NO ONE IN PHONE BOOK" << std::endl;
        return EXIT_FAILURE;
    }
    else {
        std::cout << std::setw(10) << "INDEX" << "|"
                  << std::setw(10) << "FIRST NAME" << "|"
                  << std::setw(10) << "LAST NAME" << "|"
                  << std::setw(10) << "NICKNAME" << "|" << std::endl;
        std::cout << std::setw(10) << "----------" << "|"
                  << std::setw(10) << "----------" << "|"
                  << std::setw(10) << "----------" << "|"
                  << std::setw(10) << "----------" << "|" << std::endl;
        for (int i = 0; i < all_user; i++) {
            std::cout << std::setw(10) << i + 1 << "|";
            print_norm_Format(reperoire[i].GetName());
			std::cout << "|";
            print_norm_Format(reperoire[i].GetLastName()); 
			std::cout << "|";
            print_norm_Format(reperoire[i].GetNickName()); 
			std::cout << "|" << std:: endl;
        }
    }
	return EXIT_SUCCESS;
}

void Phone_Book::ft_print_index(int index)
{
	if (index > 7 || index < 0 || index >= all_user){
		std::cerr << "Error incorrect index" << std:: endl;
		return; }
	std:: cout << "NAME : ";
	print_norm_Format(reperoire[index].GetName());
	std::cout << "\n";
	std:: cout << "LAST NAME : ";
	print_norm_Format(reperoire[index].GetLastName()); 
	std::cout << "\n";
	std:: cout << "NICKNAME : ";
	print_norm_Format(reperoire[index].GetNickName()); 
	std::cout << "\n";
}


int Phone_Book::ft_interface_phone_book(Phone_Book *phone_book)
{
	int index = 0;
	std::string input;
	if (phone_book->ft_print_phone_book() == EXIT_FAILURE)
		return EXIT_FAILURE;
	std::cout << "PLEASE ENTER INDEX FOR SEARCH YOUR CONTACT : ";
	while (1)
	{
		if (std::cin.eof())
			return EXIT_FAILURE;
		getline(std::cin, input);
		if (input.length() == 1 && input[0] >= '1' && input[0] <= '8')
		{
			index = input[0] - 48;
			if (index > 9 || index <= 0)
				break;
			phone_book->ft_print_index(index - 1);
			break;
		}
		else {
			std::cout << "Error Please enter just index between 1 - 8" << std:: endl;
			std::cout << "PLEASE ENTER INDEX FOR SEARCH YOUR CONTACT : ";
		}
	}
 	return EXIT_SUCCESS;
}

int Phone_Book::ft_add_info(Phone_Book *phone_book,std::string input)
{
	if (ft_fill_name(phone_book,input) == EXIT_FAILURE)
		return EXIT_FAILURE;
	if (ft_fill_num_and_secret(phone_book, input) == EXIT_FAILURE)
		return EXIT_FAILURE;
	return EXIT_SUCCESS;
}


int main(int ac,char **av)
{
	Phone_Book repertoire;

	repertoire.ft_init_value();
	std::string input;
	(void) av;
	if (ac != 1)
		return (std:: cerr <<  "Error Too Many arg" << std:: endl, 1);
	while (1)
	{
		if (std::cin.eof())
			return 1;
		std:: cout << "PLEASE ENTER YOUR ORDER :" << std:: endl;
		std:: getline(std::cin, input);
		if (input == "ADD")
		{
			if (repertoire.ft_add_info(&repertoire,input) == EXIT_FAILURE)
				std::cerr << "ERROR WHILE ADDING A USER" << std:: endl;
		}
		else if (input == "SEARCH")
			repertoire.ft_interface_phone_book(&repertoire);
		else if (input == "EXIT")
			break;
	}
	return (0);
}
