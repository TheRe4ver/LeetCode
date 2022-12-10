#include <iostream>
#include <string>
#include <regex>
using namespace std;

class Solution 
{
public:
	bool isMatch(string data, string pattern) 
	{
		regex check(pattern);
		return regex_match(data, check);
	}
};

void main()
{
	Solution program;
		string input = "ab", pattern = ".*";
		if (program.isMatch(input, pattern))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
}