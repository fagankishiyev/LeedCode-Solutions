/*
LeetCode #2 - Convert the Temperature
link: https://leetcode.com/problems/convert-the-temperature/

Input: celsius = 36.50
Output: [309.65000,97.70000]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return{celsius + 273.15,celsius * 1.8+32};       
    }
};

int main() {
    Solution s1;
    double celsius = 36.50;
    vector<double> result = s1.convertTemperature(celsius);
    cout << "Kelvin: " << result[0] << ", Fahrenheit: " << result[1] << endl;
    return 0;
}