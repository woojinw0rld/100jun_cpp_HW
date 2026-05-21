#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;


class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int count = 0;
        unordered_set<string> strSet;
        for(int x : arr1){
            string s = to_string(x);
            for(int len = 1; len <= s.size(); len++){
                strSet.insert(s.substr(0, len));
            }
        }
        for(int x : arr2){
            string s = to_string(x);
            for (int len = 1; len <= s.size(); len++){
                if(strSet.count(s.substr(0, len)) == 1){
                    count = max(count, len);
                }
            }
        }

        return count;
    }

    /* 실패함. 런타임 넘어감.
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        if(arr1.size() <= 0 || arr2.size() <= 0){
            return 0;
        }
        int count = 0;
        vector<string> strArr1 = vector<string>(arr1.size());
        vector<string> strArr2 = vector<string>(arr2.size());
        string s1 = " ";
        string s2 = " ";
        for (int i = 0; i < strArr1.size(); i++){
            strArr1[i] = to_string(arr1[i]);
        }
        for (int i = 0; i < strArr2.size(); i++){
            strArr2[i] = to_string(arr2[i]);
        }

        for (int i = 0; i < strArr1.size(); i++){
            for(int j = 0; j < strArr2.size(); j++){
                string s1 = strArr1[i];
                string s2 = strArr2[j];
                int len = 0;
                for (int k = 0; k < min(s1.size(), s2.size()); k++){
                    if(s1[k] == s2[k]) len++;
                    else break;
                }
                count = max(count, len);
            }
        }
        return count;
    }
    */
};

int main(){
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {10,20,30};
    Solution sol;
    cout << sol.longestCommonPrefix(arr1, arr2);

}