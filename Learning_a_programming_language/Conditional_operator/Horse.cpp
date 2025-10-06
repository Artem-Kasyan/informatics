#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a; cin >> a;
    int b; cin >> b;
    int c; cin >> c;
    int f; cin >> f;

    if ( (abs(a - c) == 2 && abs(b - f) == 1) || (abs(a - c) == 1 && abs(b - f) == 2) ) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}