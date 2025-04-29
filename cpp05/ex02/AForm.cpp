/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:26:55 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/26 18:48:17 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

AForm::AForm(const std::string &name, const int gradeToSign,
	const int gradeToExec) : Name(name), isSigned(false),
	GradetoSign(gradeToSign), GradetoExecute(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1) 
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150) 
		throw GradeTooLowException();
	std::cout << "AForm personalized constructor has been called" << std::endl;
return ;
}

AForm::AForm(const AForm &AForm_cpy) : Name(AForm_cpy.Name),isSigned(AForm_cpy.isSigned),
GradetoSign(AForm_cpy.GradetoSign), GradetoExecute(AForm_cpy.GradetoExecute)

{
	std::cout << "AForm cpy constructor has been called" << std::endl;
	return ;
}
AForm &AForm::operator=(const AForm &AForm_aff)
{
	if (this != &AForm_aff)
	{
		isSigned = AForm_aff.isSigned;
	}
	std::cout << "AForm affection has been called" << std::endl;
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor has been called" << std::endl;
	return ;
}
void AForm::beSigned(Bureaucrat &bureaucrat) 
{
	if (bureaucrat.GetGrade() > GradetoSign)
		throw GradeTooLowException();
	if (this->isSigned == true) 
	{
		std::cout << "AForm " << this->Name << " is already signed." << std::endl;
        return;
    }
	isSigned = true;
}

const std::string &AForm::getName(void) const
{
	return (Name);
}

int AForm::GetGradeToExec(void) const
{
	return (GradetoExecute);
}

int AForm::GetGradeToSign(void) const
{
	return (GradetoSign);
}

bool AForm::GetIsSigned(void) const
{
	return (isSigned);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("AForm -> The Grade is too high.");
}
const char *AForm::GradeTooLowException::what() const throw()
{
	return ("AForm -> The Grade is too low.");
}

const char* AForm::FormNotSignedException::what() const throw() 
{
	return "AForm: Form not signed";
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
    os << "Form: " << form.getName() 
	<< "\n- Status: " << (form.GetIsSigned() ? "Signed" : "Unsigned")
       << "\n- Grade required to sign: " << form.GetGradeToSign()
       << "\n- Grade required to execute: " << form.GetGradeToExec();
    return os;
}