#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin >> x;
    
    for(int i = 0; i < 10; i++){
        cout << "N[" << i << "] = " << x * pow(2,i) << endl; 
    }
    

    return 0;
}