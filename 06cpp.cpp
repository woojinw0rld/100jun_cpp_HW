#include <iostream>

using namespace std;

int main(){
	int num1, num2;
	do{
		cin >> num1 >> num2;
	}while(num1 <= 0 || num2 >= 10);

	cout << num1 - num2;


	return 0;
}
