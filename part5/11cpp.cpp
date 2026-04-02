#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "";
    int size =0;
    while(size++<101){
        getline(cin, str);
        cout << str << endl;
    }

    return 0;
}