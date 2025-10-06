#include <iostream>

using namespace std;

int main(){
    int a; cin >> a; 
    int b; cin >> b;
    int c; cin >> c;
    int rubl = 0, koop = 0, limits = 0;
    rubl = a * c;
    koop = b * c;
    limits = koop / 100;
    koop = koop % 100;
    rubl += limits;
    cout << rubl << " " << koop;

    return 0;
}