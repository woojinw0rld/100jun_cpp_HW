#include <iostream>

int main(){
    int size;
    std::cin >> size;
    for(int i = 1; i<= size; i++){
        for(int j = 0; j<i; j++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}