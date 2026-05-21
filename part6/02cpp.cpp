#include <iostream>
#include <vector>

using namespace std;

/*
순차적으로 인덱스를 target에서 빼서 target-를 찾는 전략....?
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main(){
    vector<int> nums = {2,7,11,15};
    Solution sol;
    vector<int> result = sol.twoSum(nums, 9);
    cout << result[0] << " " << result[1];
}