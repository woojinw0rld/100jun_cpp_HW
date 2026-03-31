#include <iostream>

int main(){
    int size, compear;
    std::cin >> size >> compear;
    int* num = new int[size]();

    for(int i=0; i<size; i++){
        std::cin >> num[i];
        if(num[i] < compear) std::cout << num[i] << " ";
    }

    delete[] num;
    return 0;
}