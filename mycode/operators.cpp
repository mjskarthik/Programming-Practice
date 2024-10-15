#include <iostream>
using namespace std;
int main(){
    int a=5,b=3;
    //One way of doing an operation is :
    cout << (a+b) << endl;
    //or
    //This is another way of doing an operation :
    int sum = a+b;
    cout << sum << endl;
    //Similiarly
    //These are Arithmetic Operators in C++
    cout << "Arithmetic Operators" << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    cout << a%b << endl;
    //These are Relational Operators in C++ :
    cout << "Relational Operators" << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << "Logical Operators" << endl;
    bool isRaining = true, isCold = false;
    cout << (isRaining && isCold) << endl; // Output: 0 (false)
    cout << (isRaining || isCold) << endl; // Output: 1 (true)
    cout << (!isRaining) << endl; // Output: 0 (false)

    return 0;
}