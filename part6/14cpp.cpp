#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefixSize = 0;
        int sum = nums[0];
        vector<bool> check = vector<bool>(1276, false);
        check[nums[0]] = true;
        
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] - nums[i-1] == 1){
                sum += nums[i];
                check[nums[i]] = true;
            }else{
                while(i < nums.size()){
                    check[nums[i]] = true;
                    i++;
                }
            }
        }

        for (int i = sum; i < 1277; i++){
            if (!check[i]){
                sum = i;
                break;
            }
        }
        return sum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = vector<int>({1,2,3,2,5});
    cout << sol.missingInteger(nums);
}