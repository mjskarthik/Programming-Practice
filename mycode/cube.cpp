// Cube of a number using Functions:

#include <iostream>
using namespace std;

int cube (int n){
	return n*n*n;
} 
int main()
{
	int x;
    cout << "Enter a number: " << endl;
	cin >> x;
	int result;
	result = cube(x);
	cout << "Cube of "<< x << " is " << result << endl;

	return 0;
}
