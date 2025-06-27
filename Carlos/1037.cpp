#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Recomendado usar double por conta da precisão maior em relação ao float.
    double x;
    
    cin >> x;
    
    // Intervalos escolhidos por estrutura condicional

    if(0.0000 <= x && x <= 25.0000){             // 0.0 <= x <= 25.0000        --> [0,25]
        cout << "Intervalo [0,25]" << endl;
    } else if(25.00000 < x && x <= 50.0000000){  // 25.0000 < x <= 50.0000000  --> (25,50]
        cout << "Intervalo (25,50]" << endl;
    } else if(50.00000 < x && x <= 75.00000){    // 50.0000000 < x <= 75.00000 --> (50.0, 75.0]
        cout << "Intervalo (50,75]" << endl;
    } else if(75.00000 < x && x <= 100.00000) {  // 75.00000 < x <= 100.00000  --> (75.00000, 100.00000]
        cout << "Intervalo (75,100]" << endl;
    } else {
        cout << "Fora de intervalo" << endl;     /// x < 0.0000 ou 100.00000 < x --> (-infinito,0) U (100.00000, infinito)
    }
    
    return 0;
}