#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cout << "Enter the first two numbers: ";
    cin >> A >> B;

    C = 21 - A - B;

    if (C >= 1 && C <= 10) {
        cout << "The third number should be: " << C << endl;
    } else {
        cout << "King cannot win the game, no matter what the third number is." << endl;
    }

    return 0;
}