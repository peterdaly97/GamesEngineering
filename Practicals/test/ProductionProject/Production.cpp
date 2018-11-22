#include "Production.h"


bool Production::RunTests(std::vector<int> v, int start, int end, int size)
{
	bool result = ArraySize(v, size);
	if (result) {
		result = WithinRange(v, start, end);
		if (result) {
			result = NoDuplicates(v);
			if (!result) {
				std::cout << "There are duplicates in the array" << std::endl;
			}	
		}
		else
			std::cout << "One or more values in the array are not within the range" << std::endl;
	}
	else
		std::cout << "Array is not the correct size" << std::endl;
	return result;
}

bool Production::ArraySize(std::vector<int> v, int size)
{
	if (v.size() == size)
		return true;
	else
		return false;
}

bool Production::WithinRange(std::vector<int> v, int lowRange, int highRange)
{
	for (int i : v) {
		if(i < 1 || i > 46)
			return false;
	}
	return true;
}

bool Production::NoDuplicates(std::vector<int> v)
{
	if (std::adjacent_find(v.begin(), v.end()) == v.end())
		return true;
	
	return false;
	
}
