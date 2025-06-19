#include<bits/stdc++.h>

using namespace std;

int main() {
	int i=0, num, prev = 0, first, last, gauss;
	cin >> first >> last;
	if (last < first) {
		num = last;
		last = first;
		first = num;
	}
	for(i=first;i<=last;i++) {
		if(i%13!=0){
			prev += i;
		}
	}
	cout << prev << endl; 
	return 0;
}
