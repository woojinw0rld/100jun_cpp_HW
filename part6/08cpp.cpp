#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;

        int strLen = s.size();
        string temp = "";
        vector<string> outStr = vector<string>(numRows);
        int checkRows = 0;
        bool check = false;
        for (int i = 0; i < outStr.size(); i++){
            outStr[i] = "";
        }

        for (int i =0; i < strLen; i++){
            outStr[checkRows] += s[i];
            

            if(checkRows >= numRows-1) check = false;
            else if (checkRows <= 0) check = true;

            if(check){
                checkRows++;
            }else checkRows--;
        }
        for (int i = 0; i < outStr.size(); i++){
            temp += outStr[i];
        }
        return temp;
    }
};

int main(){                                                      
    string s = "AB";
    int numRows = 1;

    Solution sol;
    cout << sol.convert(s, numRows);
}