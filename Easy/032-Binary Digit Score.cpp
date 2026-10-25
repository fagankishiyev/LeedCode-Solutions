/*
LeetCode #31 - Binary Digit Score
link:https://leetcode.com/contest/weekly-contest-525/problems/binary-digit-score/

input: a = 14, b = 6O
utput: 6
Explanation:The binary representation of a = 14 is "1110", so s1 = 3.
The binary representation of b = 6 is "110", so s2 = 2.
Since s1 > s2, the score of a and b is s1 * s2 = 3 * 2 = 6.
*/

class Solution {
public:
    int calculateScore(int a, int b) {
        int s1=0;
        int s2=0;
        while(a>0 or b>0)
        {
            int c=a%2;
            int d=b%2;
            if(c==1)
            {
                s1++;
            }
            if(d==1)
            {
                s2++;
            }
            a=a/2;
            b=b/2;
        }
        if(s1>=s2)
        {
            return s1*s2;
        }
        else
        {
            return s2/s1;
        }
        
    }
};