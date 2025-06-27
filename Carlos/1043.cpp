#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c;
    
    cin >> a >> b >> c;
    
    if(a+b > c && a+c > b && b+a > c && b+c > a){
        cout << fixed << setprecision(1) << "Perimetro = " << a+b+c << endl;
    } else {
        cout << fixed << setprecision(1) << "Area = " << c * (a+b)/2 << endl;
    }
    
    return 0;
}