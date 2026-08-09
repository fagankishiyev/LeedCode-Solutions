/*
LeetCode #24 - Shuffle String
link:https://leetcode.com/problems/shuffle-string/description/

Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
Output: "leetcode"
Explanation: As shown, "codeleet" becomes "leetcode" after shuffling.
*/


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char>c(indices.size());
        string ss="";
        for(int i=0;i<indices.size();i++)
        {
            c[indices[i]]=s[i];
        }
        for(auto& it: c)
        {
            ss+=it;
        }
        return ss;
    }
};