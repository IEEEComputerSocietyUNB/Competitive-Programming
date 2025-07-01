#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int N, i = 0;
   
   cin >> N;
   
   i = 1;
    
   while(i <= 10){
       cout << i << " x " << N << " = " << i*N << endl;
       i++;
   }

    return 0;
}