/*
 Read 10 integers, find which of them has the biggest value and print it.
*/
#include<iostream>
using namespace std;

int main() {
	int result, num;

	cin >> result;	// First number

	// Read 9 times and maximize
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;
	cin >> num;	if (result < num)	result = num;

	cout << result;

	return 0;
}
