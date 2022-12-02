/*
Read an integer N (2 <= N <= 10)
● Then read N integers, find which of them has the biggest value and print it.
*/
#include<iostream>
using namespace std;

int main() {
	int cnt, result, num;

	cin >> cnt;
	
	cin >> result;	// First number
	cnt -= 1;

	// Read  times and maximize
	if (cnt > 0)
	{
		cnt -= 1;
	    cin >> num;
	    if (result < num)
		   result = num;
	}
	if (cnt > 0)
	{
		cnt -= 1;
		cin >> num;
		if (result < num)
			result = num;
	}
	if (cnt > 0)
	{
		cnt -= 1;
		cin >> num;
		if (result < num)
			result = num;
	}
	if (cnt > 0)
	{
		cnt -= 1;
		cin >> num;
		if (result < num)
			result = num;
	}
	if (cnt > 0)
	{
		cnt -= 1;
		cin >> num;
		if (result < num)
			result = num;
	}
	if (cnt > 0)
	{
		cnt -= 1;
		cin >> num;
		if (result < num)
			result = num;
	}
	if (cnt > 0)
	{
		cnt -= 1;
		cin >> num;
		if (result < num)
			result = num;
	}
	if (cnt > 0)
	{
		cnt -= 1;
		cin >> num;
		if (result < num)
			result = num;
	}
	if (cnt > 0)
	{
		cnt -= 1;
		cin >> num;
		if (result < num)
			result = num;
	}
	
	cout << result;

	return 0;
}
