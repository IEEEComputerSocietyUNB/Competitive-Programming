#include<bits/stdc++.h>

using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double perimetro, area;
	perimetro = a + b + c; 
	area = ((a+b)*c)/2;
	if (a < b + c && b < a + c && c < a + b) {
	cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
	} else {
	cout << "Area = " << fixed << setprecision(1) << area << endl;
	}
	return 0;
}
