#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	int maxArea(vector<int>& height)
	{
		int left = 0, right = height.size() - 1;
		int max_water = 0;
		while (left<right)
		{
			int min_height = min(height[left], height[right]);
			
			max_water = max(max_water, (right - left) * min_height);

			while (height[left] <= min_height && left < right)
				left++;
			while (height[right] <= min_height && left < right)
				right--;
		}
		return max_water;
	}
};

void main()
{
	Solution program;
	vector<int> test_data{ 1,8,6,2,5,4,8,3,7 };
	program.maxArea(test_data);
}