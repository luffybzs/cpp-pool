/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:57:29 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/22 18:09:42 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(const std::string &name, const int gradeToSign,
	const int gradeToExec) : GradetoSign(gradeToSign),
	GradetoExecute(gradeToExec), Name(name) , isSigned(false)
{
	std::cout << "Form personalized constructor has been called" << std::endl;
	return ;
}

Form::Form(const Form &Form_cpy) : GradetoExecute(Form_cpy.GradetoExecute),
	GradetoSign(Form_cpy.GradetoSign) , Name(Form_cpy.Name), isSigned(Form_cpy.isSigned)
{
	std::cout << "Form cpy constructor has been called" << std::endl;
	return ;
}

Form &Form::operator=(const Form &Form_aff)
{
    if (this == &Form_aff)
        return *this;
    
    
}