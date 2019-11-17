#import <iostream>
#import <string>

int main()
{
	// 1-1
	std::cout << "==== ex 1-1 ====" << std::endl;
	const std::string hello = "Hello";
	const std::string message = hello + ", world" + "!";
	
	std::cout << message << std::endl;
	
	// 1-2
	std::cout << "==== ex 1-2 ====" << std::endl;
	const std::string exclam = "!";
	//const std::string message2 = "Hello" + ", world" + exclam; // error
	const std::string message2 = hello + ", world" + exclam;

	std::cout << message2 << std::endl;


	// 1-3
	std::cout << "==== ex 1-3 ====" << std::endl;
	{ const std::string s = "a string";
	  std::cout << s << std::endl; } // prints normally

	{ const std::string s = "another string";
	  std::cout << s << std::endl; } // prints normally


	// 1-4
	std::cout << "==== ex 1-4 ====" << std::endl;
	{ const std::string s = "a string";
	  std::cout << s << std::endl;
	{ const std::string s = "another string";
	  std::cout << s << std::endl; }}

	// 1-5
	std::cout << "==== ex 1-5 ====" << std::endl;
	{ std::string s = "a string";		// error if cout x after the parenthesis of x ends
	{ std::string x = s + ", really";	// as the local vars (within {}) will be destroyed
	std::cout << x  << std::endl; }		// after the } ends
	std::cout << s  << std::endl;
	}

	// 1-6
	std::cout << "==== ex 1-6 ====" << std::endl;
	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << std::endl << "And what is yours? ";
	std::cin >> name;
	std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;
		// cin takes 1 word from the buffer, so if you type 2 wwords e.g. "beef boy"
		// the first cin will take "beef", then 2nd cin will immediately take "boy" 
		// from the buffer.

	/*
		When our program writes its prompt to cout, that output goes into the buffer
		associated with the standard output stream. 
		Next, we attempt to read from cin. This flushes the cout buffer, so we are
		assured our user will see the prompt.

		Recall: 3 events causing system to flush buffer. Buffer full, library asked to read 
				from standard input stream, explicit flushing (e.g. on endl)..
	*/
		
	
	
	return 0;
}
