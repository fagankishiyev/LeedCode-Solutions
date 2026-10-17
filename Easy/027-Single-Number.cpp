/*
LeetCode #27 - Single Number
link:https://leetcode.com/problems/single-number/description/

Input: nums = [2,2,1]
Output: 1
Explanation: The target 1 exists at index 2.
*/



#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>f;
        int ret;
        for(auto x : nums)
        {
            f[x]++;
        }

        for(auto n : f)
        {
            if(n.second%2==1)
            {
                ret= n.first;
            }
        }

        return ret;
        
    }
};