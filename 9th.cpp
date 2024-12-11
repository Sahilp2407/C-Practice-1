// Create a programm in C++ to calculate and display student grades according to the table given below
// 100 - 90 = A+
// 90 - 80 = A
// 80 - 70 = B+
// 70 - 60 = B
// 60 - 50 = C
// 50 - 40 = D
// 40 - 30 = E
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the student's marks: ";
    cin >> a;
    if (a >= 90 && a <= 100) {
        cout << "A+" << endl;
    } 
    else if (a >= 80 && a < 90) {
        cout << "A" << endl;
    } 
    else if (a >= 70 && a < 80) {
        cout << "B+" << endl;
    } 
    else if (a >= 60 && a < 70) {
        cout << "B" << endl;
    } 
    else if (a >= 50 && a < 60) {
        cout << "C" << endl;
    } 
    else if (a >= 40 && a < 50) {
        cout << "D" << endl;
    } 
    else if (a >= 30 && a < 40) {
        cout << "E" << endl;
    } 
    else {
        cout << "Failed" << endl;
    }
    return 0;
}
