/*
LeetCode #16 - Number of Steps to Reduce a Number to Zero
link:https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/

Input: num = 14
Output: 6
n one step, if the current number is even, 
you have to divide it by 2, otherwise, you have to subtract 1 from it.
*/

class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(num>0)
        {
            if(num%2==0)
            {
                num=num/2;
            }
            else
            {
                num-=1;
            }
            count++;
        }
        return count;
    }
};