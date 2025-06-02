#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x;
    
    cin >> x;
    
    if(0.0000 <= x && x <= 25.0000){
        cout << "Intervalo [0,25]" << endl;
    } else if(25.00000 < x && x <= 50.0000000){
        cout << "Intervalo (25,50]" << endl;
    } else if(50.00000 < x && x <= 75.00000){
        cout << "Intervalo (50,75]" << endl;
    } else if(75.00000 < x && x <= 100.00000) {
        cout << "Intervalo (75,100]" << endl;
    } else {
        cout << "Fora de intervalo" << endl;
    }
    
    return 0;
}