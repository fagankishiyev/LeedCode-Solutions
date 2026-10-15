/*
LeetCode #26 - Search Insert Position 
link:https://leetcode.com/problems/search-insert-position/description/

Input: nums = [1,3,5,6], target = 5
Output: 2
Explanation: The target 5 exists at index 2.
*/



#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            // 1,,4,7,8,9
            int mid = left + (right-left)/2;

            if(nums[mid]==target)
            {
                return mid;
            }

            else if(nums[mid]<target)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }        

        }
        return left;
    }
    
};