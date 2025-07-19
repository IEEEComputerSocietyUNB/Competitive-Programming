#include<bits/stdc++.h>

using namespace std;

int main() {
	int tests,cita,citb,anos,i=0;
	double inca,incb;
	cin >> tests;
	#registra todos os números apresentados
	do {
	cin >> cita >> citb >> inca >> incb;
	
	if (anos < 100) {
	cout << anos << " anos." << endl;
	} else if (anos == 100) {
	cout << "100 anos." << endl;
	} else {
	cout << "Mais de 1 seculo." << endl;
	}
	i++;
	}while (tests>i);
	return 0;
}
