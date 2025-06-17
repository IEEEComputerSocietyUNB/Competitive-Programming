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
	
	//Transformar tudo em segundos
	int total_1 = (30-dia1)*24*60*60 + (23-hora1)*24*60*60 + (59-minuto1)*60*60 + segundo1; 
	int total_2 = (30-dia2)*24*60*60 + (23-hora2)*24*60*60 + (59-minuto2)*60*60 + segundo2;
	int total = total_1 - total_2;

	cout << total/(24*60*60) << " dia(s)" << endl;//Divisão de segundo pra dia
	total -= dias*(24*60*60) //Colocando só o que sobrou agora
	cout << total/(60*60) << " hora(s)" << endl;//Divisão de segundo pra hora
	total -= horas*60*60;
	cout <<  << " minuto(s)" << endl;//Divisão de segundo pra minuto
	total -= minutos*60;
	cout <<  << " segundo(s)" << endl;//Resto dos segundos
	return 0;
}
