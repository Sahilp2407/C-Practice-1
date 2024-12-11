#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age < 13) {
        cout << "You are a child.";
    } else if(age >= 13 && age <= 18) {
        cout << "You are growing.";
    } else {
        cout << "You are an adult.";
    }

    return 0;
}