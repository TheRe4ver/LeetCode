#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution
{
public:
    int minimumAverageDifference(vector<int>& nums)
    {

        int maxi = INT_MAX, res = 0, n = nums.size();

        long total = 0, sum = 0;

        for (auto x : nums)
        {
            total += x;
        }
        for (int i = 0; i < n - 1; i++) 
        {

            sum += nums[i];

            long curr = abs(sum / (i + 1) - (total - sum) / (n - i - 1));

            if (curr < maxi) 
            {
                maxi = curr;
                res = i;
            }
        }

        return maxi > total / n ? n - 1 : res;

    }
};

void main()
{
    Solution program;
    vector <int> nums{ 2,5,3,9,5,3 };
    cout << program.minimumAverageDifference(nums) << endl;
}