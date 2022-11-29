#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution 
{
public:
    void reverseString(vector<char>& input) 
    {
        stack<char> stack;
        for (int i = 0; i < input.size(); i++) 
        {
            char ch = input[i];
            stack.push(ch);
        }
        input.clear();
        while (!stack.empty())
        {
            char ch = stack.top();
            input.push_back(ch);
            stack.pop();
        }
    }
};

void main()
{

}