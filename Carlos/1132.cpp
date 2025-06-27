#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, aux = 0;
    cin >> a >> b;
    (a > b) ? swap(a, b) : void();
    
    for(int i = a; i <=b; i++){
        if(i%13 != 0){
            aux += i;   
        }
    }
    
    cout << aux << endl;
    
    return 0;
}