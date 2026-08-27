#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.length();
        vector<int>countC(27, 0);
        for (char ch: s) countC[ch - 'a']++;

        int getUpperIndex = -1;
        char getChangeCh = char();
        vector<int> countAtCheck;

        for (int i = 0; i < n; i++) {
            int t = target[i] - 'a';

            for (int j = t + 1; j < 27; j++) {
                if (countC[j] > 0) {
                    getUpperIndex = i;
                    getChangeCh = target[i];
                    countAtCheck = countC;
                    countAtCheck[j]--;
                    break;
                }
            }

            if (countC[t] > 0) {
                countC[t]--;
            } else {
                break;
            }
        }

        if (getUpperIndex = -1) return "";

        string result = target.substr(0, getUpperIndex);
        result += getChangeCh;
        for (int i = 0; i < 27; i++) {
            result += string(countAtCheck[i], (char)'a'+i);
        }
        return result;
    }
};

int main() {
    string s = "baba";
    string target = "bbaa";

    Solution sol;
    cout << sol.lexGreaterPermutation(s, target);
}