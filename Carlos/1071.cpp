#include <iostream>

using namespace std;

int main()
{
    int X, Y, aux = 0;
    
    cin >> X >> Y;
    
    if(X > Y){
        aux = X;
        X = Y;
        Y = aux;
    } else if (X == Y){
        cout << 0 << endl;
        return 0;
    }
    
    aux = 0;
    X++;
    while(X < Y){
        if(X%2 == 1 || X%2 == -1){
            aux += X;
        }
        X++;
    }
    
    cout << aux << endl;

    return 0;
}