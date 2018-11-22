#include <assert.h>


#include "../ProductionProject/Production.h"

using namespace std;

int main()
{

	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);
	numbers.push_back(6);

	const int SIZE = 6;
	const int LOW_RANGE = 1;
	const int HIGH_RANGE = 46;

	assert(Production::ArraySize(numbers, SIZE));
	assert(Production::WithinRange(numbers, LOW_RANGE, HIGH_RANGE));
	assert(Production::NoDuplicates(numbers));

	system("PAUSE");

	return 0;
}