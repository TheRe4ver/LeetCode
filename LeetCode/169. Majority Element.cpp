#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int, int> data;
        for (auto i : nums) data[i]++;
        pair<int, int> pair;
        int max = 0;
        for (auto i : data) 
        {
            if (max < i.second)
            {
                max = i.second;
                pair = { i.first,i.second };
            }
        }
        return pair.first;
    }
};

void main()
{
	Solution program;
	vector<int> test{ 2,2,1,1,1,2,2 };
	cout << program.majorityElement(test) << endl;
}