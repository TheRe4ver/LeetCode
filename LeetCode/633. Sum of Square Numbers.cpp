#include <iostream>

using namespace std;

class Solution
{
public:
    bool judgeSquareSum(int target) 
    {
        int_fast64_t left = 0, right = sqrt(target);
        while (left <= right)
        {
            if (left * left + right * right == target)
                return true;
            else if (left * left + right * right > target)
                right--;
            else
                left++;
        }
        return false;
    }
};

void main()
{
    Solution program;
    cout << program.judgeSquareSum(16);
}