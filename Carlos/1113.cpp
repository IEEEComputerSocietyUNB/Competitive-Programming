#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    
    while(1){
        cin >> x >> y;
        if(x > y){
            cout << "Decrescente" << endl;
        } else if(x < y){
            cout << "Crescente" << endl;
        } else {
            break;
        }
    }

    return 0;
}