#include <algorithm>
#include <iostream>
using namespace std;
int main (){
    string str,rem,temp;
    cout << "Enter a string: " << endl;
    cin >> str;
    cout << "Before reversal: "<< str << endl;
    reverse(str.begin(),str.end());
    cout << "After reversal: " << str << endl;
    return 0;
}