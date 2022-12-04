#include <iostream>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int>& first, vector<int>& second) 
    {
        if (first.size() > second.size())
            swap(first, second);

        unordered_map<int, int> map;

        for (auto val : first) 
            map[val]++;

        int index = 0;
        for (auto val : second) 
        {
            if (map[val] > 0) 
            {
                first[index++] = val;
                --map[val];
            }
        }
        return vector<int>(first.begin(), first.begin() + index);
    }
};

void main()
{

}