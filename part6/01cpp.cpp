#include <iostream>
#include <vector>

class Solution{
public:

    int getCommon(std::vector<int>& num1, std::vector<int>& num2){
        for(int i =0; i < num1.size(); i++){
            int low = 0, high = num2.size()-1;
            int tartget = num1[i];
            while(low <= high){
                int mid = (low+high)/2;
                if(tartget == num2[mid]){
                    return tartget;
                }
                else if(tartget > num2[mid]){
                    low = mid + 1;
                }
                else if (tartget < num2[mid]){
                    high = mid -1;
                }
            }
        }
        return -1;
    }

    int secGetCommon(std::vector<int>& num1, std::vector<int>& num2){
        int i=0, j=0;
        while(i <= num1.size() && j < num2.size()){
            if(num1[i]==num2[j]){
                return num1[i];
            }
            else if (num1[i]< num2[j]){
                i++;
            }
            else if (num1[i] > num2[j]){
                j++;
            }
        }
        return -1;
    }
};

int main(){
    Solution sol;
    std::vector<int> num1 = {1,2,3,4,5,6,7,8};
    std::vector<int> num2 = {2,4};
    std::cout << sol.secGetCommon(num1,num2);
    
}
