#include <iostream>
#include <vector>
#include "search.h"

int main()
{
	std::vector<int> nums = { 1,2,3,4,5,1 };

	std::cout << Solution::FindPivotIndex(nums);


	return 0;
}