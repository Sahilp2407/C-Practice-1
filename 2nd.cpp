// Write a program to swap two number without using third variable
#include <iostream>
using namespace std;

int main(){
    int a, b;
    a = 10;
    b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << endl;
    cout << b << endl;

    return 0;
}