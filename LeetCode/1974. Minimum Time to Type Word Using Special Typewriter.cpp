#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    int minTimeToType(string word) 
    {
        int res = word.size();
        int point = 'a';
        for (auto ch : word) 
        {
            res += min(abs(ch - point), 26 - abs(point - ch));
            point = ch;
        }
        return res;
    }
};

void main()
{
    Solution program;
    cout << program.minTimeToType("aafkeodsje") << " seconds" << endl;
}