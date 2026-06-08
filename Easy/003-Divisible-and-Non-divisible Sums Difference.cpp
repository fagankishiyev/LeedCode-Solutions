 /*
LeetCode #3 - Divisible and Non-Divisible Sums Difference
link: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/

Input: n = 10, m = 3
Output: 19
*/

#include <iostream>
using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0;
        int num2=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                num1+=i;
            }else{
                num2+=i;
            }
        }
        return (num2-num1);
    }
};

int main() {
    Solution s1;
    int n = 10, m = 3;
    int result = s1.differenceOfSums(n, m);
    cout << "Difference: " << result << endl;
    return 0;
}
