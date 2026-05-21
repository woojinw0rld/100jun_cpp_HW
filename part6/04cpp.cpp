#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int outMax = 0;
        int mapString[128];
        for(int i =0; i < 128; i++){
            mapString[i] = -1;
        }
        
        for(int high = 0; high < s.size(); high++){
            char c = s[high];
            if(mapString[c] >= low){
                low = mapString[c] + 1;
            }
            mapString[c] = high;
            outMax = max(outMax, high - low + 1);
        }
        cout << low << endl;
        return outMax;
    }
};

int main(){
    string s = " ";
    Solution sol;
    cout << sol.lengthOfLongestSubstring(s);
}