#include <iostream>
using namespace std;

int main(){
    int inputSize, repeatCount;
    string ogStr = "";
    cin >> inputSize;
    string* outStr = new string[inputSize]{""};
    int ogSize = inputSize;

    for(int i = 0; i<inputSize; i++){
        cin >> repeatCount;
        cin >> ogStr;
        for(int j = 0; j<ogStr.size(); j++){
            for(int k = 0; k<repeatCount; k++){
                outStr[i]+=ogStr[j];
            }
        }
    }
   
    for(int i =0; i<ogSize; i++){ 
        cout << outStr[i] << endl;
    }
    delete[] outStr;
    return 0;
}