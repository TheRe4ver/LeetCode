#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution 
{
public:
    int removeElement(vector<int>& data, int value) 
    {
        int_fast64_t removing_counter = 0;
        int_fast64_t size = data.size();

        for (int_fast64_t current_index = 0; current_index < size; current_index++)
            if (data[current_index] != value) 
                data[removing_counter++] = data[current_index];

        return removing_counter;
    }
};

void main()
{
    Solution program;
    vector<int> data = { 3,2,2,3 };
    cout << program.removeElement(data, 3) << endl;
}