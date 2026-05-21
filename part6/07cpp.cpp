#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {    
        int start = 0, maxLen = 1;

        for (int i = 0; i < s.size(); i++){
            int left = i - 1, right = i + 1;
            while((left >= 0 && right < s.size()) && s[left] == s[right]){
                int curLen = right - left + 1;
                if(maxLen < curLen){
                    start = left;
                    maxLen = curLen;
                }
                left--;
                right++;
            }
            left = i;
            right = i+1;
            while(left >= 0 && right < s.size() && s[left] == s[right]){
                int curLen = right - left + 1;
                if(maxLen < curLen){
                    start = left;
                    maxLen = curLen;
                }
                left--;
                right++;
            }
        }  
        cout << start << "  "       << maxLen;
        return s.substr(start, maxLen);
    }
};
int main(){
    string s = "aacabdkacaa";
    Solution sol;
    cout << sol.longestPalindrome(s);
}