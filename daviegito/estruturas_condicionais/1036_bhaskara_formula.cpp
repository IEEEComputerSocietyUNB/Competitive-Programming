#include <bits/stdc++.h>
using namespace std;

int main() {
	double a,b,c;
	cin >> a >> b >> c;
	double delta = (b * b) - (4*a*c);
	double raiz = sqrt(delta);
	float r1, r2;
	r1 = ((-1*b) + raiz) / (2 * a);
	r2 = ((-1*b) - raiz) / (2 * a);

	if (delta < 0 || a == 0) {
		cout << "Impossivel calcular" << endl;
	} else {
		cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
		cout << "R2 = " << fixed << setprecision(5) << r2 << endl;		
	}
}
