#include <iostream>
#include <vector>
int main(){
    int size;
    std::cin >> size;
    std::vector<int> sum(size);
    for(int i=0; i<size; i++){
        int num1, num2;
        std::cin >>num1 >>num2;
        sum[i] = num1 +num2;
    }
    for(int i=0; i<size; i++){
        std::cout << "Case #" <<i+1<<": " << sum[i] <<std::endl;
    }


    return 0;
}