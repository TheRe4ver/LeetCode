class Solution
{
public:
    int_fast64_t smallestEvenMultiple(int_fast64_t n)
    {
        int_fast64_t result = n;
        while (result)
        {
            if (result % 2 == 0 && result % n == 0)
                break;
            result++;
        }
        return result;
    }
};