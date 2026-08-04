/*
LeetCode #19 - Create Target Array in the Given Order
link:https://leetcode.com/problems/create-target-array-in-the-given-order/description/

Input: nums = [0,1,2,3,4], index = [0,1,2,2,1]
Output: [0,4,1,3,2]
Explanation:
nums       index     target
0            0        [0]
1            1        [0,1]
2            2        [0,1,2]
3            2        [0,1,3,2]
4            1        [0,4,1,3,2]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {                                       
public:                             
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {   
        vector<int> arr;
        for (int i = 0; i < index.size(); i++) {
            arr.insert(arr.begin()+ index[i], nums[i]);
        }
        return arr;
    }
};