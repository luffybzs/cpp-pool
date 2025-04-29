/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:57:29 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/26 18:47:21 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Form::Form(const std::string &name, const int gradeToSign,
	const int gradeToExec) : Name(name), isSigned(false),
	GradetoSign(gradeToSign), GradetoExecute(gradeToExec)
{
	std::cout << "Form personalized constructor has been called" << std::endl;
	if (gradeToSign < 1 || gradeToExec < 1) 
		throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150) 
		throw GradeTooLowException();
	return ;
}

Form::Form(const Form &Form_cpy) : Name(Form_cpy.Name),isSigned(Form_cpy.isSigned),
	GradetoSign(Form_cpy.GradetoSign), GradetoExecute(Form_cpy.GradetoExecute)

{
	std::cout << "Form cpy constructor has been called" << std::endl;
	return ;
}
Form &Form::operator=(const Form &Form_aff)
{
	if (this != &Form_aff)
	{
		isSigned = Form_aff.isSigned;
	}
	std::cout << "Form affection has been called" << std::endl;
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form destructor has been called" << std::endl;
	return ;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.GetGrade() > GradetoSign)
		throw GradeTooLowException();
	if (this->isSigned == true) 
	{
		std::cout << "Form -> " << this->Name << " is already signed." << std::endl;
        return;
    }
	isSigned = true;
}
const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form -> The Grade is too high.");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form -> The Grade is too low.");
}

const std::string &Form::getName(void) const
{
	return (Name);
}

int Form::GetGradeToExec(void) const
{
	return (GradetoExecute);
}

int Form::GetGradeToSign(void) const
{
	return (GradetoSign);
}

bool Form::GetIsSigned(void) const
{
	return (isSigned);
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << form.getName() << ", form grade " << (form.GetIsSigned() ? "signed" : "not signed");
	return (os);
}