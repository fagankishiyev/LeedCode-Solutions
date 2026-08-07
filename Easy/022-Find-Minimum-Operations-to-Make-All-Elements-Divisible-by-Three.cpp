/*
LeetCode #22 - Find Minimum Operations to Make All Elements Divisible by Three
link:https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/

Input: nums = [1,2,3,4]
Output: 3
Explanation:

All array elements can be made divisible by 3 using 3 operations:

Subtract 1 from 1.
Add 1 to 2.
Subtract 1 from 4.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%3!=0)
            {
                if(nums[i]%3==1)
                {
                    count++;
                }
                else
                {
                    count++;
                }
                                
            }
        }
        return count;
        
    }
};