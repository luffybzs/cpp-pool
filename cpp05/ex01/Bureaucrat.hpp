#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <string>

class Form;
class Bureaucrat 
{
	private:
		std::string Name;
		int Grade;
	public:
		Bureaucrat(const std::string _name, int grade);
		Bureaucrat(const Bureaucrat &Bureaucrat_cpy);
		Bureaucrat &operator=(const Bureaucrat &Bureaucrat_aff);
		~Bureaucrat(void);
		std::string GetName(void);
		int GetGrade(void);
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &form); 
		class GradeTooHighException : public std::exception {
			public:
			const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public:
			const char* what() const throw();
		};
		friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
	};
	
#endif


