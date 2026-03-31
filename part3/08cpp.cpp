#include <iostream>

int main(){
    int size;
    std::cin >> size;
    int* num1 = new int[size];
    int* num2 = new int[size];

    for(int i=0; i<size; i++){
        std::cin >> num1[i] >> num2[i];
    }
    for(int i=0; i<size; i++){
        std::cout << "Case #" << i+1 << ": " << num1[i] << " + " << num2[i]  << " = " << num1[i] + num2[i] << std::endl;
    }



    delete[] num1;
    delete[] num2;
    return 0;
}