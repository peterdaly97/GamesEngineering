#include "Production.h"
#include <sstream>
#include <iostream>


int main()
{
	std::vector<int> numbers;

	const int SIZE = 6;
	const int LOW_RANGE = 1;
	const int HIGH_RANGE = 46;

	std::string newNumber;
	int guess;
	
	std::cout << "Please enter 6 numbers, pressing the enter button after each number" << std::endl;
	while (numbers.size() != SIZE) {
		
		std::cin >> newNumber;
		std::istringstream iss(newNumber);
		iss >> guess;
		if (iss.eof()) {
			numbers.push_back(guess);
		}
		else {
			std::cout << "Please enter a valid number" << std::endl;
		}
			
	}

	Production::RunTests(numbers, LOW_RANGE, HIGH_RANGE, SIZE);
	

	system("PAUSE");

	return 0;
}
