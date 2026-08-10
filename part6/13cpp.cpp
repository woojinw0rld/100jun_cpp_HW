#include <iostream>
#include <vector>
#include <cstdint>
#include <string>


using namespace std;

class Solution {
public:
    int reverse(int x) {
        bool check = (x < 0);
        long long returnNum = 1;
        string str = to_string(x);
        vector<char> ch;
        if (check){
            ch = vector<char>(str.begin()+1, str.end());
            returnNum *= -1;
        }
        else {
            ch = vector<char>(str.begin(), str.end());
        }
        int start = 0, end = ch.size()-1;
        while (start <= end){
            char s = ch[start];
            ch[start] = ch[end];
            ch[end] = s;
            start++;
            end--;
        }
        str = "";
        for (int i = 0; i < ch.size(); i++){
            str += ch[i];
        }
        returnNum *= stoll(str);
        if (returnNum > INT32_MAX || returnNum <  INT32_MIN){
            return 0;
        }

        return returnNum;
        
    }
};

int main() {
    Solution sol;
    cout << sol.reverse(-123);

    
}