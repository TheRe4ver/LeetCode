#include <iostream>

using namespace std;

class Solution
{
public:
	string intToRoman(int number)
	{
        string result = "";
        while (number >= 1000) {
            number -= 1000;
            result.push_back('M');
        }
        if (number >= 900) {
            number -= 900;
            result.append("CM");
        }
        if (number >= 500) {
            number -= 500;
            result.push_back('D');
        }
        if (number >= 400) {
            number -= 400;
            result.append("CD");
        }
        while (number >= 100) {
            number -= 100;
            result.push_back('C');
        }
        if (number >= 90) {
            number -= 90;
            result.append("XC");
        }
        if (number >= 50) {
            number -= 50;
            result.push_back('L');
        }
        if (number >= 40) {
            number -= 40;
            result.append("XL");
        }
        while (number >= 10) {
            number -= 10;
            result.push_back('X');
        }
        if (number >= 9) {
            number -= 9;
            result.append("IX");
        }
        if (number >= 5) {
            number -= 5;
            result.push_back('V');
        }
        if (number >= 4) {
            number -= 4;
            result.append("IV");
        }
        while (number > 0) {
            number -= 1;
            result.push_back('I');
        }
        return result;
    }
};

void main()
{
	Solution program;
	int test = 1994;
	cout << program.intToRoman(test);
}