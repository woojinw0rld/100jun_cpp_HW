#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        const int size = A.size();
        vector<int> sameNum = vector<int>(size);
        int seenA[51] = {0};
        int seenB[51] = {0};
        int count = 0;
        
        for(int i = 0; i < size; i++){
            seenA[A[i]] = 1;
            if(seenB[A[i]] == 1) count++;
            seenB[B[i]] = 1;
            if (seenA[B[i]] == 1) count++;
            sameNum[i] = count;
        } 
        return sameNum;
    }
};


int main(){
    vector<int> nums1 = {5,15,7,8,20,1,3,16,13,17,6,21,9,2,19,18,4,10,11,12,14};
    vector<int> nums2 = {15,10,1,17,6,18,11,20,4,19,14,2,9,21,12,7,3,5,8,16,13};
    Solution sol;
    vector<int> resulte = sol.findThePrefixCommonArray(nums1, nums2);
    for(int i = 0; i < resulte.size(); i++){
        cout << resulte[i] << "    ";
    }

}