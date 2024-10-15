#include <iostream>
using namespace std;
int main (){
    string name;
    cout << "Enter your name : " << endl;
    cin >> name;
    cout << "Person 1: " << endl;
    cout << name << " is a bad boy." << endl;
    cout << "Person 2: " << endl;
    cout << "I don't think "<< name << " is a bad boy" << endl;
    cout << name << " is a very intelligent boy." << endl;
    cout << "Both Persons: "<< endl;
    cout << "Heil " << name << " !"<< endl;
    return 0;
}