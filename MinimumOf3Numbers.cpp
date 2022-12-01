//WayOne
#include <iostream>
using namespace std;
int main()
{
	int num1, num2,num3;

	cin >> num1 >> num2>>num3;

	if (num1 < num2 && num1 < num3)
		cout << num1 << endl;
	else if (num2 < num1 && num2 < num3)
		cout << num2 << endl;
	else if (num3 < num1 && num3 < num2)
		cout << num3 << endl;


	return 0;
}
//WayTwo
#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	if (num1 < num2) {
		// Then either num1 or num3 is the answer
		if (num1 < num3)
			cout << num1 << "\n";
		else
			cout << num3 << "\n";
	} else	// Then either num2 or num3 is the answer
	{
		if (num2 < num3)
			cout << num2 << "\n";
		else
			cout << num3 << "\n";
	}

	return 0;
}

//WayThree
#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	int answer = num1;

	if (answer > num2)
		answer = num2;

	if (answer > num3)
		answer = num3;

	cout << answer << "\n";

	return 0;
}

