#include<bits/stdc++.h>

using namespace std;

int main() {
	double val,cen,cqt,vin,dez,cco,doi,cents,cenc,cqtc,vinc,dezc,ccc,umc;
	cin >> val;
	val = val * 100;
	cen = floor(val/10000);
	cqt = floor((val-(cen*10000))/5000);
	vin = floor((val-(cen*10000)-(cqt*5000))/2000);
	dez = floor((val-(cen*10000)-(cqt*5000)-(vin*2000))/1000);
	cco = floor((val-(cen*10000)-(cqt*5000)-(vin*2000)-(dez*1000))/500);
	doi = floor((val-(cen*10000)-(cqt*5000)-(vin*2000)-(dez*1000)-(cco*500))/200);
	cents = val-(cen*10000)-(cqt*5000)-(vin*2000)-(dez*1000)-(cco*500)-(doi*200);
	cenc = floor(cents/100);
	cqtc = floor((cents-(cenc*100))/50);
	vinc = floor((cents-(cenc*100)-(cqtc*50))/25);
	dezc = floor((cents-(cenc*100)-(cqtc*50)-(vinc*25))/10);
	ccc = floor((cents-(cenc*100)-(cqtc*50)-(vinc*25)-(dezc*10))/5);
	umc = floor((cents-(cenc*100)-(cqtc*50)-(vinc*25)-(dezc*10)-(ccc*5))/1);
	cout << "NOTAS:" << endl;
	cout << fixed << setprecision(0) << cen << " nota(s) de R$ 100.00" << endl;
	cout << fixed << setprecision(0) << cqt << " nota(s) de R$ 50.00" << endl;
	cout << fixed << setprecision(0) << vin << " nota(s) de R$ 20.00" << endl;
	cout << fixed << setprecision(0) << dez << " nota(s) de R$ 10.00" << endl;
	cout << fixed << setprecision(0) << cco << " nota(s) de R$ 5.00" << endl;
	cout << fixed << setprecision(0) << doi << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;
	cout << fixed << setprecision(0) << cenc << " moeda(s) de R$ 1.00" << endl;
	cout << fixed << setprecision(0) << cqtc << " moeda(s) de R$ 0.50" << endl;
	cout << fixed << setprecision(0) << vinc << " moeda(s) de R$ 0.25" << endl;
	cout << fixed << setprecision(0) << dezc << " moeda(s) de R$ 0.10" << endl;
	cout << fixed << setprecision(0) << ccc << " moeda(s) de R$ 0.05" << endl;
	cout << fixed << setprecision(0) << umc << " moeda(s) de R$ 0.01" << endl;
	return 0;
}
