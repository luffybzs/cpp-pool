/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:13:19 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/22 18:08:29 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

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
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
};