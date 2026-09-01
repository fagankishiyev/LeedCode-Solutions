/*
LeetCode #1 - Reverse Integer
link: https://leetcode.com/problems/reverse-integer/description/?envType=problem-list-v2&envId=math

Input: x = 123
Output: 321
*/


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        string xtost=to_string(x);
        string nstr="";
        long long n=0;
        if(x>=0)
        {
            for(int i=xtost.size()-1;i>=0;i--)
            {
                nstr+=xtost[i];
            }
            n= stoll(nstr);
        }
        else{
            for(int i=xtost.size()-1;i>=1;i--)
            {
                nstr+=xtost[i];
            }
            n=-1*stoll(nstr);

        }
        long long  limit = pow(2, 31);
        if(n >= -limit && n <= limit - 1){
            return n;
        }
        else{
            return 0;
        }
    }
};
