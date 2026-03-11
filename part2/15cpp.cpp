#include <iostream>

using namespace std;

int main(){
	int H, M;
	
	do{
		cin >> H >> M;
	}while(H > 23 || H < 0 || M < 0 || M >59);
	
	if(M >=45){
		M-=45;
	}else{
		if(--H < 0)
			H = 23;
		M+=15;
	}
	cout << H << " " << M << endl;
	return 0;
}
