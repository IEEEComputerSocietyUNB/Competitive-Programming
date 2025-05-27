#include<bits/stdc++.h>

using namespace std;

int main() {
	int pri, seg;
	cin >> pri >> seg;
	if (pri%seg == 0) {
	     cout << "Sao Multiplos" << endl;    
	} else if (seg%pri == 0) {
	     cout << "Sao Multiplos" << endl;
	}
	else {
	     cout << "Nao sao Multiplos" << endl;
	}
	return 0;
}


