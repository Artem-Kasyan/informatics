#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, f;
    cin >> a >> b >> c;

    int mass[3] = {a, b, c};
    sort(mass, mass + 3);

    a = mass[0]; b = mass[1]; c = mass[2];

    cout << a << " " << b << " " << c;
    
    return 0;
}