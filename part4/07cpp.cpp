#include <iostream>

using namespace std;

int main(){
    const int size = 31;
    bool student[size] = {false};
    for(int i=0; i<28; i++){
        int num;
        cin >> num;
        student[num] = true;
    }
    for(int i=1; i<size; i++){
        if(!student[i]) cout << i << endl;
    }

    

    return 0;
}