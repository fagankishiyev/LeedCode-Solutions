/*
LeetCode #6 - Minimum Operations to Make Array Sum Divisible by K
link:https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/

Input: nums = [3,9,7], k = 5
Output: 4
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return (sum%k);        
    }
};

int main() {
    Solution s1;
    vector<int> nums = {3, 9, 7};
    int k = 5;
    int result = s1.minOperations(nums, k);
    cout << "Minimum operations: " << result << endl;
    return 0;
}