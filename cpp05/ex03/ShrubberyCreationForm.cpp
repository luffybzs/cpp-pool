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
	: AForm("ShubberyCreationForm", 145, 137) 
{
    target = "default";
    std::cout << "ShubberyCreationForm Default constructor has been called" << std::endl;
    return; 
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) 
	: AForm("ShubberyCreationForm", 145, 137) 
{
    target = _target;
    std::cout << "ShubberyCreationForm personalized constructor has been called" << std::endl;
    return;  
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ShrubberyCreationForm_cpy)
	: AForm(ShrubberyCreationForm_cpy.getName(), 145, 137) 
{
        target = ShrubberyCreationForm_cpy.target;
    	*this = ShrubberyCreationForm_cpy;
        std::cout << "ShrubberyCreationForm copy constructor has been called" << std::endl;
        return;
}
    
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor has been called" << std::endl;
    return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ShrubberyCreationForm_aff) 
{
    if (this != &ShrubberyCreationForm_aff)
    {
        target = ShrubberyCreationForm_aff.target;
    }
	AForm::operator=(ShrubberyCreationForm_aff);
    std::cout << "ShrubberyCreationForm affectation has been called" <<std::endl;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (!GetIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.GetGrade() > GetGradeToExec())
        throw AForm::GradeTooLowException();

    std::ofstream out;

    out.open((target + "_shrubbery").c_str());
    if (!out.is_open())
        throw FileCreationException();
    out << "                                  # #### ####" << std::endl;
    out << "                                ### \\/#|### |/####" << std::endl;
    out << "                               ##\\/#/ \\\\||/##/_/##/_#" << std::endl;
    out << "                             ###  \\/###|/ \\/ # ###" << std::endl;
    out << "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl;
    out << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
    out << "                           __#_--###`  |{,###---###-~" << std::endl;
    out << "                                     \\ }{" << std::endl;
    out << "                                      }}{" << std::endl;
    out << "                                      }}{" << std::endl;
    out << "                                      {{}}" << std::endl;
    out << "                                , -=-~{ .-^- _" << std::endl;
    out << "                                      `}" << std::endl;
    out << "                                       {" << std::endl;
    out.close();
    return;
}