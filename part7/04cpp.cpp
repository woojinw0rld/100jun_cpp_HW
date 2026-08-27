#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        string str = "";
        int count = 0;
        vector<string>tempS;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++){
                if (s[j] == '1') {
                    count++;
                }
                if (count == k){
                    tempS.push_back(s.substr(i, (j - i +1)));
                    cout << s.substr(i,(j - i +1)) << endl;
                    break;
                }
            }
            count = 0;
        }
        for (int i = 0; i < tempS.size(); i++){
            if (str.empty() || tempS[i].length() < str.length() || (tempS[i].length() == str.length() && tempS[i] < str)){
                str = tempS[i];
            }
        }
        

        return str;
    }
};

int main() {
    string s = "001110101101101111";
    Solution sol;
    cout << endl << sol.shortestBeautifulSubstring(s, 10);
}