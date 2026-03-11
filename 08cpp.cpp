#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int num1, num2;
	do{
		cin >> num1 >> num2;
	}while(num1<=0 || num2 >=10);
	cout << fixed << setprecision(9) <<(double)num1/num2;


	return 0;
}

