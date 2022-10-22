class Solution
{
public:
	int commonFactors(int_fast64_t a, int_fast64_t b)
	{
		int_fast64_t counter = 0;

		int_fast64_t max = 0;

		if (a > b)
			max = a;
		else
			max = b;

		for (int_fast64_t i = 1; i <= max; i++)
			if (a % i == 0 and b % i == 0)
				counter++;

		return counter;
	}
};