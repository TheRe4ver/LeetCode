class Solution
{
public:
    vector<int> runningSum(vector<int>& nums)
    {
        uint_fast64_t sum = 0;
        uint_fast64_t size = nums.size();
        for (uint_fast64_t i = 0; i < size; i++)
        {
            sum += nums[i];
            nums[i] = sum;
        }

        return nums;
    }
};