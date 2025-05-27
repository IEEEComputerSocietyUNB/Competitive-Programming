#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int time, speed;
    
    cin >> time >> speed;
    
    int distance = time * speed;
    
    double fuel_needed = static_cast<double>(distance) / 12.0;
    
    cout << fixed << setprecision(3) << fuel_needed << endl;
    
    return 0;
}
