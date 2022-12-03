#include <iostream>

using namespace std;

class Solution 
{
public:
    string replaceDigits(string s) 
    {
        string result;
        int size = s.size();
        for (int i = 0; i < size; i++) 
        {
            if (i % 2 == 0) 
                result.push_back(s[i]);
            else 
                result.push_back(s[i] - '0' + s[i - 1]);
        }
        return result;
    }
};

void main()
{
    Solution program;
    cout << program.replaceDigits("a1c1e1") << endl;
}