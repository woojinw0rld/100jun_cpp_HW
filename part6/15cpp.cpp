#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> longestRepeating(string s, string queryCharacters, vector<int>& queryIndices) {
        //원본 문자열 배열 s에 queryCharacters에 있는 qureyIndices번 째 인덱스 넘버를 넣어줌.
        //queryIndices는 s.length보다 작고 0보다 크거나 같음.
        //각 단계마다 바뀌었을 때 연속한 같은 가장 긴 길이를 측정해서 배열로 만든 후 리턴해줌.

        vector<int> result;

        for (int i = 0; i < queryIndices.size(); i++){
            s[queryIndices[i]] = queryCharacters[i];
            int findMax = 1;    
            int temp = 1;
            for (int j = 1; j < s.length(); j++){
                
                if (s[j-1] == s[j]){
                    temp++;
                }else {
                    cout << temp << endl;
                    temp = 1;
                }
                findMax = max(findMax, temp);

            }
            result.push_back(findMax);
        }
        return result;

    }
};

int main() {
    string s = "babacc";
    string q = "bcb";

    vector<int> quer = vector<int>({1,3,3});

    Solution sol;
    vector<int> a = sol.longestRepeating(s, q, quer);
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << '\t';
    }
}