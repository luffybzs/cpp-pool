/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:27:07 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/26 17:33:32 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 



#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
class Bureaucrat;
class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
  	 	PresidentialPardonForm(std::string target);
    	PresidentialPardonForm(const PresidentialPardonForm& src);
    	~PresidentialPardonForm();
    	PresidentialPardonForm &operator=(PresidentialPardonForm const & src);

	void execute(const Bureaucrat &executor) const;	
};