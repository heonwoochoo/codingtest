#include <iostream>
#include <vector>
#include "search.h"

int main()
{
	std::vector<int> nums = { 2,1,3,5,6,7 };
	const int target = 7;

	std::cout << Solution::binary_search(nums, target);

	return 0;
}