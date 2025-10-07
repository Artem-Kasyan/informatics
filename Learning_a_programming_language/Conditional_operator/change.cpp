#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int result_r, result_k;

    result_r = c - a;
    result_k = d - b;

    if (result_k < 0){
        result_k += 100;
        result_r--;
    }
    
    cout << result_r << " " << result_k;
    return 0;
}