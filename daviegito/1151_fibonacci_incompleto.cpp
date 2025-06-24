#include<bits/stdc++.h>

using namespace std;

int main() {
	int ent, i = 2,fib;
	cin >> ent;
	if (ent<3) {
		if (ent == 0) {
		cout << "" << endl;
		} else if (ent == 1) {
		cout << "0" << endl;
		} else if (ent == 2) {
		cout << "0 1" << endl;
		}
	} else {
	for(i=2;i<ent;i++){
	cout << "0 1 " << endl;	
	}
	}
	return 0;
}
