#include <iostream>

using namespace std;

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        return fmod((log10(n) / log10(3)), 1) == 0;
    }
};

void main()
{
    Solution program;
    cout << program.isPowerOfThree(27) << endl;
}