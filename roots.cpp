#include <iostream>
#include <cmath>
using namespace std;

void calculate_roots(double number, double &square_root, double cube_root){
    square_root = sqrt(number);
    cube_root = pow(number, 1.0/3.0);
}
int main (){
    double num, square_root, cube_root;
    cout << "Enter a number: ";
    cin >> num;
    calculate_roots(num, square_root, cube_root);
    cout << "Square Root of "<< num << " = "<< square_root << endl;
    cout << "Cube Root of "<< num << " = "<< cube_root << endl;
    return 0;
}