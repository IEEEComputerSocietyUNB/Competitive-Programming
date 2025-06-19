#include<bits/stdc++.h>

using namespace std;

int main() {
	int tests, num, i=0, dentro=0;
	cin >> num;
	do {
	cin >> tests;
	if (tests >= 10 && tests <= 20) {
		dentro += 1;
	} 
	i += 1;
	} while (i < num);
	cout << dentro << " in" << endl;
	cout << num-dentro << " out" << endl;
	return 0;
}
