#include <iostream>

using namespace std;

class Solution 
{
public:
    string convert(string input, int row_number)
    {
        if (row_number <= 1) 
            return input;
        string result;
        int cycle = 2 * row_number - 2;
        for (int i = 0; i < row_number; ++i)
        {
            for (int j = i; j < input.length(); j = j + cycle) 
            {
                result = result + input[j];
                int second_j = (j - i) + cycle - i;
                if (i != 0 && i != row_number - 1 && second_j < input.length())
                    result = result + input[second_j];
            }
        }
        return result;
    }
};

void main()
{
    Solution program;
    string test = "PAYPALISHIRING";
    int num_test = 3;
    cout<<program.convert(test, num_test);
}