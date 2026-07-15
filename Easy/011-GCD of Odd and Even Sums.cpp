/*
LeetCode #11 - GCD of Odd and Even Sums
link:https://leetcode.com/problems/gcd-of-odd-and-even-sums/description/?envType=daily-question&envId=2026-07-15


Input: n = 4

Output: 4

Explanation:

Sum of the first 4 odd numbers sumOdd = 1 + 3 + 5 + 7 = 16
Sum of the first 4 even numbers sumEven = 2 + 4 + 6 + 8 = 20
Hence, GCD(sumOdd, sumEven) = GCD(16, 20) = 4.
*/

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int a = n*n;
        int b = n*(n+1);
        while (b != 0) {
                int r = a % b;
                a = b;
                b = r;
            }
        
        return a;
        
    }
};
