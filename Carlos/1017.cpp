#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double gasto = 12.0;
    int t, v;
    
    cin >> t >> v;
    
    cout << fixed << setprecision(3) << (v*t)/gasto << endl;


    return 0;
}