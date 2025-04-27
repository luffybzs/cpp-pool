#pragma once
#include <exception>
#include <string>

class AForm;

class Intern {
	public:
	Intern();
	Intern(const Intern &Intern_cpy);
	~Intern();
	Intern& operator=(const Intern &Intern_aff);
	
	AForm* makeForm(std::string name, std::string target);
	class InexistantFormException: public std::exception 
	{
	  public:
		virtual const char * what() const throw();
	};
};