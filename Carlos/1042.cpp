#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    int v[3];
    cin >> a >> b >> c;
    if(a >= b && b >= c){
        cout << c << endl << b << endl << a << endl;
    } else if(a >= c && c >= b){
        cout << b << endl << c << endl << a << endl;
    } else if(b >= a && a >= c){
        cout << c << endl << a << endl << b << endl;
    } else if(b >= c && c >= a){
        cout << a << endl << c << endl << b << endl;
    } else if(c >= b && b >= a){
        cout << a << endl << b << endl << c << endl;
    } else if(c >= a && a >= b){
        cout << b << endl << a << endl << c << endl;
    }
    
    cout << endl << a << endl << b << endl << c << endl;
    
    
    return 0;
}