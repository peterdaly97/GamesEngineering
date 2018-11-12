#include <iostream>
#include <vector>
#include <assert.h>
#include <algorithm>

void runTests(std::vector<int> numbers)
{
	// Test to see if the there are 6 numbers
	assert(numbers.size() == 6);

	for (int i : numbers) {
		assert(i >= 1 && i <= 46);
	}

	std::sort(numbers.begin(), numbers.end());

	assert(std::adjacent_find(numbers.begin(), numbers.end()) == numbers.end());
}

int main()
{
	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);
	numbers.push_back(6);

	runTests(numbers);
	system("PAUSE");
}