#pragma once
#include <iostream>
#include <vector>

class Solution
{
public:

	static int binary_search(std::vector<int>& nums, int target)
	{
		int l_idx = 0;
		int r_idx = nums.size() - 1;

		while (l_idx <= r_idx)
		{
			int pivot_idx = (l_idx + r_idx) / 2;

			int pivot = nums[pivot_idx];
			if (pivot == target)
			{
				return pivot_idx;
			}
			else if (pivot < target)
			{
				// l을 pivot의 한칸 오른쪽으로 옮긴다
				l_idx = pivot_idx + 1;
			}
			else // pivot > target
			{
				// r을 pivot의 한칸 왼쪽으로 옮긴다
				r_idx = pivot_idx - 1;
			}
		}
		return -1;
	}

	static std::vector<int>& MoveZeros(std::vector<int>& nums)
	{
		int p1 = 0, p2 = 0;

		for (; p2 < nums.size(); ++p2)
		{
			if (nums[p2] != 0)
			{
				nums[p1] = nums[p2];
				p1++;
			}
		}

		for (; p1 < nums.size(); ++p1)
		{
			nums[p1] = 0;
		}

		return nums;
	}
};