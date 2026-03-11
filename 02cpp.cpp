#include <iostream>

using namespace std;

int main(){
	int num1, num2;
	do{
		cin >> num1;
	}while(num1 <= 1);
	do{
		cin >> num2;
	}while(num2 >=10000);
	cout << num1+num2 << endl << num1 - num2 << endl << num1 * num2 << endl << num1 / num2 << endl <<num1 % num2 << endl;
	return 0;
}
