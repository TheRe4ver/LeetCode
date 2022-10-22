class Solution
{
public:
    bool isPalindrome(int_fast64_t x)
    {
        string number = to_string(x);
        int_fast64_t size = number.size();
        for (int_fast64_t i = 0; i < size / 2; i++)
        {
            if (number[i] == number[size - i - 1])
                continue;
            else
                return false;
        }
        return true;
    }
};