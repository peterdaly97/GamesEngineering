#include <vector>
#include <iostream>
#include <algorithm>

class Production{
public:

	static bool RunTests(std::vector<int> v, int start, int end, int size);

	static bool ArraySize(std::vector<int> v, int size);
	static bool WithinRange(std::vector<int> v, int lowRange, int highRange);
	static bool NoDuplicates(std::vector<int> v);
};
