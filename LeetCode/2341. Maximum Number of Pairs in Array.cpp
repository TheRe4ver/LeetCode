#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution 
{
public:
    vector<int> numberOfPairs(vector<int>& nums) 
    {
        unordered_map<int, int> data;
        for (auto i : nums) data[i]++;
        int pair_counter = 0, left_counter = 0;
        for (auto i : data) 
        {
            pair_counter += i.second / 2;
            left_counter += i.second % 2;
        }
        return { pair_counter, left_counter };
    }
};

void main()
{
    Solution program;
    vector<int> temp{ 1,2,2,1, 3, 2, 2 };
    vector <int> test = program.numberOfPairs(temp);
}