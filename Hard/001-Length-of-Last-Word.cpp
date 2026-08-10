/*
LeetCode #1 - Length of Last Word
link:https://leetcode.com/problems/length-of-last-word/description/

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

*/

#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        int length = 0;
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};