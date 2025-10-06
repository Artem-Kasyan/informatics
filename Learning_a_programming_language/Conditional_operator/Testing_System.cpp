#include <iostream>
using namespace std;

int main() {
    int system_answer, student_answer;
    cin >> system_answer >> student_answer;
    
    if (system_answer == 1) {
        if (student_answer == 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        if (student_answer != 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
    
    return 0;
}