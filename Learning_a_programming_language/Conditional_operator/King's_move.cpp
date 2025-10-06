#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int a; cin >> a;
    int b; cin >> b;
    int c; cin >> c;
    int f; cin >> f;

    if (abs(a - c) == 1 && b == f ||
        abs(b - f) == 1 && a == c ||
        abs(a - c) == 1 && abs(b - f) == 1){
        cout << "YES";
    }else{
        cout << "NO";
    }
}