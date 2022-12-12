#include <iostream>

using namespace std;

class Solution 
{
public:
    int climbStairs(int steps) 
    {
        int one = 1, two = 1, three = 1;

        for (int i = 2; i < steps + 1; i++) 
        {
            three = one + two;
            one = two;
            two = three;
        }

        return three;
    }
};

void main()
{
    Solution program;
    cout << program.climbStairs(5) << endl;
}