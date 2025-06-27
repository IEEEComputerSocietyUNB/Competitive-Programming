#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double A, B = 0;
   
   cin >> A >> B;
   
   cout << "MEDIA = " << fixed << setprecision(5) << (A*3.5+B*7.5)/11 << endl;

    return 0;
}