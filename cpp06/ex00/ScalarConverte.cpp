

#include <iostream>
#include <iomanip>
#include <cctype> 
#include "ScalarConverte.hpp"
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>

int ft_is_char(std::string literal)
{
	if (((literal[0] >= 'a' && literal[0] <= 'z') || (literal[0] >= 'A' && literal[0] <= 'Z')) && literal[1] == '\0')
		return EXIT_SUCCESS;
	return EXIT_FAILURE;
}

int ft_is_pseudo_literal(std::string literal)
{
	if (literal == NAN_LITERAL || literal == NANF_LITERAL || literal == INFF_LITERAL ||literal == INF_LITERAL || literal == NINF_LITERAL
		|| literal == NINFF_LITERAL)
    	return EXIT_SUCCESS;
	return EXIT_FAILURE;
}

void ft_display_impossible(int type)
{
    if (type == CHAR)
        std::cout << "char: impossible" << std::endl;
    else if (type == INT)
        std::cout << "int: impossible" << std::endl;
    else if (type == FLOAT)
        std::cout << "float: impossible" << std::endl;
    else if (type == DOUBLE)
        std::cout << "double: impossible" << std::endl;
}


void ft_display_char(char c)
{
    std::cout << "char: ";
    if (!std::isprint(c))
    {
        std::cout << "No displayable" << std::endl;
        return;
    }
    std::cout << "'" << c << "'" << std::endl;
}

void ft_display_int(int i)
{
    std::cout << "int: " << i << std::endl;
}

void ft_display_float(float f)
{
    std::cout << "float: ";
    std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
}

void ft_display_double(double d)
{
    std::cout << "double: ";
    std::cout << std::fixed << std::setprecision(1) << d << std::endl;
}

int ft_is_int(std::string literal)
{
	int i = 0;
	if (literal[i] && (literal[i] == '-' || literal[i] == '+'))
		i++;
	while (literal[i]) 
	{
		if (!isdigit(literal[i]))
			return EXIT_FAILURE;
		i++;
	}
	return EXIT_SUCCESS;
}

int ft_is_float(std::string literal)
{
	int i = 0; 
	bool virgule = false;
	
	if (literal == NANF_LITERAL || literal == INFF_LITERAL || literal == NINFF_LITERAL)
        return EXIT_SUCCESS;
	if (literal.length() < 2 || literal.back() != 'f') 
		return EXIT_FAILURE;
	if (literal[0] == '+' || literal[0] == '-')
        i++;
	while (i < literal.length() - 1) 
	{
		if (literal[i] == '.')
		{
			if (virgule == true)
				return EXIT_FAILURE;
			virgule = true;
		}
		else if (!isdigit(literal[i]))
		{
			return EXIT_FAILURE;
		}
		i++;
	}
	if (virgule)
		return EXIT_SUCCESS;
	return EXIT_FAILURE;
}


void ScalarConverte::convert(std::string literal)
{
	if (ft_is_char(literal) == EXIT_SUCCESS)
	{
		char c = literal[0];
        ft_display_char(c);
        ft_display_int(static_cast<int>(c));
        ft_display_float(static_cast<float>(c));
        ft_display_double(static_cast<double>(c));
		return ;
	}
	else if (ft_is_int(literal) == EXIT_SUCCESS)
	{
		int i = std::atoi(literal.c_str());
        ft_display_char(static_cast<char>(i));
        ft_display_int(i);
        ft_display_float(static_cast<float>(i));
        ft_display_double(static_cast<double>(i));
		return;
	}
	else if (ft_is_float(literal) == EXIT_SUCCESS) 
	{
		
	}
	
}