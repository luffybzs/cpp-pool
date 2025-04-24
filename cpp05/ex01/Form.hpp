/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:13:19 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/24 21:05:59 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once



#include <ostream>
#include <string>

class Bureaucrat;
class Form
{
  private:
	const std::string Name;
	bool isSigned;
	const int GradetoSign;
	const int GradetoExecute;

  public:
	Form(const std::string &name, const int gradeToSign, const int gradeToExec);
	Form(const Form &Form_cpy);
	Form &operator=(const Form &Form_aff);
	~Form();
	const std::string &getName() const;
	void beSigned(Bureaucrat &bureaucrat);
	bool GetIsSigned(void) const;
	int GetGradeToSign(void) const;
	int GetGradeToExec(void) const;
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
	friend std::ostream &operator<<(std::ostream &os, const Form &Form_oth);
};