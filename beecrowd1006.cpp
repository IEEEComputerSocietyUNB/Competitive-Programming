#include<iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
    double A, B, C, weightA=2, weightB=3, weightC=5, average;
    
    cin >> A >> B >> C;
    
    average = (A*weightA + B*weightB + C*weightC)/(weightA + weightB + weightC);
    
    cout << fixed << setprecision(1) << "MEDIA = " << average << endl;
 
    return 0;
}