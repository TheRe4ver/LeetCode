#include <iostream>

using namespace std;

class Solution
{
public:
    int mySqrt(int target)
    {
        int_fast64_t left = 0, right = target;
        while (left < right)
        {
            int_fast64_t mid = left + (right - left + 1) / 2;
            if (mid * mid <= target)
                left = mid;
            else
                right = mid - 1;
        }
        return left;
    }
};

void main()
{
    Solution program;
    cout << program.mySqrt(8) << endl;
}