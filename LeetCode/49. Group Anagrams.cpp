#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> map;
        for (auto& values : strs) 
        {
            string values_copy = values;
            sort(values_copy.begin(), values_copy.end());
            map[values_copy].push_back(values);
        }
        vector<vector<string>> anagrams;
        for (auto& key : map) 
            anagrams.push_back(key.second);
        return anagrams;
    }
};