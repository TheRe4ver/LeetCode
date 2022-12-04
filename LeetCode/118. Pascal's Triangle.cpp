#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> result(numRows);

        for (int row = 0; row < numRows; row++)
        {
            result[row].resize(row + 1);
            result[row][0] = result[row][row] = 1;

            for (int col = 1; col < row; col++)
                result[row][col] = result[row - 1][col - 1] + result[row - 1][col];
        }

        return result;
    }
};

void main()
{
    Solution program;
    auto result = program.generate(5);
}