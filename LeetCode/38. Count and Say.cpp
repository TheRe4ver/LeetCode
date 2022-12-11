#include <iostream>
#include <string>

using namespace std;

class Solution 
{
public:
    string countAndSay(int number) 
    {
        if (number == 1)
            return "1";
        string rest = countAndSay(number - 1);
        string result = "";
        for (int i = 0; i < rest.size(); i++) 
        {
            int count = 1;
            while (i < rest.size() - 1 && rest[i] == rest[i + 1])
            {
                i++;
                count++;
            }
            result.append(to_string(count) + rest[i]);
        }
        return result;
    }
};

void main()
{
	Solution program;
	int test = 4;
	cout << program.countAndSay(4);
}