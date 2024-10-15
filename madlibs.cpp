#include <iostream>
using namespace std;
int main()
{
	string color, pluralNoun;
	cout <<"Enter a color: ";
	getline(cin, color);
	cout <<"Enter a plural noun: ";
	getline(cin, pluralNoun);
	cout <<"Roses are "<<color<<endl;
	cout <<pluralNoun<< " are blue"<<endl;
	cout <<"There is definitely something wrong with you";
	return 0;
	
}
