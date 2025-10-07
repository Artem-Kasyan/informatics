#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double dis = b*b - 4 * a * c;
    if(a == 0){
        return 0;
    }
    double x1, x2 = 0;
    if(dis > 0){
        x1 = (-b + sqrt(dis)) / (2 * a);
        x2 = (-b - sqrt(dis)) / (2 * a);
        cout << x1 << " " << x2;
    }else if(dis == 0){
        x1 = -b / (2 * a);
        cout << x1;
    }

    return 0;
}