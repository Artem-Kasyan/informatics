#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;
    bool flag = false;

    while(!flag && c >= 3){
        if(c % 5 == 0 || c % 3 == 0){
            flag = true;
            cout << "YES";
        }
        c -= 3;
    }
    if(flag == false){
        cout << "NO"; 
    }

    
    return 0;
}