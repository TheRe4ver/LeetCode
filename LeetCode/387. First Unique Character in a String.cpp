#include <iostream>
#include <unordered_map>

using namespace std;

class Solution
{
public:
	int firstUniqChar(string input)
	{
		unordered_map<char, int_fast64_t> data;
		int_fast64_t size = input.size();

		for (int_fast64_t current_char = 0; current_char < size; current_char++)
			data[input[current_char]]++;

		for (int_fast64_t current_char = 0; current_char < size; current_char++)
			if (data[input[current_char]] == 1)
				return current_char;

		return -1;
	}
};

void main()
{
	string s = "leetcode";
	Solution program;
	cout << program.firstUniqChar(s) << endl;
}