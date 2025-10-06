#include <iostream>
using namespace std;

int main() {
    int num; cin >> num;
    int a; a = num / 1000;
    int b; b = num % 1000; b = b / 100;
    int c; c = num % 100; c = c / 10;
    int f; f = num % 10;
    cout << (a==f)*(b==c);

    return 0;
}