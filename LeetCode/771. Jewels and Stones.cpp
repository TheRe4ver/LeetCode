class Solution
{
public:
	int numJewelsInStones(string jewels, string stones)
	{
		set<char> pattern;
		int result = 0;
		for (char i : jewels)
			pattern.insert(i);
		for (char i : stones)
			if (pattern.find(i) != pattern.end())
				result++;
		return result;
	}
};