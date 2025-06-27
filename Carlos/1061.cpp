#include <bits/stdc++.h>

using namespace std;

int main()
{
    string d1, numd1, d2, numd2;
    
    string hora1, minuto1, segundo1;
    string hora2, minuto2, segundo2;
    string pontos;
    
    cin >> d1 >> numd1;
    cin >> hora1 >> pontos >> minuto1 >> pontos >> segundo1;
    cin >> d2 >> numd2;
    cin >> hora2 >> pontos >> minuto2 >> pontos >> segundo2;
    
    
    int dia1, dia2, hora1_int, hora2_int, minuto1_int, minuto2_int = 0;
    int segundo1_int, segundo2_int = 0;
    
    dia1 = stoi(numd1);
    dia2 = stoi(numd2);
    hora1_int = stoi(hora1);
    hora2_int = stoi(hora2);
    minuto1_int = stoi(minuto1);
    minuto2_int = stoi(minuto2);
    segundo1_int = stoi(segundo1);
    segundo2_int = stoi(segundo2);
    
    dia1 = 30 - dia1;
    dia2 = 30 - dia2;
    hora1_int = 23 - hora1_int;
    hora2_int = 23 - hora2_int;
    minuto2_int = 59 - minuto2_int;
    minuto1_int = 59 - minuto1_int;
    segundo1_int = 59 - segundo1_int;
    segundo2_int = 59 - segundo2_int;
    
    int total1 = dia1*24*60*60 + hora1_int*60*60 + minuto1_int*60 + segundo1_int;
    int total2 = dia2*24*60*60 + hora2_int*60*60 + minuto2_int*60 + segundo2_int;
    
    int total = total1 - total2;
    
    int dias = total/(24*60*60);
    total -= dias*(24*60*60);
    int horas = total/(60*60);
    total -= horas*60*60;
    int minutos = total/60;
    total -= minutos*60;
    
    
    
    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << total << " segundo(s)" << endl;

    return 0;
}