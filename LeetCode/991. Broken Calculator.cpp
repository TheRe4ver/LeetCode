#include <iostream>

using namespace std;

class Solution 
{
public:
    uint64_t brokenCalc(uint64_t startValue, uint64_t target)
    {
        uint64_t result = 0;
        while (target > startValue)
        {
            result++;
            if (target % 2 == 0)
                target = target / 2;
            else
                target += 1;
        }
        result = result + (startValue - target);
        return result;
    }
};

void main()
{
	Solution program;
    uint64_t start_test = 3, target_test = 10;
	cout << program.brokenCalc(3, 10);
}