#include <iostream>
using namespace std;

int main() {
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;

    if(x1 > 0 && x > 0 && y1 > 0 && y > 0 ||
       x1 < 0 && x < 0 && y1 < 0 && y < 0 ||
       x1 > 0 && x > 0 && y1 < 0 && y < 0 ||
       x1 < 0 && x < 0 && y1 > 0 && y > 0){

        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}