#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int j = 0;
    for(int i = 0; i < 1000; i++){
        if(j >= x){
            j = 0;
        }
        cout << "N[" << i << "] = " << j << endl;
        j++;
    }
    

    return 0;
}