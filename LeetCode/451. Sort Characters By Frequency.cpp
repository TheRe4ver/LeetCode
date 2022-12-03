#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

class Solution 
{
public:
    string frequencySort(string s) 
    {
        map<char, int> data;
        vector<pair<int, char>> data_pair;
        int size = s.length();
        for (int i = 0; i < size; i++)
        {
            data[s[i]]++;
        }
        auto i = data.begin();
        while (i != data.end())
        {
            data_pair.push_back({ i->second,i->first });
            i++;
        }

        sort(data_pair.rbegin(), data_pair.rend());
        string ans = "";
        for (int i = 0; i < data_pair.size(); i++)
        {
            int t = data_pair[i].first;
            while (t--)
            {
                ans += data_pair[i].second;
            }
        }
        return ans;
    }
};

void main()
{

}