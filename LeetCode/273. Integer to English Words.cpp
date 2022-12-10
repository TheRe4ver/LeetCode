#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
    string getNumberLessThan20(int number) 
    {
        switch (number) 
        {
        case 1:
            return "One";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
        case 10:
            return "Ten";
        case 11:
            return "Eleven";
        case 12:
            return "Twelve";
        case 13:
            return "Thirteen";
        case 14:
            return "Fourteen";
        case 15:
            return "Fifteen";
        case 16:
            return "Sixteen";
        case 17:
            return "Seventeen";
        case 18:
            return "Eighteen";
        case 19:
            return "Nineteen";
        }

        return "";
    }

    string getNumberLessThan100(int number) 
    {
        string ret;
        int ten = number / 10;
        if (number < 20) 
        {
            return getNumberLessThan20(number);
        }
        else
        {
            switch (ten) 
            {
            case 2:
                ret = "Twenty";
                break;
            case 3:
                ret = "Thirty";
                break;
            case 4:
                ret = "Forty";
                break;
            case 5:
                ret = "Fifty";
                break;
            case 6:
                ret = "Sixty";
                break;
            case 7:
                ret = "Seventy";
                break;
            case 8:
                ret = "Eighty";
                break;
            case 9:
                ret = "Ninety";
                break;
            }
        }

        int unit = number % 10;
        if (ten > 0 && unit > 0) 
        {
            ret += " " + getNumberLessThan20(unit);
        }
        else if (unit > 0)
        {
            ret = getNumberLessThan20(unit);
        }
        return ret;
    }

    string getNumberLessThan1000(int number) 
    {
        string ret;
        int hundred = number / 100;
        if (hundred > 0) 
        {
            ret = getNumberLessThan20(hundred) + " Hundred";
        }
        if (hundred > 0 && number % 100 > 0) 
        {
            ret += " " + getNumberLessThan100(number % 100);
        }
        else if (number % 100 > 0) 
        {
            ret += getNumberLessThan100(number % 100);
        }
        return ret;
    }
public:
    string numberToWords(int number) 
    {

        if (number == 0) 
            return "Zero";

        int billion = number / 1000000000;
        int million = number / 1000000 % 1000;
        int thousand = number / 1000 % 1000;
        string ret;

        if (billion > 0) 
        {
            ret += getNumberLessThan20(billion) + " Billion";
        }
        if (million > 0) 
        {
            if (billion > 0) ret += " ";
            ret += getNumberLessThan1000(million) + " Million";
        }
        if (thousand > 0) 
        {
            if (million > 0 || billion > 0) ret += " ";
            ret += getNumberLessThan1000(thousand) + " Thousand";
        }

        if (number % 1000 > 0 && (billion > 0 || million > 0 || thousand > 0)) 
        {
            ret += " ";
        }
        ret += getNumberLessThan1000(number % 1000);
        return ret;
    }
};

void main()
{
    Solution program;
    int test = 1234567;
    cout << program.numberToWords(test) << endl;
}