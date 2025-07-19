#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    cout << "TRIANGULO: " << fixed << setprecision(3) << (a*c)/2 << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << 3.14159 * c * c << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << (a+b)*c/2 << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << b*b << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << a*b << endl;
    return 0;
}

//A parte mais difícil de tudo aqui foi lembrar as fórmulas de cada um, mas uma vez que isso é conseguido, o exercício fica tranquilo!
