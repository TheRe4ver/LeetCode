#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	void moveZeroes(vector<int>& data)
	{
		int index = 0;
		int size = data.size();
		while (index < size)
		{
			if (data[index] == 0)
			{
				data.erase(data.begin() + index);
				data.push_back(0);
				size--;
			}
			else
				index++;
		}
	}
};

void main()
{
	Solution program;
	vector<int> data = {};
	program.moveZeroes(data);
}