#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    vector<double> convertTemperature(double celsius) 
    {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        return vector<double>{ kelvin, fahrenheit };
    }
};

void main()
{
    double celsius = 36.50;
    Solution program;
    vector<double> result = program.convertTemperature(celsius);
    cout << "Kelvin -> "result[0] << "\nFahrenheit -> " << result[1] << endl;
}