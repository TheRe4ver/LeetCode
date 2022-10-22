class Solution
{
public:
	uint_fast64_t subtractProductAndSum(uint_fast64_t n)
	{
		uint_fast64_t result = 0;
		auto s = to_string(n);
		uint_fast64_t size = s.size();
		uint_fast64_t mult = 1, sum = 0;
		string temp;
		for (size_t i = 0; i < size; i++)
		{
			temp = s[i];
			mult *= stoi(temp);
			sum += stoi(temp);
		}
		result = mult - sum;
		return result;
	}
};