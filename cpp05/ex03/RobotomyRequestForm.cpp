/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:27:10 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/24 21:27:11 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", 72, 45) 
{
    target = "default";
    std::cout << "Default constructor has been called" << std::endl;
    return; 
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) 
	: AForm("RobotomyRequestForm", 72, 45) 
{
    target = _target;
    std::cout << "RobotomyRequestForm personalized constructor has been called" << std::endl;
    return;  
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &RobotomyRequestForm_cpy)
	: AForm(RobotomyRequestForm_cpy.getName(), 72, 45) 
{
        target = RobotomyRequestForm_cpy.target;
    	*this = RobotomyRequestForm_cpy;
        std::cout << "RobotomyRequestForm copy constructor has been called" << std::endl;
        return;
}
    
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor has been called" << std::endl;
    return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &RobotomyRequestForm_aff) 
{
    if (this != &RobotomyRequestForm_aff)
	{
		target = RobotomyRequestForm_aff.target;
	}
	AForm::operator=(RobotomyRequestForm_aff);
    std::cout << "RobotomyRequestForm affectation has been called" <<std::endl;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const 
{
	if (AForm::GetIsSigned() == false)
	  throw AForm::FormNotSignedException();
	if (executor.GetGrade() > AForm::GetGradeToExec())
	  throw AForm::GradeTooLowException();
	if (!std::rand() % 2)
	  throw RobotomyRequestForm::RobotomizeFailureException();
	std::cout << target << " has been robotomized successfully" << std::endl;
  }