/*
LeetCode #5 - Score of a String
link:https://leetcode.com/problems/score-of-a-string/

Input: s = "hello"
Output: 13
*/

#include <iostream>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=1;i<s.size();i++){
            int a=abs((int)s[i]-(int)s[i-1]);
            sum+=a;            
        }
        return sum;
    }
};

int main() {
    Solution s1;
    string s = "hello";
    int result = s1.scoreOfString(s);
    cout << "Score: " << result << endl;
    return 0;
}