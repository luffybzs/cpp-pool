/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:27:12 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/24 21:27:13 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
class Bureaucrat;
class RobotomyRequestForm : public AForm
{
    private:
      std::string target;
    public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm();
		RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
	
	void execute(const Bureaucrat &executor) const;
	class RobotomizeFailureException: public std::exception 
	{
	  public:
		virtual const char * what() const throw() {
		  return "Failed to robotized :/";
		}
	};
};