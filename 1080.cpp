#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n[100];
   int maior, posicao = 0;
   
   for(int i = 0; i < 100; i++){
       cin >> n[i];
       if(i == 0){
           maior = n[i];
           posicao = i;
           continue;
       }
       if(n[i] > maior){
           maior = n[i];
           posicao = i;
       }
   }
   
   cout << maior << endl << (posicao + 1) << endl;
   

    return 0;
}