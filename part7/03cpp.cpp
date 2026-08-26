#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        int OG = k;
        vector<bool> checkSum(101, false);
        for (int i = 0; i < n; i++){
            checkSum[nums[i]] = true;
        }
        for (int i = 0; i < 101; i++){
            if (!checkSum[k]){
                return k;
            }
            k = OG * (i+1);
            if (k > 100){
                return k;
            }
        }
        return OG;
    }
};


int main() {
    vector<int> nums({8,2,3,4,6});
    Solution sol;
    cout << sol.missingMultiple(nums, 2);
}