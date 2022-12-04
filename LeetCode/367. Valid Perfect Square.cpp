#include <iostream>

using namespace std;

class Solution
{
public:
    bool isPerfectSquare(uint_fast64_t target)
    {
        uint_fast64_t s = 0, e = target;
        while (s <= e) {
            uint_fast64_t mid = s + (e - s) / 2;
            uint_fast64_t square = mid * mid;

            if (square == target)
                return true;
            else if (square > target)
                e = mid - 1;
            else
                s = mid + 1;
        }
        return false;
    }
};

void main()
{

}