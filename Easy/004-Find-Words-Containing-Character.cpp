/*
LeetCode #4 - Find Words Containing Character
link:https://leetcode.com/problems/find-words-containing-character/

Input: words = ["leet","code"], x = "e"
Output: [0,1]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>index;
        for (int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==x){
                    index.push_back(i);
                    break;
                }
            }
        }
        return index;
        
    }
};

int main() {
    Solution s1;
    vector<string> words = {"leet","code"};
    char x = 'e';
    vector<int> result = s1.findWordsContaining(words, x);
    cout << "Indices: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}