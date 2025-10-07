#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int result = 0;
    if(x == y){
        result++;
    }
    if(x == z){
        result++;
    }
    if(z == y){
        result++;
    }
    if(result == 1){
        result++;
    }
    cout << result;

    return 0;
}