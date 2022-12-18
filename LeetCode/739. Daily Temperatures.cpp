#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int size = temperatures.size();
        stack<int> stack;
        stack.push(size - 1);
        vector<int> result(size);
        for (int i = size - 2, current; i >= 0; --i) 
        {
            current = temperatures[i];
            
            while (stack.size() && current >= temperatures[stack.top()])
                stack.pop();
            
            if (stack.size()) 
                result[i] = stack.top() - i;
            
            stack.push(i);
        }
        return result;
    }
};

void main()
{
    Solution program;
    vector<int> test = { 73,74,75,71,69,72,76,73 };
    vector<int> result = program.dailyTemperatures(test);
}