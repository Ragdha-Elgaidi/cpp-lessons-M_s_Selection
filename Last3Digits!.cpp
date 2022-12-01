/*
Read an integer and do the following:
○ If number < 10000, say this is a small number
○ Otherwise Sum the last 3 digits of the number
■ If the sum is odd, say this is a great number
■ Otherwise, If sum is even:
● If any digit of the last 3 is odd, say this is a good number
● Otherwise, say this is a bad number
*/
#include<iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;

	if (n < 10000)
		cout << "this is a small number\n";
	else
	{
		int digit1 = n % 10;
		n = n / 10;
		int digit2 = n % 10;
		n = n / 10;
		int digit3 = n % 10;	// old value of n gone

		int sum = digit1 + digit2 + digit3;

		if ((sum % 2) != 0)	// odd
			cout << "this is a great number\n";
		else
		{
			bool is_digit1_odd = (digit1 % 2 == 1);
			bool is_digit2_odd = (digit2 % 2 == 1);
			bool is_digit3_odd = (digit3 % 2 == 1);

			if (is_digit1_odd || is_digit2_odd || is_digit3_odd)
				cout << "this is a good number\n";
			else
				cout << "this is a bad number\n";
		}
	}
	return 0;
}
