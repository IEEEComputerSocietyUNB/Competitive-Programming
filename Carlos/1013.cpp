#include <iostream>
#include <iomanip>
#include <stdlib.h> 

using namespace std;

int maior(int a, int b){
    int maior = 0;
    maior = (a+b+abs(a - b))/2;
    return maior;
}

int main()
{
    int a, b, c;
    
    cin >> a >> b >> c;
    
    a = maior(a,b);
    
    c = maior(c, a);
    
    cout << c << " eh o maior" << endl;


    return 0;
}