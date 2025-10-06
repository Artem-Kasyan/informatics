#include <iostream>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;
    
    int s = v * t;
    int position = (s % 109 + 109) % 109;
    
    cout << position << endl;
    
    return 0;
}