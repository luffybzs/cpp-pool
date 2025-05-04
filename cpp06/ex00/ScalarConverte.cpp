

#include <cfloat>
#include <climits>
#include <cmath>
#include <cstddef>
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
	int i = static_cast<unsigned char>(c);
	if (i > 127)
	{
		std::cout << "Impossible" << std::endl;
		return;
	}

    if (!std::isprint(static_cast<char>(c)))
    {
        std::cout << "Non displayable" << std::endl;
        return;
    }
    std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
}

void ft_display_int(double val)
{
    std::cout << "int: ";
    if (std::isnan(val) || std::isinf(val) || val > INT_MAX || val < INT_MIN)
    {
        std::cout << "Impossible" << std::endl;
        return;
    }
    std::cout << static_cast<int>(val) << std::endl;
}

void ft_display_float(double val)
{
    std::cout << "float: ";
    if (std::isnan(val))
    {
        std::cout << "nanf" << std::endl;
        return;
    }
    if (std::isinf(val))
    {
        if (val == INFINITY)
            std::cout << "+inff" << std::endl;
        else
            std::cout << "-inff" << std::endl;
        return;
    }
    if (val > FLT_MAX || val < -FLT_MAX)
    {
        std::cout << "Impossible" << std::endl;
        return;
    }
    std::cout << std::fixed << std::setprecision(3) << static_cast<float>(val) << "f" << std::endl;
}

void ft_display_double(double val)
{
    std::cout << "double: ";
    if (std::isnan(val))
    {
        std::cout << "nan" << std::endl;
        return;
    }
    if (std::isinf(val))
    {
        if (val == INFINITY)
            std::cout << "+inf" << std::endl;
        else
            std::cout << "-inf" << std::endl;
        return;
    }
    std::cout << std::fixed << std::setprecision(1) << val << std::endl;
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
	size_t i = 0; 
	bool virgule = false;
	
	if (literal == NANF_LITERAL || literal == INFF_LITERAL || literal == NINFF_LITERAL)
        return EXIT_SUCCESS;
	if (literal.length() < 2 || literal[literal.length() - 1] != 'f')
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

int ft_is_double(std::string literal)
{
	size_t i = 0; 
	bool virgule = false;

	if (literal == NAN_LITERAL || literal == INF_LITERAL || literal == NINF_LITERAL)
		return EXIT_SUCCESS;
	if (literal[0] == '+' || literal[0] == '-')
		i++;
	while (i < literal.length()) 
	{
		if (literal[i] == '.')
		{
			if (virgule)
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

bool safe_stof(const std::string &str, float &result)
{
    try {
        result = static_cast<float>(std::atof(str.c_str()));
        return true;
    } catch (...) {
        return false;
    }
}

bool safe_stod(const std::string &str, double &result)
{
    try {
        result = static_cast<double>(std::atof(str.c_str()));
        return true;
    } catch (...) {
        return false;
    }
}
void ft_display_error(std::string msg)
{
	std::cout << msg << std::endl;
	return;
}

void ScalarConverte::convert(std::string literal)
{
    if (ft_is_char(literal) == EXIT_SUCCESS)
    {
		char c = literal[0];
        ft_display_char(c);
        ft_display_int(static_cast<double>(c));
        ft_display_float(static_cast<double>(c));
        ft_display_double(static_cast<double>(c));
        return;
    }
    if (ft_is_int(literal) == EXIT_SUCCESS)
    {
        int i = std::atoi(literal.c_str());
        ft_display_char(static_cast<char>(i));
        ft_display_int(static_cast<double>(i));
        ft_display_float(static_cast<double>(i));
        ft_display_double(static_cast<double>(i));
        return;
    }
    if (ft_is_float(literal) == EXIT_SUCCESS)
    {
        std::string no_f = literal.substr(0, literal.length() - 1);
        float f;
        if (!safe_stof(no_f, f))
            return ft_display_error("Error Conversion string to float");
        ft_display_char(static_cast<char>(f));
        ft_display_int(static_cast<double>(f));
        ft_display_float(f);
        ft_display_double(static_cast<double>(f));
        return;
    }
    if (ft_is_double(literal) == EXIT_SUCCESS)
    {
        double d;
        if (!safe_stod(literal, d))
            return ft_display_error("Error Conversion string to double");  
        ft_display_char(static_cast<char>(d));
        ft_display_int(d);
        ft_display_float(d);
        ft_display_double(d);
        return;
    }
    ft_display_error("Error Invalid Literal");
}
