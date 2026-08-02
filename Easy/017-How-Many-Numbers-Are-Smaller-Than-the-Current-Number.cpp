/*
LeetCode #17 - How Many Numbers Are Smaller Than the Current Number
link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

Input: nums = [8,1,2,2,3]
Output: [4,0,1,1,3]
Explanation: 
For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
For nums[1]=1 does not exist any smaller number than it.
For nums[2]=2 there exist one smaller number than it (1). 
For nums[3]=2 there exist one smaller number than it (1). 
For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>smller;
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            int k=nums[i];
            for(int j=0;j<nums.size();j++)
            {
                if(k>nums[j])
                {
                    count++;
                }
            }
            smller.push_back(count);
        }
        return smller;
        
    }
};