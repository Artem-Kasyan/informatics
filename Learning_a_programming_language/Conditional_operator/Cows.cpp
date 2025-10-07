#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    if(n > 20 || n < 10){
        if(n % 10 == 1){
            cout << n << " " << "korova";
        }
        if(n % 10 > 1 && n % 10 < 5){
            cout << n << " " << "korovy";
        }
        if(n % 10 >= 5 || n % 10 == 0){
            cout << n << " " << "korov";
        }
    }
    if(n >= 10 && n <= 20){
        cout << n << " " << "korov";
    }
    
    return 0;
}