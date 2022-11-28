#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution 
{
public:
    string addSpaces(string s, vector<int>& spaces) 
    {
        string result;
        for (int current_char = 0, current_space = 0; current_char < s.size(); ++current_char)
        {
            if (current_space < spaces.size() && current_char == spaces[current_space]) 
            {
                result += " ";
                ++current_space;
            }
            result += s[current_char];
        }
        return result;
    }
};

void main()
{
    Solution program;
    string test = "LeetcodeHelpsMeLearn";
    vector<int> spaces{ 8,13,15 };
    cout << program.addSpaces(test,spaces) << endl;
}