#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int lower_bound(vector<int>& data, int target)
    {
        size_t begin = 0, end = data.size(), middle;
        while (begin < end) 
        {
            middle = (begin + end) / 2;
            if (data[middle] >= target) 
                end = middle;
            else 
                begin = middle + 1;
        }
        return begin;
    }
};

void main()
{
    Solution program;
    vector<int> tests{ 1,3,5,6 };
    program.lower_bound(tests, 5);
}