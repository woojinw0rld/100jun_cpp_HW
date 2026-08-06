    #include <iostream>
    #include <vector>

    using namespace std;

    class Solution {
    public:
        int search(vector<int>& nums, int target) {
            if(nums.size() <= 1){
                if(nums[0] == target){
                    return 0;
                }
                else {
                    return -1;
                }
            }
            if(nums.size() <= 2){
                if(nums[0] == target){
                    return 0;
                }else if(nums[1] == target){
                    return 1;
                }
                else {
                    return -1;
                }
            }

            int low = 0, high = nums.size()-1;
            int outPut = -1;
            while(low < high){
                int mid = (low+high) / 2;
                if(nums[mid] > nums[high]){
                    low++;
                }else if (nums[mid] < nums[high]){
                    high--;
                }
            }
            int mid = low;

            low = 0, high = nums.size()-1;
            cout << mid;
            if(mid == 0){
                mid = high;
            }
            if (target >= nums[low] && target <= nums[mid -1]){
                for (int i = low; i < mid; i++){
                    if (target == nums[i]){
                        outPut = i;
                        break;
                    }
                }
            }else if(target >= nums[mid] && target <= nums[high]){
                for (int i = mid; i <= high; i++){
                    if (target == nums[i]){
                        outPut = i;
                        break;
                    }
                }
            }

            return outPut;
        }
    };

    int main(){
        vector<int> nums = {4,5,6,7,0,1,2};
        Solution sol;
        cout << sol.search(nums, 4);
    }