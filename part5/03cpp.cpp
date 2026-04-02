#include <iostream>
using namespace std;

int main(){
    int inputSize;
    cin >> inputSize;
    string* inputStr = new string[inputSize];

    for(int i = 0; i<inputSize; i++){
        cin >> inputStr[i];
    }
    for(int i = 0; i<inputSize; i++){
        int size = inputStr[i].size();
        string buf1 = inputStr[i].substr(0,1);
        string buf2 = inputStr[i].substr(size-1);
        cout << buf1+buf2 << endl;
    }
    delete[] inputStr;
    return 0;
}