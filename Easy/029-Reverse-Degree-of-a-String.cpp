/*
LeetCode #29 - Reverse Degree of a String
link:https://leetcode.com/problems/reverse-degree-of-a-string/description/

input: s = "abc"
Output: 148
*/

#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for (int i=1;i<=s.size();i++)
        {
            char c=s[i-1];
            int value=('z' - c+1);
            sum+=value*i;

        }
        return sum;
        
    }
};

