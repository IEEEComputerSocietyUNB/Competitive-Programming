#include<iostream>
#include<cmath>
#include<iomanip>
 
using namespace std;
 
int main() {
    
    double r;
    const double PI = 3.14159;
    
    cin >> r;
    
    r=(4/3.0) * PI * pow(r, 3);
    
    cout << fixed << setprecision(3) << "VOLUME = " << r << endl; 
 
    return 0;
}