/*
Read 2 integers A, B and print based on following cases:
○ if both are odd print their product A*B
○ if both are even print their division A/B (assume B != 0)
○ if the first is odd and the second is even then find their sum A+B
○ if the first is even and the second is odd then find their subtraction A-B
*/

#include<iostream>
using namespace std;

	
int main()
	{
		int a, b;
		cin >> a >> b;

		bool is_a_even = (a % 2 == 0);
		bool is_b_even = (b % 2 == 0);

		if (!is_a_even && !is_b_even)
			cout << a * b << "\n";
		else if (is_a_even && is_b_even)
			cout << a / b << "\n";
		else if (!is_a_even && is_b_even)
			cout << a + b << "\n";
		else
			cout << a - b << "\n";

		return 0;
	}

