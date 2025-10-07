#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int result[5];
    result[0] = 0; result[1] = 0; result[2] = 0; result[3] = 0; result[4] = 0;

    for(int i = 0; n > 0; i++){
        if(n > 35){
            n -= 60;
            result[4]++;
        }else if(n >= 18){
            n -= 20;
            result[3]++;
        }else if(n >= 9){
            n -= 10;
            result[2]++;
        }else if(n >= 5){
            n -= 5;
            result[1]++;
        }else if(n > 0){
            n--;
            result[0]++;
        }
    }
    cout << result[0] << " " << result[1] << " " << result[2] << " " << result[3] << " " << result[4];
    return 0;
}