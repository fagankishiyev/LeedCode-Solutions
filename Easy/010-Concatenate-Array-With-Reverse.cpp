/*
LeetCode #10 - Concatenate Array With Reverse
link:https://leetcode.com/problems/concatenate-array-with-reverse/description/


Input: nums = [1,2,3]
Output: [1,2,3,3,2,1]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>num(n);
        for(int i=0;i<nums.size();i++){
                num[i]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
                num.push_back(num[n-i-1]);
        }
        return num;
        
    }
};