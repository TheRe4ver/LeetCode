#include <iostream>
#include <string>

using namespace std;


class Solution
{
public:
    string longestPalindrome(string input) 
    {
        int size = input.size();
        if (size == 0 || size == 1)
            return input;
        string result;
        int max = 0;
        for (int left = 0; left < size - max; left++)
        {
            for (int right = size - 1; right >= left + max; right--)
            {
                if (input[right] != input[left])
                    continue;
                string str = input.substr(left, right - left + 1);
                int str_size = str.size();
                if (isPalindrome(str) && str_size > max)
                {
                    max = str_size;
                    result = str;
                }
            }
        }
        return result;
    }

    bool isPalindrome(string sub_str) 
    {
        int size = sub_str.size();
        if (size == 0 || size == 1)
            return true;
        int left = 0, right = size - 1;
        while (sub_str[left] == sub_str[right] && left < right) 
            left++, right--;
        return left >= right;
    }
};

void main()
{
    Solution program;
    string test = "babad";
    cout << program.longestPalindrome(test) << endl;
}