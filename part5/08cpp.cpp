#include <iostream>
#include <string>
using namespace std;

int main(){
    string inputString;
    int count = 0;
    getline(cin, inputString);
    if(inputString.empty()){
        cout << 0;
        return 0;
    }
    if(inputString[0] == ' ') count--;
    for(int i =0; i<inputString.size()-1; i++){
        if(inputString[i] == ' ') count++;
    }
    cout << count+1;
    return 0;
}