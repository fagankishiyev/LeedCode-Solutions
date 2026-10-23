/*
LeetCode #30 - Weighted Word Mapping
link:https://leetcode.com/problems/weighted-word-mapping/description/?envType=problem-list-v2&envId=0an93mq5

input: words = ["abcd","def","xyz"], weights = [5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2]

output: "rij"
Explanation:The weight of "abcd" is 5 + 3 + 12 + 14 = 34. 
The result modulo 26 is 34 % 26 = 8, which maps to 'r'.
The weight of "def" is 14 + 1 + 2 = 17. 
The result modulo 26 is 17 % 26 = 17, which maps to 'i'.
The weight of "xyz" is 7 + 7 + 2 = 16. 
The result modulo 26 is 16 % 26 = 16, which maps to 'j'.
Thus, the string formed by concatenating the mapped characters is "rij".
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string output = "";
        for (auto &word : words) {
            int sum = 0;
            for (char ch : word) {
                sum += weights[ch - 'a'];
            }
            int w = sum % 26;
            output += char('z' - w);
        }
        return output;
    }
};