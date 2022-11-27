#include <iostream>
#include <string>

using namespace std;

class Solution 
{
public:
    int addDigits(int_fast64_t number)
    {
        int_fast64_t temp = 0;
        while (number > 9)
        {
            while (number)
            {
                temp += (number % 10);
                number /= 10;
            }
            number = temp;
            temp = 0;
        }
        return number;
    }
};

void main()
{
	Solution program;
	
}