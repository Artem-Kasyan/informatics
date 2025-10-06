#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int first; cin >> first;

    if(first % 4 == 0 && first % 100 != 0 || first % 400 == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}