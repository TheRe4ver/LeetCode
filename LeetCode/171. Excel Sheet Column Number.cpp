#include <iostream>

using namespace std;

class Solution 
{
public:
    int titleToNumber(string columnTitle) 
    {
        uint_fast64_t result = 0;
        for (auto current_column : columnTitle)
            result = result * 26 + current_column - 'A' + 1;
        return result;
    }
};

void main()
{
    Solution program;
    cout << program.titleToNumber("ZY") << endl;
}