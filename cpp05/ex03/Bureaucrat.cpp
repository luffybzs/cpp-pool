/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:11:27 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/26 17:29:24 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>


Bureaucrat::Bureaucrat(const std::string _name, int _grade) : Name(_name), Grade(_grade)
{
	std::cout << "Bureaucrat default constructor has been called" << std::endl;
	if (Grade < 1) 
		throw GradeTooHighException();
	if (Grade > 150) 
		throw GradeTooLowException();
	return;
}
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor has been called" << std::endl;
	return;
}
Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat_cpy)
{
	Name = Bureaucrat_cpy.Name;
	Grade = Bureaucrat_cpy.Grade;
	std::cout << "Bureaucrat copy constructor has been called" << std::endl;
	return; 
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &Bureaucrat_aff)
{
	Name = Bureaucrat_aff.Name;
	Grade = Bureaucrat_aff.Grade;
	std::cout << "Bureaucrat affectation has been called" << std::endl;
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat -> The Grade is too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat -> The Grade is too low.";
}

int Bureaucrat::GetGrade(void) const
{
	return Grade;
}
std::string Bureaucrat::GetName(void) const
{
	return Name;
}

std::ostream &operator<<(std::ostream &os , const Bureaucrat &bureaucrat_oth) 
{
    os << bureaucrat_oth.GetName() << ", bureaucrat grade " << bureaucrat_oth.GetGrade();
    return os;
}
void Bureaucrat::incrementGrade() 
{
    if (Grade - 1 < 1) throw GradeTooHighException();
    	Grade--;
	return;
}

void Bureaucrat::decrementGrade() 
{
    if (Grade + 1 > 150) throw GradeTooLowException();
    	Grade++;
	return;
}

void Bureaucrat::signForm(AForm &form)
{
	try {
	  form.beSigned(*this);
	  std::cout << GetName() << " has signed " << form.getName() << std::endl;
	}
	catch (const AForm::GradeTooLowException &e) {
	  std::cout << GetName() << " couldn’t sign " << form.getName()
					<< " because " << e.what() << std::endl;
	}
	return;
  }

  void Bureaucrat::executeForm(AForm const &form) 
  {
	try {
	  form.execute(*this);
	  std::cout << GetName() << " executes " << form.getName() << std::endl;
	}
	catch (const AForm::GradeTooLowException &e) {
	  std::cout << GetName() << " couldn’t execute " << form.getName()
					<< " because " << e.what() << std::endl;
	}
	catch (const AForm::FormNotSignedException &e) {
	  std::cout << GetName() << " couldn’t execute " << form.getName()
					<< " because " << e.what() << std::endl;
	}
	return;
  }