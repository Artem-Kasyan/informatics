#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0 ){
        double size[3] = {a, b, c};

        sort(size, size + 3);

        a = size[0];
        b = size[1];
        c = size[2];

        if(pow(a, 2) + pow(b, 2) == pow(c, 2)){
            cout << "right";
        }
        if(pow(a, 2) + pow(b, 2) < pow(c, 2)){
            cout << "obtuse";
        }
        if(pow(a, 2) + pow(b, 2) > pow(c, 2)){
            cout << "acute";
        }
    }else{
        cout << "impossible";
    }
    return 0;
}