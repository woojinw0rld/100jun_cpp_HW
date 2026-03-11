#include <iostream>

using namespace std;

int main(){
	int H, M, WorkM;
	do{
		cin >> H >> M;
	}while(H<0 || H >23 || M <0 || M >59);
	do{
		cin >> WorkM;
	}while(WorkM<0||WorkM>1000);
	int total = H*60+M+WorkM;
	total %=24*60;
	cout << total / 60 << " " << total % 60 << endl;
	return 0;
}

