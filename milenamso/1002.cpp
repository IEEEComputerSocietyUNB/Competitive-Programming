#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
    const double PI = 3.14159;
    double R;

    cin >> R;

    double A = PI * pow(R, 2);

    cout << fixed << setprecision(4) << "A=" << A << endl;

    return 0;
}