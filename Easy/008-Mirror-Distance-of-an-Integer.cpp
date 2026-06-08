/*
LeetCode #8 - Mirror Distance of an Integer
link:https://leetcode.com/problems/mirror-distance-of-an-integer/

Input: n = 25
Output: 27
*/

#include <iostream>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
        string b=to_string(n);
        string mirror="";
        for(int i=b.size()-1;i>=0;i--){
            mirror+=b[i];
        }
        return(abs(stoi(mirror)-n));
        
    }
};

int main() {
    Solution s1;
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int result = s1.mirrorDistance(n);
    cout << "Mirror distance: " << result << endl;
    return 0;
}