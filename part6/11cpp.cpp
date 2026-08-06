#include <iostream>

using namespace std;
class Solution{
public:
    int smllestNumber(int n, int t){
        int fr, sec, ther;
        int result = n;
        while (1) {
            sec = (result % 100) / 10;
            ther = result % 10;
            if (sec == 0) sec = 1;
            int num = sec * ther;
            if (num % t == 0){
                break;
            }
            result++;
        }

        return result;
    }
};
int main(){
    Solution sol;
    int num = sol.smllestNumber(5, 3);
    cout << num << endl; 
}