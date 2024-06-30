// First cpp file
//First calc
#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    string c;
    cout << "Enter 1st Digit: ";
    cin >> a;
    cout << "Enter 2nd Digit: ";
    cin >> b;
    cout << "Enter Operator: ";
    cin >> c;
    if (c == "+"){
        cout << a+b;
    }
    if (c == "-"){
        cout << a-b;
    }
    if (c == "*"){
        cout << a*b;
    }
    if (c == "/"){
        cout << a/b;
    }
    return 0;
}