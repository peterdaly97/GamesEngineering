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
	
	system("PAUSE");
}