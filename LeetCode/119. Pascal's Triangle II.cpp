#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<vector<int>> result(rowIndex + 1);
        int row;
        for (row = 0; row <= rowIndex; row++)
        {
            result[row].resize(row + 1);
            result[row][0] = result[row][row] = 1;
            for (int col = 1; col < row; col++)
            {
                result[row][col] = result[row - 1][col - 1] + result[row - 1][col];
            }
        }
        return result[row - 1];
    }
};

void main()
{
    Solution program;
    auto result = program.getRow(5);
}