#include <bits/stdc++.h>

using namespace std;

int main()
{
    double N;
    int n;
    
    cin >> N;
    
    n = int(N*100);
    
    cout << "NOTAS:" << endl;
    cout << n/10000 << " nota(s) de R$ 100.00" << endl;
    n = n%10000;
    cout << n/5000  << " nota(s) de R$ 50.00"  << endl;
    n = n%5000;
    cout << n/2000  << " nota(s) de R$ 20.00"  << endl;
    n = n%2000;
    cout << n/1000  << " nota(s) de R$ 10.00"  << endl;
    n = n%1000;
    cout << n/500   << " nota(s) de R$ 5.00"  << endl;
    n = n%500;
    cout << n/200   << " nota(s) de R$ 2.00"   << endl;
    n = n%200;
    cout << "MOEDAS:" << endl;
    cout << n/100   << " moeda(s) de R$ 1.00"  << endl;
    n = n%100;
    cout << n/50    << " moeda(s) de R$ 0.50"  << endl;
    n = n%50;
    cout << n/25    << " moeda(s) de R$ 0.25"  << endl;
    n = n%25;
    cout << n/10    << " moeda(s) de R$ 0.10"  << endl;
    n = n%10;
    cout << n/5     << " moeda(s) de R$ 0.05"  << endl;
    n = n%5;
    cout << n       << " moeda(s) de R$ 0.01"  << endl;
    
    return 0;
}