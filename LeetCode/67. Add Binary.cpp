#include <iostream>

using namespace std;

class Solution 
{
public:
    string addBinary(string first, string second)
    {
        if (first.length() < second.length())
            return addBinary(second, first);

        int difference = first.length() - second.length();

        string padding;

        for (size_t i = 0; i < difference; i++)
            padding.push_back('0');

        first = padding + first;

        string result;

        char carry = '0';

        for (int i = first.length() - 1; i >= 0; i--) 
        {
            //  110 111 
            if (first[i] == '1' and second[i] == '1') 
            {
                if (carry == '1')
                    result.push_back('1'), carry = '1';
                else
                    result.push_back('0'), carry = '1';
            }
            // 000 001
            else if (first[i] == '0' and second[i] == '0') 
            {
                if (carry == '1')
                    result.push_back('1'), carry = '0';
                else
                    result.push_back('0'), carry = '0';
            }
            // 100 101 010 011
            else if (first[i] != second[i]) 
            {
                if (carry == '1')
                    result.push_back('0'), carry = '1';
                else
                    result.push_back('1'), carry = '0';
            }
        }

        if (carry == '1')
            result.push_back(carry);

        reverse(result.begin(), result.end());


        int index = 0;
        while (index + 1 < result.length() && result[index] == '0')
            index++;
        return (result.substr(index));
    }
};

void main()
{
    string a = "1101", b = "100";
    Solution program;
    cout << program.addBinary(a, b) << endl;
}