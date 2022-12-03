#include <iostream>
#include <string>
using namespace std;

class Solution 
{
public:
    string largestOddNumber(string number) 
    {
        return number.substr(0, number.find_last_of("13579") + 1);
    }
};

void main()
{
    Solution program;
    program.largestOddNumber("35427");
}