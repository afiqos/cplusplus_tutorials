#include <iostream>
#include <string>

int main()
{
	std::cout << "Please enter your first name: ";

	std::string name;
	std::cin >> name;

	const std::string greeting = "Hello, " + name + "!";

	// number of blanks surrounnding the greeting
	const int pad = 1;

	// total number of rows to write
	const int rows = pad * 2 + 3;

	return 0;
}
