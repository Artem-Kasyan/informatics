#include <iostream>

using namespace std;


int main(){
    int a; cin >> a;
    int b;
    int c;
    int l;
    b = a % 10;
    c = a / 10;
    c = c % 10;
    l = a / 100;
    cout << l + c + b;

    return 0;
}