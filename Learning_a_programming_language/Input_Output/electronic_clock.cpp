#include <iostream>

using namespace std;


int main(){
    int a; cin >> a;
    int count = 0;
    while(a >= 60){
        a = a - 60;
        count = count + 1;
        if(count >= 24){
            count = 0; 
        }
    }
    cout << count << " " << a;

    return 0;
}