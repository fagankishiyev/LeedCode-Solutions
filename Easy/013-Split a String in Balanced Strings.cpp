/*
LeetCode #13 - Split a String in Balanced Strings
link:https://leetcode.com/problems/split-a-string-in-balanced-strings/description/

Input: s = "RLRRLLRLRL"
Output: 4
Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.
*/

#include <iostream>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int i=0;
        while(i<s.size())
        {             
            char s1=s[i];
            i++;
            bool t=true;
            int same=1;
            int dif=0;
            while(t){
                if(s1!=s[i]){
                    dif++;
                    
                }
                else
                {
                    same++;
                    
                }
                if(dif==same){
                    t=false;
                    count++;
                }
                i++;
            }
           // }
        }
        return count;
        
    }
};