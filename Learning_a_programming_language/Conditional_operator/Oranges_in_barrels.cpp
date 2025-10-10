#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    int m = n;

    if(m > 100){
        m = m % 100;
    }

    if(m > 20 || m < 10){
        if(m % 10 == 1){
            cout << n << " " << "bochka";
        }
        if(m % 10 > 1 && m % 10 < 5){
            cout << n << " " << "bochki";
        }
        if(m % 10 >= 5 || m % 10 == 0){
            cout << n << " " << "bochek";
        }
    }
    if(m >= 10 && m <= 20){
        cout << n << " " << "bochek";
    }
    
    return 0;
}