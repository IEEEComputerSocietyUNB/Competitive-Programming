#include <iostream>
#include<bits/stdc++.h>
      using namespace std;
      
      int main() 
      {
        double hour, speed, liters;
        cin >> hour >> speed;
        cout << fixed << setprecision(3) << (hour*speed)/12 << endl;
        return 0;
       }

//O segredo é usar double porque floats ficam "pequenos" rápido
