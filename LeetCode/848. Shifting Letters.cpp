#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    string shiftingLetters(string letters, vector<int>& shifts)
    {
        int current_shift = 0;
        for (int i = letters.size() - 1; i >= 0; i--) 
        {
            current_shift += shifts[i];
            current_shift %= 26;

            if (current_shift > 'z' - letters[i])
                letters[i] += current_shift - 26;
            else
                letters[i] += current_shift;
        }
        return letters;
    }
};

void main()
{
    Solution program;
    vector <int> shifts{ 1,2,3 };
    cout << program.shiftingLetters("abc", shifts) << endl;
}