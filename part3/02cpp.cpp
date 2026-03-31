#include <iostream>

using namespace std;


int main(){
	int size, num1, num2;
	cin >> size;
	int* sum = new int[size]();
	for(int i=0; i<size; i++){
		cin >> num1 >> num2;
		sum[i] = num1 + num2;
	}
	for(int i =0; i<size; i++){
		cout << sum[i] << endl;
	}
	delete[] sum;
	return 0;		
}
