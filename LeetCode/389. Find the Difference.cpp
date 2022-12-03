#include <iostream>
#include <algorithm>

using namespace std;

class Solution 
{
public:
    char findTheDifference(string original, string modified) 
    {
        sort(original.begin(), original.end());
        sort(modified.begin(), modified.end());
        int size = modified.size();
        for (size_t i = 0; i < size; i++)
            if (original[i]!=modified[i])
                return modified[i];
        return '0';
    }
};

void main()
{
	
}