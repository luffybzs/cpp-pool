#pragma once

#define CHAR 0
#define INT  1
#define FLOAT 2
#define DOUBLE 3
#define NAN_LITERAL "nan"
#define NANF_LITERAL "nanf"
#define INF_LITERAL "+inf"
#define INFF_LITERAL "+inff"
#define NINF_LITERAL "-inf"
#define NINFF_LITERAL "-inff"



#include <string>
class ScalarConverte 
{
	private:
		ScalarConverte(void){};
		ScalarConverte(const ScalarConverte &ScalarConverte_cpy){};
		~ScalarConverte(void) {};
		ScalarConverte &operator=(const ScalarConverte &ScalarConverte_aff){return *this;};
	public:
		static void convert(std::string literal);
};