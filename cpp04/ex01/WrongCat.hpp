/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 21:41:28 by ayarab            #+#    #+#             */
/*   Updated: 2025/04/12 21:41:29 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #pragma once

 #include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
	public:
	WrongCat(void);
	WrongCat(const WrongCat &WrongCat_cpy);
	WrongCat &operator=(const WrongCat &WrongCat_aff);
	~WrongCat(void);
	void MakeSound(void) const;
};