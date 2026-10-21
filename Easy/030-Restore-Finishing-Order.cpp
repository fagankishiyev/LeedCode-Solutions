/*
LeetCode #30 - Restore Finishing Order
link:https://leetcode.com/problems/restore-finishing-order/description/

input: order = [3,1,2,5,4], friends = [1,3,4]
Output: [3,1,4]
Explanation:The finishing order is [3, 1, 2, 5, 4]. 
Therefore, the finishing order of your friends is [3, 1, 4].
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>finish;
        for(auto &i : order)
        {
            auto it = find(friends.begin(),friends.end(),i);
            if(it!=friends.end())
            {
                finish.push_back(i);
            }
            
        }
        return finish;
    }
};