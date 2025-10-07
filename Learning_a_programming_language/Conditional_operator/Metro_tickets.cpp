#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int result[3];
    result[0] = 0; result[1] = 0; result[2] = 0;

    for(int i = 0; n > 0; i++){
        if(n >= 35){
            n -= 60;
            result[2]++;
        }else if(n >= 9){
            n -= 10;
            result[1]++;
        }else{
            n--;
            result[0]++;
        }
    }
    cout << result[0] << " " << result[1] << " " << result[2];
    return 0;
}