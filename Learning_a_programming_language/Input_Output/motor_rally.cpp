#include <iostream>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;
    
    int days = (t + v - 1) / v;
    cout << days;

    return 0;
}