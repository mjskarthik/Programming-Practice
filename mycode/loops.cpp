/*This is a C++ program in which we use a do-while loop that 
repeatedly prompts the user to enter a number until the user
enters a number that is greater than or equal to x.*/ 


#include <iostream>
using namespace std;
int main()
{
	int x;
	int y;
	x=8;
	do {
		cin >> y;
		}while(y<x);
		cout << y << endl;
		return 0;
}
