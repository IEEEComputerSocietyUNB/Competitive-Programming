#include<bits/stdc++.h>
using namespace std;

int main() {
	double escolha;
	cin >> escolha;
	if (escolha < 0 || escolha > 100) {
		cout << "Fora de intervalo" << endl;
	}else if (0.0000 <= escolha && escolha <= 25.0000) {
		cout << "Intervalo [0,25]" << endl;
	}else if (25.0000 < escolha && escolha <= 50.0000) {
		cout << "Intervalo (25,50]" << endl;
	}else if (50.0000 < escolha && escolha <= 75.0000) {
		cout << "Intervalo (50,75]" << endl;
	}else if (75.0000 < escolha && escolha <= 100.0000) {
		cout << "Intervalo (75,100]" << endl;
	} 
	return 0;
}
