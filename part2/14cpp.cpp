#include <iostream>

using namespace std;

int main(){
	int x, y;
	do{
		cin >> x >> y;
	}while(x < -1000 || x > 1000 || y < -1000 || y > 1000 || x == 0 || y ==0);
	if(x > 0){
		if(y > 0) cout << "1" <<endl;
		else cout << "4" << endl;
	}else{
		if(y>0) cout << "2" << endl;
		else cout << "3" << endl;
	}
	return 0;
}

