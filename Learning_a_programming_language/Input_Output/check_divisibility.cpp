#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int mass[2];
    cin >> mass[0];
    cin >> mass[1];

    sort(mass, mass + 2);

    cout << mass[1] % mass[0] + 1;

    return 0;
}