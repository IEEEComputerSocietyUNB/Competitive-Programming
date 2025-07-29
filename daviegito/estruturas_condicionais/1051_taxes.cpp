#include<bits/stdc++.h>

using namespace std;

int main() {
	double salario;
	cin >> salario;
	if (salario >= 0 && salario <= 2000) {
	cout << "Isento" << endl;
	} else if (salario > 2000 && salario <= 3000) {
	cout << fixed << setprecision(2) << "R$ " << (salario - 2000) * 0.08 << endl;
	} else if (salario > 3000 && salario <= 4500) {
	cout << fixed << setprecision(2) << "R$ " << 80 + (salario - 3000) * 0.18 << endl;
	} else if (salario > 4500) {
	cout << fixed << setprecision(2) << "R$ " << 80 + 270 + (salario - 4500) * 0.28 << endl;
	}
	return 0;
}
