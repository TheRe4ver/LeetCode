#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    int findPoisonedDuration(vector<int>& attack_time, int duration)
    {
        int result = attack_time.empty() ? 0 : duration;
        for (int i = 1; i < attack_time.size(); ++i)
            result += min(attack_time[i] - attack_time[i - 1], duration);
        return result;
    }
};

void main()
{
    Solution program;
    vector<int> attacks{ 1,4,5,8 };
    program.findPoisonedDuration(attacks, 5);
}