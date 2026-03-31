#include <iostream>

using namespace std;

int main(){
	int num;
	do{
		cin >> num;
	}while(num < 1 || num > 9);
	for(int i = 1; i < 10; i++){
		cout << num << " * " << i << " = "<< num * i << endl; 
	}

	return 0;
}
