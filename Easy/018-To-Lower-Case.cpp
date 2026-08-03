/*
LeetCode #18 - To Lower Case
link:https://leetcode.com/problems/to-lower-case/description/?envType=problem-list-v2&envId=dqso6hgt

Input: s = "Hello"
Output: "hello"
*/

#include <iostream>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        string news="";
        for(int i=0;i<s.size();i++)
        {
            char c=tolower(s[i]);
            news+=c;
        }
        return news;
    }
};