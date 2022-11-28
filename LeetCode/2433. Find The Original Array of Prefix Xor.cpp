#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<int> findArray(vector<int>& pref)
	{
		vector<int> result(pref.size());
		result[0] = pref[0];
		for (int_fast64_t i = 1; i < pref.size(); i++) 
		{
			result[i] = pref[i] ^ pref[i - 1];
		}
		return result;
	}
};

void main()
{
	Solution program;
	vector<int> pref;
	vector<int> arr;
	arr = program.findArray(pref);
	int arr_size = arr.size();
	for (size_t i = 0; i < arr_size; i++)
		cout << arr[i] << ',';
	cout << endl;
}