#include <iostream>

using namespace std;

int main()
{
    int a,b,resultado1,resultado2 = 0;
    
    cin >> a >> b;
    
    resultado1 = b % a;
    resultado2 = a % b;
    
    if(resultado1 == 0 || resultado2 == 0){
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}