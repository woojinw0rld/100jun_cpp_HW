#include <iostream>
using namespace std;

int main(){
    int arraySize, max;
    double sum = 0.f;
    cin >> arraySize;
    int* arrayNum = new int[arraySize];
    for(int i =0; i<arraySize; i++){
        int num;
        cin >> num;
        if(i == 0) max = num;
        if(max < num) max = num;
        arrayNum[i] = num;
    }
    for(int i =0; i<arraySize; i++){
        sum += (double)arrayNum[i]/max*100;
    }
    cout << sum / arraySize;
    delete[] arrayNum;
    return 0;
}