/*
LeetCode #28 - Power of Two
link:https://leetcode.com/problems/power-of-two/description/

Input: n = 1
Output: true
Explanation: 2^0 = 1
*/

#include <iostream>
#include <cmath>


class Solution {
public:
    bool isPowerOfTwo(int n) 
    {   
        if(n>0)
        {
            int p=0;
            while(pow(2,p)<=n)
            {
                int d=pow(2,p);
                if(n%d!=0)
                {
                    return false;
                }
                p++;
            }
            return true;
        }
        else
        {
            return false;
        }
    }
};