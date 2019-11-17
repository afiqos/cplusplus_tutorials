// ask for person's name and greet person
#include <iostream>
#include <string>

int main()
{
	std::cout << "Please enter your name: ";

	std::string name;
	std::cin >> name;

	std::cout << "Hello, " << name << std::endl;
	return 0;

}

/*
	3 events that cause the system to flush the buffer
	buffer full, when library asked to read from standard input stream
	, lastly when we explicitly tell it to.

	std::cin >> v, discards nay whitespace characters in the std input stream
	then reads from the std input into variable v. Returns std::cin, of type istream. 
*/	

/*
	Variable: a variable is an object that has a name. 
	Object: part of a computer's memory that has a type
	Important in the distinction between objects and variables as possible to have
	objects that do not have names.
*/

/*
	Variables defined within a { } are local variables, so they exist only while
	executing the part of the program within the braces. When implementation reaches
	}, it destroys the variables, and returns any occupied memory.
*/
