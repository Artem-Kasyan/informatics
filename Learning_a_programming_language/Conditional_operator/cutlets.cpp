#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;
    
    int time;
    if (n <= k) {
        time = 2 * m;
    } else {
        time = ((2 * n + k - 1) / k) * m;
    }
    
    cout << time << endl;
    
    return 0;
}