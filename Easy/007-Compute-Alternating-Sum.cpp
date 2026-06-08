/*
LeetCode #7 - Compute Alternating Sum
link:https://leetcode.com/problems/compute-alternating-sum/description/

Input: nums = [1,3,5,7]
Output: -4
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        int k=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=k*nums[i];
            k=-k;   
        }
        return sum;
        
    }
};

int main() {
    Solution s1;
    vector<int> nums = {1, 3, 5, 7};
    int result = s1.alternatingSum(nums);
    cout << "Alternating sum: " << result << endl;
    return 0;
}