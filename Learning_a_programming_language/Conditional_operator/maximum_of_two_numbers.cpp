#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int first; cin >> first;
    int second; cin >> second;

    if(first > second){
        cout << first;
    }else{
        cout << second;
    }

    return 0;
}