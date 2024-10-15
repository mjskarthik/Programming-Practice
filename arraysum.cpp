#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n,sum=0;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: "<< endl;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << "Sum = "<< sum <<  endl;
}