#include <iostream>
#include<iomanip>
#include<cmath>
 
using namespace std;
 
int main() {
 
    double A, B, C, t, c, tz, q, rt;
    const double PI = 3.14159;
    
    cin >> A >> B >> C;
    
    t = (A*C)/2;
    c = PI * pow(C,2);
    tz = ((A+B)*C)/2;
    q = B*B;
    rt = A*B;
    
    cout << fixed << setprecision(3) << "TRIANGULO: " << t << endl << "CIRCULO: " << c << endl << "TRAPEZIO: " << tz << endl << "QUADRADO: " << q << endl << "RETANGULO: " << rt << endl; 
 
    return 0;
}