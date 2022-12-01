/*
Given two numbers and a sign between them which will indicate if the user
want the addition, subtraction, division or multiplication of these two
numbers, find the value of the answer
*/
#include<iostream>
using namespace std;

int main() 
{
	// Good choice for a number here is double
	double num1, num2;
	char operation;

	cin >> num1 >> operation >> num2;

	if (operation == '+')
		cout << num1 + num2 << "\n";

	else if (operation == '-')
		cout << num1 - num2 << "\n";

	else if (operation == '*')
		cout << num1 * num2 << "\n";

	else
		cout << num1 / num2 << "\n";

	return 0;
}

