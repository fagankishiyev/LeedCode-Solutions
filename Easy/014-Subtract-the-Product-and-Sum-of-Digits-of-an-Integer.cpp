/*
LeetCode #14 - Subtract-the-Product-and-Sum-of-Digits-of-an-Integer
link:https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/


Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int pr=1;
        int sum=0;
        while(n>0){
            int b=n%10;
            pr=pr*b;
            sum+=b;
            n=n/10;
        }
        return (pr-sum);
        
    }
};