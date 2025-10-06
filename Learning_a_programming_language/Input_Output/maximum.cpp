#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int max = (a > b) * a + (a <= b) * b;
    
    cout << max << endl;
    
    return 0;
}