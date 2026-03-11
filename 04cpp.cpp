#include <iostream>

using namespace std;

int main(){
	int buddhist, western;
	do{
		cin >> buddhist;
	}while(buddhist <= 1000 || buddhist >= 3000);
	western = buddhist - 543;
	cout << western;

	return 0;
}
