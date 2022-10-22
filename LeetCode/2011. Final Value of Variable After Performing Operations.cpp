class Solution
{
public:
    int_fast64_t finalValueAfterOperations(vector<string>& operations)
    {
        int_fast64_t result = 0;
        for (string i : operations)
        {
            if (i == "++X")
                ++result;
            else if (i == "X++")
                result++;
            else if (i == "--X")
                --result;
            else if (i == "X--")
                result--;
        }
        return result;
    }
};