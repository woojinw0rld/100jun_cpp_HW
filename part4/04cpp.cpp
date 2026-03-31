#include <iostream>

using namespace std;
int main(){
    const int size = 9;
    int numArray[size];
    int maxIndex;
    for(int i =0; i<size; i++){
        cin >> numArray[i];
        if(i == 0) maxIndex = i;
        if(numArray[i] > numArray[maxIndex]) maxIndex = i;
    }
    cout << numArray[maxIndex] << endl << maxIndex+1;


    return 0;
}