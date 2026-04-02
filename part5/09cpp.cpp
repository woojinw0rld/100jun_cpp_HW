#include <iostream>
#include <string>
using namespace std;

int main(){
    string num1, num2;
    cin >> num1 >> num2;

    for(int i = 0; i<num1.size()/2; i++){
        char ch = num1[i];
        num1[i] = num1[num1.size()-i-1];
        num1[num1.size()-i-1] = ch;
        ch = num2[i];
        num2[i] = num2[num2.size()-i-1];
        num2[num2.size()-i-1] = ch;
    }
        
    int realN1 = stoi(num1);
    int realN2 = stoi(num2);
    if(realN1<realN2) cout << realN2;
    else cout << realN1;

    return 0;
}