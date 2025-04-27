/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:27:04 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/24 21:27:05 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", 25 ,5) 
{
    target = "default";
    std::cout << "PresidentialPardonFrom Default constructor has been called" << std::endl;
    return; 
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) 
	: AForm("PresidentialPardonForm", 25,5) 
{
    target = _target;
    std::cout << "PresidentialPardonFrom personalized constructor has been called" << std::endl;
    return;  
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &PresidentialPardonForm_cpy)
	: AForm(PresidentialPardonForm_cpy.getName(), 25, 5) 
{
        target = PresidentialPardonForm_cpy.target;
    	*this = PresidentialPardonForm_cpy;
        std::cout << "PresidentialPardonForm copy constructor has been called" << std::endl;
        return;
}
    
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor has been called" << std::endl;
    return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &PresidentialPardonForm_aff) 
{
    if (this != &PresidentialPardonForm_aff)
	{
        target = PresidentialPardonForm_aff.target;
	}
	AForm::operator=(PresidentialPardonForm_aff);
    std::cout << "PresidentialPardonForm affectation has been called" <<std::endl;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const 
{
	if (AForm::GetIsSigned() == false)
	  throw AForm::FormNotSignedException();
	if (executor.GetGrade() > AForm::GetGradeToExec())
	  throw AForm::GradeTooLowException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
  }