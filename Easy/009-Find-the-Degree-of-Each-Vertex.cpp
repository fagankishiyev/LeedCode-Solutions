/*
LeetCode #9 - Find the Degree of Each Vertex
link:https://leetcode.com/problems/find-the-degree-of-each-vertex/description/


Input: matrix = [[0,1,1],[1,0,1],[1,1,0]]
Output: [2,2,2]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>degree;
        for(int i=0;i<matrix.size();i++)
        {
            int sum=0;
            for(int j=0;j<matrix[i].size();j++)
            {
                sum+=matrix[i][j];
            }
            degree.push_back(sum);
        }
        return degree;
        
    }
};

int main() {
    Solution s1;
    vector<vector<int>> matrix = {{0,1,1},{1,0,1},{1,1,0}};
    vector<int> result = s1.findDegrees(matrix);
    cout << "Degrees: ";
    for(int i=0;i<result.size();i++)
    {
        cout << result[i] << " "<< endl;;
    }
}