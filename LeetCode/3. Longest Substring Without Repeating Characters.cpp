class Solution
{
public:
    int_fast64_t lengthOfLongestSubstring(string s)
    {
        int_fast64_t store[256] = { 0 };
        int_fast64_t left = 0;
        int_fast64_t right = 0;
        int_fast64_t result = 0;

        while (right < s.length())
        {
            store[s[right]]++;

            while (store[s[right]] > 1)
            {
                store[s[left]]--;
                left++;
            }

            result = max(result, right - left + 1);
            right++;
        }
        return result;
    }
};