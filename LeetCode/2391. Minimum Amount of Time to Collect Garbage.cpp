#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	int garbageCollection(vector<string>& garbage, vector<int>& travel)
	{
		int house_count = garbage.size();
		int garbage_count = 0;
		int paper_time = 0;
		int paper_index = -1;
		int glass_time = 0;
		int glass_index = -1;
		int metal_time = 0;
		int metal_index = -1;
		for (size_t i = 0; i < house_count; i++)
		{
			garbage_count = garbage[i].size();
			for (size_t j = 0; j < garbage_count; j++)
			{
				if (garbage[i][j] == 'P')
				{
					paper_time++;
					paper_index = i;
				}
				else if (garbage[i][j] == 'G')
				{
					glass_time++;
					glass_index = i;
				}
				else if (garbage[i][j] == 'M')
				{
					metal_time++;
					metal_index = i;
				}
			}
		}
		int garbage_time = (paper_time + glass_time + metal_time);
		auto iter1 = travel.cbegin();
		travel.insert(iter1, 0);
		int	travel_time = 0;
		if (paper_index != -1)
			for (size_t i = 0; i <= paper_index; i++)
				travel_time += travel[i];
		if (glass_index != -1)
			for (size_t i = 0; i <= glass_index; i++)
				travel_time += travel[i];
		if (metal_index != -1)
			for (size_t i = 0; i <= metal_index; i++)
				travel_time += travel[i];
		int result = garbage_time + travel_time;
		return result;
	}
};
void main()
{
	Solution program;
	vector<string> garbage = { "G","P","GP","GG" };
	vector<int> travel = { 2,4,3 };
	cout << "Total time is - > " << program.garbageCollection(garbage, travel) << endl;
}