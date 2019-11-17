#include <iostream>
#include <string>

int main()
{

	std::cout << "Please enter your first name: " ;

	std::string name;
	std::cin >> name;

	const std::string greeting = "Hello, " + name + "!";

	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";

	const std::string first(second.size(), '*');

	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}


/*
	if you set the string "* Hello, " + name + "! *";, it will appear as fixed
	spaces at the output.

	But if you put the "* " and " *" at the cout it will align with the whitespaces.

	Why? due to the spaces(greeting.size(), ' ');  probably

*/

/*
	when using 'const' need to initialize it as part of its definition.
	however the value you assign it doesnt need to be a constant, e.g.
	'name' is a variable when declaring the const greeting.

	const promises that the variable's value will not change during its lifetime.

*/

/* 
	recall that '<<' is left-associative. '+' operator and '>>' are also left-associative.
*/

/*
	when we use '=' symbol, its explicitly saying what value we want the variable to have.
	when we use '()' in a definition, e.g. std::string spaces(....), we telling 
	the implementation to construct the variable from the expression within the parenthesis.
	
	Also depends on the type of the variable.

	For this case
	'greeting.size()' is calling a member function. So object 'greeting' has a component 'size'
	which turns out to be a function. 
	Then variable 'greeting' has type std::string, which is defiend, so evaluating greeting.size()
	yields an integer representing the number of characters in greeting.
	
	The expression ' ' is a character literal. Character literals are distinct from string literals. 
	character literals in single quotes, string literals in double quotes. 

	Character literal represents a single character, of built-int type char.
	String literal much more complicated type (more at S10.2/176)

	When we construct string from an integer value and a char value, result is as many copies of 
	char value as the value of integer. e.g. std::string stars(5, '*'); is *****.

	
*/
