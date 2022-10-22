class Solution
{
public:
	int maximumWealth(vector<vector<int>>& accounts)
	{
		int account_size = accounts.size();
		int money_size = accounts[0].size();
		int wealth = accounts[0][0];
		int temp = 0;
		for (size_t i = 0; i < account_size; i++)
		{
			for (size_t j = 0; j < money_size; j++)
				temp += accounts[i][j];
			if (temp > wealth)
				wealth = temp;
			temp = 0;
		}
		return wealth;
	}
};