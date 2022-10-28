class Solution
{
public:
	bool isAnagram(string s, string t)
	{
		int_fast64_t size = s.size();
		if (s.size() == t.size())
		{
			sort(s.begin(), s.end());
			sort(t.begin(), t.end());
			for (int_fast64_t i = 0; i < size; i++)
			{
				if (s[i] == t[i])
					continue;
				else
					return false;
			}
			return true;
		}
		else
			return false;
	}
};