#include <iostream>
using namespace std;

int main(){
    string str;
    int num;
    cin >> str;
    cin >> num;
    str = str.substr(num-1, 1);
    cout << str; 
    return 0;
}