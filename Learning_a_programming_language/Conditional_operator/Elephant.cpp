#include <iostream>
using namespace std;

int main() {
    int a; cin >> a;
    int b; cin >> b;
    int c; cin >> c;
    int f; cin >> f;

    if (a - b == c - f || a + b == c + f){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}