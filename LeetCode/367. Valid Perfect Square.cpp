#include <iostream>

using namespace std;

class Solution
{
public:
    bool isPerfectSquare(uint_fast64_t target)
    {
        uint_fast64_t left = 0, right = target;
        while (left <= right)
        {
            uint_fast64_t mid = left + (right - left) / 2;
            uint_fast64_t square = mid * mid;

            if (square == target)
                return true;
            else if (square > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return false;
    }
};

void main()
{

}