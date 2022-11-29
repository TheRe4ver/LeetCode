#include <iostream>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int minPartitions(string n) 
    {
        int max_int = INT_MIN;
        for (auto i : n)
        {
            max_int = max(max_int, i - '0');
        }
        return max_int;
    }
};

void main()
{
    Solution program;
    program.minPartitions("32");
}