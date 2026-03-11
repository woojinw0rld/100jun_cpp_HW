#include <iostream>

using namespace std;

int main(){
	int A, B, C;

	do{
		cin >> A >> B >> C;
	}while(A < 2 || B < 2 || B > 10000 || C > 10000);
	
	cout << (A+B)%C << endl << ((A%C) + (B%C))%C << endl << (A*B)%C << endl <<((A%C) * (B%C))%C << endl;
	
	return 0;
}

