#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) ){
        cout << "Palindrome.\n";
    }
    else{
        cout << "NOT a Palindrome.\n";
    }

} 