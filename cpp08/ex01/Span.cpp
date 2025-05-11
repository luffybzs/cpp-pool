#include "Span.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>


Span::Span(void)
{
	Size = 0;
	std::cout << "Span Default constructor has been called" << std::endl;
	return ;
}

Span::Span(unsigned int _size) : Size(_size)
{
	std::cout << "Span Personalized constructor has been called" <<std::endl;
	return;
}

Span::Span(const Span &Span_cpy) 
{
	*this = Span_cpy;
	std::cout << "Span Copy constructor has been called" <<std::endl;
	return;
}

Span &Span::operator=(const Span &Span_aff)
{

    if (this != &Span_aff)
    {
        this->Size = Span_aff.Size;
        this->tab = Span_aff.tab;
    }
	std::cout << "Span Affectation has been called" <<std::endl;
    return *this;
}

Span::~Span(void)
{
	std::cout << "Span destructor has been called" << std::endl;
	return;
}

void Span::addNumber(int number_add)
{
	if (tab.size() >= Size)
	   throw std::runtime_error("Span is full");
   tab.push_back(number_add);
}

int Span::shortestSpan()
{
    if (tab.size() < 2)
        throw std::runtime_error("Error: not enough numbers to compute a span");
    std::vector<int> sorted = tab;
    std::sort(sorted.begin(), sorted.end());
    std::vector<int>::iterator it = sorted.begin();
    std::vector<int>::iterator next = it + 1;
    int minSpan = std::numeric_limits<int>::max();
	int diff;
    while (next != sorted.end())
    {
        diff = *next - *it;
        if (diff < minSpan)
            minSpan = diff;
        ++it;
        ++next;
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (tab.size() < 2)
        throw std::runtime_error("Error: not enough numbers to compute a span");
    int minVal = *std::min_element(tab.begin(), tab.end());
    int maxVal = *std::max_element(tab.begin(), tab.end());

    return maxVal - minVal;
}
