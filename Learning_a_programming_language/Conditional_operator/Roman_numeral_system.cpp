#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;

    string roman = "";

    if (x == 100) {
        roman = "C";
        x = 0;
    }

    if (x >= 90) { roman += "XC"; x -= 90; }
    else if (x >= 50) { roman += "L"; x -= 50; }
    else if (x >= 40) { roman += "XL"; x -= 40; }

    while (x >= 10) {
        roman += "X";
        x -= 10;
    }

    if (x == 9) { roman += "IX"; }
    else if (x >= 5) {
        roman += "V";
        x -= 5;
        while (x > 0) {
            roman += "I";
            x--;
        }
    }
    else if (x == 4) { roman += "IV"; }
    else {
        while (x > 0) {
            roman += "I";
            x--;
        }
    }

    cout << roman << endl;
    return 0;
}