#include <iostream>

using namespace std;

int main(){
    int a; cin >> a; 
    int b; cin >> b;
    int c;
    c = a;
    a = b;
    b = c;
    cout << a << " " << b;

    return 0;
}