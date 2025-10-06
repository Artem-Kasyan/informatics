#include <iostream>
using namespace std;

int main() {
    int a; cin >> a;
    int b; cin >> b;
    int c; cin >> c;

    if(a > b){
        if(a > c){
            cout << a;
        }
        else{
            cout << c;
        }
    }else{
        if(b > c){
            cout << b;
        }
        else{
            cout << c;
        }
    }

    return 0;
}