#include <iostream>
using namespace std;

int main() {
    int mass[3];
    for(int i = 0; i < 3; i++){
        cin >> mass[i];
    }
    int result = 0;
    if(mass[1] % 2 == 0 || mass[2] % 2 == 0 || mass[0] % 2 == 0){
        result++;
    }
    if(mass[1] % 2 != 0 || mass[2] % 2 != 0 || mass[0] % 2 != 0){
        result++;
    }
    if(result >= 2){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}