#include <bits/stdc++.h>

using namespace std;

int main() {
	double number, counter = 0, i = 0;
	do {
		cin >> number;
		if (number>0) {
			counter += number;
			i++;
		}
		
	} while (number>=0);
	cout << fixed << setprecision(2) << counter/i << endl;
	return 0;
}


