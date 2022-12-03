#include <iostream>
#include <map>

using namespace std;

class Solution 
{
public:
    char repeatedCharacter(string input) 
    {
        map <char, int> data;
        int size = input.size();
        data[input[0]]++;
        int i = 1;
        while (true)
        {
            data[input[i]]++;

            for (size_t j = 0; j < data.size(); j++)
                if (data[input[j]] == 2)
                    return input[j];

            i++;
        }
        return '0';
    }
};

void main()
{
    Solution program;
    cout << program.repeatedCharacter("abccbaacz") << endl;
}