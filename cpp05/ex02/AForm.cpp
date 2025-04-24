/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:26:55 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/24 21:39:08 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("AForm -> The Grade is too high.");
}
const char *AForm::GradeTooLowException::what() const throw()
{
	return ("AForm -> The Grade is too low.");
}

const char* AForm::FormNotSignedException::what() const throw() 
{
    return "AForm: Form not signed";
}