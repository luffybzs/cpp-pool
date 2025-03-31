/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:32:23 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/14 15:44:29 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <cerrno>
#include <cstddef>
#include <cstdlib>
#include <endian.h>
#include <ostream>
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

#endif