#include <iostream>

using namespace std;
int main(){
    bool arrayBool[42] = {false};
    int count = 0;
    for(int i=0; i<10; i++){
        int num;
        cin >> num;
        arrayBool[(num%42)] = true;
    }
    for(int i = 0; i<42; i++){
        if(arrayBool[i]) count++;
    }
    cout << count << endl;

    return 0;
}