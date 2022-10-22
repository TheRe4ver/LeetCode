class Solution 
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == 0)
        {
            return false;
        }

        double i = log(n) / log(4);
        return i == trunc(i);
    }
};