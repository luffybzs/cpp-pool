/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:53:38 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/13 20:13:55 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T> class MutantStack : public std::stack<T>
{
  public:
	MutantStack() {std::cout << "Default constructor has been called" << std::endl;};
	MutantStack(const MutantStack &MutantStack_cpy) : std::stack<T>(&MutantStack_cpy) {std::cout << "Copy constructor has been called" << std::endl;};
	~MutantStack() {std::cout << "Destructor has been called" << std::endl;};
	MutantStack &operator=(const MutantStack &MutantStack_aff)
	{
		std::cout << "Assignment operator has been called" << std::endl;
		if (this != &MutantStack_aff)
			std::stack<T>::operator=(&MutantStack_aff);
		return (*this);
	};
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
};

#endif
