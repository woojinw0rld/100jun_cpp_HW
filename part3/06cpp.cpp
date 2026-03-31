#include <iostream>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int size, num1, num2;
    std::cin >> size;
    std::vector<int> sum(size);
    for(int i=0; i<size; i++){
        std::cin >> num1 >> num2;
        sum[i] = num1 + num2;
    }
    for(int n : sum){
        std::cout << n << "\n";
    }

}