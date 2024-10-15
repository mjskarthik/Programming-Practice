#include <iostream>
using namespace std;
int main (){
    int area,perimeter,l,b;
    cout << "Enter the sides of the rectangle in cm: " << endl;
    cin >> l;
    cin >> b;
    cout << "\nLength : " << l; 
    cout << "\nBreadth: " << b;
    area= l*b;
    perimeter = 2*(l + b);
    cout << "\nArea of the rectangle is : " << area << endl;
    cout << "Perimeter of the rectangle is : " << perimeter << endl;
    return 0;
    }