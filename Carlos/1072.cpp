#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, cont_in = 0, cont_out = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++){
       cin >> x;
       if(10 <= x && x <= 20){
           cont_in++;
       } else {
           cont_out++;
       }
    }
    
    cout << cont_in << " in" << endl << cont_out << " out" << endl;

    return 0;
}