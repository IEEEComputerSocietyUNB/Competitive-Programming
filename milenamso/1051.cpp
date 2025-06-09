#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double x;
    
    cin >> x;
    
    if(x <= 2000.00){
           cout << "Isento\n";
    }else if (x >= 2000.01 && x <= 3000.00){
          printf("R$ %.2f\n", (x - 2000.00)*0.08);
    }else if (x >= 3000.01 && x <= 4500.00){
          printf("R$ %.2f\n", ((x - 3000.00)*0.18 + 1000.00*0.08));
    }else if (x >= 4500.01){
          printf("R$ %.2f\n", ((x - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
    }
    return 0;
}
     
