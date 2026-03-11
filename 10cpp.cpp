#include <iostream>

using namespace std;

int main(){
	const long long MAX = 1e12;
	long long num1, num2, num3;
	do{
		cin >> num1 >> num2 >> num3;

	}while(num1 < 1 || num1 > MAX|| num2 < 1 || num2 > MAX || num3 > MAX);
	cout << num1 + num2 + num3 << endl;

	return 0;
}


