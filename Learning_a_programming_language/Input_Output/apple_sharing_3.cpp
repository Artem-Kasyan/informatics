#include <iostream>
using namespace std;

int main() {
    int m, n; cin >> n >> m;

    int result = m % n;
    cout << (n - result) % n;

    return 0;
}