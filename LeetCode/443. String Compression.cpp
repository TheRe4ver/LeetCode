#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution 
{
public:
    int compress(vector<char>& chars) 
    {
        int lenght = chars.size();
        int size = 0;
        int current_char = 0;
        while (current_char < lenght)
        {
            char temp = chars[current_char];
            chars[size++] = chars[current_char++];
            int count = 1;

            while (current_char < lenght && (temp == chars[current_char]))
            {
                current_char++;
                count++;
            }
            if (count > 1)
                for (char digit : to_string(count))
                    chars[size++] = digit;
        }
        return size;
    }
};

void main()
{
    Solution program; 
    vector<char> chars{ 'a', 'a', 'b', 'b', 'c', 'c', 'c' };
    cout << program.compress(chars);
}