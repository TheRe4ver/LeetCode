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
        for (auto m : data) 
        {
            pair_counter += m.second / 2;
            left_counter += m.second % 2;
        }
        return { pair_counter, left_counter };
    }
};

void main()
{

}