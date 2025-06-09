#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int menor, med, maior;

    if (x <= y && x <= z) {
        menor = x;
        if (y <= z) {
            med = y;
            maior = z;
        } else {
            med = z;
            maior = y;
        }
    } else if (y <= x && y <= z) {
        menor = y;
        if (x <= z) {
            med = x;
            maior = z;
        } else {
            med = z;
            maior = x;
        }
    } else {
        menor = z;
        if (x <= y) {
            med = x;
            maior = y;
        } else {
            med = y;
            maior = x;
        }
    }

    cout << menor << endl;
    cout << med << endl;
    cout << maior << endl;

    cout << endl;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}
