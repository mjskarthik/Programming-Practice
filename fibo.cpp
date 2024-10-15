#include <iostream>
using namespace std;

int main() {
    int temp1, temp2, curr, n;
    temp1 = 0; // First number of Fibonacci series
    temp2 = 1; // Second number of Fibonacci series
    
    cout << "Enter number of elements: " << endl;
    cin >> n;
    
    if (n < 1) {
        cout << "Invalid Number " << endl;
        return 0;
    }

    if (n == 1) {
        // If the user wants only 1 element, print the first element
        cout << temp1 << endl;
        return 0;
    }

    cout << temp1 << " " << temp2 << " "; // Print first two numbers

    for (int i = 3; i <= n; i++) {
        curr = temp1 + temp2; // Fibonacci current number
        temp1 = temp2;        // Update temp1
        temp2 = curr;         // Update temp2
        cout << curr << " ";  // Print current number
    }

    cout << endl;
    return 0;
}
