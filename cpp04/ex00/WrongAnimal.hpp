/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 21:41:20 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/12 21:47:58 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
		
	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const &to_copy);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(WrongAnimal const &to_affect);
		void makeSound(void) const;
		virtual std::string getType(void) const;
};

#endif