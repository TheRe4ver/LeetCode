#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int minFallingPathSum(vector<vector<int>>& matrix)
    {
        int size = matrix.size();
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++) 
                if (i > 0)
                    matrix[i][j] += min(min(matrix[i - 1][j], j > 0 ? matrix[i - 1][j - 1] : INT_MAX), j < size - 1 ? matrix[i - 1][j + 1] : INT_MAX);

        int result = INT_MAX;

        for (int i = 0; i < size; i++)
            result = min(matrix[size - 1][i], result);

        return result;
    }
};

void main()
{
	Solution program;
	vector<vector<int>> test{ {2,1,3},{6,5,4},{7,8,9} };
	cout << program.minFallingPathSum(test);
}