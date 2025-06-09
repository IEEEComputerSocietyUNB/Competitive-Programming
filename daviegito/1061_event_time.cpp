#include<bits/stdc++.h>

using namespace std;

int main() {
	string lixo;
	int dia1,dia2;
	int hora1,minuto1,segundo1,hora2,minuto2,segundo2;
	cin >> lixo >> dia1;
	cin >> hora1 >> lixo >> minuto1 >> lixo >> segundo1;
	cin >> lixo >> dia2;
	cin >> hora2 >> lixo >> minuto2 >> lixo >> segundo2;
	
	if (hora2<hora1) {
	cout << abs(dia2-dia1) << " dia(s)" << endl;
		if (minuto2<minuto1) {
		cout << 24-abs(hora2-hora1) << " hora(s)" << endl;
				if (segundo2<segundo1) {
				cout << 60-abs(minuto2-minuto1) << " minuto(s)" << endl;				
				cout << 60-abs(segundo2-segundo1) << " segundo(s)" << endl;
				} else {
				cout << segundo2-segundo1 << " segundo(s)" << endl;
				}
		} else {
		cout << 24-abs(hora2-hora1) << " hora(s)" << endl;
			if (segundo2<segundo1) {
			cout << 60-abs(minuto2-minuto1) << " minuto(s)" << endl;
			cout << 60-abs(segundo2-segundo1) << " segundo(s)" <<endl;
			} else {
			cout << minuto2-minuto1 << " minuto(s)" << endl;
			cout << segundo2-segundo1 << " segundo(s)" << endl;
			}
		}
	} else {
	cout << abs(dia2-dia1) << " dia(s)" << endl;
		if (minuto2<minuto1) {
		cout << 24-abs(hora2-hora1) << " hora(s)" << endl;
			if (segundo2<segundo1){
			cout << 60-abs(minuto2-minuto1) << " minuto(s)" << endl;
			cout << 60-abs(segundo2-segundo1) << " segundo(s)" << endl;
			} else {
			cout << segundo2-segundo1 << " segundo(s)" << endl;
			}
		} else {
		cout << hora2-hora1 << " hora(s)" << endl;
		cout << minuto2-minuto1 << " minuto(s)" << endl;
			if (segundo2<segundo1){
			cout << 60-abs(segundo2-segundo1) << " segundo(s)" << endl;
			} else {
			cout << segundo2-segundo1 << " segundo(s)" << endl;
			}
		}
	}
	return 0;
}
