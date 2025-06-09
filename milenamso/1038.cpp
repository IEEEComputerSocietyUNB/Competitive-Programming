#include<bits/stdc++.h>

using namespace std;
 
int main() {
    
    int x;
    float y;
    
    cin >> x >> y;
    
    if(x==1){
        cout << fixed << setprecision(2) << "Total: R$ " << y*4 << endl;
    }else if(x==2){
        cout << fixed << setprecision(2) << "Total: R$ " << y*4.50 << endl;
    }else if(x==3){
        cout << fixed << setprecision(2) << "Total: R$ " << y*5 << endl;
    }else if(x==4){
        cout << fixed << setprecision(2) << "Total: R$ " << y*2 << endl;
    }else if(x==5){
        cout << fixed << setprecision(2) << "Total: R$ " << y*1.50 << endl;
    }
    return 0;
}
