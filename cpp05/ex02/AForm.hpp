/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:26:57 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/26 22:46:28 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <ostream>
#include <string>

class	Bureaucrat;
class AForm
{
	private:
	const std::string Name;
	bool isSigned;
	const int GradetoSign;
	const int GradetoExecute;
	
	public:
	AForm(const std::string &name, const int gradeToSign,const int gradeToExec);
	AForm(const AForm &AForm_cpy);
	AForm &operator=(const AForm &AForm_aff);
	virtual ~AForm();
	
	
	const std::string &getName() const;
	bool GetIsSigned(void) const;
	int GetGradeToSign(void) const;
	int GetGradeToExec(void) const;
	
	
	void beSigned(Bureaucrat &bureaucrat);
	virtual void execute(const Bureaucrat &bureaucrat_) const = 0;
	
	class GradeTooHighException : public std::exception
	{
		public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		const char *what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
		public:
		const char *what() const throw();
	};
	friend std::ostream &operator<<(std::ostream &os, const AForm &AForm_oth);
};