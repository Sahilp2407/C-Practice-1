// simple interest program
#include <iostream>
using namespace std;
int main() {
    float principal = 1000; 
    float rate = 4;        
    float time = 8;        
    float simpleInterest = (principal * rate * time) / 100;
    cout << "Principal = " << principal << endl;
    cout << "Rate = " << rate << "%" << endl;
    cout << "Time = " << time << " years" << endl;
    cout << "Simple Interest = " << simpleInterest << endl;
    return 0;
}