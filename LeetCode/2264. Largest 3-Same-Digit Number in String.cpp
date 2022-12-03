#include <iostream>
#include <map>
#include <string>

using namespace std;

class Solution
{
public:
    string largestGoodInteger(string number) 
    {
        char result = '0' - 1;

        for (int i = 0; i + 2 < number.size(); i++) 
            if (number[i] == number[i + 1] and number[i + 1] == number[i + 2] and number[i] > result)
                result = number[i];

        if (result < '0')
            return "";

        return string(3, result);
    }
};

void main()
{
    Solution program;
    cout << program.largestGoodInteger("6777133339") << endl;
}