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
#include <string>

class WrongAnimal {
	protected:
		std::string type;
	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const &to_copy);
		WrongAnimal &operator=(WrongAnimal const &to_affect);
		virtual ~WrongAnimal();
		virtual void MakeSound(void) const = 0;
		virtual std::string GetType(void) const;
};

#endif