#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int total_minutes = 9 * 60 + n * 45 + (n / 2) * 5 + ((n - 1) / 2) * 15;
    
    cout << total_minutes / 60 << " " << total_minutes % 60 << endl;
    
    return 0;
}