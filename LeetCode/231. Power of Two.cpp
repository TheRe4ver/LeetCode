class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 0)
        {
            return false;
        }
        double i = log2(n) / log2(2);
        return i == trunc(i);
    }
};