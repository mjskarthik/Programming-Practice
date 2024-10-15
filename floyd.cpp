#include <iostream>
using namespace std;

void printfloydstriangle(int rows){
    int number = 1;
    for (int i=1;i<=rows;++i){
        for (int j=1; j<=i; ++j){
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}

int main (){
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    cout << "Floyd's Triangle: "<< endl;
    printfloydstriangle(numRows);

    return 0;
}