#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, q;
    
    cin >> c >> q;
    
    switch(c){
        case 1:
            cout << "Total: R$ " << fixed << setprecision(2) << q * 4.0 << endl;
            break;
        case 2:
            cout << "Total: R$ " << fixed << setprecision(2) << q * 4.5 << endl;
            break;
        case 3:
            cout << "Total: R$ " << fixed << setprecision(2) << q * 5.0 << endl;
            break;
        case 4:
            cout << "Total: R$ " << fixed << setprecision(2) << q * 2.0 << endl;
            break;
        case 5:
            cout << "Total: R$ " << fixed << setprecision(2) << q * 1.5 << endl;
            break;
    }

    return 0;
}