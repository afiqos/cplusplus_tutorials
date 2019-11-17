#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::string t = s;	// t contains copy of characters in s, s cna be either a string 
						// or string literal

	std::string z(n, c);	// z initially contains n copies of the character c
							// c is char (not a string or string literal), n is integer

	os << s		// writes characters contained in s, without any formatting changes,
				// on the output stream denoted by os. Result of expression is 'os'.

	is >> s		// reads and discards characters from the stream denoted by is
				// until encountering a character that is not whitespace.
				// Then read successive characters from is into s, overwriting whatever value s 
				// had, until next char read would be whitespace. Result is 'is'

	s.size()	// number of characters in s

	// Variables can be defined in one of three ways:
	std::string hello = "Hello";	// define variable with an explicit initial
									// this "Hello" considered as string literal?
	
	std::string stars(100, '*');	// construct variable
									// according to its type and given expression
									// expression is the one in ( )

	std::string name;				// define the variable with an implicit initial
									// which depends on its type

	return 0;
}
	
