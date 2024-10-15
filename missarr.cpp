#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int missingNumber(int n, vector<int>& arr)
{

    // Create hash array of size n+1
    vector<int> hash(n + 1, 0);

    // Store frequencies of elements
    for (int i = 0; i < n - 1; i++) {
        hash[arr[i]]++;
    }

    // Find the missing number
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
    return -1;
}
int main (){
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Elements of the array: [";
    for (int i=0; i<n; i++){
        cout << arr[i];
        if (i<n-1){
            cout << ", ";
        }
    }
    cout << "]" << endl;
    cout << "Missing Number : " << missingNumber(n, arr);
    
}