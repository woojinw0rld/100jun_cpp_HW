#include <iostream>
int main(){
    int size;
    std::string str ="";
    std::cin >> size;
    size /= 4;

    for(int i=0; i<size; i++){
        str.append("long ");
    }
    str.append("int");
    std::cout << str;

    return 0;
}