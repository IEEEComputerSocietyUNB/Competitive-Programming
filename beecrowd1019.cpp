#include <iostream>

using namespace std;

int main() {
    int N;

    cin >> N;
    
    // Calculate hours, minutes, and seconds
    int hours = N / 3600; //hours
    int remaining_seconds = N % 3600; 
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;
    
    // Output the result in hours:minutes:seconds format
    cout << hours << ":" << minutes << ":" << seconds << endl;
    
    return 0;
}