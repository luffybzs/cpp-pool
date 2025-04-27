


#include "Intern.hpp"
#include <iostream>

Intern::Intern(void)
{
	std::cout << "Intern default constructor has been called" << std::endl;
	return;
}

Intern::Intern(const Intern &Intern_cpy)
{
	*this = Intern_cpy;
	std::cout << "Intern copy constructor has been called" << std::endl;
	return;
}

Intern   &Intern::operator=(const Intern &Intern_aff)
{
	(void) Intern_aff;
	std::cout << "Intern affectation has been called" << std::endl;
	return *this;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor has been called" << std::endl;
	return;
}

const char *Intern::InexistantFormException::what() const throw()
{
	return "this form does not exist :/";
}
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

AForm* Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
  
	while (i < 3) 
	{
	 	 if (forms[i] == name)
			break;
		i++;
	}
	switch (i) {
		case 0:
		  return new ShrubberyCreationForm(target);
		case 1:
		  return new RobotomyRequestForm(target);
		case 2:
		  return new PresidentialPardonForm(target);
		default:
		  throw InexistantFormException();
	  }
	  return NULL;
}