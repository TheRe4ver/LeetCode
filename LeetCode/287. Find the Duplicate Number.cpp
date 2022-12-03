#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for (int i = 0; i < size;)
        {
            if (nums[i] == nums[i + 1])
                return nums[i];
            else
                i++;
        }
        return 0;
    }
};

void main()
{

}