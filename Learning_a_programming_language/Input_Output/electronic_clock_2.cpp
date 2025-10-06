#include <iostream>

using namespace std;

int main(){
    int a; cin >> a; 
    int minuts = 0, hours = 0;
    while(a >= 60){
        a -= 60;
        minuts++;

        if(minuts >= 60){
            minuts -= 60;
            hours++;
        }
        if(hours == 24){
            hours = 0;
        }
    }
    cout << hours << ":";
    if (minuts < 10) {
        cout << "0" << minuts << ":";
    } else {
        cout << minuts << ":";
    }
    if (a < 10) {
        cout << "0" << a;
    } else {
        cout << a;
    }
    
    return 0;
    
}