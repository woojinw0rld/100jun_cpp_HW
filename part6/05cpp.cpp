#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size() + nums2.size();
        int left = 0, right = 0;
        
        vector<int> sortNums = vector<int>();

        for (int i = 0; i < total; i++){
            int val1 = left < nums1.size() ? nums1[left] : INT_MAX;
            int val2 = right < nums2.size() ? nums2[right] : INT_MAX;
    
           int minin = min(val1, val2);
           sortNums.push_back(minin);
    
           if (minin == val1) left++;
           else right++;
        }
        if (total % 2 != 0) {
            return (double)sortNums[total/2];
        }
        else {
            double out = sortNums[total/2] + sortNums[total/2-1];
            return out / 2;
        }
    }
};

int main(){
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2,4,6,7};

    Solution sol;
    cout << sol.findMedianSortedArrays(nums1, nums2);
}