class Solution
{
public:
    int_fast64_t lengthOfLastWord(string s)
    {
        int_fast64_t length = 0;
        int_fast64_t size = s.size();
        for (int i = size - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                length++;
            }
            else if (s[i] == ' ' and length == 0)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        return length;
    }
};