#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber) 
    {
        string output;
        while (columnNumber > 0) 
        {
            columnNumber--;
            int char_shift = columnNumber % 26;
            columnNumber /= 26;
            output += 'A' + char_shift;
        }
        reverse(output.begin(), output.end());
        return output;
    }
};

void main()
{
	Solution program;
	
}