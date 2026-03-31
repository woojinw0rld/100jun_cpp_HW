#include <iostream>


using namespace std;
int main(){
    int size;
    int max, min;
    cin >> size;
    int* num = new int[size];

    for(int i=0; i<size; i++){
        cin >> num[i];
        if(i == 0) min = max = num[i];
        if(min>num[i]) min = num[i];
        if(max<num[i]) max = num[i];
    }
    cout << min << " " << max;

    delete[] num;
}