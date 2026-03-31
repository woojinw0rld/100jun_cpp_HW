#include <iostream>

int main(){
    int total, size;
    int *cost = new int[size];
    int *count = new int[size];
    int sum = 0;
    std::cin >> total;
    std::cin >>size;
    for(int i=0; i<size; i++){
        std::cin >> cost[i] >> count[i];
        sum  = sum + (cost[i] * count[i]);
    }
    if(total == sum) std::cout<< "Yes";
    else std::cout << "No";
    delete[] cost;
    delete[] count;
    return 0;
}