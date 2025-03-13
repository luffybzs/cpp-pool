/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:10:45 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/12 17:38:29 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cerrno>
#include <cstdlib>
#include <endian.h>
#include <string>
#include <iostream>
#include <iomanip>

class Contact {
	
	
	private:
	
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	
	public:
	
	void SetName(std::string  input);
	void SetLastName(std::string input);
	void SetNickName(std::string input);
	void SetPhoneNumber(std::string input);
	void SetDarkestSecret(std::string input);
	std::string GetDarkestSecret(void);
	std::string	GetName(void);
	std::string GetLastName(void);
    std::string GetNickName(void);
    std::string GetPhoneNumber(void);
	
	Contact();
	~Contact();
};

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
	void ft_print_phone_book(void);
	int ft_interface_phone_book(Phone_Book *phone_book);
	void ft_print_index(int index);

	
	Phone_Book();
	~Phone_Book();
	
};

Contact::Contact(void)
{
	return;
}
Contact::~Contact(void)
{
	return;
}
std::string Contact::GetName(void)
{
	return first_name;
}
std::string Contact::GetLastName(void)
{
	return last_name; 
}

std::string Contact::GetNickName(void)
{
	return nickname;
}

std::string Contact::GetPhoneNumber(void)
{
	return phone_number;
}

std::string Contact::GetDarkestSecret(void)
{ 
	return darkest_secret;
}
void Contact::SetPhoneNumber(std::string input)
{
	phone_number = input;
	return; 
}

void Contact::SetDarkestSecret(std::string input)
{
	darkest_secret = input;
	return;
}

void Contact::SetNickName(std::string input)
{
	nickname = input;
	return;
}
void Contact::SetLastName(std::string input)
{
	last_name = input;
	return;
}
void Contact::SetName(std::string input)
{
	first_name = input;
	return ;
}

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
	reperoire[nb_user].SetName(input);
	std::cout << "ADD YOUR LAST NAME :" << std::endl;
	std:: getline(std::cin, input);
	reperoire[nb_user].SetLastName(input);
	std::cout << "ADD YOUR NICKNAME :" << std::endl;
	std:: getline(std::cin, input);
	reperoire[nb_user].SetNickName(input);
	return EXIT_SUCCESS;
}
int Phone_Book::ft_fill_num_and_secret(Phone_Book *phone_book, std::string input)
{
	(void) phone_book;
	std::cout << "ADD YOUR PHONE NUMBER :" << std::endl;
	std::getline(std::cin, input);
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
	reperoire[nb_user].SetDarkestSecret(input);
	if (all_user < 8)
		all_user++;
	nb_user++;
	return  EXIT_SUCCESS;
}

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

void Phone_Book::ft_print_phone_book(void)
{
    if (nb_user == 0)
    {
        std::cout << "NO ONE IN PHONE BOOK" << std::endl;
        return;
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
}

void Phone_Book::ft_print_index(int index)
{
	if (nb_user <= index){
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
	phone_book->ft_print_phone_book();
	std::cout << "PLEASE ENTER INDEX FOR SEARCH YOUR CONTACT :";
	while (1)
	{
		if (std::cin.eof())
			return 1;
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
				return EXIT_FAILURE;
		}
		else if (input == "SEARCH")
			repertoire.ft_interface_phone_book(&repertoire);
		else if (input == "EXIT")
			break;
	}
	return (0);
}
