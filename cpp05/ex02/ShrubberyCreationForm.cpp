/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:27:14 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/26 22:47:10 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("NoName", 145, 137) 
{
    std::cout << "ShubberyCreationForm Default constructor has been called" << std::endl;
    return; 
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
	: AForm(target, 145, 137) 
{
    std::cout << "ShubberyCreationForm personalized constructor has been called" << std::endl;
    return;  
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ShrubberyCreationForm_cpy)
	: AForm(ShrubberyCreationForm_cpy.getName(), 145, 137) 
{
    	*this = ShrubberyCreationForm_cpy;
        std::cout << "ShrubberyCreationForm copy constructor has been called" << std::endl;
        return;
}
    
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor has been called" << std::endl;
    return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &to_copy) 
{
	AForm::operator=(to_copy);
    std::cout << "ShrubberyCreationForm " <<std::endl;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat &executor) const
{
    if (!GetIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.GetGrade() > GetGradeToExec())
        throw AForm::GradeTooLowException();

    std::ofstream out;
    
    out.open("_shrubbery");
    if (!out)
        throw std::runtime_error("Failed to create shrubbery file");

    out << "        *\n"
    << "       ***\n"
    << "      *****\n"
    << "     *******\n"
    << "    *********\n"
    << "   ***********\n"
    << "  *************\n"
    << "       | |\n"
    << "       | |"
    << std::endl;
}