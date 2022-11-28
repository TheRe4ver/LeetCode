#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findGCD(vector<int>& nums) 
    {
        int_fast64_t size = nums.size();
        int_fast64_t max = nums[0];
        int_fast64_t min = nums[0];
        int_fast64_t result = 1;
        for (int_fast64_t i = 1; i < size; i++)
        {
            if (nums[i]>max)
            {
                max = nums[i];
            }
            if (nums[i]<min)
            {
                min = nums[i];
            }
        }
        for (int_fast64_t i = 1; i <= max; i++)
        {
            if (min % i == 0 and max % i == 0)
                result = i;
        }
        return result;
    }
};

void main()
{

}