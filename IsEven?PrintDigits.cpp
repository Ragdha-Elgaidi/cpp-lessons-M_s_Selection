/*
Read an integer N, then do the following
○ If the number is even: print last digit of it
○ If the number is odd: do following:
■ If number < 1000, print last 2 digits
■ If number > 1000 and number < 1000000, print last 4 digits
■ Otherwise, print its negative value
*/
#include<iostream>
using namespace std;

int main() 
{
	int N;

	cin >> N;
	if (N % 2 == 0)
		cout << N % 10 << endl;
	else
	{
		if (N < 1000)
			cout << N % 100 << endl;
		else if (N > 1000 && N < 1000000)
			cout << N % 10000 << endl;
		else
			cout << -N << endl;;
	}
	return 0;
}
