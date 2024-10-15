#include <algorithm>
#include <iostream>
using namespace std;

// Function to check if two strings are anagrams
bool areAnagrams(string s1, string s2)
{
    // Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Compare sorted strings
    return s1 == s2;
}

int main()
{
    string str1;
    string str2;
    cout << "Enter first string:" << endl;
    cin >> str1;
    cout << "Enter second string:" << endl;
    cin >> str2;

    if (areAnagrams(str1, str2)) {
        cout << "Given strings are ANAGRAMS" << endl;
    }
    else {
        cout << "Given strings are NOT ANAGRAMS" << endl;
    }
    return 0;
}