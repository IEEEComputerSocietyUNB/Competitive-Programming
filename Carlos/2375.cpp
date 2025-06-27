#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, a, l, p;
    
    cin >> N;
    cin >> a >> l >> p;
    
    if(N <= a && N <= l && N <= p){
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    
    return 0;
}