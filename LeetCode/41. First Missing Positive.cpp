#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution 
{
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int size = nums.size();

        for (int i = 0; i < size; i++) 
        {
            int value = nums[i];
            if (value > 0 && value <= size) 
            { 
                int position = value - 1;

                if (nums[position] != value) 
                {
                    swap(nums[position], nums[i]);
                    i--;
                }
            }
        }

        for (int i = 0; i < size; i++)
            if (nums[i] != i + 1) 
                return i + 1;
        
        return size + 1;
    }
};

void main()
{
    Solution program;
    vector<int> nums{ 3,4,-1,1 };
    cout << program.firstMissingPositive(nums) << endl;
}