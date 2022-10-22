class Solution
{
public:
	uint_fast64_t numberOfSteps(uint_fast64_t num)
	{
		uint_fast64_t counter = 0;
		while (num != 0)
		{
			if (num % 2 == 0)
				num /= 2;
			else
				num -= 1;
			counter++;
		}
		return counter;
	}
};