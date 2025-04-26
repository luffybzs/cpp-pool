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

AForm::AForm(const std::string &_name, int _gradeToSign, int _gradeToExec) 
    : Name(_name), isSigned(false), GradetoSign(_gradeToSign), GradetoExecute(_gradeToExec) 
{
    if (_gradeToSign < 1 || _gradeToExec < 1) 
		throw GradeTooHighException();
    if (_gradeToSign > 150 || _gradeToExec > 150) 
		throw GradeTooLowException();
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

std::ostream &operator<<(std::ostream &os, const AForm &AForm)
{
	os << AForm.getName() << ", form grade " << (AForm.GetIsSigned() ? "signed" : "not signed");
	return (os);
}