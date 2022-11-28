#include <iostream>
#include <string>
#include <map>
#include <time.h>
using namespace std;

class Solution
{
public:
	map<string, string> data_base;
	
	// Encodes a URL to a shortened URL.
	string encode(string longUrl)
	{
		srand(time_t(NULL));
		string map = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
		string short_url = "http://x.com/";
		for (int_fast64_t i = 0; i < 6; i++)
			short_url.push_back(map[rand() % 63]);
		data_base.insert(make_pair(short_url, longUrl));
		return short_url;
	}

	// Decodes a shortened URL to its original URL.
	string decode(string shortUrl)
	{
		string long_url;
		auto iter = data_base.find(shortUrl);
		long_url = iter->second;
		return long_url;
	}
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

void main()
{
	Solution solution;
	string url = "https://leetcode.com/problems/design-tinyurl";
	solution.decode(solution.encode(url));
}
