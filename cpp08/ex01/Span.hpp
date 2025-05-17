/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:48:44 by ayarab            #+#    #+#             */
/*   Updated: 2025/05/13 19:48:45 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <limits>
#include <iterator>
#include <vector>
class Span 
{
	private:
		unsigned int Size;
		std::vector<int> tab;
	public:
		Span(void);
		Span(unsigned int size);
		Span(const Span &Span_cpy);
		Span &operator=(const Span &Span_aff);
		~Span(void);
		void addNumber(int number_add);
		int shortestSpan();
		int longestSpan();
		template <typename Iterator>
		void addNumber(Iterator begin, Iterator end);
	
};
template <typename Iterator>
void Span::addNumber(Iterator begin, Iterator end)
{
   	size_t rangeSize = std::distance(begin, end);
    if (tab.size() + rangeSize > Size)
        	throw std::runtime_error("Span is full or too many elements to add");
    tab.insert(tab.end(), begin, end);
}