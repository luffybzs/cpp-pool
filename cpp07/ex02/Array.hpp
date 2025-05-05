#pragma once

#include <exception>
template <typename T>

class Array {
	public:
	Array(void);
	Array(unsigned int len);
	Array(const Array &Array_cpy);  
    Array &operator=(const Array &Array_aff);
	~Array(void);
	class OutOfBoundsException : public std::exception {
		public:
			virtual const char* what() const throw();
		};

};