#include <iostream>
using namespace std;
int main (){
    int a,b, temp;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;
    cout << "Before Swapping: " << endl;
    cout << "a = " << a << ", " << "b = " << b << endl;

    cout << "After Swapping: " << endl;
    // This is one way of swapping numbers without using temp variable
    swap(a,b); 
    // temp = a;
    // a = b;
    // b = temp;
    cout << "a = " << a << ", " << "b = " << b << endl;
}