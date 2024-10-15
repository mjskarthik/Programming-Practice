#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n;
    cout << "Size of the Array: " << endl;
    cin >> n;
    vector <int> a(n);

    cout << "Elements of the Array: " << endl;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << "The Elements are: [";
    for (int i=0; i<n; i++){
        cout << a[i];
        if (i < n-1){
            cout << ", ";
        }
    }
    cout << "]" << endl;
    return 0;
}