#include <iostream>
using namespace std ;
int main (){
    int a,b;
    cout << "Enter a number between 1 and 9:" << endl;
    cin >> a;
    if (a>=1){
    switch (a){
        case 1:
        cout << "one";
        break;
        case 2:
        cout << "two";
        break;
        case 3:
        cout << "three";
        break;
        case 4:
        cout << "four";
        break;
        case 5:
        cout << "five";
        break;
        case 6:
        cout << "six";
        break;
        case 7:
        cout << "seven";
        break;
        case 8:
        cout << "eight";
        break;
        case 9:
        cout << "nine";
        break;
        default:
        cout << "Greater than 9" << endl;
    }
    }
    else{
        cout << "Enter a number greater than 0" << endl;
    }
    return 0;
    }