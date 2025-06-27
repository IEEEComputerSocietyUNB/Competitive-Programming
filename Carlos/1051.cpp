#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x;
    cin >> x;
    
    if(0.00 <= x && x <= 2000.00){
        cout << "Isento" << endl;
    }else if(2000.01 <= x && x <= 3000.00){
        x -= 2000.00;
        cout << "R$ " << fixed << setprecision(2) << x*(8.0/100) << endl;
    } else if(3000.01 <= x && x <= 4500.00){
        int aux, aux2;
        aux = x - 3000.00;
        cout << "R$ " << fixed << setprecision(2) << 1000*(8.0/100) + (18.0/100)*aux << endl;
    } else if(4500.00 < x){
        int aux, aux2;
        aux = x - 3000.00;
        aux2 = aux - 1500.00;
        aux = aux - aux2; 
        cout << "R$ " << fixed << setprecision(2) << 1000*(8.0/100) + (18.0/100)*aux + (28.0/100)*aux2 << endl;
    }
    
    return 0;
}