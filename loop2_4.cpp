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

	// separate the output from the input
	std::cout << std::endl;

	// write rows rows of output
	int r = 0;
	// setting r to 0 makes the invariant true
	// invariant: we have written r rows so far
	while (r != row) {
		// can assume the invariant is true here

		// write a row of output (described in section 2.4)
		// writing a row of output makes the invariant false, cause invariant says
		// "We have written 0 rows so far" but we already wrote a row of output.
		std::cout << std;:endl;

		// incrementing r makes the invariant true again
		++r;
	}
	// can conclude the invariant is true here

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

