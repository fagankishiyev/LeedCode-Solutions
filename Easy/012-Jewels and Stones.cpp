/*
LeetCode #12 - jewels-and-stones
link:https://leetcode.com/problems/jewels-and-stones/description/


Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
*/
#include <iostream>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0;i<stones.size();i++)
        {
            for(int j=0;j<jewels.size();j++)
            {
                if(stones[i]==jewels[j])
                {
                    count++;
                    break;
                }
                
            }
        }
        return count;
        
    }
};