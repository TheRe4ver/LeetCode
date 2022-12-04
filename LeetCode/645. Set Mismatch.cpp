#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution 
{
public:
    vector<int>result;
    unordered_map<int, int>map;
    vector<int> findErrorNums(vector<int>& numbers) 
    {
        sort(numbers.begin(), numbers.end());
        
        int size = numbers.size();

        for (int pointer = 1; pointer <= size; pointer++)
            map[pointer] = 0;
        
        for (auto& pointer : numbers)
            map[pointer]++;
        
        for (auto& pointer : map) 
        {
            if (pointer.second == 2) 
            {
                result.push_back(pointer.first);
                break;
            }
        }
        for (auto& pointer : map) 
        {
            if (pointer.second == 0) 
            {
                result.push_back(pointer.first);
                break;
            }
        }

        return result;
    }
};

void main()
{
    Solution program;
    vector<int> numbers = { 1,2,2,4 };
    auto result = program.findErrorNums();
}