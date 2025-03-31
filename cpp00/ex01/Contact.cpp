/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:39:27 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/14 15:44:00 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"


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
