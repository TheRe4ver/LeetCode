class Solution
{
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int_fast64_t size = digits.size();

        digits[size - 1] += 1;
        for (int_fast64_t i = 0; i < size; i++)
        {
            if (digits[size - i - 1] == 10 and (size - i - 1) != 0)
            {
                digits[size - i - 1] = 0;
                digits[size - i - 2] += 1;
            }
            else if (digits[size - i - 1] == 10 and (size - i - 1) == 0)
            {
                digits[size - i - 1] = 0;
                digits.insert(digits.begin(), 1);
            }
            else
            {
                break;
            }
        }
        return digits;
    }
};