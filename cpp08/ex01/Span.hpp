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