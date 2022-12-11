#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int myAtoi(string input)
    {
        int output = 0;
        stringstream int_stream(input);
        int_stream >> output;
        return output;
    }
};

void main()
{
	Solution program;
	string test = "";
	cout << program.myAtoi();
}