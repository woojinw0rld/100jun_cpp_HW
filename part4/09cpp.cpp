#include <iostream>

using namespace std;

int main(){
    int arraySize, swapSize;
    cin >> arraySize >> swapSize;
    int* arrayNum = new int[arraySize];
    for(int i =0; i<arraySize; i++){
        arrayNum[i] = i+1;
    }
    while(swapSize-- > 0){
        int num1, num2;
        cin >> num1 >> num2;
        int left = num1 -1, right = num2 -1;
        while(left < right){
            int tmep = arrayNum[left];
            arrayNum[left] = arrayNum[right];
            arrayNum[right] = tmep;
            left++;
            right--;
        }
    }
    

    for(int i =0; i<arraySize; i++){
        cout << arrayNum[i] << " ";
    }

    delete[] arrayNum;
    return 0;
}