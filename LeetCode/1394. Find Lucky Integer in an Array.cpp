#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution 
{
public:
    int findLucky(vector<int>& arr)
    {
        map<int, int> frequency;
        int size = arr.size();

        for (int i = 0; i < size; i++)
            frequency[arr[i]]++;

        int result = -1;

        for (auto it : frequency)
            if (it.first == it.second)
                if (it.first > result)
                    result = it.first;

        return result;
    }
};

void main()
{
	Solution program;
	vector<int> test{ 2,2,3,4 };
	cout << "The lucky number is -> " << program.findLucky(test) << endl;
}