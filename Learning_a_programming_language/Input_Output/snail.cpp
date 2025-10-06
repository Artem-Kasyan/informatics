#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double lng; cin >> lng;
    double a; cin >> a;
    double b; cin >> b;
    double x = (lng - b) / (a - b);

    cout << ceil(x);

    return 0;
}