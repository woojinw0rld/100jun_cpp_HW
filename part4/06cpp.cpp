#include <iostream>

using namespace std;

int main(){
    int arraySize, swapCount;
    cin >> arraySize >> swapCount;
    int* arrayNum = new int[arraySize];
    for(int i =0; i<arraySize; i++){
        arrayNum[i] = i+ 1;
    }
    while(swapCount-- > 0){
        int num1, num2;
        cin >> num1 >> num2;
        swap(arrayNum[num1-1], arrayNum[num2-1]);
    }
    for(int i =0; i<arraySize; i++){
        cout << arrayNum[i] << " ";
    }
    delete[] arrayNum;
    return 0;
}