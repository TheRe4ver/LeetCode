#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool canJump(vector<int>& nums) 
    {
        int size = nums.size();
        int target = size - 1; 
        bool result = 0;
        for (int i = size - 1; i >= 0; i--)
        {
            if (i + nums[i] >= target) 
            {
                result = 1;
                target = i; 
            }
            else result = 0;
        }
        return result;
    }
};

void main()
{

}