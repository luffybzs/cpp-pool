#include "Span.hpp"
#include <iostream>


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

