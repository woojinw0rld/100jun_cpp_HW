#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    int size = str.size();
    int sum = 0;
    for(int i = 0; i< size; i++){
        int time = str[i] - 'A';
        sum +=2;
        if(time >= 0) sum++;
        if(time >= 3) sum++;
        if(time >= 6) sum++;
        if(time >= 9) sum++;
        if(time >= 12) sum++;
        if(time >= 15) sum++;
        if(time >= 19) sum++;
        if(time >= 22) sum++;
    }
    cout << sum;
}