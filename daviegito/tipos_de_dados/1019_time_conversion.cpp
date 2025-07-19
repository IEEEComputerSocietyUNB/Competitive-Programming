#include<bits/stdc++.h>
using namespace std;

int main() {
    long int seconds;
    cin >> seconds;
    if (seconds > 3600) {
        cout << seconds/3600 << ":";
        cout << (seconds/60)%60 << ":";
        cout << seconds%60 << endl;
    } else {
        if (seconds > 60) {
            cout << "0:";
            cout << seconds/60 << ":";
            cout << seconds%60 << endl;
        } else {
            cout << "0:0:" << seconds << endl;
        }
    }
    return 0;
}

//Esse exercício requer pensamento em relação à módulo, inteiros de divisão e conversão de unidades
