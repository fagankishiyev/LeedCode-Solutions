/*
LeetCode #4 - Find Words Containing Character
link:https://leetcode.com/problems/find-words-containing-character/

Input: words = ["leet","code"], x = "e"
Output: [0,1]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x) != string::npos) {
                result.push_back(i);
            }
        }
        return (num2-num1);
    }
};

int main() {
    Solution s1;
    int n = 10, m = 3;
    int result = s1.differenceOfSums(n, m);
    cout << "Difference: " << result << endl;
    return 0;
}