#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumLengthSubstring(string s) {
        //주어진 s에서 substring을 구함. 근데 substring안에 같은 알파벳이 2번 이하일 때 최대 길이를 구한다.
        int n = s.length();

        int start = 0;
        vector<int> count = vector<int>(26, 0);
        int findMax = 0;

        for (int end = 0; end < n; end++){
            count[s[end] - 'a']++;
            while (count[s[end]- 'a'] > 2){
                count[s[start] - 'a']--;
                start++;
            }
            findMax = max(findMax, end - start+1);
        }
        return findMax;
    }
};

int main() {
    string s = "bcbbbcba";
    Solution sol;
    int a = sol.maximumLengthSubstring(s);
    cout << a;
}