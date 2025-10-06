#include <iostream>
using namespace std;

int main() {
    int lol; cin >> lol;
    int so; cin >> so;

    if(lol > so){
        cout << 1;
    }else if(lol < so){
        cout << 2;
    }else{
        cout << 0;
    }

    return 0;
}