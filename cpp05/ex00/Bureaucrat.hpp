#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Bureaucrat 
{
	private:
		const std::string Name;
		int grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string Name, int garde);
		Bureaucrat(const Bureaucrat &Bureaucrat_cpy);
		Bureaucrat &operator=(const Bureaucrat &Bureaucrat_aff);
		~Bureaucrat(void);


};

#endif