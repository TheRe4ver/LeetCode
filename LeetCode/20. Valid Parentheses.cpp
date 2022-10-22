class Solution 
{
public:
    bool isValid(string s)
    {

        for (int i = 1; i < s.length(); i++)
        {
            if ((s[i] == ')' && s[i - 1] == '(') ||
                (s[i] == '}' && s[i - 1] == '{') ||
                (s[i] == ']' && s[i - 1] == '['))
            {
                s = s.substr(0, i - 1) + s.substr(i + 1);
                i = 0;
            }
        }

        if (s.length() == 0)
            return true;

        return false;
    }
};