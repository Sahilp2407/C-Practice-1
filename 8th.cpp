#include <iostream>
using namespace std;

int main() {
    int number=21;
    if (number >= 0) { 
        if (number % 2 == 0) {
            cout << number << " is even." << endl;
        } else {
            cout << number << " is odd." << endl;
        }
    } else { 
        if (number % 2 == 0) {
            cout << number << " is even." << endl;
        } else {
            cout << number << " is odd." << endl;
        }
    }

    return 0;
}