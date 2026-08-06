/*
LeetCode #21 - Digit Frequency Score
link:https://leetcode.com/problems/digit-frequency-score/description/

Input: n = 122
Output: 5

Explanation:

The digit 1 appears 1 time, contributing 1 * 1 = 1.
The digit 2 appears 2 times, contributing 2 * 2 = 4.
Thus, the score of n is 1 + 4 = 5.
*/

class Solution {
public:
    int digitFrequencyScore(int n) {  
        int sum =0;
        while (n>0) //101  2 1 1 0 2 1
        {
            sum+=(n%10);
            n=n/10;          
        }   
        return sum; 
    }
};