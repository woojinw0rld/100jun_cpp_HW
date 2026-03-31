#include <iostream>

int main(){
    int size, count =0, findNum;
    std::cin >> size;
    int* num = new int[size]();
    for(int i =0; i<size; i++){
        std::cin >> num[i];
    }
    std::cin >>findNum;
    for(int i =0; i<size; i++){
        if(num[i]==findNum) count++;
    }
    std::cout << count;
    delete[] num;
    return 0;
}