#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    
    if (k == 1 || (k % 4 == 0 && k >= 4)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}