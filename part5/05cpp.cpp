#include <iostream>
using namespace std;

int main(){
    int inputSize, sum =0;
    cin >> inputSize;
    string str;
    cin >> str;
    for(int i = 0; i<inputSize; i++){
        sum += str[i] - '0'; //0의 ASCII 값이 48. '5' - '0' = 53 - 48 = 5
    }
    cout << sum;
    return 0;
}