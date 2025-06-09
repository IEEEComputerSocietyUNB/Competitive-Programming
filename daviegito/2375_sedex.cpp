#include <bits/stdc++.h>

using namespace std;

int main() {
	int diam, alt, lar, prof;
	cin >> diam;
	cin >> alt >> lar >> prof;
	if (diam > alt || diam > lar) {
	cout << "N" << endl;
        } else if (diam > lar || diam > prof) {
	cout << "N" << endl;
	} else {
	cout << "S" << endl;
	}
	return 0;
}
