#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a; cin >> a;
    int b; cin >> b;
    int c; cin >> c;

    if (a * b > c && c % a == 0 ||
        a * b > c && c % b == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}