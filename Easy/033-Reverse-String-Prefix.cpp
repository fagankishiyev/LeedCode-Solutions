/*
LeetCode #33 - Reverse String Prefix
link:https://leetcode.com/problems/reverse-string-prefix/description/?envType=problem-list-v2&envId=0an93mq5


Input: s = "abcd", k = 2

Output: "bacd"

Explanation:

The first k = 2 characters "ab" are reversed to "ba". The final resulting string is "bacd"
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string s, int k) {
        string rs=s.substr(0,k);
        string revs(rs.rbegin(),rs.rend());
        string removeds=s.erase(0,k);
        s=revs+s;
        return s;   
    }
};