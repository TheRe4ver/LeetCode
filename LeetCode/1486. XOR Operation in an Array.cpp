class Solution
{
public:
	uint_fast64_t xorOperation(uint_fast64_t n, uint_fast64_t start)
	{
		vector<uint_fast64_t> nums;
		uint_fast64_t result = start + 2 * 0;
		for (uint_fast64_t i = 1; i < n; i++)
		{
			nums.push_back(start + 2 * i);
			result ^= nums[i - 1];
		}
		return result;
	}
};