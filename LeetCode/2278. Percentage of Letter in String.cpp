#include <iostream>
#include <unordered_map>

using namespace std;

class Solution 
{
public:
    int percentageLetter(string data, char letter)
    {
        double max = 0; 
        int size = data.size();
        for (size_t i = 0; i < size; i++)
            if (data[i] == letter)
                max++;
        return (max / size) * 100;
    }
};

void main()
{
    Solution program;
    cout << program.percentageLetter("foobar", 'o') << endl;
}