#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	int singleNumber(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());
		int size = nums.size();

		for (size_t i = 0; i < size;)
		{
			if (nums[i] != nums[i + 1])
				return nums[i];
			else
				i += 2;
		}
		
		return nums[0];
	}
};

void main()
{

}