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

	const std::string::size_type cols = greeting.size() + pad * 2 + 2;	

	// total number of rows to write
	const int rows = pad * 2 + 3;


	// separate the output from the input
	std::cout << std::endl;

	// write rows rows of output
	int r = 0;
	
	// invariant: we have written r rows so far
	while (r != rows) {

		// write a row of output (described in section 2.4)
		// std::cout << std::endl;

		std::string:size_type c = 0;

		// invariant: we have written c characters so far in current row
		while (c != cols) {
			if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
				std::cout << "*";

			} else {


			}
			// write one or more characters
			// adjust the value of c to maintain the invariant

		}

		++r;
	}

	return 0;
}


/*
	++i will increment value of i, then return the incremented value.
	i++ will increment value of i, but return the original i value before incremented.

	follow guideline on "prefer ++i over i++"?

	2 useful key-idea to write and understand while loops
		- 1) when a 'while' finishes, the condition must be false. e.g. 'r != rows',
			 when it ends means that 'r == rows'

		- 2) loop invariant. i.e. a property that we assert will be true about a 'while'
				 each time it is about to test its condition.
			 See the comment '// invariant: ...' before the while loop.

			 To determine if invariant we come up with is correct we must verify that
			 	invariant is true each time the 'while' is abuot to test its cond. 
				This means we need to verify the invariant to be true at 2 specific
				points in the program.
					1st: just before the 'while' tests its condition for the first time'
					2nd: just before reaching end of 'while' body. If True here means 
						its true the next time 'while' tests the condition.
					Therefore the invariatn will be true every time. 

					Note: read invariant as e.g. "We have written 0 rows so far"

			 Choose an invariant that can use to convince ourselves that the program
			 	behaves as intended and write program to make the invariant true at 
				the proper times.
			 So the invariant is a kind of valuable intellectual tool for designing
			 	programs and making it easier to understand a 'while' loop.
			 Test condition of the loop is not part of the invariant. It is what makes
			 	the loop terminate. 
				Loop will terminate if each time through the loop you move closer to 
				satisfying the termination condition.

			Loop invariatn should be created so that when the condition of termination
				is attained, then the goal is reached. Termination + invariant = goal

*/

/*
	std::string::size_type

	declaring size_type type to hold the number of characters in a string. Much more suitable
		than using int. This can size_type can handle no matter how large the number of
		characters in greeting var. int might be unable to hold an input string that is too
		long, every int variable can take on values up to at least 32767. (but for rows, int
		is suitable as it depends on var 'pad' which we control and not user controls. 
		Note: since its std::string::size_type, means its an unsigned type-objects, cannot 
			handle negative values, since impossible for string to contain a negative number
			of characters. 

	the ' if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)'
		can derived using analogous reasoning of the invariants. 
		- want to write '*' on first and last row, or on first or last column.

*/
