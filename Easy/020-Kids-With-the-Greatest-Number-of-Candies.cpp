/*
LeetCode #20 - Kids With the Greatest Number of Candies
link:https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] 
Explanation: If you give all extraCandies to:
- Kid 1, they will have 2 + 3 = 5 candies, which is the greatest among the kids.
- Kid 2, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
- Kid 3, they will have 5 + 3 = 8 candies, which is the greatest among the kids.
- Kid 4, they will have 1 + 3 = 4 candies, which is not the greatest among the kids.
- Kid 5, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
*/


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>tf;
        int max=candies[0];
        for(int j=0;j<candies.size();j++)
        {
            if(max<candies[j])
            {
                max=candies[j];
            }
        }
        for(int i=0;i<candies.size();i++)
        {
            int candy=extraCandies+candies[i];
            if(candy>=max)
            {
                tf.push_back(true);
            }
            else
            {
                tf.push_back(false);
            }
        }
        return tf;
    }
};