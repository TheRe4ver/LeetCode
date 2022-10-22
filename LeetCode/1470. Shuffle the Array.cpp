class Solution
{
public:
	vector<int> shuffle(vector<int>& nums, int n)
	{
		vector <int> result;
		for (int_fast64_t i = 0; i < n; ++i)
		{
			result.push_back(nums[i]);
			result.push_back(nums[i + n]);
		}
		return result;
	}
};