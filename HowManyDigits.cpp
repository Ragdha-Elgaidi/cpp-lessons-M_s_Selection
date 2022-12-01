/*
Read and integer and print if it has
1, 2, 3, 4 or 5+ digits
For example if input is 556
○ Then print: 3 digits

*/

#include<iostream>
using namespace std;

int main() 
{
	int Number;
	
	cin >> Number;

	if (Number < 10)
		cout << "1 digit\n";
	else if (Number < 100)
		cout << "2 digit\n";
	else if (Number < 1000)
		cout << "3 digits\n";
	else if (Number < 10000)
		cout << "4 digits\n";
	else
		cout << "5 digits or More\n";

	return 0;
}


