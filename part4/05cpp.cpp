#include <iostream>

using namespace std;
int main(){
    int inputSize, arraySize;
    cin >> arraySize >> inputSize;
    int* arrayNum = new int[arraySize];
     
    for(int i=0; i<arraySize; i++){
        arrayNum[i] = 0;
    }

    while(inputSize-- > 0){
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        for(int i=num1; i<=num2; i++){
            arrayNum[i-1] = num3;
        }

    }
    for(int i=0; i<arraySize; i++){
        cout << arrayNum[i] << " ";
    }

    return 0;
}