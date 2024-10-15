//This is the right way of declaring an array in C++
#include <iostream>
#include <cmath>  // For abs() function
#include <vector> // For using std::vector
using namespace std;

int main() {
    int n;


    cout << "Enter the size of the array: ";
    cin >> n;
 
    vector<int> arr(n);  // Create a vector of size n

    
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Absolute Difference between the numbers in the given array: " << endl;
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(arr[i] - arr[i + 1]);
        cout << "|" << arr[i] << " - " << arr[i + 1] << "| = " << diff << endl;
    }

    return 0;
}

//This is the wrong way of declaring an array in c++

#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    int arr[n];
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
    }

    cout << "Absolute Difference between the numbers in the given array: " << endl;
    for (int i=0; i<n-1;i++){
        int diff = abs(arr[i] - arr[i+1]);
        cout << "|" << arr[i] << " - " << arr[i+1] << "|" << endl; 
    }
    return 0;
}