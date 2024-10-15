#include <iostream>
using namespace std;
int main (){
    int days, day, weeks, years, rem;
    cout << "Enter days: " << endl;
    cin >> day;
    years = day/365;
    rem = day % 365;
    weeks = rem / 7;
    days = rem % 7;
    cout <<  "Years : " << years << endl;
    cout <<  "Weeks : " << weeks << endl;
    cout <<  "Days : " << days << endl;
    return 0;
}