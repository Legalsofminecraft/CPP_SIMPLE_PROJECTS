//INCLUDING <iostream> LIBRARY



#include <iostream>

using namespace std;



int main(){


    //DEFINING VARIABLES



    int a;

    int b;

    string c;
    
    
    //TAKING INPUTS FROM THE USER
    
    
    cout << "Enter 1st Digit: ";
    
    cin >> a;
    
    
    cout << "Enter 2nd Digit: ";
    
    cin >> b;
    
    
    cout << "Enter Operator: ";
    
    cin >> c;
    
    
    //APPLYING LOGICS AND RETURNING THE RESULTS TO THE USER
    
    
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
    
    
    //RETURN TO USED COMMAND MACHINE TO STOP READING THE CODE FROM NOW ON
    
    
    return 0;

}