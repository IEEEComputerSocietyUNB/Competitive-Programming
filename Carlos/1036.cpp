#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, delta;
    
    cin >> a >> b >> c;
    
    delta = b*b - 4*a*c;
    
    if(a == 0 || delta < 0){
        cout << "Impossivel calcular" << endl;
    } else{
        cout << fixed << setprecision(5) << "R1 = " << (-b+(pow(delta, 0.5)))/(2*a) << endl << "R2 = " << (-b-(pow(delta, 0.5)))/(2*a) << endl;
    }
    
    
    return 0;
}