#include <iostream>
#include <vector>
#include "search.h"

int main()
{
	std::vector<int> nums = { 0,1,0,3,12 };

	Solution::MoveZeros(nums);

	for (auto& e : nums)
	{
		std::cout << e << " ";
	}


	return 0;
}