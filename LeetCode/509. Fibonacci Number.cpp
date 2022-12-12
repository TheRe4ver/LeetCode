#include <iostream>

using namespace std;

class Solution
{
public:
    int fib(int number)
    {
        //F(0) = 0, F(1) = 1
        //F(n) = F(n - 1) + F(n - 2), for n > 1.

        if (number == 0)
            return 0;
        if (number == 1)
            return 1;

        return fib(number - 1) + fib(number - 2);
    }
};

void main()
{
    Solution program;
    cout << program.fib(4);
}