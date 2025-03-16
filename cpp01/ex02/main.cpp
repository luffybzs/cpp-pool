/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 22:34:33 by ayarab            #+#    #+#             */
/*   Updated: 2025/03/16 15:29:29 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "l'adresse de str = " << &str << std::endl;
    std::cout << "l'adresse de stringPTR1 = " << stringPTR << std::endl;
    std::cout << "l'adresse de stringREF = " <<  &stringREF << std::endl;
    std::cout << "la valeur de str = " << str << std::endl;
    std::cout << "La valeur pointée par stringPTR = " << *stringPTR << std::endl;
    std::cout << "La valeur pointée par stringREF = " << stringREF << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    stringREF = "je change la valeur de str par stringREF";
    std::cout << "La valeur pointée par stringPTR = " << *stringPTR << std::endl;
    std::cout << "La valeur pointée par stringREF = " << stringREF << std::endl;
    std::cout << "la valeur de str = " << str << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    *stringPTR = "je change la valeur de str par stringPTR"; 
    std::cout << "La valeur pointée par stringPTR = " << *stringPTR << std::endl;
    std::cout << "La valeur pointée par stringREF = " << stringREF << std::endl;
    std::cout << "la valeur de str = " << str << std::endl;
    return 0;
}