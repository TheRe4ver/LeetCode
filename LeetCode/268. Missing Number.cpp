#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution
{
public:
	int missingNumber(vector<int>& nums)
	{
		int result = 0;
		int size = nums.size();
		sort(nums.begin(), nums.end());

		for (int i = 0; i < size; i++)
		{
			if (i != nums[i])
			{
				return i;
			}
		}
		return size;
	}
};

void main()
{
	Solution program;
	vector<int> nums{ 9,6,4,2,3,5,7,0,1 };
	cout << program.missingNumber(nums) << endl;
}