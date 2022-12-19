#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	bool validPath(int nodes, vector<vector<int>>& edges, int source, int destination)
	{
		int size = edges.size();
		bool is_valid = false;
		for (size_t i = 0; i < size; i++)
		{
			for (size_t j = 0; j < 2; j++)
			{
				if (edges[i][j] == source)
				{
					source += 2;
				}
			}
		}
		if (source == destination)
		{
			is_valid = true;
		}
		else
		{
			is_valid = false;
		}
		return is_valid;
	}
};

void main()
{
	Solution program;
	vector<vector<int>> test{ {0,1 }, { 1,2 }, { 2,0 } };
	int source = 0;
	int destination = 2;
	int nodes = 3;
	cout << program.validPath(nodes, test, source, destination) << endl;
}