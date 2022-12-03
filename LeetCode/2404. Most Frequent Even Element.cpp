#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution 
{
public:

    int mostFrequentEven(vector<int>& nums) 
    {
        map<int, int>counts;

        for (int i : nums)
            if (i % 2 == 0)
                counts[i]++;

        int result = -1;
        int frequency = 0;

        for (auto i : counts) 
        {
            if (i.second > frequency)
            {
                result = i.first;
                frequency = i.second;
            }
        }
        return result;
    }
};

void main()
{
    Solution program;
    vector<int> data{ 0, 1, 2, 2, 4, 4, 1 };
    cout << program.mostFrequentEven(data) << endl;
}