/*
Given 3 integers, you have to find the biggest one of them which is < 100.
 Print -1 if no such number
*/
#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int res = -1;

	// The next 3 if conditions: let's get the valid max
	if (a < 100 && a > res)
		res = a;

	if (b < 100 && b > res)
		res = b;

	if (c < 100 && c > res)
		res = c;

	cout << res << "\n";

	return 0;
}
